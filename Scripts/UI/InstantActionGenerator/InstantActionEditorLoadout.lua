local base = _G

module('InstantActionEditorLoadout')

local require				= base.require
local math					= base.math
local pairs					= base.pairs
local ipairs				= base.ipairs
local table					= base.table
local tonumber				= base.tonumber
local tostring				= base.tostring
local print					= base.print
local string				= base.string
local type 					= base.type

local DialogLoader			= require("DialogLoader")
local i18n					= require('i18n')
local Gui					= require('dxgui')
local loadoutUtils			= require('me_loadoututils')
local loadLiveries 			= require('loadLiveries')
local DB					= require('me_db_api')
local DCS					= require('DCS')
local AmunitionParameters 	= require('me_AmunitionParameters')
local TableUtils			= require('TableUtils')
local Menu					= require('Menu')
local MenuItem				= require('MenuItem')
local SkinUtils				= require('SkinUtils')
local net					= require('net')
local keys					= require('mul_keys')
local textutil          	= require('textutil')
local MsgWindow				= require('MsgWindow')
local U    					= require('me_utilities')
local OptionsData			= base.safe_require('Options.Data')
local MissionGenerator		= require('MissionGenerator')

i18n.setup(_M)

local numbersByColumnIndex_	= {}
local menus_				= {}
local columnDNameByNumbers 	= {}
local tblContainers			= {}

local currentUnitType = nil
local currentUnit = nil
local currentDataReference = nil
local currentCountry = nil
local currentMissionType = nil
local currentGroupTask = nil
local oldDataReference = nil

local cdata = 
{
	title				= _('SETUP LOADOUT'),
	chaff 				= _('CHAFF'),
	flare 				= _('FLARE'),
	fuel 				= _('FUEL'),
	toWeight 			= _('TO weight, %'),
	toWeightMax 		= _('TO weight max'),
	gunAmmoType 		= _('AMMO_TYPE'),
	gunAmmo 			= _('GUN AMMO'),
	empty 				= _('Empty'),
	random				= _('Random'),
	cancel 				= _("CANCEL"),
	totalWeight 		= _("TOTAL WEIGHT"),
	maximumWeight 		= _("MAXIMUM WEIGHT"),
	selectLoadout		= _("SELECT LOADOUT:"),
	kg					= _("KG"),
	available			= _('(avail: %5d) : %s'),
	not_available_weapon = _('NOT AVAILABLE : %s'),
	clear				= _('REMOVE PAYLOAD'),
	selectUnit			= _('UNIT TYPE'),
	selectLivery		= _('SELECT LIVERY'),
	maximumWeight 		= _("MAXIMUM WEIGHT"),
	info				= _('Info'),
	ok					= _('OK'),
}

local function updateUnitSystem()
	stcToWeightCurrentValueUnit:setUnitSystem(OptionsData.getUnits())
	stcToWeightMaxValueUnit:setUnitSystem(OptionsData.getUnits())
end

local function get_max_chaff()
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.chaff.chargeSz ~= nil and 
		   currentUnit.passivCounterm.chaff.chargeSz > 0 then
		   return currentUnit.passivCounterm.SingleChargeTotal / currentUnit.passivCounterm.chaff.chargeSz
		end
	end
	
	return 0
end

local function get_max_flare()
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.flare.chargeSz ~= nil and 
		   currentUnit.passivCounterm.flare.chargeSz > 0 then
		   return currentUnit.passivCounterm.SingleChargeTotal / currentUnit.passivCounterm.flare.chargeSz
		end
	end
	
	return 0
end

local function check_pylon_not_empty(CLSID)
	return CLSID ~= nil and 
		   CLSID ~= ""
end

local function pass_ME_restricted(station,CLSID)
	local p = currentDataReference.pylons[station] 
	if not p then
		return true
	end
	local restricted = p.restricted
	if not restricted then 
		return true
	end
	for i,o in ipairs(restricted) do 
		if o == CLSID then 
			return false
		end
	end
	return true
end

local function loadout_is_authorized_for_station(station,CLSID)
	if not pass_ME_restricted(station,CLSID) then 
		return false
	end
	local pylon = currentUnit.Pylons[station]
	for k,launcher in pairs(pylon.Launchers) do
		if launcher.CLSID == CLSID then 
			return true
		end
	end
	return false
end

local function updatePylonCell(menuItem)
	for columIndex, pylonNumber in pairs(numbersByColumnIndex_) do
		local pylon		= currentDataReference.pylons[pylonNumber] or {}
		local rowIndex	= 0
		local container

		if check_pylon_not_empty(pylon.CLSID) then
			container = loadoutUtils.createPylonCell(pylon.CLSID, columIndex, rowIndex, gridPayloads, pylon.count
						, cdata.missionPayload, columnDNameByNumbers[pylonNumber], pylonNumber, callbackSettingsOk, callbackAmunitionParameters, pylon.settings)
			tblContainers[pylonNumber] = container	
		end
		
		gridPayloads:setCell(columIndex, rowIndex, container)
		onUpdateWeight()
	end
end

local function createPylonMenu(pylonNumber)
	local pylon = currentUnit.Pylons[pylonNumber]
	if not pylon then
		return
	end
	
	local launcherCategories = {}
	local clean = {}
	local categoryNames = {}
	
	local forcedPylons
	
	for i, launcher in pairs(pylon.Launchers) do
		local CLSID_		= launcher.CLSID
		local category		= loadoutUtils.getLauncherCategory(CLSID_)
		local categoryName	= loadoutUtils.getLauncherNames(CLSID_)
		
		if category ~= nil then				
			if categoryName == "CLEAN" then
				clean[category] = CLSID_
			else
				if forcedPylons == nil or forcedPylons[pylonNumber] == nil then 
					local pass_filter = pass_ME_restricted(pylonNumber,CLSID_)
					if pass_filter then						
						if launcherCategories[category] == nil then
							launcherCategories[category] = {}
							table.insert(categoryNames, category)
						end
						
						table.insert(launcherCategories[category], {
							CLSID	= CLSID_, 
							name	= base.get_weapon_display_name_by_clsid(CLSID_)
						})					
					end
				end
			end
		end
	end

	table.sort(categoryNames)
	
	local menu = Menu.new()
	
	menu:setSurfaceId(window:getSurfaceId())
	
	function menu:onChange(item)
		menuOnChange(item)
	end
	
	-- для каждой категории создаем подменю
	for i, categoryName in pairs(categoryNames) do
		local launchers = launcherCategories[categoryName]
		
		table.sort(launchers, function(op1, op2) return op1.name < op2.name end)
		
		local submenu = Menu.new()
		
		function submenu:onChange(item)
			submenuOnChange(item)
		end
		
		for i, launcher in ipairs(launchers) do			
			local menuItem = MenuItem.new(launcher.name)
			local filename, blendColor = loadoutUtils.getLauncherImage(launcher.CLSID)
						
			if filename then		
				menuItem:setSkin(SkinUtils.setMenuItemPicture(filename, blendColor or '0x000000ff'))
			end
			
			menuItem.pylonNumber	= pylonNumber
			menuItem.launcher		= launcher
			submenu:insertItem(menuItem)
		end
		
		local menuSubItem = menu:newSubItem(categoryName)
		
		menuSubItem:setSubmenu(submenu)
	end
	
	menu:newSeparatorItem()
	
	local menuItem
	
	if forcedPylons == nil or forcedPylons[pylonNumber] == nil then 
		menuItem = menu:newItem(cdata.clear)	
		menuItem.pylonNumber = pylonNumber
		menuItem.is_remove = true
	end

	-- добавляем в меню элемент для удаления пилона
	for categoryName, launcherCLSID in pairs(clean) do
		menuItem				= menu:newItem(categoryName)
		menuItem.pylonNumber	= pylonNumber
		menuItem.launcherCLSID	= launcherCLSID
		menuItem.clean			= true			
	end
	
	return menu
end

local function getPylonMenu(create) 
	local id 	= currentUnitType ..'_'--..tostring(currentUnitMissionID)
	local menus = menus_[id]
	
	if not menus and create then
		menus = {}
		menus_[id] = menus
		
		for columIndex, pylonNumber in pairs(numbersByColumnIndex_) do
			menus[pylonNumber] = createPylonMenu(pylonNumber)
		end
	end
	return menus
end

local function onSliderUpdate(slider, txtStatic, thumbWidth)
	local xS, yS = slider:getPosition()
	local wS, hS = slider:getSize()
	local wTxt, hTxt = txtStatic:getSize()
	local xT, yT = slider:getThumbLocalPosition()
	txtStatic:setPosition(xS + xT + (thumbWidth-wTxt) / 2, yS-hTxt)
	txtStatic:setText(slider:getValue().."%")
end

function onButtonApply()
	show(false)
end

function onButtonCancel()
	TableUtils.recursiveCopyTable(currentDataReference, oldDataReference)	
	onButtonApply()
end

function updateWidgetsStates()
	local m_chaff = get_max_chaff()
	local m_flare = get_max_flare()

	local ChaffNoEdit = false
	local CMDS_Edit = true
	
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.ChaffNoEdit ~= nil then
			ChaffNoEdit = currentUnit.passivCounterm.ChaffNoEdit
		end

		if currentUnit.passivCounterm.CMDS_Edit ~= nil then
			CMDS_Edit = currentUnit.passivCounterm.CMDS_Edit
		end
	end

	local chaffVisible = m_chaff > 0 and not ChaffNoEdit
	local flareVisible = m_flare > 0

	txtChaff:setVisible(chaffVisible)
	txtChaffValue:setVisible(chaffVisible)
	sliderChaff:setVisible(chaffVisible)
	sliderChaff:setEnabled(CMDS_Edit)
	sliderChaff:setRange(0, chaffVisible and m_chaff or 100)

	txtFlare:setVisible(flareVisible)
	txtFlareValue:setVisible(flareVisible)
	sliderFlare:setVisible(flareVisible)
	sliderFlare:setEnabled(CMDS_Edit)
	sliderFlare:setRange(0, flareVisible and m_flare or 100)

	local chaffStep = 1
	local flareStep = 1
	if currentUnit.passivCounterm ~= nil then
		chaffStep = currentUnit.passivCounterm.chaff.increment or 1
		flareStep = currentUnit.passivCounterm.flare.increment or 1
		if flareStep < 1 then
		   flareStep = 1
		end
		if chaffStep < 1 then
		   chaffStep = 1
		end
	end
	
	sliderChaff:setStep(chaffStep)
	sliderFlare:setStep(flareStep)
	
	if chaffStep > 1 then
		sliderChaff:setPageStep(chaffStep)
	end
	if flareStep > 1 then
		sliderFlare:setPageStep(flareStep)
	end
end

function updateLiveryPresets()
	listBoxLivery:selectItem()
	listBoxLivery:clear()
	
	local selected
	if currentCountry == "" then
		selected = listBoxLivery:newItem(cdata.random)
	else
		local schemes
		if currentCountry == nil then
			local countries = MissionGenerator.getCountriesForLiveries(currentUnitType, currentMissionType, currentGroupTask)
			schemes = loadLiveries.loadSchemes(DB.liveryEntryPoint(currentUnitType or ""), countries)
		else
			schemes = loadLiveries.loadSchemes(DB.liveryEntryPoint(currentUnitType or ""), currentCountry)
		end
	
		for k, scheme in pairs(schemes) do
			local item = listBoxLivery:newItem(scheme.name)
			item.itemId = scheme.itemId

			if scheme.itemId == currentDataReference.livery_id then
				selected = item
			end
		end
		
		if listBoxLivery:getItemCount() == 0 then
			selected = listBoxLivery:newItem(cdata.empty)
		end	
	end

	if selected then
	   listBoxLivery:selectItem(selected)
	   selected = nil
	end
end

function updatePayloadPresets()
	listBoxPayloads:selectItem()
	listBoxPayloads:clear()
	
	if currentUnit then
		listBoxPayloads:setVisible(true)
		
		local selectedItem
		if currentMissionType == "" then
			selectedItem = listBoxPayloads:newItem(cdata.random)
		else
			selectedItem = listBoxPayloads:newItem(cdata.empty)
			local payloads = MissionGenerator.getUnitPayloads(currentUnitType or "", currentMissionType or "", currentGroupTask or "")
			--sort alpabetically	
			local tbl_ = {}
			for i,o in pairs(payloads) do
				tbl_[#tbl_ + 1] = o
			end
			table.sort(tbl_,function(o1,o2)
				return o1.name < o2.name
			end)
			------------------------------------
			for i,o in ipairs(tbl_) do
				if o.pylons and #o.pylons > 0 then
					local name = o.displayName or _(o.name)
					local comboItem = listBoxPayloads:newItem(name)
					comboItem.name = name
					comboItem.preset_link = o
				end
			end		
		end
		
		listBoxPayloads:selectItem(selectedItem)
	else
		listBoxPayloads:setVisible(false)
	end	
end

function updateGunAmmoType()
	listBoxGunAmmoType:selectItem()
	listBoxGunAmmoType:clear()
	
	local selectedItem
	
	local checkGuns = function(unit)
		if unit ~= nil and unit.Guns ~= nil and unit.Guns[1] ~= nil and unit.Guns[1].supply ~= nil then
			return true
		else
			return false
		end
	end
	
	sliderGunAmmo:setRange(0, 100)
	if checkGuns(currentUnit) == true then
		sliderGunAmmo:setValue(100)
		sliderGunAmmo:setVisible(true)
		txtGunAmmo:setVisible(true)
		txtGunAmmoValue:setVisible(true)
			
		if currentUnit.ammo_type then
			listBoxGunAmmoType:setVisible(true)
			txtGunAmmoType:setVisible(true)
			
			for i = 1, #currentUnit.ammo_type do
				local comboItem = listBoxGunAmmoType:newItem(currentUnit.ammo_type[i])
				
				comboItem.index = i
				
				if comboItem.index == currentDataReference.ammo_type then
					selectedItem = comboItem
				end
			end
		else		
			listBoxGunAmmoType:setVisible(false)
			txtGunAmmoType:setVisible(false)
		end
	else
		sliderGunAmmo:setValue(0)
		sliderGunAmmo:setVisible(false)
		txtGunAmmo:setVisible(false)
		txtGunAmmoValue:setVisible(false)
		
		listBoxGunAmmoType:setVisible(false)
		txtGunAmmoType:setVisible(false)
	end
	
	listBoxGunAmmoType:selectItem(selectedItem)
end

function updateAircraftPicture()
	imgAircraftPicture.file = currentUnit.Picture
	if AddPropAircraft and AddPropAircraft.modification then
		imgAircraftPicture.file = AddPropAircraft.modification..".png"	
	end
	
	imgAircraft:setSkin(imgAircraftSkin)
end

function initData()
	updateUnitSystem()
	
	currentUnit = DB.unit_by_type[currentUnitType]
	
	if currentUnitType then
		updateGrid()
		resetPylonsMenu()
		getPylonMenu(true)
	end
	
	updateAircraftPicture()
	updateLiveryPresets()
	updatePayloadPresets()
	updateGunAmmoType()
	updateWidgetsStates()
	onUpdateWeight()
	
	sliderGunAmmo:setValue(currentDataReference.gun)
	sliderGunAmmo.onChange()
	sliderFlare:setValue(currentDataReference.flare)
	sliderFlare.onChange()
	sliderChaff:setValue(currentDataReference.chaff)
	sliderChaff.onChange()
	sliderFuel:setValue(currentDataReference.fuel)
	sliderFuel.onChange()
end

function callbackAmunitionParameters(self)
	local pylon 		= currentDataReference.pylons[self.data.pylonNumber]
	local tmpSettings 	= pylon.settings or loadoutUtils.getLauncherSettingsDefaultValues(self.data.launcherCLSID)	

	local settingsDef 			= loadoutUtils.getLauncherSettings(self.data.launcherCLSID)
	local requiredPylonNumber 	= loadoutUtils.getRequiredPylonNumber(self.data.pylonNumber, currentUnitType, self.data.launcherCLSID)

	AmunitionParameters.show(true, tmpSettings, settingsDef, { pylon = self.data.pylonDisplayName, launcher = (loadoutUtils.getLauncherName(self.data.launcherCLSID) or ""),
				payload = self.data.namePayload or ""},
						self.data.namePayload, self.data.pylonNumber, callbackSettingsOk, self.data.container, requiredPylonNumber, callbackSettingsCopy)
end

function callbackSettingsOk(a_namePayload, a_pylonNumber, a_curSettings, a_container, a_tooltip, a_requiredPylonNumber, a_copyOption)
	local pylon = currentDataReference.pylons[a_pylonNumber]
	pylon.settings = {}
	TableUtils.recursiveCopyTable(pylon.settings, a_curSettings)	
	
	a_container:setTooltipText(a_container.baseTooltipText..a_tooltip)
	
	if a_requiredPylonNumber ~= nil then
		local pylon = currentDataReference.pylons[a_requiredPylonNumber]
		pylon.settings = {}
		TableUtils.recursiveCopyTable(pylon.settings, a_curSettings)	
		
		tblContainers[a_requiredPylonNumber]:setTooltipText(tblContainers[a_requiredPylonNumber].baseTooltipText..a_tooltip)
	end

	if a_copyOption then
		loadoutUtils.copySettingsToOtherPylons(a_pylonNumber, currentDataReference.pylons, a_copyOption, a_tooltip, tblContainers, a_requiredPylonNumber)
	end
end

function callbackSettingsCopy(a_typeCallback, a_namePayload, a_pylonNumber, a_value, a_idSetting)
	local curPylon = currentDataReference.pylons[a_pylonNumber]
	local weapon,count = base.get_weapon_and_count_from_launcher(curPylon.CLSID)
	
	for k, pylon in base.pairs(currentDataReference.pylons) do
		local weaponP,countP = base.get_weapon_and_count_from_launcher(pylon.CLSID)
		
		if TableUtils.compareTables(weaponP, weapon) then
			if pylon.settings == nil then
				pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(pylon.CLSID)
			end	
			pylon.settings[a_idSetting] = a_value
			
			local settingsDef = loadoutUtils.getLauncherSettings(pylon.CLSID)
			local tmpTooltip = ""
			if settingsDef then
				tmpTooltip = AmunitionParameters.getTooltipSettings(pylon.settings, settingsDef)
			end
			
			tblContainers[k]:setTooltipText(tblContainers[k].baseTooltipText..tmpTooltip)
		end			
	end
end

function menuOnChange(item)
	local pylon = currentDataReference.pylons[item.pylonNumber] or {}
	local OldlauncherCLSID = pylon.CLSID
	if item.is_remove then
		pylon.CLSID = ""
		pylon.count = 0
		pylon.settings = nil
		currentDataReference.pylons[item.pylonNumber] = pylon
		removeRequired(OldlauncherCLSID, item.pylonNumber)
	end
	if item.clean then
		pylon.CLSID = item.launcherCLSID
		currentDataReference.pylons[item.pylonNumber] = pylon
		pylon.count = 1
		pylon.settings = nil
	end
	
	applyRulesToPylons(item.launcherCLSID, item.pylonNumber, pylon.settings)
	
	for pylonNumber,v in pairs(currentDataReference.pylons) do
		if pylonNumber ~= item.pylonNumber then
			applyRulesToPylons(v.CLSID, pylonNumber, v.settings)
		end
	end
		
	updatePylonCell(item)
end

function submenuOnChange(item)
	if (currentDataReference ~= nil) and (currentDataReference.pylons ~= nil) then
		local pylon = currentDataReference.pylons[item.pylonNumber] or {}
		if item.launcher then
			pylon.CLSID = item.launcher.CLSID
			pylon.count = 1
			pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(item.launcher.CLSID)
		else
			pylon.CLSID = ""
			pylon.count = 0
			pylon.settings = nil
		end
		currentDataReference.pylons[item.pylonNumber] = pylon
				
		applyRulesToPylons(item.launcher.CLSID, item.pylonNumber, pylon.settings)
		
		for pylonNumber,v in pairs(currentDataReference.pylons) do
			if pylonNumber ~= item.pylonNumber then
				applyRulesToPylons(v.CLSID, pylonNumber, v.settings)
			end
		end

		updatePylonCell(item)
	end
end

function applyRulesToPylons(a_launcherCLSID, a_pylonNumber, a_settings)
	local unitDef = DB.unit_by_type[currentUnitType]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then
					if isNotNeedChange(rule.station, rule.loadout) == false then
						local pylon = currentDataReference.pylons[rule.station]
						if rule.loadout[1] then
							pylon.CLSID = rule.loadout[1]
							pylon.count = 1
							if a_settings then
								pylon.settings = {}
								TableUtils.recursiveCopyTable(pylon.settings, a_settings)	
							end
						end
					end
				end
			end
		end
		
		if load.forbidden and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.forbidden) do
				local pylon = currentDataReference.pylons[rule.station]
				if rule.loadout then
					for i, forbiddenLauncherCLSID in ipairs(rule.loadout) do
						if pylon.CLSID == forbiddenLauncherCLSID then
							pylon.CLSID = ""
							pylon.count = 0
							pylon.settings = nil
						end
					end	
				else	
					pylon.CLSID = ""
					pylon.count = 0
					pylon.settings = nil
				end
			end
		end
	end
end

function removeRequired(a_launcherCLSID, a_pylonNumber)
	local unitDef = DB.unit_by_type[currentUnitType]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then					
					local pylon = currentDataReference.pylons[rule.station]					
					if rule.loadout[1] then
						pylon.CLSID = ""
						pylon.count = 0
					end
				end
			end
		end
	end
end

function isNotNeedChange(a_station, a_ruleLoadout)
	local pylon = currentDataReference.pylons[a_station]
	
	for i, o in ipairs(a_ruleLoadout) do
		if pylon.CLSID == o then
			return true
		end
	end
	
	return false
end

function onPylonMouseDown(x, y, button)
	if 3 == button then
		local col, row = gridPayloads:getMouseCursorColumnRow(x, y)
		
		if 0 < col and -1 < row then
			local pylonNumber = numbersByColumnIndex_[col]
			
			local menus = getPylonMenu()
			
			if menus then
			-- формируем меню
				local menu  = menus[pylonNumber]
				------------------------------------------------------------------------------------------------
				local count = menu:getItemCount()
				for i = 1, count do
					local item 	  = menu:getItem(i - 1)				
					if item.getSubmenu then 
						local submenu = item:getSubmenu()						
						if submenu then 
							local items_count = submenu:getItemCount()
							for j = 1,items_count do
								local itemS 		  = submenu:getItem(j - 1)	
								itemS:setEnabled(true)
								if itemS.launcher then
									itemS.launcher.count = 999999
									if itemS.launcher.count < 1 then
										itemS:setText(string.format(cdata.not_available_weapon,itemS.launcher.name))
										itemS:setEnabled(false)
									elseif itemS.launcher.count < 1e5 then
										itemS:setText(string.format(cdata.available,itemS.launcher.count,itemS.launcher.name))
									else
										itemS:setText(itemS.launcher.name)	
									end
								end
							end
						end
					end
				end
				------------------------------------------------------------------------------------------------
				menu:setPosition(x, y) -- позиционируем меню
				menu:setVisible(true)
			end
		end
	end
end

function onUpdateWeight()
	if not currentUnit then
		return
	end

	local ammo_weight_max 	= currentUnit.AmmoWeight
	local max_to_weight   	= currentUnit.MaxTakeOffWeight
	local max_fuel_weight 	= currentUnit.MaxFuelWeight
	local empty_weight		= currentUnit.EmptyWeight
	
	if not currentDataReference.emptyWeight then 
		currentDataReference.emptyWeight = empty_weight
	end
	
	local payloadsWeight = 0
	local limit_ammo_percentage = nil
	
	if currentDataReference and currentDataReference.pylons ~= nil then
		for i, pylon in pairs(currentDataReference.pylons) do
			local launcher = DB.db.Weapons.ByCLSID[pylon.CLSID]
			if launcher then
				payloadsWeight 	= payloadsWeight + launcher.Weight
				
				local tmpLimit = launcher.limit_ammo_percentage
				if tmpLimit then
					if limit_ammo_percentage == nil or (tmpLimit ~= nil and limit_ammo_percentage > tmpLimit) then
						limit_ammo_percentage = tmpLimit
					end
				end
			end
		end
	end
	
	sliderGunAmmo:setRange(0, limit_ammo_percentage or 100)

	local ammoWeight = (ammo_weight_max)*sliderGunAmmo:getValue()/100
	local fuel 		 = sliderFuel:getValue()*max_fuel_weight/100
	
	--txtFuelMass:setText(fuel.." "..cdata.kg)
	
	local total		= empty_weight + payloadsWeight + ammoWeight + fuel - (currentUnit.EmptyWeight - currentDataReference.emptyWeight)
	max_to_weight 	= tonumber(max_to_weight)

	stcToWeightCurrentValueUnit.widget:setEnabled(total < max_to_weight)
	stcToWeightCurrentValueUnit:setValue(math.ceil(total))
	stcToWeightMaxValueUnit:setValue(math.ceil(max_to_weight))
end

function updateGrid()
	gridPayloads:clear()

	local pylonsCount = loadoutUtils.getPylonsCount(currentUnitType)
	
	if pylonsCount < 1 then 
		gridPayloads:setVisible(false)
		onUpdateWeight()
		return
	else
		gridPayloads:setVisible(true)
	end
	
	local gridSkin				= gridPayloads:getSkin()
	local columnWidth			= loadoutUtils.columnWidth
	local x, y, w_g, h			= gridPayloads:getBounds()
	local x_p, y_p, w_p, h_p	= imgAircraft:getBounds()
	local skinParams 			= gridSkin.skinData.params
	local horzLineHeight		= skinParams.horzLineHeight
	local vertLineWidth			= skinParams.vertLineWidth
	local headerHeight			= skinParams.headerHeight

	gridPayloads:insertColumn(0) -- чтобы индексы пилонов сооответствовали индексам колонок
	
	-- добавляем толщину вертикальной линии для первого столбца с шириной 0
	local w = vertLineWidth + pylonsCount * (vertLineWidth + columnWidth) 
	
	x = x_p + w_p / 2 - w/2
	
	gridPayloads:setBounds(x, y, w, gridSkin.skinData.params.headerHeight + horzLineHeight + loadoutUtils.rowHeight)
	
	local columnIndexByNumbers = {}	
	local names	= loadoutUtils.getPylonsNames(currentUnitType)
	local index = 0
	
	numbersByColumnIndex_ = {}
	columnDNameByNumbers = {}
	
	for i = #names, 1, -1 do
		local pylon			= names[i]	
		local columnHeader	= gridHeaderCell:clone()
		
		columnHeader:setText(pylon.DisplayName)
		columnHeader:setVisible(true)

		index = index + 1		
		
		columnIndexByNumbers[pylon.Number]	= index
		columnDNameByNumbers[pylon.Number]  = pylon.DisplayName
		numbersByColumnIndex_[index]		= pylon.Number
		
		gridPayloads:insertColumn(columnWidth, columnHeader, index)
	end
	
	local row = 0

	gridPayloads:insertRow(loadoutUtils.rowHeight, row)
	gridPayloads:setCell(0, row, nil)

	local columnCount = gridPayloads:getColumnCount()
	
	tblContainers = {}
	for pylonNumber, pylon in pairs(currentDataReference.pylons) do
		local column = columnIndexByNumbers[pylonNumber]
		local container = nil
		
		if check_pylon_not_empty(pylon.CLSID) then
			container = loadoutUtils.createPylonCell(pylon.CLSID, column, row, gridPayloads, pylon.count
					, cdata.missionPayload, columnDNameByNumbers[pylonNumber], pylonNumber, callbackSettingsOk, callbackAmunitionParameters, pylon.settings)	
			tblContainers[pylonNumber] = container
			gridPayloads:setCell(column, row, container)
		end
	end
end

function resetPylonsMenu()
	menus_	= {}
end

function create()
	window = DialogLoader.spawnDialogFromFile('./Scripts/UI/InstantActionGenerator/InstantActionEditorLoadout.dlg', cdata)

	containerMain = window.containerMain
	panelLeft = containerMain.panelLeft
	panelRight = containerMain.panelRight
	panelBottom = containerMain.panelBottom
	
	sliderGunAmmo = panelRight.sldrGunAmmo
	txtGunAmmo = panelRight.txtGunAmmo
	txtGunAmmoValue = panelRight.txtGunAmmoCurrent
	sliderGunAmmo.onChange = function()
		txtGunAmmoValue:setText(sliderGunAmmo:getValue().."%")
		currentDataReference.gun = sliderGunAmmo:getValue()
		onUpdateWeight()
	end
	
	checkChaffFlareSlots = function (user_enter_flare)
		if currentUnit and currentUnit.passivCounterm ~= nil then
			local chaffSlots = sliderChaff:getValue() * currentUnit.passivCounterm.chaff.chargeSz
			local flareSlots = sliderFlare:getValue() * currentUnit.passivCounterm.flare.chargeSz
			if currentUnit.passivCounterm.SingleChargeTotal < chaffSlots + flareSlots then
				function limitOther(slotsCount, chargeSz, step)
					local newCount = math.floor((currentUnit.passivCounterm.SingleChargeTotal - slotsCount) / chargeSz)
					return step * math.floor(newCount / step)
				end
				
				if user_enter_flare then
					sliderChaff:setValue(limitOther(flareSlots, currentUnit.passivCounterm.chaff.chargeSz, sliderChaff:getStep()))
					txtChaffValue:setText(sliderChaff:getValue())
					currentDataReference.chaff = sliderChaff:getValue()
				else
					sliderFlare:setValue(limitOther(chaffSlots, currentUnit.passivCounterm.flare.chargeSz, sliderFlare:getStep()))
					txtFlareValue:setText(sliderFlare:getValue())
					currentDataReference.flare = sliderFlare:getValue()
				end
			end
		end
	end
	
	sliderFlare = panelRight.sldrFlare
	txtFlareValue = panelRight.txtFlareCurrent
	txtFlare = panelRight.txtFlare
	sliderFlare.onChange = function()
		checkChaffFlareSlots(true)
		txtFlareValue:setText(sliderFlare:getValue())
		currentDataReference.flare = sliderFlare:getValue()
		onUpdateWeight()
	end
	
	sliderChaff = panelRight.sldrChaff
	txtChaffValue = panelRight.txtChaffCurrent
	txtChaff = panelRight.txtChaff
	sliderChaff.onChange = function()
		checkChaffFlareSlots(false)
		txtChaffValue:setText(sliderChaff:getValue())
		currentDataReference.chaff = sliderChaff:getValue()
		onUpdateWeight()
	end
	
	sliderFuel = panelRight.sldrFuel
	txtFuelValue = panelRight.txtFuelCurrent
	sliderFuel.onChange = function()
		txtFuelValue:setText(sliderFuel:getValue().."%")
		currentDataReference.fuel = sliderFuel:getValue()
		onUpdateWeight()
	end
	
	imgAircraft		= panelLeft.stcImage
	imgAircraftSkin	= imgAircraft:getSkin()
	imgAircraftPicture = imgAircraftSkin.skinData.states.released[1].picture
	
	gridPayloads = panelLeft.gridPayloads
	function gridPayloads:onMouseDown(x, y, button)
		onPylonMouseDown(x, y, button)
	end
	
	listBoxPayloads = panelRight.listBoxPreset
	listBoxGunAmmoType = panelRight.cmbGunAmmoType
	txtGunAmmoType = panelRight.stcGunAmmoType
	listBoxLivery = panelRight.listBoxLivery
	txtLivery = panelRight.txtLivery
	
	listBoxLivery.onChange = function(self,item)
		if item and item.itemId then
			currentDataReference.livery_id = item.itemId
		end
	end
	
	listBoxGunAmmoType.onChange = function(self,item)
		if item and item.index then
			currentDataReference.ammo_type = item.index
		end
	end
	
	listBoxPayloads.onChange = function(self,item)
		--clear all pylons
		for i,o in pairs(currentDataReference.pylons) do
			o.CLSID = "" 
			o.count = 0
		end
		
		local forcedPylons
	
		if item and item.preset_link then
			for i,o in pairs(item.preset_link.pylons) do
				local pylon 	= currentDataReference.pylons[o.num]
				if pylon then
					if loadout_is_authorized_for_station(o.num,o.CLSID) then
						if forcedPylons and forcedPylons[o.num] then
							pylon.CLSID	 = forcedPylons[o.num]
							pylon.count	 = 1
						else
							pylon.CLSID	 = o.CLSID
							pylon.count	 = 1
						end
					else
						local disp_name = base.get_weapon_display_name_by_clsid(o.CLSID) or ""
						print(currentUnitType .. " preset " .. item.preset_link.name .. 
							  ":unauthorized "..  disp_name .. " ("..o.CLSID..") "   ..
							  " for station " ..  tostring(o.num))
					end
				end
			end
		end
		
		updateGrid()
		onUpdateWeight()
	end

	btnApply = panelBottom.btnOk
	btnApply.onChange = onButtonApply
	
	btnCancel = panelBottom.btnCancel
	btnCancel.onChange = onButtonCancel

	function window:onClose()
		onButtonCancel()
	end	
	
	stcToWeightCurrentValue = panelBottom.stcToWeightCurrentValue
	stcToWeightMaxValue = panelBottom.stcToWeightMaxValue
	txtUnitsCur = panelBottom.txtUnitsCur
	stcToWeightCurrentValueUnit = U.createUnitWidget(txtUnitsCur, stcToWeightCurrentValue, U.weightUnits)
	stcToWeightMaxValueUnit = U.createUnitWidget(nil , stcToWeightMaxValue, U.weightUnits)
	
	noVisible = window.noVisible
	gridHeaderCell = noVisible.gridHeaderCell
	loadoutUtils.init(	noVisible.staticPayloadCell:getSkin(), 
						noVisible.staticPylonCaption:getSkin(), 
						noVisible.panelPylonCell:getSkin(),
						noVisible.bFuse:getSkin())
	
	local x, y
	if x == nil or y == nil then
		local wS, hS = Gui.GetWindowSize()
		local wW, wH = window:getSize()
		x = (wS - wW) / 2
		y = (hS - wH) / 2
	end
	
	window:setPosition(x, y)
	
	return window
end

function show(state, unitType, dataReference, country, missionType, groupTask)
	if state == nil then
		return
	end
	
	if window == nil then
        create()
    end
	
	if state == true then
		currentUnitType = unitType
		currentDataReference = dataReference
		oldDataReference = {}
		TableUtils.recursiveCopyTable(oldDataReference, currentDataReference)	
		currentCountry = country
		currentMissionType = missionType
		currentGroupTask = groupTask
		initData()
		window:setVisible(true)
	else
		currentUnitType = nil
		currentUnit = nil
		currentDataReference = nil
		currentCountry = nil
		currentMissionType = nil
		currentGroupTask = nil
		oldDataReference = nil
		window:setVisible(false)
	end
end
