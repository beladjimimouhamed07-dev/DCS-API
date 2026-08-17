local base = _G

module('MissionResourcesDialog')

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
local Menu					= require('Menu')
local Static				= require('Static')

local loadoutUtils 			= require('me_loadoututils')
local Serializer 			= require('Serializer')
local ConfigHelper 			= require('ConfigHelper')
local loadLiveries 			= require('loadLiveries')
local DB					= require('me_db_api')
local gettext				= require('i_18n')
local SkinUtils				= require('SkinUtils')
local U    					= require('me_utilities')
local AmunitionParameters 	= require('me_AmunitionParameters')
local TableUtils				= require('TableUtils')
local MenuItem 					= require('MenuItem')
local UpdateManager				= require('UpdateManager')
local CargoResourcePayloadEdit	= require('CargoResourcePayloadEdit')
local CargoWrapEdit				= require('CargoWrapEdit')
local MsgWindow					= require('MsgWindow')
local exit_dialog 			= require('me_exit_dialog')
local textutil				= require('textutil')
local MenuSubItem 			= require('MenuSubItem')
local Skin 					= require('Skin')

_ = function(p)
	return gettext.translate(p)
end

local numbersByColumnIndex_	= {}
local menus_				= {}
local currentUnitType_
local columnDNameByNumbers 	= {}
local tblContainers			= {}

local blank_run = base.blank_run

local cargoWindow
local cargoWindowLoad
	
local findWidgetByName = DialogLoader.findWidgetByName
local test_cargo_data 
local test_cargo_data_load 
local unitSystem = "metric"
local colorBlack = '0x000000ff'

if blank_run then
	
	local function test_cargo_fill() 
		return {
			{name = "FIRST CARGO"	,id = 1600001 , mass = 100},
			{name = "SECOND CARGO"	,id = 1600002,  mass = 102},
			{name = "3RD CARGO"		,id = 1600003,  mass = 1000},
			{name = "4RTH CARGO"	,id = 1600004,  mass = 5000},
			{name = "Some Ammo"		,id = 1600005,  mass = 777},
			{name = "Fuel  200 L"	,id = 1600006,  mass = 100},
			{name = "Some Ammo"		,id = 1600007,  mass = 100},
			{name = "Fuel  200 L"	,id = 1600008,  mass = 100},
			{name = "Some Ammo"		,id = 1600009,  mass = 93},
			{name = "Fuel  200 L"	,id = 16000010, mass = 10},
			{name = "Some Ammo"		,id = 16000011, mass = -1},
			{name = "Fuel  200 L"	,id = 16000012				},
			{name = "Some Ammo"		,id = 16000013, mass = 1200},
			{name = "Fuel  200 L"	,id = 16000014, mass = 1020},
			{name = "Some Ammo"		,id = 16000015, mass = 122200},
			{name = "Fuel  200 L"	,id = 16000016, mass = 1040}
		}
	end
	requestWeaponCount 		= function (v) return 10 end
	setLivery 				= function (v) end
	setBoardNumber 			= function (v) end
	on_cancel				= function (v) end
	on_ok					= function (v) end
	showWindow				= function (v) end
	unload_top_cargo		= function (v) 
		if #test_cargo_data > 0 then 
			table.remove(test_cargo_data,#test_cargo_data)
		end
	end
	
	load_selected_cargo		= function (id)
		for i,o in ipairs(test_cargo_data_load) do 
			if o.id == id then 
				table.remove(test_cargo_data_load,i)
				return
			end
		end
	end
	
	get_actual_cargo_data 	= function (v) 
		if not test_cargo_data or  #test_cargo_data == 0 then 
			test_cargo_data = test_cargo_fill()
		end
		return test_cargo_data
	end

	get_nearby_cargo = function (v) 
		if not test_cargo_data_load or  #test_cargo_data_load == 0 then 
			test_cargo_data_load = test_cargo_fill()
		end
		return test_cargo_data_load
	end
	
	getModelTime = function ()  return 0 end
	
	is_dynamic_cargo_available = function ()  return true end
end

local cdata = 
{
	aircraftName 		= _('A-10C'),
	chaff 				= _('CHAFF'),
	flare 				= _('FLARE'),
	fuel 				= _('FUEL'),
	toWeight 			= _('TO weight, %'),
	toWeightMax 		= _('TO weight max'),
	gunAmmoType 		= _('AMMO_TYPE'),
	gunAmmo 			= _('GUN AMMO'),
	toWeightCurrent 	= _('TO weight current'),
	payload 			= _('Payload'),
	
	empty 				= _('Empty'),
	cancel 				= _("CANCEL"),
	ok	 				= _("OK"),
	totalWeight 		= _("TOTAL WEIGHT"),
	maximumWeight 		= _("MAXIMUM WEIGHT"),
	selectLoadout		= _("SELECT LOADOUT:"),
	kg					= _("KG"),
	clear				= _('REMOVE PAYLOAD'),
	available			= _('(avail: %5d) : %s'),
	not_available_weapon = _('NOT AVAILABLE : %s'),
	selectLivery		= _('SELECT LIVERY'),
	selectBoardNumber	= _('BOARD NUMBER'),
	missionResources	= _('MISSION RESOURCES'),
	missionPayload 		= _('Mission payload'),
	save 				= _('SAVE'),
	copy 				= _('COPY'),
	delete 				= _('DELETE'),
	rename 				= _('RENAME'),
	enter_payload_name 	= _('Enter payload name:'),
	new_payload 		= _('New Payload'),
	copy_ 				= _('Copy '),
	cargo 				= _('Cargo'),
	cargoUnload			= _('UNLOAD CARGOS'),
	cargoLoad			= _('LOAD CARGOS'),
	unload				= _('UNLOAD'),
	load				= _('LOAD'),
	tip_makeNewPackage	= _('make new package'),
	tip_openCargoLoadDialog		= _('Load nearby cargos to cargo bay'),
	tip_openCargoUnloadDialog	= _('Unload cargos from the cargo bay'),
	searchHint 			= _('Search...'),

}

local function process_on_off(process,value)
	if process then
		if value then 
			UpdateManager.add(process)
		else
			UpdateManager.delete(process)
		end	
	end
end


local function cargoWindowOnOff(dlg,value)
	if not dlg or dlg:isVisible() == value  then 
		return
	end
	dlg:setVisible(value)
	process_on_off(dlg.process,value)
end

local function fillCargoGrid(dlg,cargoData)
	local cargos  = dlg.gridCargo

	if cargos:getColumnCount() < 2 then
		local w, h = cargos:getSize() 
		
		local full      = w - 16 
		local weight    = 64
		cargos:insertColumn(full - weight)
		cargos:insertColumn(weight)
	end

	if not cargoData then
		cargos:setRowCount(0)
		return
	end
	local sz = #cargoData
	if  cargos:getRowCount() ~= sz then
		cargos:setRowCount(sz)
	end
	for i,o in ipairs(cargoData) do 
		local cell = cargos:getCell(0,i - 1)
		if not cell then 
			cell = dlg.txtTemplate:clone()
			cell:setVisible(true)
			cargos:setCell(0,i - 1,cell)
		end
		cell.cargo_id = o.id
		cell:setText(o.name)
		
		local mass = o.mass or 0
		
		local cell_mass = cargos:getCell(1,i - 1)

		if  mass > 0 then
			if not cell_mass then 
				local tmpl = dlg.txtTemplateWeight or dlg.txtTemplate
				cell_mass =  tmpl:clone()
				cargos:setCell(1,i - 1,cell_mass)
			end
			local units = U.weightUnits[unitSystem] or { coeff = 1 / 0.45359237 ,name = "lbs" }
			local value = math.ceil(mass * units.coeff);
			cell_mass:setVisible(true)
			cell_mass:setText(tostring(value).. units.name)
		elseif cell_mass then 
			cell_mass:setVisible(false)
		end
	
		if o.selected then 
			cargos:selectRow(i - 1)
		end 
	end
end

local function updateCargo()
	local dlg		 = cargoWindow
	fillCargoGrid(dlg,get_actual_cargo_data())
	dlg.gridCargo:selectRow(dlg.gridCargo:getRowCount() - 1)
end

local function updateCargoLoad()
	local cargos_new = get_nearby_cargo()
	if cargos_new then 
		local cargos    = cargoWindowLoad.gridCargo
		local cargo_row = cargos:getSelectedRow()
		if cargo_row > -1 then  
			local cell = cargos:getCell(0,cargo_row)
			if  cell and cell.cargo_id then
				for i,o in ipairs(cargos_new) do
					if	o.id == cell.cargo_id then 
						o.selected = true
					end
				end
			end
		end
	end
	fillCargoGrid(cargoWindowLoad,cargos_new)
end

local function initCargoWindow(wnd,parent)
	cargoWindow	= wnd
	wnd.txtTemplate:setVisible(false)
	if  wnd.txtTemplateWeight then 
		wnd.txtTemplateWeight:setVisible(false)
	end
	if parent then 
		local x_base, y_base, w_base, h_base = window:getBounds()
		wnd:setPosition(x_base + w_base + 8,y_base)
	end
	wnd.gridCargo = findWidgetByName(wnd.containerMain, 'gridCargo')
	wnd.unload    = findWidgetByName(wnd.containerMain, 'btnUnload')
	wnd.unload.onChange = function (self)
		unload_top_cargo()
		updateCargo()
	end
	function wnd:onClose()
		process_on_off(cargoWindow.process,false)
	end	
	wnd.process = function ()
		local dlg = cargoWindow
		if not dlg or not dlg:isVisible() then 
			return
		end
		local t = getModelTime()
		if not dlg.last_time or t - dlg.last_time > 0.5 then
			dlg.last_time = t
			updateCargo()
		end
	end
end

local function updateCargoWindowLoad(wnd)
	local make_new  = findWidgetByName(wnd.containerMain, 'btnMakeNew')
	if make_new then
		if is_dynamic_cargo_available() then
			make_new:setVisible(true)
			make_new.onChange = function (self)
				CargoResourcePayloadEdit.make_new()
			end
		else	
			make_new:setVisible(false)
		end
	end
end

local function initCargoWindowLoad(wnd,parent)
	cargoWindowLoad	= wnd
	wnd.txtTemplate:setVisible(false)	
	if  wnd.txtTemplateWeight then 
		wnd.txtTemplateWeight:setVisible(false)
	end
	if parent then 
		local x_base, y_base = window:getPosition()
		local l_w	, l_h    = wnd:getSize()
		wnd:setPosition(x_base - l_w - 8,y_base)
	end
	wnd.gridCargo 	= findWidgetByName(wnd.containerMain, 'gridCargo')
	wnd.load   	  	= findWidgetByName(wnd.containerMain, 'btnLoad')
	wnd.load.onChange = function (self)
		local cargo_row = wnd.gridCargo:getSelectedRow()
		if cargo_row < 0 then 
			return 
		end
		local cell = wnd.gridCargo:getCell(0,cargo_row)
		if not cell or not cell.cargo_id then
			return 
		end

		load_selected_cargo(cell.cargo_id)
		updateCargoLoad()
		local actual_rows = wnd.gridCargo:getRowCount()
		if cargo_row < actual_rows then 
			wnd.gridCargo:selectRow(cargo_row)
		else
			wnd.gridCargo:selectRow(actual_rows - 1)
		end
	end

	updateCargoWindowLoad(wnd)	
	
	wnd.gridCargo.onMouseDown = function(self, x, y, button)
		if 1 == button then
			local col, row = self:getMouseCursorColumnRow(x, y)
			if  row > -1 then 
				self:selectRow(row)
			end
		end
	end	 
	function wnd:onClose()
		process_on_off(cargoWindowLoad.process,false)
	end	
	wnd.process = function ()
		local dlg = cargoWindowLoad
		if not dlg or not dlg:isVisible() then 
			return
		end
		local t = getModelTime()
		if not dlg.last_time or t - dlg.last_time > 0.5 then
			dlg.last_time = t
			updateCargoLoad()
		end
	end
end

local function C130_CARGO_UI_CALL()
	dispatchCommand(3001,48.3750000)
end

local function toggleCargo(parent)
	if currentUnitType_ == 'C-130J-30' then 
		C130_CARGO_UI_CALL()
		return
	end
	if 	cargoWindow then
		if  cargoWindow:isVisible() then
			cargoWindowOnOff(cargoWindow,false)
			return false
		end
	else  
		initCargoWindow(DialogLoader.spawnDialogFromFile('Scripts/UI/CargoUnloadDialog.dlg', cdata),parent)
	end
	cargoWindowOnOff(cargoWindow,true)
	updateCargo()
	return cargoWindow:isVisible()
end

local function toggleCargoLoad(parent)
	if currentUnitType_ == 'C-130J-30' then 
		C130_CARGO_UI_CALL()
		return
	end
	if 	cargoWindowLoad then
		if  cargoWindowLoad:isVisible() then
			cargoWindowOnOff(cargoWindowLoad,false)
			CargoWrapEdit.show(false)
			return false
		end
	else  
		initCargoWindowLoad(DialogLoader.spawnDialogFromFile('Scripts/UI/CargoLoadDialog.dlg', cdata),parent)
	end
	cargoWindowLoad.last_time = getModelTime()
	updateCargoWindowLoad(cargoWindowLoad)
	cargoWindowOnOff(cargoWindowLoad,true)
	updateCargoLoad()
	
	CargoWrapEdit.show(cargoWindowLoad:isVisible())
	
	return cargoWindowLoad:isVisible()
end



local function check_pylon_not_empty(clsid)
	return clsid ~= nil and 
		   clsid ~= ""
end

function updateUnitSystem(new_system)
	unitSystem = new_system	
	CargoResourcePayloadEdit.updateUnitSystem(new_system)
	if  stcToWeightCurrentValueUnit then 
		stcToWeightCurrentValueUnit:setUnitSystem(new_system)
	end
	if  stcToWeightMaxValueUnit then
		stcToWeightMaxValueUnit:setUnitSystem(new_system)
	end
end

function updateGrid()
	gridPayloads:clear()

	local pylonsCount = loadoutUtils.getPylonsCount(currentUnitType_)
	
	if pylonsCount < 1 then 
		gridPayloads:setVisible(false)
		updateWeight()
		
		return
	else
		gridPayloads:setVisible(true)
	end
	
	local gridSkin				= gridPayloads:getSkin()
	local columnWidth			= loadoutUtils.columnWidth
	local x, y, w_g, h			= gridPayloads:getBounds()
	local x_p, y_p, w_p, h_p	= stcImage:getBounds()
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
	local names	= loadoutUtils.getPylonsNames(currentUnitType_)
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
		
		if check_pylon_not_empty(pylon.clsid) then
			container = loadoutUtils.createPylonCell(pylon.clsid, column, row, gridPayloads, pylon.count
					, cdata.missionPayload, columnDNameByNumbers[pylonNumber], pylonNumber, callbackSettingsOk, callbackAmunitionParameters, pylon.settings)	
			tblContainers[pylonNumber] = container	
		end
		
		gridPayloads:setCell(column, row, container)
	end

	updateWeight()
end

function callbackAmunitionParameters(self)
	local pylon 		= currentPayload.pylons[self.data.pylonNumber]
	local tmpSettings 	= pylon.settings or loadoutUtils.getLauncherSettingsDefaultValues(self.data.launcherCLSID)	

	local settingsDef 			= loadoutUtils.getLauncherSettings(self.data.launcherCLSID)
	local requiredPylonNumber 	= loadoutUtils.getRequiredPylonNumber(self.data.pylonNumber, currentUnitType_, self.data.launcherCLSID)

	AmunitionParameters.show(true, tmpSettings, settingsDef, { pylon = self.data.pylonDisplayName, launcher = (loadoutUtils.getLauncherName(self.data.launcherCLSID) or ""),
				payload = self.data.namePayload or ""},
						self.data.namePayload, self.data.pylonNumber, callbackSettingsOk, self.data.container, requiredPylonNumber, callbackSettingsCopy)
end

function callbackSettingsOk(a_namePayload, a_pylonNumber, a_curSettings, a_container, a_tooltip, a_requiredPylonNumber, a_copyOption)
	local pylon = currentPayload.pylons[a_pylonNumber]
	pylon.settings = {}
	TableUtils.recursiveCopyTable(pylon.settings, a_curSettings)

	a_container:setTooltipText(a_container.baseTooltipText..a_tooltip)

	if a_copyOption then
		loadoutUtils.copySettingsToOtherPylons(a_pylonNumber, currentPayload.pylons, a_copyOption, a_tooltip, tblContainers, a_requiredPylonNumber)
	end
end

function callbackSettingsCopy(a_typeCallback, a_namePayload, a_pylonNumber, a_value, a_idSetting)
	local curPylon = currentPayload.pylons[a_pylonNumber]
	local weapon,count = base.get_weapon_and_count_from_launcher(curPylon.clsid)
	
	for k, pylon in base.pairs(currentPayload.pylons) do
		local weaponP,countP = base.get_weapon_and_count_from_launcher(pylon.clsid)
		
		if TableUtils.compareTables(weaponP, weapon) then	
			if pylon.settings == nil then
				pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(pylon.clsid)
			end	
			pylon.settings[a_idSetting] = a_value
			
			local settingsDef = loadoutUtils.getLauncherSettings(pylon.clsid)
			local tmpTooltip = ""
			if settingsDef then
				tmpTooltip = AmunitionParameters.getTooltipSettings(pylon.settings, settingsDef)
			end
			
			tblContainers[k]:setTooltipText(tblContainers[k].baseTooltipText..tmpTooltip)
		end			
	end
end

local function updatePylonCell(menuItem)
	for columIndex, pylonNumber in pairs(numbersByColumnIndex_) do
			local pylon		= currentPayload.pylons[pylonNumber] or {}
			local rowIndex	= 0
			local container

			if check_pylon_not_empty(pylon.clsid) then
				container = loadoutUtils.createPylonCell(pylon.clsid, columIndex, rowIndex, gridPayloads, pylon.count
							, cdata.missionPayload, columnDNameByNumbers[pylonNumber], pylonNumber, callbackSettingsOk, callbackAmunitionParameters, pylon.settings)
				tblContainers[pylonNumber] = container	
			end
			
			gridPayloads:setCell(columIndex, rowIndex, container)
			updateWeight()
	end
end

local function init(wnd)
	window 		  = wnd
	window:centerWindow()

	containerMain	= window.containerMain
	
	gridHeaderCell	= findWidgetByName(containerMain, 'gridHeaderCell')
	
	stcImage		= findWidgetByName(containerMain, 'stcImage')
	stcImageSkin	= stcImage:getSkin()
	stcImageSkinPicture = stcImageSkin.skinData.states.released[1].picture

	txtFlare		= findWidgetByName(containerMain, 'txtFlare'		)
	txtChaff		= findWidgetByName(containerMain, 'txtChaff'		)
	txtGunAmmo		= findWidgetByName(containerMain, 'txtGunAmmo'		)
	stcGunAmmoType	= findWidgetByName(containerMain, 'stcGunAmmoType'	)
	txtFuel			= findWidgetByName(containerMain, 'txtFuel'			)

	sldrFlare		= findWidgetByName(containerMain, 'sldrFlare'       )
	sldrChaff		= findWidgetByName(containerMain, 'sldrChaff'       )

	check_chaff_flare_slots = function (user_enter_flare)
		if currentUnit.passivCounterm ~= nil then
			local chaffSlots = sldrChaff:getValue() * currentUnit.passivCounterm.chaff.chargeSz
			local flareSlots = sldrFlare:getValue() * currentUnit.passivCounterm.flare.chargeSz
			if currentUnit.passivCounterm.SingleChargeTotal < chaffSlots + flareSlots then
				function limitOther(slotsCount, chargeSz, step)
					local newCount = math.floor((currentUnit.passivCounterm.SingleChargeTotal - slotsCount) / chargeSz)
					return step * math.floor(newCount / step)
				end
				
				if user_enter_flare then
					sldrChaff:setValue(limitOther(flareSlots, currentUnit.passivCounterm.chaff.chargeSz, sldrChaff:getStep()))
				else
					sldrFlare:setValue(limitOther(chaffSlots, currentUnit.passivCounterm.flare.chargeSz, sldrFlare:getStep()))
				end
			end
		end
		
		onUpdateWeight()
		return
	end

	sldrFlare.onChange = function () check_chaff_flare_slots(true)	 end
	sldrChaff.onChange = function () check_chaff_flare_slots(false) end

	sldrGunAmmo			= findWidgetByName(containerMain, 'sldrGunAmmo'			)
	sldrGunAmmo.onChange = onUpdateWeight

	cmbGunAmmoType		= findWidgetByName(containerMain, 'cmbGunAmmoType'		)

	sldrFuel			= findWidgetByName(containerMain, 'sldrFuel'			)
	sldrFuel.onChange 	= onUpdateWeight

	txtFlareCurrent		= findWidgetByName(containerMain, 'txtFlareCurrent'		)
	txtChaffCurrent		= findWidgetByName(containerMain, 'txtChaffCurrent'	    )
	txtGunAmmoCurrent	= findWidgetByName(containerMain, 'txtGunAmmoCurrent'	)
	txtFuelCurrent		= findWidgetByName(containerMain, 'txtFuelCurrent'	    )
	
	selectLivery		= findWidgetByName(containerMain, 'listBoxLivery'		)
	txtLivery			= findWidgetByName(containerMain, 'txtLivery'			)
	selectBoardNumber	= findWidgetByName(containerMain, 'editBoxBoardNumber'	)
	txtBoardNumber		= findWidgetByName(containerMain, 'txtBoardNumber'		)
	
	selectLivery.onChange 		= function(self,item)		if item and item.itemId then	setLivery(item.itemId)	end	end
	selectBoardNumber.onChange 	= function (self) 	setBoardNumber(self:getText()) end

	labelWeightCurrent	= findWidgetByName(containerMain, 'labelWeightCurrent'	)
	labelWeightMax		= findWidgetByName(containerMain, 'labelWeightMax'		)
	stcToWeightCurrentValue = findWidgetByName(containerMain, 'stcToWeightCurrentValue')
	stcToWeightMaxValue	= findWidgetByName(containerMain, 'stcToWeightMaxValue'	)
	txtUnitsCur			= findWidgetByName(containerMain, 'txtUnitsCur'			)
	
	stcToWeightCurrentValueUnit 	= U.createUnitWidget(txtUnitsCur, stcToWeightCurrentValue, U.weightUnits)
	stcToWeightMaxValueUnit 		= U.createUnitWidget(nil		, stcToWeightMaxValue, U.weightUnits)

	txtPreset			= findWidgetByName(containerMain, 'txtPreset'			)
	listBoxPreset		= findWidgetByName(containerMain, 'listBoxPreset'		)

	btnOk				= findWidgetByName(containerMain, 'btnOk'				)
	btnOk.onChange 		= onButtonOk

	btnCargoUnload				= findWidgetByName(containerMain, 'btnCargo'				)
	btnCargoUnload.onChange 	= function(self)
		toggleCargo(window)
	end
	
	btnCargoLoad			= findWidgetByName(containerMain, 'btnCargo2'				)
	btnCargoLoad.onChange 	= function(self)
		toggleCargoLoad(window)
	end

	btnCancel			= findWidgetByName(containerMain, 'btnCancel'			)
	btnCancel.onChange 	= onButtonCancel

	function window:onClose()
		btnCancel:onChange() 
	end	
	
	window:addHotKeyCallback('escape', function() onButtonCancel(window)  end)

	gridPayloads = findWidgetByName(containerMain, 'gridPayloads')
	
	function gridPayloads:onMouseDown(x, y, button)
		onPylonMouseDown(x, y, button)
	end

	loadoutUtils.init(	findWidgetByName(containerMain, 'staticPayloadCell'	):getSkin(), 
						findWidgetByName(containerMain, 'staticPylonCaption'):getSkin(), 
						findWidgetByName(containerMain, 'panelPylonCell'	):getSkin(),
						findWidgetByName(containerMain, 'bFuse'				):getSkin())
						
	function containerMain.containerButtons.buttonSave:onChange()
		onSave()
	end

	buttonCopy = containerMain.containerButtons.buttonCopy
	function buttonCopy:onChange()
		onCopy()
	end

	buttonDelete = containerMain.containerButtons.buttonDelete
	function buttonDelete:onChange()
		onDel()
	end

	buttonRename = containerMain.containerButtons.buttonRename
	function buttonRename:onChange()
		onRename()
	end
end

function create()
	init(DialogLoader.spawnDialogFromFile('./Scripts/UI/MissionResourcesDialog.dlg', cdata))
end

function onUpdateWeight(self, value)
	updateWeight()
end

function on_mission_stop()
	menus_	= {}
	cargoWindowOnOff(cargoWindow,false)
	cargoWindowOnOff(cargoWindowLoad,false)
	CargoResourcePayloadEdit.show(false)
	CargoWrapEdit.show(false)
end

local function pass_ME_restricted(station,clsid)
	local p = currentPayload.pylons[station] 
	if not p then 
		print("something wrong - not found pylon "..tostring(station))
		return true
	end
	local restricted = p.restricted
	if not restricted then 
		return true
	end
	for i,o in ipairs(restricted) do 
		if o == clsid then 
			return false
		end
	end
	return true
end

local function loadout_is_authorized_for_station(station,clsid)
	if not pass_ME_restricted(station,clsid) then 
		return false
	end
	local pylon = currentUnit.Pylons[station]
	for k,launcher in pairs(pylon.Launchers) do
		if launcher.CLSID == clsid then 
			return true
		end
	end
	return false
end

local function passCivilFilter(CLSID)
	return loadoutUtils.passCivilFilter(isCivil,CLSID)
end


function onButtonOk(self)
	if currentUnit then
		local ammo_type = 0 
		if currentUnit.ammo_type then
			local res = cmbGunAmmoType:getSelectedItem()
			if res then
				ammo_type = res.index
			end
		end

		local outData = 
		{
			numChaff 	= tonumber(sldrChaff:getValue()),
			numFlare 	= tonumber(sldrFlare:getValue()),
			currentAmmo = tonumber(sldrGunAmmo:getValue()),
			ammoType 	= ammo_type,
			fuel 		= sldrFuel:getValue() / 100 * currentUnit.MaxFuelWeight,
			pylons 		= currentPayload.pylons or {},
		}

		on_ok(outData)-- C ++ call
	end
	show(false)
end

function onButtonCancel(self)
	on_cancel()-- C ++ call
	show(false)
end

function show(state)
	window:setVisible(state)

	if state == false then
		showWindow(false) -- C call			
	end
end

function isVisible()
	return window:isVisible()
end

function get_max_chaff()
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.chaff.chargeSz ~= nil and 
		   currentUnit.passivCounterm.chaff.chargeSz > 0 then
		   return currentUnit.passivCounterm.SingleChargeTotal / currentUnit.passivCounterm.chaff.chargeSz
		end
	end
	
	return 0
end

function get_max_flare()
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.flare.chargeSz ~= nil and 
		   currentUnit.passivCounterm.flare.chargeSz > 0 then
		   return currentUnit.passivCounterm.SingleChargeTotal / currentUnit.passivCounterm.flare.chargeSz
		end
	end
	
	return 0
end

local function createNewNameWindow()
	local w = 400
	local h = 100

	local result = DialogLoader.spawnDialogFromFile('MissionEditor/modules/dialogs/me_loadout_payload_name.dlg', cdata)

	function result.buttonCancel:onChange()
		result:close()
	end
	
	return result
end

local function showNewNameWindow(name, onOkButtonFunc)
	if not newNameWindow then
		newNameWindow = createNewNameWindow()
		
		newNameWindow.onReturn = function()
			newNameWindow.buttonOk.onChange()
		end
		
		newNameWindow:addHotKeyCallback('escape', newNameWindow.buttonCancel.onChange)
		newNameWindow:addHotKeyCallback('return', newNameWindow.onReturn)
	end

	newNameWindow.buttonOk.onChange = onOkButtonFunc
	newNameWindow.editBoxName:setText(name)

	newNameWindow:centerWindow()
	exit_dialog.setNeedHideHandler("newNameWindowSim", newNameWindow)
	newNameWindow:setVisible(true) -- выход из этой функции произойдет после закрытия окна
	exit_dialog.setNeedHideHandler("newNameWindowSim", nil)
	
end

local function isCurrentPayloadEmpty()
	for pylonNumber, pylon in pairs(currentPayload.pylons) do
		if check_pylon_not_empty(pylon.clsid) then
			return false
		end
	end
	
	return true
end

local function updatePayloadActionsButtons()
	local item = listBoxPreset:getSelectedItem()
	local isVisible = false
	if item and item ~= listBoxPreset:getItem(0) then
		isVisible = true
	end
	
	buttonCopy:setVisible(isVisible)
	buttonDelete:setVisible(isVisible)
	buttonRename:setVisible(isVisible)
end

local function setPayloadpresetByName(presetName)
	for i = 0, listBoxPreset:getItemCount() - 1, 1 do
		local item = listBoxPreset:getItem(i)
		if item.name == presetName then
			listBoxPreset:selectItem(item)
			updatePayloadActionsButtons()
		end
	end
end

local updatePayloadPresets

function onSave()
	-- если юнит не имеет точек подвески, то ничего не делаем
	if isCurrentPayloadEmpty() then
		return
	end

	local function onChange_()		
		local newPayloadName = newNameWindow.editBoxName:getText()
		if newPayloadName and newPayloadName ~= "" and loadoutUtils.isPayloadNameValid(newPayloadName) then
			loadoutUtils.addPayload(currentUnitType_, newPayloadName)
			loadoutUtils.addTaskToPayload(currentUnitType_, newPayloadName, -1)
			for i, o in base.ipairs(currentPayload.pylons) do
				if o.count > 0 then
					loadoutUtils.setPylonLauncher(currentUnitType_, newPayloadName, i, o.clsid, o.settings or loadoutUtils.getLauncherSettingsDefaultValues(o.clsid))
				end
			end

			newNameWindow:setVisible(false)
			updatePayloadPresets()
			setPayloadpresetByName(newPayloadName)
		end
	end

	-- показываем окно выбора имени подвески
	showNewNameWindow(cdata.new_payload, onChange_)
end

function onCopy()
	local function onChange_()
		local newPayloadName = newNameWindow.editBoxName:getText()
		local item = listBoxPreset:getSelectedItem()
		if item and item ~= listBoxPreset:getItem(0) and loadoutUtils.isPayloadNameValid(newPayloadName) then
			loadoutUtils.copyPayload(currentUnitType_, item.preset_link.name, newPayloadName)
			loadoutUtils.addTaskToPayload(currentUnitType_, newPayloadName, -1)
			newNameWindow:setVisible(false)
			updatePayloadPresets()
			setPayloadpresetByName(newPayloadName)
		end 
	end
	
	showNewNameWindow(cdata.copy_ .. listBoxPreset:getSelectedItem().preset_link.name or "", onChange_)
end

function onDel()
	local item = listBoxPreset:getSelectedItem()
	if item then
		loadoutUtils.deletePayload(currentUnitType_, item.preset_link.name)
		updatePayloadPresets()
		listBoxPreset:selectItem(listBoxPreset:getItem(0))
		updatePayloadActionsButtons()
	end
end

function onRename()
	local item = listBoxPreset:getSelectedItem()
	if item then
		local function onChange_()
			local newPayloadName = newNameWindow.editBoxName:getText()
			local item = listBoxPreset:getSelectedItem()
			if item and item ~= listBoxPreset:getItem(0) and loadoutUtils.isPayloadNameValid(newPayloadName) then
				loadoutUtils.renamePayload(currentUnitType_, item.preset_link.name, newPayloadName)
				newNameWindow:setVisible(false)
				updatePayloadPresets()
				setPayloadpresetByName(newPayloadName)
			end 
		end
		
		showNewNameWindow(listBoxPreset:getSelectedItem().preset_link.name or "", onChange_)
	end
end

function updatePayloadPresets()
	listBoxPreset:clear()
	listBoxPreset:setVisible(true)
	listBoxPreset:selectItem()
	listBoxPreset.onChange = function(self,item)
		if not item then
			return
		end

		local unitDef = DB.unit_by_type[currentUnitType_]
			
		--clear all pylons
		for i,o in pairs(currentPayload.pylons) do
			o.clsid = ""
			o.count = 0
			o.settings = nil
		end

		local forcedPylons 
		if AddPropAircraft and unitDef.AddPropAircraft then
			for k,v in base.pairs(unitDef.AddPropAircraft) do 				
				for kk, vv in base.pairs(AddPropAircraft) do
					if v.id == kk then
						if v.forcedPylons and v.forcedPylons[vv] then
							for kkk, vvv in base.pairs(v.forcedPylons[vv]) do
								forcedPylons 		= forcedPylons or {}
								forcedPylons[kkk] 	= vvv
							end
						end
					end
				end	
			end
		end		
	
		if item.preset_link then
			for i,o in pairs(item.preset_link.pylons) do

				local CLSID = o.CLSID
				local proto	= unitDef.Pylons[o.num]
				if 	proto and proto.replace_deprecated_loadout_with and CLSID then 
					local replacement 	= proto.replace_deprecated_loadout_with[CLSID]
					if replacement then
						CLSID = replacement
					end
				end

				local pylon = currentPayload.pylons[o.num]
				if pylon then
					if loadout_is_authorized_for_station(o.num,CLSID) and passCivilFilter(CLSID) then
						if forcedPylons   and forcedPylons[o.num] then
							pylon.clsid		= forcedPylons[o.num]
							pylon.count		= 1
						else
							pylon.clsid		= CLSID
							pylon.count		= 1

							if o.settings then
								pylon.settings	= {}
								TableUtils.recursiveCopyTable(pylon.settings, o.settings)
							else
								pylon.settings = loadoutUtils.getLauncherSettingsDefaultValues(CLSID)
							end
						end
					else
						local disp_name = base.get_weapon_display_name_by_clsid(CLSID) or ""
						print(currentUnitType_ .. " preset " .. item.preset_link.name .. 
							  ":unauthorized "..  disp_name .. " ("..CLSID..") "   ..
							  " for station " ..  tostring(o.num))
					end
				end
			end

			local incompPylStr = loadoutUtils.getIncompatiblePylonsStr(item.preset_link.pylons)

			if incompPylStr ~= nil then
				MsgWindow.warning(incompPylStr, _("WARNING"), cdata.ok):show()
			end
		end

		updatePayloadActionsButtons()

		updateGrid()
	end

	local payloads = loadoutUtils.getUnitPayloads(currentUnitType_)

	listBoxPreset:newItem(cdata.empty)
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
			local comboItem = listBoxPreset:newItem(name)
			comboItem.name = name
			comboItem.preset_link = o
		end
	end
	
	updatePayloadActionsButtons()
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
	local pylon					= currentUnit.Pylons[pylonNumber]
	local launcherCategories	= {}
	local clean					= {}
	local categoryNames			= {}
	
	local forcedPylons 
	if AddPropAircraft then
		local unitDef = DB.unit_by_type[currentUnitType_]
		if unitDef.AddPropAircraft then
			for k,v in base.pairs(unitDef.AddPropAircraft) do 				
				for kk, vv in base.pairs(AddPropAircraft) do
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
		local CLSID			= launcher.CLSID
		local category		= loadoutUtils.getLauncherCategory(CLSID)
		local categoryName	= loadoutUtils.getLauncherNames(CLSID)
		
		if category ~= nil then				
			if categoryName == "CLEAN" then
				clean[category] = CLSID
			else
				if forcedPylons == nil or forcedPylons[pylonNumber] == nil then 
					local pass_filter = passCivilFilter(CLSID) and pass_ME_restricted(pylonNumber,CLSID)
					if pass_filter then						
						if launcherCategories[category] == nil then
							launcherCategories[category] = {}
							table.insert(categoryNames, category)
						end
																
						local subCatDispName
						local tmpWsTypeOfWeapon = loadoutUtils.getLauncherWsTypeOfWeapon(CLSID)
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
							clsid			= CLSID, 
							name			= base.get_weapon_display_name_by_clsid(CLSID),
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
	
	if pass_ME_restricted(pylonNumber, '<CLEAN>') ~= false then
		-- добавляем в меню элемент для удаления пилона
		for categoryName, launcherCLSID in pairs(clean) do
			menuItem				= menu:newItem(categoryName)
			menuItem.pylonNumber	= pylonNumber
			menuItem.launcherCLSID	= launcherCLSID
			menuItem.clean			= true			
		end
	end
	
	return menu
end

local function getPylonMenu(create) 
	local id 	= currentUnitType_ ..'_'..tostring(currentUnitMissionID)
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

function update(params)
	currentPayload			= params
	currentUnitType_		= params.unitType
	currentUnitMissionID	= params.missionID
	currentUnit				= DB.unit_by_type[currentUnitType_]
	isCivil					= params.isCivil
	AddPropAircraft			= params.AddPropAircraft
	if not currentPayload.emptyWeight and  currentUnit then 
		   currentPayload.emptyWeight = currentUnit.EmptyWeight
	end

	stcImageSkinPicture.file = currentUnit.Picture
	if AddPropAircraft and AddPropAircraft.modification then
		stcImageSkinPicture.file = AddPropAircraft.modification..".png"	
	end
	
	stcImage:setSkin(stcImageSkin)
	
	local allow_boardnumber = true
	local allow_livery      = true
	
	
	if not blank_run then
		if not  net then 
			net	= require('net')
		end
		if net then
			local server_settings = net.get_server_settings()
			if  server_settings  then
				allow_boardnumber	= server_settings.advanced.allow_change_tailno
				allow_livery		= server_settings.advanced.allow_change_skin
			end
		end	
	end
	
	--------------------------------------------------------
	selectBoardNumber	:setVisible(allow_boardnumber)
	txtBoardNumber		:setVisible(allow_boardnumber)
	--------------------------------------------------------
	selectLivery		:setVisible(allow_livery)
	txtLivery			:setVisible(allow_livery)
	--------------------------------------------------------

	m_chaff = get_max_chaff()
	m_flare = get_max_flare()

	local ChaffNoEdit	= false
	local CMDS_Edit		= true
	
	local chaffCount = params.numChaff
	local flareCount = params.numFlare
	
	if currentUnit.passivCounterm ~= nil then
		if currentUnit.passivCounterm.ChaffNoEdit ~= nil then
			ChaffNoEdit = currentUnit.passivCounterm.ChaffNoEdit
		end

		if currentUnit.passivCounterm.CMDS_Edit ~= nil then
			CMDS_Edit = currentUnit.passivCounterm.CMDS_Edit
		end

		if CMDS_Edit == false and currentUnit.passivCounterm.chaff.default ~= nil then
			chaffCount = currentUnit.passivCounterm.chaff.default
		end

		if CMDS_Edit == false and currentUnit.passivCounterm.flare.default ~= nil then
			flareCount = currentUnit.passivCounterm.flare.default
		end
	end

	local chaffVisible = m_chaff > 0 and not ChaffNoEdit
	local flareVisible = m_flare > 0

	txtChaff:setVisible(chaffVisible)
	txtChaffCurrent:setVisible(chaffVisible)
	sldrChaff:setVisible(chaffVisible)
	sldrChaff:setEnabled(CMDS_Edit)
	sldrChaff:setRange(0, chaffVisible and m_chaff or 100)

	txtFlare:setVisible(flareVisible)
	txtFlareCurrent:setVisible(flareVisible)
	sldrFlare:setVisible(flareVisible)
	sldrFlare:setEnabled(CMDS_Edit)
	sldrFlare:setRange(0, flareVisible and m_flare or 100)

	sldrChaff:setValue(chaffCount)
	sldrFlare:setValue(flareCount)

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
	
	sldrChaff:setStep(chaffStep)
	sldrFlare:setStep(flareStep)
	
	if chaffStep > 1 then
		sldrChaff:setPageStep(chaffStep)
	end
	if flareStep > 1 then
		sldrFlare:setPageStep(flareStep)
	end

	sldrGunAmmo:setRange(0, 100)
	if params.maximumAmmo > 0 then
		sldrGunAmmo:setValue(math.ceil(params.currentAmmo/params.maximumAmmo*100))
		sldrGunAmmo:setVisible(true)
		txtGunAmmo:setVisible(true)
		txtGunAmmoCurrent:setVisible(true)

		if currentUnit and currentUnit.ammo_type then
			cmbGunAmmoType:setVisible(true)
			stcGunAmmoType:setVisible(true)
			cmbGunAmmoType:clear()
			local selectedItem

			local ammoType = params.ammoType or 0
			for i = 1, #currentUnit.ammo_type do
				local comboItem = cmbGunAmmoType:newItem(currentUnit.ammo_type[i])
				
				comboItem.index = i - 1
				
				if comboItem.index == ammoType then
					selectedItem = comboItem
				end
			end
			cmbGunAmmoType:selectItem(selectedItem)
		else
			cmbGunAmmoType:setVisible(false)
			stcGunAmmoType:setVisible(false)
		end
	else
		sldrGunAmmo:setValue(0)
		sldrGunAmmo:setVisible(false)
		txtGunAmmo:setVisible(false)
		txtGunAmmoCurrent:setVisible(false)

		cmbGunAmmoType:setVisible(false)
		stcGunAmmoType:setVisible(false)
	end

	local v = math.floor(0.5 + params.numFuel/currentUnit.MaxFuelWeight*100)
	sldrFuel:setValue(v)
 
	updateGrid()
	getPylonMenu(true)
	updatePayloadPresets()
	
	if  selectBoardNumber and params.boardNumber  then
		selectBoardNumber:setText(params.boardNumber)
	end
	
	if  selectLivery then
	    selectLivery:clear()	
		local selected
		local schemes = loadLiveries.loadSchemes(params.liveryEntry or params.unitType,params.countryCode)
		for k, scheme in pairs(schemes) do
			local item = selectLivery:newItem(scheme.name)
			
			item.itemId = string.lower(scheme.itemId)

			if item.itemId == params.livery then 
			   selected = item
			end
		end	
		if selected then
		   selectLivery:selectItem(selected)
		   selected = nil
		end
	end
	
	btnCargoUnload:setVisible(params.hasCargo)
	btnCargoLoad  :setVisible(params.hasCargo)
end

function menuOnChange(item)
	local pylon = currentPayload.pylons[item.pylonNumber] or {}
	local OldlauncherCLSID = pylon.clsid
	if item.is_remove then
		pylon.clsid = ""
		pylon.count = 0
		pylon.settings = nil
		currentPayload.pylons[item.pylonNumber] = pylon
		removeRequired(OldlauncherCLSID, item.pylonNumber)
	end
	if item.clean then
		pylon.clsid = item.launcherCLSID
		currentPayload.pylons[item.pylonNumber] = pylon
		pylon.count = 1
		pylon.settings = nil
	end
	
	applyRulesToPylons(item.launcherCLSID, item.pylonNumber, pylon.settings)
	
	for pylonNumber,v in pairs(currentPayload.pylons) do
		if pylonNumber ~= item.pylonNumber then
			applyRulesToPylons(v.clsid, pylonNumber, v.settings)
		end
	end
		
	updatePylonCell(item)
end

function submenuOnChange(item)
	if (currentPayload ~= nil) and (currentPayload.pylons ~= nil) then
		local pylon = currentPayload.pylons[item.pylonNumber] or {}
		if item.launcher then
			pylon.clsid 	= item.launcher.clsid
			pylon.count 	= 1
			pylon.settings 	= loadoutUtils.getLauncherSettingsDefaultValues(item.launcher.clsid)
		else
			pylon.clsid 	= ""
			pylon.count 	= 0
			pylon.settings 	= nil
		end
		currentPayload.pylons[item.pylonNumber] = pylon
				
		applyRulesToPylons(item.launcher.clsid, item.pylonNumber, pylon.settings)
		
		for pylonNumber,v in pairs(currentPayload.pylons) do
			if pylonNumber ~= item.pylonNumber then
				applyRulesToPylons(v.clsid, pylonNumber, v.settings)
			end
		end

		updatePylonCell(item)
	end
end

function applyRulesToPylons(a_launcherCLSID, a_pylonNumber, a_settings)
	local unitDef = DB.unit_by_type[currentUnitType_]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	if not proto or not proto.Launchers then 
		return 
	end
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then
					if isNotNeedChange(rule.station, rule.loadout) == false then
						local pylon = currentPayload.pylons[rule.station]
						if rule.loadout[1] then
							pylon.clsid = rule.loadout[1]
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
						if pylon.clsid == forbiddenLauncherCLSID then
							pylon.clsid = ""
							pylon.count = 0
							pylon.settings = nil
						end
					end	
				else	
					pylon.clsid = ""
					pylon.count = 0
					pylon.settings = nil
				end
			end
		end
	end
end

function removeRequired(a_launcherCLSID, a_pylonNumber)
	local unitDef = DB.unit_by_type[currentUnitType_]
	local proto	= unitDef.Pylons[a_pylonNumber] 
	if not proto or not proto.Launchers then 
		return 
	end
	local launchers = proto.Launchers

	for j, load in pairs(launchers) do
		if load.required and load.CLSID == a_launcherCLSID then
			for k, rule in ipairs(load.required) do				
				if rule.loadout then					
					local pylon = currentPayload.pylons[rule.station]					
					if rule.loadout[1] then
						pylon.clsid = ""
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
		if pylon.clsid == o then
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
					local item = menu:getItem(i - 1)				
					if item.getSubmenu then 
						item:setSkin(Skin.menuSubItemSkin()) 
						local submenu = item:getSubmenu()						
						if submenu then 
							local items_count = submenu:getItemCount()
							for j = 1,items_count do
								local itemS 		  = submenu:getItem(j - 1)									
								itemS:setEnabled(true)
								if itemS.launcher then
									itemS.launcher.count  	= requestWeaponCount(itemS.launcher.clsid)
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
										
										if pylon and pylon.clsid ~= nil and pylon.clsid == itemS.launcher.clsid then
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
												itemS.launcher.count = requestWeaponCount(itemS.launcher.clsid)
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
												
												if pylon and pylon.clsid ~= nil and pylon.clsid == itemS.launcher.clsid then
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

function updateWeight()
	local ammo_weight_max	= 900
	local max_to_weight		= 18000
	local max_fuel_weight	= 6000
	local empty_weight		= 6000
	
	if currentUnit then
		ammo_weight_max 	= currentUnit.AmmoWeight
		max_to_weight   	= currentUnit.MaxTakeOffWeight
		max_fuel_weight 	= currentUnit.MaxFuelWeight
		empty_weight		= currentUnit.EmptyWeight
	end

	local payloadsWeight = 0
	local limit_ammo_percentage = nil
	
	if currentPayload and currentPayload.pylons ~= nil then
		for i, pylon in pairs(currentPayload.pylons) do
			local launcher = DB.db.Weapons.ByCLSID[pylon.clsid]
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
	
	sldrGunAmmo:setRange(0, limit_ammo_percentage or 100)

	local ammoWeight = (ammo_weight_max)*sldrGunAmmo:getValue()/100
	local fuel 		 = sldrFuel:getValue()*max_fuel_weight/100
 
	txtFlareCurrent:setText(sldrFlare:getValue())
	txtChaffCurrent:setText(sldrChaff:getValue())
	txtGunAmmoCurrent:setText(sldrGunAmmo:getValue() .. '%')
	txtFuelCurrent:setText(sldrFuel:getValue() .. '%')
 
	local cargo_weight 		= 0
	
	if currentPayload and currentPayload.cargoWeight ~= nil then
		cargo_weight = currentPayload.cargoWeight
	end

  	local total		= empty_weight + payloadsWeight + ammoWeight + fuel - (currentUnit.EmptyWeight - currentPayload.emptyWeight) + cargo_weight

	max_to_weight 	= tonumber(max_to_weight)

	stcToWeightCurrentValueUnit.widget:setEnabled(total < max_to_weight)
	
	stcToWeightCurrentValueUnit:setValue(math.ceil(total))
	stcToWeightMaxValueUnit:setValue(math.ceil(max_to_weight))
end

function unit_test(wnd)
	wnd:localize(cdata)
	init(wnd)
	update({
		unitType 	= "A-10C",
		livery   	= "",
		boardNumber = "XYZMH123",
		countryCode = "RUS",
		numChaff	= 0,
		numFlare	= 0,
		numFuel     = 1000,
		currentAmmo = 0,
		maximumAmmo = 1000,
		ammoType    = 0,
		ammoSupplyMass = 100,
		hasCargo		= true,
		pylons = 
		{
			[1]  = {clsid = "",count = 0},
			[2]  = {clsid = "",count = 0},
			[3]  = {clsid = "",count = 0},
			[4]  = {clsid = "",count = 0},
			[5]  = {clsid = "",count = 0},
			[6]  = {clsid = "",count = 0},
			[7]  = {clsid = "",count = 0},
			[8]  = {clsid = "",count = 0},
			[9]  = {clsid = "",count = 0},
			[10] = {clsid = "",count = 0},
			[11] = {clsid = "",count = 0},
		}
	})
end

function  unit_test_done(wnd)
	if	cargoWindow then 
		cargoWindow:kill()
		cargoWindow = nil
	end
	if	cargoWindowLoad then 
		cargoWindowLoad:kill()
		cargoWindowLoad = nil
	end
	CargoResourcePayloadEdit.destroy()
	CargoWrapEdit.destroy()
end

function unit_test_cargo(wnd)
	wnd:localize(cdata)
	wnd:setVisible(false)
	initCargoWindow(wnd)
	toggleCargo()
end

function unit_test_cargo_load(wnd)
	wnd:localize(cdata)
	wnd:setVisible(false)
	initCargoWindowLoad(wnd)
	toggleCargoLoad()
end

function unit_test_cargo_done(wnd)
	cargoWindow = nil
end

function unit_test_cargo_load_done(wnd)
	cargoWindowLoad = nil
	CargoResourcePayloadEdit.destroy()
	CargoWrapEdit.destroy()
end
