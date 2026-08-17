local base = _G

module('MultiplayerSelectAirdromeDialog')

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
local lfs 					= require('lfs')
local OptionsData			= base.safe_require('Options.Data')
local textutil				= require('textutil')
local MenuSubItem 			= require('MenuSubItem')
local Skin 					= require('Skin')

local MultiplayerSelectRole = require('MultiplayerSelectRole')

i18n.setup(_M)
local locale = i18n.getLocale()

local numbersByColumnIndex_	= {}
local menus_				= {}
local currentUnitType_
local columnDNameByNumbers 	= {}
local tblContainers			= {}
local cachedUnitSpawnData
local waitingToSpawn = false
local descriptorByUnitType = {}
local curPath = ""

local colorBlack = '0x000000ff'

local cdata = 
{
	chaff 				= _('CHAFF'),
	flare 				= _('FLARE'),
	fuel 				= _('FUEL'),
	toWeight 			= _('TO weight, %'),
	toWeightMax 		= _('TO weight max'),
	gunAmmoType 		= _('AMMO_TYPE'),
	gunAmmo 			= _('GUN AMMO'),
	empty 				= _('Empty'),
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
	selectBoardNumber	= _('BOARD NUMBER'),
	enterBoardNumber	= _('Enter Board number'),
	maximumWeight 		= _("MAXIMUM WEIGHT"),
	cantCreateUnit		= _('MultiplayerSelectRoleDialog.AllTerminalsAreBusy'),
	info				= _('Info'),
	ok					= _('OK'),
	spawnHot			= _('Spawn Hot'),
	spawnHotDisabled	= _('Hot spawn disabled'),
	searchHint 			= _('Search...'),

	openDTC 			= _('Open DTC'),
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
	local p = currentPayload.pylons[station] 
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
		local pylon		= currentPayload.pylons[pylonNumber] or {}
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

function getSubSubmenu(index, a_submenuOnChange)
	submenu = Menu.new()
	if a_submenuOnChange then
		function submenu:onChange(item)
			a_submenuOnChange(item)
		end
	end

	return submenu
end

function fillSubmenu(submenu, pylonNumber, launchers)
	-- сортируем оружие по имени
	local subMenuForMenu = {}
	local subCatDispNameTbl = {}
	local menuNamesItems = {}

	for _tmp, launcher in pairs(launchers) do
		if launcher.subCatDispName and launcher.weaponDispName and launcher.subCatDispName ~= "" then
			if subMenuForMenu[launcher.subCatDispName] == nil then
				subMenuForMenu[launcher.subCatDispName] = {}						
				base.table.insert(subCatDispNameTbl, launcher.subCatDispName)
			end	

			base.table.insert(subMenuForMenu[launcher.subCatDispName], launcher)
		else
			base.table.insert(menuNamesItems, {"once", launcher.name, launcher})
		end

	end
	--------------------------------------------------
	for i, catDispName in ipairs(subCatDispNameTbl) do
		if #subMenuForMenu[catDispName] > 1 then
			base.table.insert(menuNamesItems, {"subcat", catDispName})
		else
			for kk,launcher in base.ipairs(subMenuForMenu[catDispName]) do	
				base.table.insert(menuNamesItems, {"once", launcher.name, launcher})
			end
		end
	end	

	local function sortByName(t1, t2)
		return textutil.Utf8Compare(t1[2], t2[2])
	end
	table.sort(menuNamesItems, sortByName)
	
	for i, v in ipairs(menuNamesItems) do
		if v[1]	== "subcat" then
			local catDispName = v[2]
			local subSubmenu = Menu.new()
			function subSubmenu:onChange(item)
				submenuOnChange(item)
			end
			subSubmenu:clear()
			
			local menuItem = MenuSubItem.new(catDispName.."("..#subMenuForMenu[catDispName]..")", subSubmenu)
			menuItem:setSkin(Skin.menuSubItemSkin())
			
			submenu:insertItem(menuItem)
				
			for kk,launcher in base.ipairs(subMenuForMenu[catDispName]) do				 
				local subSubmenuItem = MenuItem.new(launcher.weaponDispName)
				subSubmenuItem.launcher = launcher
				subSubmenuItem.pylonNumber = pylonNumber
	
				local filename,blend_color = loadoutUtils.getLauncherImage(launcher.clsid)

				subSubmenuItem:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack))

				subSubmenuItem:setTooltipText(launcher.name)
				subSubmenu:insertItem(subSubmenuItem)
			end
		else
			local launcher = v[3]
			local submenuItem = MenuItem.new(launcher.name)
			-- сохраняем в элементе меню номер пилона и clsid оружия 
			submenuItem.launcher = launcher
			submenuItem.pylonNumber = pylonNumber
			-- устанавливаем картинку для элемента меню 
			local filename,blend_color = loadoutUtils.getLauncherImage(launcher.clsid)

			submenuItem:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack))

			submenuItem:setTooltipText(launcher.name)
			submenu:insertItem(submenuItem)
		end
	end

	return 
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
	if selectedUnitTemplate and selectedUnitTemplate.AddPropAircraft then
		local unitDef = DB.unit_by_type[selectedAircraftType]
		if unitDef.AddPropAircraft then
			for k,v in base.pairs(unitDef.AddPropAircraft) do 				
				for kk, vv in base.pairs(selectedUnitTemplate.AddPropAircraft) do
					if v.id == kk then
						if v.forcedPylons and v.forcedPylons[vv] then
							for kkk, vvv in base.pairs(v.forcedPylons[vv]) do
								forcedPylons = forcedPylons or {}
								forcedPylons[kkk] = vvv
							end
						end
					end
				end	
			end
		end		
	end
	
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

						local subCatDispName
						local tmpWsTypeOfWeapon = loadoutUtils.getLauncherWsTypeOfWeapon(CLSID_)
						local launcherName = loadoutUtils.getLauncherName(launcher.CLSID) or "<MISSING NAME>"	
							
						if tmpWsTypeOfWeapon
							and (base.type(tmpWsTypeOfWeapon) ~= 'table' 
								or ((tmpWsTypeOfWeapon[1] and base.type(tmpWsTypeOfWeapon[1]) == 'number')
									and (tmpWsTypeOfWeapon[2] and base.type(tmpWsTypeOfWeapon[2]) == 'number')
									and (tmpWsTypeOfWeapon[3] and base.type(tmpWsTypeOfWeapon[3]) == 'number')
									and (tmpWsTypeOfWeapon[4] and base.type(tmpWsTypeOfWeapon[4]) == 'number')))	
									then

							local tmpName = base.get_weapon_display_name_by_wstype(tmpWsTypeOfWeapon)
							
							if tmpName and tmpName ~= "" then
								subCatDispName = tmpName
								weaponDispName = launcherName	
							end
						else
							base.print("--No attribute--",launcher.CLSID)
						end
											
						table.insert(launcherCategories[category], {
							clsid			= CLSID_, 
							name			= base.get_weapon_display_name_by_clsid(CLSID_),
							subCatDispName	= subCatDispName, 
							weaponDispName  = weaponDispName
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
	for i, categoryName in ipairs(categoryNames) do
		local launchers = launcherCategories[categoryName]
		
		table.sort(launchers, function(op1, op2) return op1.name < op2.name end)
		
		local submenu = Menu.new()
		
		function submenu:onChange(item)
			submenuOnChange(item)
		end
		submenu:clear()		

		-- заполняем подменю 
		local categoryLaunchers = launcherCategories[categoryName]
		local selected

		fillSubmenu(submenu, pylonNumber, categoryLaunchers)

		if forcedPylons == nil or forcedPylons[pylonNumber] == nil then 
			if submenu:getItemCount() > 0 then
				local menuItem = MenuSubItem.new(categoryName, submenu)
				menuItem:setSkin(Skin.menuSubItemSkin())			
				menu:insertItem(menuItem)
			end
		end
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
	local id 	= selectedAircraftType ..'_'--..tostring(currentUnitMissionID)
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

function onButtonOk(self)
	if currentUnit then
		local airbaseName
		if selectedIsAirdrome == true then
			airbaseName = MultiplayerSelectRole.getAirdromeName(selectedAirbaseId)
		else
			airbaseName = MultiplayerSelectRole.getFarpOrCarrierData(selectedAirbaseId)
		end
		
		local unitTypeName = keys.tabTr[selectedAircraftType] or keys.getDisplayName(selectedAircraftType)
		
		cachedUnitSpawnData = 
		{
			userId = net.get_my_player_id(),
			airdromeId = selectedAirbaseId or 0,
			isAirdrome = selectedIsAirdrome,
			nickName = tostring(net.get_my_player_id()),
			coalition = MultiplayerSelectRole.getSelectedCoalition(),
			coalitionId = MultiplayerSelectRole.getSelectedCoalitionId(),
			typeLA = selectedAircraftType or "",
			category = textutil.Utf8ToLowerCase(selectedAircraftCategory) or "---",
			boardNumber = editBoardNumber:getText(),
			numFuel = sliderFuel:getValue() / 100 * currentUnit.MaxFuelWeight,
			numFlare = tonumber(sliderFlare:getValue()),
			numChaff = tonumber(sliderChaff:getValue()),
			gun = tonumber(sliderGunAmmo:getValue()),
			ammoType = selectedAmmoType or 1,
			liveryEntry = selectedLivery or "",
			isHot = checkHot:getState(),
			isInAir = false,
			localizedAirbaseName = airbaseName,
			localizedUnitTypeName = unitTypeName,

			pylons = currentPayload.pylons or {},
		}

		cachedUnitSpawnData.addProps = {
			pylons = cachedUnitSpawnData.pylons,
			unitTemplate = selectedUnitTemplate,
		}

		waitingToSpawn = true
		local result = DCS.create_client_aircraft(cachedUnitSpawnData)
		btnApply:setEnabled(false)
		if result ~= true then
			waitingToSpawn = false
			btnApply:setEnabled(true)
			local handler = MsgWindow.info(cdata.cantCreateUnit, cdata.info, cdata.ok)
			handler:show()
		end
	end
end

function onMissionLoadEnd()
	cachedUnitSpawnData = nil
end

function onNetConnect()
	cachedUnitSpawnData = nil
end

function onPlayerChangeSlot(id)
	if window == nil then
		return
	end

	if waitingToSpawn ~= true then
		return
	end

	btnApply:setEnabled(true)
	if id == net.get_my_player_id() then
		waitingToSpawn = false
		MultiplayerSelectRole.onEsc()
	end
end

function onCreateAircraftResult(result)
	if window == nil then
		return
	end

	btnApply:setEnabled(true)
	waitingToSpawn = false
	if result == true then
		MultiplayerSelectRole.onEsc()
	else
		local handler = MsgWindow.info(cdata.cantCreateUnit, cdata.info, cdata.ok)
		handler:show()
	end
end

function onButtonCancel()
	MultiplayerSelectRole.unsetSelectRoleDialog()
	show(false)
end

function onOpenDTC()
	DCS.toggleDTC(selectedAircraftType, true, selectedAirbaseId, selectedIsAirdrome)
end

function updateWidgetsStates()
	local allow_boardnumber = true
	local allow_livery      = true
	
	local server_settings = net.get_server_settings()
	if server_settings  then
		allow_boardnumber = server_settings.advanced.allow_change_tailno
		allow_livery = server_settings.advanced.allow_change_skin
	end
	
	editBoardNumber:setVisible(allow_boardnumber)
	txtBoardNumber:setVisible(allow_boardnumber)
	listBoxLivery:setVisible(allow_livery)
	txtLivery:setVisible(allow_livery)

	local m_chaff = get_max_chaff()
	local m_flare = get_max_flare()

	local ChaffNoEdit = false
	local CMDS_Edit = true
	
	local chaffCount = 0
	local flareCount = 0
	
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.ChaffNoEdit ~= nil then
			ChaffNoEdit = currentUnit.passivCounterm.ChaffNoEdit
		end

		if currentUnit.passivCounterm.CMDS_Edit ~= nil then
			CMDS_Edit = currentUnit.passivCounterm.CMDS_Edit
		end

		if currentUnit.passivCounterm.chaff.default ~= nil then
			chaffCount = currentUnit.passivCounterm.chaff.default
		end

		if currentUnit.passivCounterm.flare.default ~= nil then
			flareCount = currentUnit.passivCounterm.flare.default
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
	
	sliderGunAmmo:setValue(100)
	sliderGunAmmo.onChange()
	sliderFuel:setValue(100)
	sliderFuel.onChange()

	sliderChaff:setValue(chaffCount)
	sliderChaff.onChange()
	sliderFlare:setValue(flareCount)
	sliderFlare:onChange()
end

function updateLiveryPresets()
	listBoxLivery:selectItem()
	listBoxLivery:clear()
	
	local selected
	local schemes = loadLiveries.loadSchemes(currentUnit.livery_entry or selectedAircraftType, nil) -- nil or counrycode
	for k, scheme in pairs(schemes) do
		local item = listBoxLivery:newItem(scheme.name)
		item.itemId = string.lower(scheme.itemId)

		if not selected then
			selected = item
		end
	end
	
	if listBoxLivery:getItemCount() == 0 then
		selected = listBoxLivery:newItem(cdata.empty)
	end
	
	if selected then
	   listBoxLivery:selectItem(selected)
	   selectedLivery = selected.itemId
	   selected = nil
	end
end

function updatePayloadPresets()
	listBoxPayloads:clear()
	listBoxPayloads:selectItem()
	
	if currentUnit then
		listBoxPayloads:setVisible(true)
		
		local payloads = loadoutUtils.getUnitPayloads(selectedAircraftType or "")

		local selectedItem = listBoxPayloads:newItem(cdata.empty)
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
			
			selectedAmmoType = currentUnit.ammo_type_default or 1
			for i = 1, #currentUnit.ammo_type do
				local comboItem = listBoxGunAmmoType:newItem(currentUnit.ammo_type[i])
				
				comboItem.index = i
				
				if comboItem.index == selectedAmmoType then
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

function updateAvailableAircrafts()
	btnApply:setEnabled(false)
	listBoxAircraft:clear()
	listBoxAircraft:selectItem()
	
	local selected
	
	local aircrafts = {}
	local availableForAirbase = {}
	for aType, v in pairs(base.aircraftFlyableInPlugins) do
		base.table.insert(availableForAirbase, aType)
	end
	
	availableForAirbase = MultiplayerSelectRole.filterSuitableUnitTypesForAirbase(selectedAirbaseId, selectedIsAirdrome, availableForAirbase)

	for i, aType in pairs(availableForAirbase) do
		local item = {}
		item.type = aType
		item.amount = DCS.getAircraftAmountInAirportWarehouse(aType, selectedAirbaseId, not selectedIsAirdrome)
		item.isAvailable = item.amount > 0
		base.table.insert(aircrafts, item)
	end
	
	base.table.sort(aircrafts, function(left, right)
		if not left or not right then
			return false
		end
		
		if left.isAvailable == right.isAvailable then
			return textutil.Utf8Compare(left.type, right.type)
		end
		
		return left.isAvailable
	end)
	
	for i, v in ipairs(aircrafts) do
		local name = keys.tabTr[v.type] or keys.getDisplayName(v.type)
		local amount = v.amount > 99 and "99+" or tostring(v.amount)
		
		local item
		if v.amount >= 1000000 then
			item = listBoxAircraft:newItem(name)
		else
			item = listBoxAircraft:newItem(name.." ("..amount..")")
		end
		item.type = v.type
		item.amount = v.amount
		item:setEnabled(v.isAvailable)
		
		if not selected then
			selected = item
		end
	end
	
	if selected then
		listBoxAircraft:selectItem(selected)
		listBoxAircraft.onChange(listBoxAircraft, selected)
		btnApply:setEnabled(true)
	end
end

function tryApplyCachedUnitSpawnData()
	if cachedUnitSpawnData == nil then
		return
	end

	if cachedUnitSpawnData.airdromeId ~= selectedAirbaseId then
		return
	end
	
	local typeFound = false
	for i = 1, listBoxAircraft:getItemCount() do
		local item = listBoxAircraft:getItem(i - 1)
		if item.type == cachedUnitSpawnData.typeLA then
			listBoxAircraft:selectItem(item)
			listBoxAircraft.onChange(listBoxAircraft, item)
			typeFound = true
			break
		end
	end
	
	if typeFound == false then
		return
	end
	
	for i = 1, listBoxLivery:getItemCount() do
		local item = listBoxLivery:getItem(i - 1)
		if item.itemId == cachedUnitSpawnData.liveryEntry then
			listBoxLivery:selectItem(item)
			selectedLivery = item.itemId
			break
		end
	end
	
	for i = 1, listBoxGunAmmoType:getItemCount() do
		local item = listBoxGunAmmoType:getItem(i - 1)
		if item.index == cachedUnitSpawnData.ammoType then
			listBoxGunAmmoType:selectItem(item)
			selectedAmmoType = item.index
			break
		end
	end
	
	if cachedUnitSpawnData.boardNumber ~= nil then
		editBoardNumber:setText(cachedUnitSpawnData.boardNumber)
	end
	
	if cachedUnitSpawnData.isHot ~= nil then
		checkHot:setState(((checkHot:getEnabled() == true) and cachedUnitSpawnData.isHot) or false)
	end
	
	if cachedUnitSpawnData.gun ~= nil then
		sliderGunAmmo:setValue(cachedUnitSpawnData.gun)
		sliderGunAmmo.onChange()
	end
	
	if cachedUnitSpawnData.numFlare ~= nil then
		sliderFlare:setValue(cachedUnitSpawnData.numFlare)
		sliderFlare.onChange()
	end
	
	if cachedUnitSpawnData.numChaff ~= nil then
		sliderChaff:setValue(cachedUnitSpawnData.numChaff)
		sliderChaff.onChange()
	end
	
	if cachedUnitSpawnData.numFuel ~= nil then
		sliderFuel:setValue(cachedUnitSpawnData.numFuel / currentUnit.MaxFuelWeight * 100)
		sliderFuel.onChange()
	end
	
	if cachedUnitSpawnData.pylons ~= nil then
		currentPayload.pylons = cachedUnitSpawnData.pylons
	end
	
	updateGrid()
	onUpdateWeight()
end

function initData()
	updateUnitSystem()
	
	selectedAircraftType = nil
	selectedAircraftCategory = nil
	currentUnit = nil

	gridPayloads:clear()
	listBoxLivery:clear()
	listBoxLivery:selectItem()
	listBoxPayloads:clear()
	listBoxPayloads:selectItem()
	listBoxGunAmmoType:clear()
	listBoxGunAmmoType:selectItem()

	if selectedIsAirdrome == true then
		window:setText(MultiplayerSelectRole.getAirdromeName(selectedAirbaseId))
	else
		window:setText(MultiplayerSelectRole.getFarpOrCarrierData(selectedAirbaseId))
	end
	
	sliderGunAmmo:setValue(100)
	sliderGunAmmo.onChange()
	sliderFlare:setValue(0)
	sliderFlare.onChange()
	sliderChaff:setValue(0)
	sliderChaff.onChange()
	sliderFuel:setValue(100)
	sliderFuel.onChange()
	
	updateAvailableAircrafts()
	
	local settings = DCS.getDynamicSpawnSettings(selectedAirbaseId, selectedIsAirdrome)
	if settings then
		checkHot:setEnabled(settings.allowHotSpawn or false)
		if settings.allowHotSpawn == true then
			checkHot:setTooltipText("")
		else
			checkHot:setTooltipText(cdata.spawnHotDisabled)
		end
	end
	checkHot:setState(false)
	
	tryApplyCachedUnitSpawnData()
end

function callbackAmunitionParameters(self)
	local pylon 		= currentPayload.pylons[self.data.pylonNumber]
	local tmpSettings 	= pylon.settings or loadoutUtils.getLauncherSettingsDefaultValues(self.data.launcherCLSID)	

	local settingsDef 			= loadoutUtils.getLauncherSettings(self.data.launcherCLSID)
	local requiredPylonNumber 	= loadoutUtils.getRequiredPylonNumber(self.data.pylonNumber, selectedAircraftType, self.data.launcherCLSID)

	AmunitionParameters.show(true, tmpSettings, settingsDef, { pylon = self.data.pylonDisplayName, launcher = (loadoutUtils.getLauncherName(self.data.launcherCLSID) or ""),
				payload = self.data.namePayload or ""},
						self.data.namePayload, self.data.pylonNumber, callbackSettingsOk, self.data.container, requiredPylonNumber, callbackSettingsCopy)
end

function callbackSettingsOk(a_namePayload, a_pylonNumber, a_curSettings, a_container, a_tooltip, a_requiredPylonNumber, a_copyOption)
	local pylon = currentPayload.pylons[a_pylonNumber]
	pylon.settings = {}
	TableUtils.recursiveCopyTable(pylon.settings, a_curSettings)	
	
	a_container:setTooltipText(a_container.baseTooltipText..a_tooltip)
	
	if a_requiredPylonNumber ~= nil then
		local pylon = currentPayload.pylons[a_requiredPylonNumber]
		pylon.settings = {}
		TableUtils.recursiveCopyTable(pylon.settings, a_curSettings)	
		
		tblContainers[a_requiredPylonNumber]:setTooltipText(tblContainers[a_requiredPylonNumber].baseTooltipText..a_tooltip)
	end

	if a_copyOption then
		loadoutUtils.copySettingsToOtherPylons(a_pylonNumber, currentPayload.pylons, a_copyOption, a_tooltip, tblContainers, a_requiredPylonNumber)
	end
end

function callbackSettingsCopy(a_typeCallback, a_namePayload, a_pylonNumber, a_value, a_idSetting)
	local curPylon = currentPayload.pylons[a_pylonNumber]
	local weapon,count = base.get_weapon_and_count_from_launcher(curPylon.CLSID)
	
	for k, pylon in base.pairs(currentPayload.pylons) do
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
	local pylon = currentPayload.pylons[item.pylonNumber] or {}
	local OldlauncherCLSID = pylon.CLSID
	if item.is_remove then
		pylon.CLSID = ""
		pylon.count = 0
		pylon.settings = nil
		currentPayload.pylons[item.pylonNumber] = pylon
		removeRequired(OldlauncherCLSID, item.pylonNumber)
	end
	if item.clean then
		pylon.CLSID = item.launcherCLSID
		currentPayload.pylons[item.pylonNumber] = pylon
		pylon.count = 1
		pylon.settings = nil
	end
	
	applyRulesToPylons(item.launcherCLSID, item.pylonNumber, pylon.settings)
	
	for pylonNumber,v in pairs(currentPayload.pylons) do
		if pylonNumber ~= item.pylonNumber then
			applyRulesToPylons(v.CLSID, pylonNumber, v.settings)
		end
	end
		
	updatePylonCell(item)
end

function submenuOnChange(item)
	if (currentPayload ~= nil) and (currentPayload.pylons ~= nil) then
		local pylon = currentPayload.pylons[item.pylonNumber] or {}
		if item.launcher then
			pylon.CLSID = item.launcher.clsid
			pylon.count = 1
			pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(item.launcher.clsid)
		else
			pylon.CLSID = ""
			pylon.count = 0
			pylon.settings = nil
		end
		currentPayload.pylons[item.pylonNumber] = pylon
				
		applyRulesToPylons(item.launcher.clsid, item.pylonNumber, pylon.settings)
		
		for pylonNumber,v in pairs(currentPayload.pylons) do
			if pylonNumber ~= item.pylonNumber then
				applyRulesToPylons(v.CLSID, pylonNumber, v.settings)
			end
		end

		updatePylonCell(item)
	end
end

function applyRulesToPylons(a_launcherCLSID, a_pylonNumber, a_settings)
	local unitDef = DB.unit_by_type[selectedAircraftType]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then
					if isNotNeedChange(rule.station, rule.loadout) == false then
						local pylon = currentPayload.pylons[rule.station]
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
				local pylon = currentPayload.pylons[rule.station]
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
	local unitDef = DB.unit_by_type[selectedAircraftType]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then					
					local pylon = currentPayload.pylons[rule.station]					
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
	local pylon = currentPayload.pylons[a_station]
	
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
			local pylon = currentPayload.pylons[pylonNumber]
			
			local menus = getPylonMenu()
			
			if menus then
			-- формируем меню
				local menu  = menus[pylonNumber]
				------------------------------------------------------------------------------------------------
				local count = menu:getItemCount()
				for i = 1, count do
					local item 	  = menu:getItem(i - 1)				
					if item.getSubmenu then 
						item:setSkin(Skin.menuSubItemSkin()) 
						local submenu = item:getSubmenu()						
						if submenu then 
							local items_count = submenu:getItemCount()
							for j = 1,items_count do
								local itemS 		  = submenu:getItem(j - 1)	
								itemS:setEnabled(true)
								if itemS.launcher then
									itemS.launcher.count = MultiplayerSelectRole.requestWeaponCount(itemS.launcher.clsid, selectedAirbaseId, selectedIsAirdrome)
									if itemS.launcher.count < 1 then
										itemS:setText(string.format(cdata.not_available_weapon,itemS.launcher.name))
										itemS:setEnabled(false)
									elseif itemS.launcher.count < 1e5 then
										itemS:setText(string.format(cdata.available,itemS.launcher.count,itemS.launcher.name))
									else
										itemS:setText(itemS.launcher.name)	
									end

									if itemS.launcher then
										local filename,blend_color = loadoutUtils.getLauncherImage(itemS.launcher.clsid)
										
										if pylon.clsid ~= nil and pylon.clsid == itemS.launcher.clsid then
											itemS:setSkin(Skin.menuItemSkin_ME_b())
											itemS:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack, itemS:getSkin()))
											item:setSkin(Skin.menuSubItemSkin_b()) --выделяем родительское
										else
											itemS:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack))																			
										end
									end
								end
							end

							local count2 = submenu:getItemCount()
							for ii = 1, count2 do
								local item2 = submenu:getItem(ii - 1)				
								if item2.getSubmenu then 
									item2:setSkin(Skin.menuSubItemSkin())
									local subsubmenu = item2:getSubmenu()	
									if subsubmenu then
										local items_count = subsubmenu:getItemCount()
										for j = 1,items_count do
											local itemS = subsubmenu:getItem(j - 1)		
											itemS:setEnabled(true)
											if itemS.launcher then
												itemS.launcher.count = MultiplayerSelectRole.requestWeaponCount(itemS.launcher.clsid, selectedAirbaseId, selectedIsAirdrome)
												if itemS.launcher.count < 1 then
													itemS:setText(string.format(cdata.not_available_weapon,itemS.launcher.name))
													itemS:setEnabled(false)
												elseif itemS.launcher.count < 1e5 then
													itemS:setText(string.format(cdata.available,itemS.launcher.count,itemS.launcher.name))
												else
													itemS:setText(itemS.launcher.name)	
												end
											end
											
											if itemS.launcher then
												local filename,blend_color = loadoutUtils.getLauncherImage(itemS.launcher.clsid)
												
												if pylon.clsid ~= nil and pylon.clsid == itemS.launcher.clsid then
													itemS:setSkin(Skin.menuItemSkin_ME_b())
													itemS:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack, itemS:getSkin()))
													item:setSkin(Skin.menuSubItemSkin_b()) --выделяем родительское родительского													
													item2:setSkin(Skin.menuSubItemSkin_b()) --выделяем родительское
												else
													itemS:setSkin(SkinUtils.setMenuItemPicture(filename,blend_color or colorBlack))									
												end
											end
										end
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
	
	if not currentPayload.emptyWeight then 
		currentPayload.emptyWeight = empty_weight
	end
	
	local payloadsWeight = 0
	local limit_ammo_percentage = nil
	
	if currentPayload and currentPayload.pylons ~= nil then
		for i, pylon in pairs(currentPayload.pylons) do
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
	txtGunAmmoValue:setText(sliderGunAmmo:getValue().."%")

	local ammoWeight = (ammo_weight_max)*sliderGunAmmo:getValue()/100
	local fuel 		 = sliderFuel:getValue()*max_fuel_weight/100
	
	--txtFuelMass:setText(fuel.." "..cdata.kg)
	
	local total		= empty_weight + payloadsWeight + ammoWeight + fuel - (currentUnit.EmptyWeight - currentPayload.emptyWeight)
	max_to_weight 	= tonumber(max_to_weight)

	stcToWeightCurrentValueUnit.widget:setEnabled(total < max_to_weight)
	stcToWeightCurrentValueUnit:setValue(math.ceil(total))
	stcToWeightMaxValueUnit:setValue(math.ceil(max_to_weight))
end

function updateGrid()
	gridPayloads:clear()

	local pylonsCount = loadoutUtils.getPylonsCount(selectedAircraftType)

	if #currentPayload.pylons == 0 then 
		pylonsCount = 0
	end
	
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
	local names	= loadoutUtils.getPylonsNames(selectedAircraftType)
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
	for pylonNumber, pylon in pairs(currentPayload.pylons) do
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
	window = DialogLoader.spawnDialogFromFile('./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectAirdromeDialog.dlg', cdata)

	containerMain = window.containerMain
	panelLeft = containerMain.panelLeft
	panelRight = containerMain.panelRight
	panelBottom = containerMain.panelBottom
	
	sliderGunAmmo = panelRight.sldrGunAmmo
	txtGunAmmo = panelRight.txtGunAmmo
	txtGunAmmoValue = panelRight.txtGunAmmoCurrent
	sliderGunAmmo.onChange = function()
		--onSliderUpdate(sliderGunAmmo, txtGunAmmoValue, 18)
		txtGunAmmoValue:setText(sliderGunAmmo:getValue().."%")
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
					--onSliderUpdate(sliderChaff, txtChaffValue, 18)
				else
					sliderFlare:setValue(limitOther(chaffSlots, currentUnit.passivCounterm.flare.chargeSz, sliderFlare:getStep()))
					--onSliderUpdate(sliderFlare, txtFlareValue, 18)
					txtFlareValue:setText(sliderFlare:getValue())
				end
			end
		end
	end
	
	sliderFlare = panelRight.sldrFlare
	txtFlareValue = panelRight.txtFlareCurrent
	txtFlare = panelRight.txtFlare
	sliderFlare.onChange = function()
		checkChaffFlareSlots(true)
		--onSliderUpdate(sliderFlare, txtFlareValue, 18)
		txtFlareValue:setText(sliderFlare:getValue())
		onUpdateWeight()
	end
	
	sliderChaff = panelRight.sldrChaff
	txtChaffValue = panelRight.txtChaffCurrent
	txtChaff = panelRight.txtChaff
	sliderChaff.onChange = function()
		checkChaffFlareSlots(false)
		--onSliderUpdate(sliderChaff, txtChaffValue, 18)
		txtChaffValue:setText(sliderChaff:getValue())
		onUpdateWeight()
	end
	
	sliderFuel = panelRight.sldrFuel
	txtFuelValue = panelRight.txtFuelCurrent
	--txtFuelMass = panelRightMiddle.txtFuelMass
	sliderFuel.onChange = function()
		--onSliderUpdate(sliderFuel, txtFuelValue, 18)
		txtFuelValue:setText(sliderFuel:getValue().."%")
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
	listBoxAircraft = panelRight.cmbUnitType
	listBoxLivery = panelRight.listBoxLivery
	txtLivery = panelRight.txtLivery
	
	--panelBoardNumber = panelRightTop.panelBoardNumber
	editBoardNumber = panelRight.editBoxBoardNumber
	txtBoardNumber = panelRight.txtBoardNumber
	
	function editBoardNumber:onFocus(focused)
		MultiplayerSelectRole.setIgnoreInput(focused)
	end
	
	editBoardNumber:addKeyDownCallback(function(comboBox, keyName, unicode)
		if 'return' == keyName or 'escape' == keyName then
			editBoardNumber:setFocused(false)
		end
	end)
	
	listBoxAircraft.onChange = function(self,item)
		if item and item.type then
			selectedAircraftType = item.type
			currentUnit = DB.unit_by_type[selectedAircraftType]
			
			selectedAircraftCategory = DB.getCategoryByType(selectedAircraftType)
			
			selectedUnitTemplate = MultiplayerSelectRole.getGroupDataFromTemplateById(MultiplayerSelectRole.getDynamicSpawnTemplateId(selectedAirbaseId, selectedAircraftType, selectedIsAirdrome))
			currentPayload = {}
			currentPayload.pylons = {}
			for i,o in ipairs(currentUnit.Pylons) do
				currentPayload.pylons[i] = {}
				currentPayload.pylons[i].CLSID = ""
				currentPayload.pylons[i].count = 0
				currentPayload.pylons[i].settings = nil
			end
			
			if selectedUnitTemplate then
				if selectedUnitTemplate.payload and selectedUnitTemplate.payload.pylons then
					for i,o in pairs(selectedUnitTemplate.payload.pylons) do
						local nI = tonumber(i)
						currentPayload.pylons[nI].CLSID = o.CLSID
						currentPayload.pylons[nI].count = 1
						currentPayload.pylons[nI].settings = o.settings
					end
				end
				
				if selectedUnitTemplate.payload and selectedUnitTemplate.payload.restricted then
					for i,r in pairs(selectedUnitTemplate.payload.restricted) do
						local nI = tonumber(i)
						currentPayload.pylons[nI].restricted = r
					end
					
					for i,o in ipairs(currentUnit.Pylons) do
						selectedUnitTemplate.payload.restricted[i] = selectedUnitTemplate.payload.restricted[i] or {}
					end
				end
			end

			selectedLivery = nil
			
			if selectedAircraftType then
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
			
			if editBoardNumber:getVisible() == true then
				local randNumber = math.random(1, 999)
				local strNumber
				if randNumber < 10 then
					strNumber = "00"..tostring(randNumber)
				elseif randNumber < 100 then
					strNumber = "0"..tostring(randNumber)
				else
					strNumber = tostring(randNumber)
				end
				editBoardNumber:setText(strNumber)
			end
			
			btnApply:setEnabled(item.amount > 0)

			if checkAvailabilityDTC(selectedAircraftType) then
				btnOpenDTC:setVisible(true)
			else
				btnOpenDTC:setVisible(false)
			end
		end
	end
	
	listBoxLivery.onChange = function(self,item)
		if item and item.itemId then
			selectedLivery = item.itemId
		end
	end
	
	listBoxGunAmmoType.onChange = function(self,item)
		if item and item.index then
			selectedAmmoType = item.index
		end
	end
	
	listBoxPayloads.onChange = function(self,item)
		if item then
			--clear all pylons
			for i,o in pairs(currentPayload.pylons) do
				o.CLSID = "" 
				o.count = 0
			end

			local forcedPylons 
			if selectedUnitTemplate and selectedUnitTemplate.AddPropAircraft then
				local unitDef = DB.unit_by_type[selectedAircraftType]
				if unitDef.AddPropAircraft then
					for k,v in base.pairs(unitDef.AddPropAircraft) do 				
						for kk, vv in base.pairs(selectedUnitTemplate.AddPropAircraft) do
							if v.id == kk then
								if v.forcedPylons and v.forcedPylons[vv] then
									for kkk, vvv in base.pairs(v.forcedPylons[vv]) do
										forcedPylons = forcedPylons or {}
										forcedPylons[kkk] = vvv
									end
								end
							end
						end	
					end
				end		
			end
		
			if item.preset_link then
				for i,o in pairs(item.preset_link.pylons) do
					local pylon 	= currentPayload.pylons[o.num]
					if pylon then
						if loadout_is_authorized_for_station(o.num,o.CLSID) then
							if forcedPylons and forcedPylons[o.num] then
								pylon.CLSID	 = forcedPylons[o.num]
								pylon.count	 = 1
							else
								pylon.CLSID	 = o.CLSID
								pylon.count	 = 1

								if o.settings then
									pylon.settings	= {}
									TableUtils.recursiveCopyTable(pylon.settings, o.settings)
								else
									pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(o.CLSID)
								end
							end
						else
							local disp_name = base.get_weapon_display_name_by_clsid(o.CLSID) or ""
							print(selectedAircraftType .. " preset " .. item.preset_link.name .. 
								  ":unauthorized "..  disp_name .. " ("..o.CLSID..") "   ..
								  " for station " ..  tostring(o.num))
						end
					end
				end
			end

			updateGrid()
			onUpdateWeight()
		end
	end
	
	checkHot = panelRight.checkHot
	btnApply = panelBottom.btnOk
	function btnApply:onChange()
		onButtonOk()
	end
	
	btnCancel = panelBottom.btnCancel
	btnCancel.onChange = onButtonCancel

	btnOpenDTC = panelBottom.btnOpenDTC
	btnOpenDTC.onChange = onOpenDTC

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
	
	local x, y = MultiplayerSelectRole.getSavedDialogPosition("selectAirdrome")
	if x == nil or y == nil then
		local wS, hS = Gui.GetWindowSize()
		local wW, wH = window:getSize()
		x = (wS - wW) / 2
		y = (hS - wH) / 2
	end
	
	window:addPositionCallback(function()
		MultiplayerSelectRole.saveDialogsPositions()
	end)
	
	window:setPosition(x, y)
	
	return window
end

function show(state, airbaseId, isAirdrome)
	if state == nil then
		return
	end
	
	if window == nil then
        create()
    end

	waitingToSpawn = false
	
	if state == true then
		selectedAirbaseId = airbaseId
		selectedIsAirdrome = isAirdrome
		initData()
		window:setVisible(true)

		if checkAvailabilityDTC(selectedAircraftType) then
			btnOpenDTC:setVisible(true)
		else
			btnOpenDTC:setVisible(false)
		end
	else
		-- Оставлю если захочется кэшировать состояние при закрытии окна тоже
		--[[if currentUnit then
			cachedUnitSpawnData = 
			{
				typeLA = selectedAircraftType or "",
				onboard_num = editBoardNumber:getText(),
				fuel = sliderFuel:getValue() / 100 * currentUnit.MaxFuelWeight,
				flare = tonumber(sliderFlare:getValue()),
				numChaff = tonumber(sliderChaff:getValue()),
				gun = tonumber(sliderGunAmmo:getValue()),
				ammoType = selectedAmmoType or 1,
				liveryEntry = selectedLivery or "",
				isHot = checkHot:getState(),
				pylons = currentPayload.pylons or {},
			}
		else
			cachedUnitSpawnData = nil
		end--]]
		
		selectedAirbaseId = nil
		selectedIsAirdrome = nil
		selectedAircraftType = nil
		selectedAircraftCategory = nil
		currentUnit = nil
		window:setVisible(false)

		if checkAvailabilityDTC(selectedAircraftType) then
            DCS.toggleDTC(selectedAircraftType, false)
        end
	end
end

function isVisible()
	if window == nil then
        return false
    end
	
	return window:isVisible()
end

function getDialogPosition()
    if window then
        return window:getPosition()
    end
    return nil, nil
end

local function updateCurPath(filePath)
	curPath = ""
	for i = #filePath, 1, -1 do
		if base.string.char(base.string.byte(filePath,i)) == "/" or base.string.char(base.string.byte(filePath,i)) == "\\" then
			curPath = base.string.sub(filePath, 1, i)
			break
		end
	end
end

local function checkFile(path)
	path = lfs.normpath(path)
	local attributes = {}
	attributes = lfs.attributes(path)
	if attributes and 'file' == attributes.mode then
		return path
	end
end

local function getCorrectPath(path)
	local checkDir = ""
	local writeDir = lfs.writedir()
	local currentDir = lfs.currentdir()	

	checkDir = checkFile(curPath..path)
	if checkDir ~= nil then
		return checkDir
	end
	checkDir = checkFile(writeDir..path)
	if checkDir ~= nil then
		return checkDir
	end
	checkDir = checkFile(currentDir..path)
	if checkDir ~= nil then
		return checkDir
	end
end

local function loadDatalinkDescriptor(filename)
	local filename = getCorrectPath(filename)
    local f,err = base.loadfile(filename)
    if not f then
        base.print("ERROR: loadDatalinkDescriptor() file not found!", err)
        return { }
    end
    local env = {	_ = _, 
					print = base.print,
					table = base.table,
					pairs = base.pairs,
					ipairs = base.ipairs,
					type  = base.type,
					tostring = base.tostring,
					string = base.string,
					tonumber = base.tonumber,
					tostring = base.tostring,
					math = base.math,
					traverseTable					= U.traverseTable,
					recursiveCopyTable 				= U.recursiveCopyTable,
					onAction 						= onAction,
					getDatalinksByUnitId 			= function() return nil end,
					getAddPropByUnitId 				= function() return nil end,
					getNameByUnitId					= function() return "" end,
					getNameByGroupId				= function() return "" end,
					getUnitsGroupsWithAddPropName 	= function() return {} end,
					getCoalitionByUnitId			= function() return "" end,
				} 
    base.setfenv(f, env)
	local ok, res = base.pcall(f)
	if not ok then
		base.print('ERROR: loadDatalinkDescriptor() failed to pcall "'..filename..'": '..res)
	end
    env._ = nil
	base.print("--env-",env.version)
    return env
end

local function loadDatalinksDescriptors(a_unit)
	local unitTypeDesc = DB.unit_by_type[a_unit.type]

	updateCurPath(unitTypeDesc._file)

	if descriptorByUnitType[a_unit.type] == nil then
		descriptorByUnitType[a_unit.type] = {}	
	end

	if unitTypeDesc.datalinks.IDM and descriptorByUnitType[a_unit.type].IDM == nil then
		descriptorByUnitType[a_unit.type].IDM = loadDatalinkDescriptor(unitTypeDesc.datalinks.IDM) 			
	end
	
	if unitTypeDesc.datalinks.Link16 and descriptorByUnitType[a_unit.type].Link16 == nil  then
		descriptorByUnitType[a_unit.type].Link16 = loadDatalinkDescriptor(unitTypeDesc.datalinks.Link16) 			
	end
	
	if unitTypeDesc.datalinks.Link4 and descriptorByUnitType[a_unit.type].Link4 == nil  then
		descriptorByUnitType[a_unit.type].Link4 = loadDatalinkDescriptor(unitTypeDesc.datalinks.Link4) 			
	end
	
	if unitTypeDesc.datalinks.SADL and descriptorByUnitType[a_unit.type].SADL == nil  then
		descriptorByUnitType[a_unit.type].SADL = loadDatalinkDescriptor(unitTypeDesc.datalinks.SADL)					
	end
end

local function setDefaultDatalinks(a_unit)
	if a_unit then
		loadDatalinksDescriptors(a_unit)
		a_unit.datalinks = a_unit.datalinks or {}
	
		local function getData(a_datalinksType)
			local data = {
				unit = {unitId = a_unit.unitId, index = a_unit.index, name = a_unit.name, AddPropAircraft = {}},
				group ={}
			}
			if a_unit.AddPropAircraft then
				U.recursiveCopyTable(data.unit.AddPropAircraft, a_unit.AddPropAircraft)
			end
			for k,v in base.ipairs(a_unit.boss.units) do
				if v ~= a_unit then
					local tmpAddPropAircraft ={}
					if v.AddPropAircraft then	
						U.recursiveCopyTable(tmpAddPropAircraft, v.AddPropAircraft)
					end
					base.table.insert(data.group, {unitId = v.unitId, index = v.index, name = v.name, 
								AddPropAircraft = tmpAddPropAircraft, datalinks = v.datalinks and v.datalinks[a_datalinksType]})
				end
			end

			return data 
		end	
				
		if descriptorByUnitType[a_unit.type].IDM then
			if a_unit.datalinks.IDM == nil then
				a_unit.datalinks.IDM = descriptorByUnitType[a_unit.type].IDM.getDefault(getData("IDM"))	
			end
		end
		
		if descriptorByUnitType[a_unit.type].Link16 then
			if a_unit.datalinks.Link16 == nil then
				a_unit.datalinks.Link16 = descriptorByUnitType[a_unit.type].Link16.getDefault(getData("Link16"))
			end
		end
		
		if descriptorByUnitType[a_unit.type].Link4 then
			if a_unit.datalinks.Link4 == nil then
				a_unit.datalinks.Link4 = descriptorByUnitType[a_unit.type].Link4.getDefault(getData("Link4"))
			end
		end
		
		if descriptorByUnitType[a_unit.type].SADL then
			if a_unit.datalinks.SADL == nil then
				a_unit.datalinks.SADL = descriptorByUnitType[a_unit.type].SADL.getDefault(getData("SADL"))	
			end
		end
	end
end

function getDefaultDataLink(unitType, unitID)
	local unitTypeDesc = DB.unit_by_type[unitType]
	if unitTypeDesc.datalinks == nil then
		return {}
	end

	local unitTable = { type = unitType, unitId = unitID, index = 1, boss = { units = {} } }
	table.insert(unitTable.boss.units, unitTable)
	setDefaultDatalinks(unitTable)
	return unitTable.datalinks
end

function getDefaultAddProps(unitType, unitID, groupID, uName, gName, callsignName, callsingG, callsingF, callsingW, otherUnits)
	local unitTypeDesc = DB.unit_by_type[unitType]
	local AddPropAircraft = {}
	if unitTypeDesc == nil or unitTypeDesc.AddPropAircraft == nil then
		return AddPropAircraft
	end

	otherUnits = otherUnits or {}

	local unitCallsing
	if callsignName ~= "" then
		unitCallsing = {}
		table.insert(unitCallsing, callsingG)
		table.insert(unitCallsing, callsingF)
		table.insert(unitCallsing, callsingW)
		unitCallsing["name"] = callsignName
	else
		unitCallsing = callsingG
	end

	for k, PropAircraft in pairs(unitTypeDesc.AddPropAircraft) do
		if PropAircraft.getDefault then
			local suitableUnits = {}
			for k, v in ipairs(otherUnits) do
				if v.AddPropAircraft and v.AddPropAircraft[PropAircraft.id] then
					base.table.insert(suitableUnits, {unitId = v.unitId, value = v.AddPropAircraft[PropAircraft.id], datalinks = v.datalinks})
				end
			end
			local dataTable = {unitName = uName, groupName = gName, callsign = unitCallsing, groupId = groupID, unitGroupIndex = 1, unitId = unitID, tblUnits = suitableUnits }
			AddPropAircraft[PropAircraft.id] = PropAircraft.getDefault(dataTable)
		elseif PropAircraft.defValue then
			AddPropAircraft[PropAircraft.id] = PropAircraft.defValue
		end	
	end

	return AddPropAircraft
end

function getUpdatedToDefaultAddProps(unitType, unitID, groupID, uName, gName, callsignName, callsingG, callsingF, callsingW, otherUnits)
	local unitTypeDesc = DB.unit_by_type[unitType]
	local AddPropAircraft = {}
	if unitTypeDesc == nil or unitTypeDesc.AddPropAircraft == nil then
		return AddPropAircraft
	end

	otherUnits = otherUnits or {}

	local unitCallsing
	if callsignName ~= "" then
		unitCallsing = {}
		table.insert(unitCallsing, callsingG)
		table.insert(unitCallsing, callsingF)
		table.insert(unitCallsing, callsingW)
		unitCallsing["name"] = callsignName
	else
		unitCallsing = callsingG
	end

	for k, PropAircraft in pairs(unitTypeDesc.AddPropAircraft) do
		if PropAircraft.getDefault then
			local suitableUnits = {}
			for k, v in ipairs(otherUnits) do
				if v.AddPropAircraft and v.AddPropAircraft[PropAircraft.id] then
					base.table.insert(suitableUnits, {unitId = v.unitId, value = v.AddPropAircraft[PropAircraft.id], datalinks = v.datalinks})
				end
			end
			local dataTable = {unitName = uName, groupName = gName, callsign = unitCallsing, groupId = groupID, unitGroupIndex = 1, unitId = unitID, tblUnits = suitableUnits }
			AddPropAircraft[PropAircraft.id] = PropAircraft.getDefault(dataTable)
		end	
	end

	return AddPropAircraft
end

function getDefaultRadio(unitType)
	local unitTypeDesc = DB.unit_by_type[unitType]
	return DB.getDefaultRadioFor(unitTypeDesc, true)
end

function getDefaultRopeLength(unitType)
	local unitTypeDesc = DB.unit_by_type[unitType]
	local returnValue = 15
	if unitTypeDesc.rope_data and unitTypeDesc.rope_data.lenghtDefault then
		returnValue = unitTypeDesc.rope_data.lenghtDefault
	end

	return returnValue
end

function getDefaultRadioChannels(unitType) 
    local unitTypeDesc = DB.unit_by_type[unitType]
    
    local Radio = {}
    
    if (unitTypeDesc.panelRadio ~= nil) then
		local function getModulationOfRange(a_range, a_frequency)
			if a_range then
				if a_range[1] then
					for k,v in base.pairs(a_range) do
						if v.modulation then
							if a_frequency >= v.min and a_frequency <= v.max then
								return v.modulation
							else
								return 0
							end
						end	
					end
				else	
					return 0
				end
			end	
			return 0
		end

        for k, radio in base.ipairs(unitTypeDesc.panelRadio) do
            Radio[k] = {}
            Radio[k].channels = {}
			Radio[k].modulations = {}
			Radio[k].channelsNames = {}
            if radio.channels then
                for kk, channel in base.ipairs(radio.channels) do
                    Radio[k].channels[kk] = channel.default

					if radio.range and radio.range[1] and radio.range[1].min then
						local frModulation = getModulationOfRange(radio.range, channel.default)
						Radio[k].modulations[kk] = frModulation
					end
					
					if channel.editableName == true then
						Radio[k].channelsNames[kk] = Radio[k].channelsNames[kk] or channel.name
					end
                end
            end			
        end
    end 
	
	return Radio
end

function checkAvailabilityDTC(unitType)
    local unitTypeDesc = DB.unit_by_type[unitType]
    if unitTypeDesc ~= nil and unitTypeDesc.DTC then
		return true
    else
        return false
    end
end