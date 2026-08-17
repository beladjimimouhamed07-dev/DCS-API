local base = _G
--require("mobdebug").start()

local require 		= base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local string        = base.string
local dofile		= base.dofile
local print 		= base.print
local type 			= base.type
local table 		= base.table
local io            = base.io

local DialogLoader		= require('DialogLoader')
local dxgui				= require('dxgui')
local DB				= require('me_db_api')
local Static 			= require('Static')
local CheckBox 			= require('CheckBox')
local Button 			= require('Button')
local ComboList 		= require('ComboList')
local Slider 			= require('HorzSlider')
local SpinBox 			= require('SpinBox')
local EditBox 			= require('EditBox')
local ListBoxItem 		= require('ListBoxItem')
local Skin              = require('Skin')
local UpdateManager 	= require('UpdateManager')
local Input             = require('Input')
local InputData			= require('Input.Data')
local InputUtils		= require('Input.Utils')
local DCS               = require('DCS')

local Terrain			= require('terrain')
local Tools				= require('tools')
local MsgWindow			= require('MsgWindow')
local DTC_manager_Map	= require('DTC_manager_Map')
local DTC_manager_Utils = require('DTC_manager_Utils')

--local U					= require('me_utilities')
local UC				= require('utils_common')

local dllWeather        = require('Weather')
local magvar 			= require('magvar')

local BriefingDialog	= require('BriefingDialog')


JSON = dofile("Scripts/JSON.lua")

local openedExtWindow = ""

local window_ = nil
local data = {}
local tablesWidgetStorage = {}
local userUpdates = {}
sections = {}
local aircraftDescriptor
local BeaconTypes = Tools.safeDoFileWithDofile("Scripts/World/Radio/BeaconTypes.lua")
local MsgWindowHandler

function loadDescriptor(filename)   	
    local f,err = base.loadfile(filename)
    if not f then
        --base.print("ERROR: loadDescriptor() file not found!", err)
        return { }
    end
    local env = {	_ = _,
					DB = DB,
					dofile = base.dofile,
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
					next = base.next,
					recursiveCopyTable 				= recursiveCopyTable,
					onAction 						= onAction,
					getDatalinksByUnitId 			= getDatalinksByUnitId,
					getAddPropByUnitId 				= getAddPropByUnitId,
					getNameByUnitId					= getNameByUnitId,
					getNameByGroupId				= getNameByGroupId,
					getUnitsGroupsWithAddPropName 	= getUnitsGroupsWithAddPropName,
					getCoalitionByUnitId			= getCoalitionByUnitId,
					setPosition						= setPosition,
					setSize							= setSize,
					wsTypeToString 					= wsTypeToString,
					setDisplayNames					= setDisplayNames,
					getAirdromes 					= getAirdromes,
					getAltitude						= getAltitude,
					getBeaconsRSBN 					= getBeaconsRSBN,
					getBeaconsTacan					= getBeaconsTacan,
					getAircraftPosition				= getAircraftPosition,
					getMagVar 						= getMagVar,
					getLandingCourse				= getLandingCourse,
					getTime							= getTime,
					timeToDHMS						= timeToDHMS,
					getCurrentTerrainID				= getCurrentTerrainID,
					getCurrentTerrainBounds 		= getCurrentTerrainBounds,
					showWarningWindow				= showWarningWindow,
					getBeaconsPRMGLocalizer 		= getBeaconsPRMGLocalizer,
					getBeaconsPRMGGlideslope 		= getBeaconsPRMGGlideslope,
					getBeaconsILS					= getBeaconsILS,
					convertMetersToLatLon 			= Terrain.convertMetersToLatLon,
					convertLatLonToMeters 			= Terrain.convertLatLonToMeters,
					setPanMapState 					= DTC_manager_Map.setPanMapState,
					setEditDTCWaypointState 		= DTC_manager_Map.setEditDTCWaypointState,
					setAddDTCWaypointState 			= DTC_manager_Map.setAddDTCWaypointState,
					addWaypoint 					= DTC_manager_Map.addWaypoint,
					updateWaypoint 					= DTC_manager_Map.updateWaypoint,
					removeWaypoint 					= DTC_manager_Map.removeWaypoint,
					removeAllWaypoints 				= DTC_manager_Map.removeAllWaypoints,
					setupDescriptorCallbacks		= DTC_manager_Map.setupDescriptorCallbacks,
					selectWaypointById				= DTC_manager_Map.selectWaypointById,
					setMapPosition 					= DTC_manager_Map.setMapPosition,
					getTemperatureAndPressureAtPoint = dllWeather.getTemperatureAndPressureAtPoint,
					updateManager_Add 				= updateManager_Add,

					getCoords_LatLonStandard 		= getCoords_LatLonStandard,
					getCoords_LatLonDec 			= getCoords_LatLonDec,
					getCoords_LatLonPrecise 		= getCoords_LatLonPrecise,
					getCoords_MGRS_Grid 			= getCoords_MGRS_Grid,
					convertLatLonStandardToMeters		= DTC_manager_Utils.convertLatLonStandardToMeters,
					convertLatLonMinutesDecimalToMeters	= DTC_manager_Utils.convertLatLonMinutesDecimalToMeters,
					convertLatLonPreciseToMeters		= DTC_manager_Utils.convertLatLonPreciseToMeters,
					convertMGRSGRIDToMeters				= DTC_manager_Utils.convertMGRSGRIDToMeters,

					isDTCVisible 						= isVisible,
				} 
    base.setfenv(f, env)
	local ok, res = base.pcall(f)
	if not ok then
		base.print('ERROR: loadDescriptor() failed to pcall "'..filename..'": '..res)
	end
    env._ = nil
	base.print("--env-",env.version)

	env['_G'] = env    
    env.dofile = function(n) f2, err = base.loadfile(n); if f2 then base.setfenv(f2, env); f2() end end

    return env
end

function wsTypeToString(type_table)
	return base.string.format("%d.%d.%d.%d",type_table[1] or 0,type_table[2] or 0,type_table[3] or 0,type_table[4] or 0)
end

function setDisplayNames(tbl)
	for i, dv in pairs(tbl) do
		--print("---fillThreatNames num", i)
		if #dv.unit_type > 0 then			
			local unitDesc = DB.unit_by_type[dv.unit_type]
			if unitDesc then			
				dv.displayName = unitDesc.DisplayName
				if unitDesc.attribute 
				and unitDesc.attribute[1] and unitDesc.attribute[2]
				and unitDesc.attribute[3] and unitDesc.attribute[4] then
					dv.wstype[1] = unitDesc.attribute[1]
					dv.wstype[2] = unitDesc.attribute[2]
					dv.wstype[3] = unitDesc.attribute[3]
					dv.wstype[4] = unitDesc.attribute[4]
				end
			else	
				local tmpName = base.get_weapon_display_name_by_clsid("{"..dv.unit_type.."}")
				if tmpName ~= "{"..dv.unit_type.."}" then			
					dv.displayName = tmpName
					local tmplauncher = DB.weapon_by_CLSID["{"..dv.unit_type.."}"]
					if tmplauncher then
						dv.wstype[1] = tmplauncher.attribute[1]
						dv.wstype[2] = tmplauncher.attribute[2]
						dv.wstype[3] = tmplauncher.attribute[3]
						dv.wstype[4] = tmplauncher.attribute[4]
						--print("---fillThreatNames tmplauncher.attribute", tmplauncher.attribute[1])
					end
				end
				if #dv.displayName == 0 then
					print("---fillThreatNames wrong unit_type", i)
				end
			end
			--print("---fillThreatNames unit_type DisplayName", dv.displayName)
		else
			if type(dv.wstype) == 'table' then
				if dv.wstype[1] == 4 then
					dv.displayName = base.get_weapon_display_name_by_wstype(dv.wstype)
				else
					for k, unitTypeDesc in pairs(DB.unit_by_type) do				
						if unitTypeDesc and unitTypeDesc.attribute 
							and unitTypeDesc.attribute[1] and unitTypeDesc.attribute[1] == dv.wstype[1]
							and unitTypeDesc.attribute[2] and unitTypeDesc.attribute[2] == dv.wstype[2]
							and unitTypeDesc.attribute[3] and unitTypeDesc.attribute[3] == dv.wstype[3]
							and unitTypeDesc.attribute[4] and unitTypeDesc.attribute[4] == dv.wstype[4] then
								dv.displayName = unitTypeDesc.DisplayName				
						end
					end
				end
			else
				print("---fillThreatNames wrong wstype NUM", i)
			end			
			--print("---fillThreatNames wstype DisplayName", dv.displayName)
		end
	end
end

function recursiveCopyTable(dest, source)
    local _tablesList = {}
    
    function copy(dest, source, tablesList)
        
        for sourceKey, sourceValue in pairs(source) do
            if type(sourceValue) == 'table' then
                if tablesList[sourceValue] == nil then
                    dest[sourceKey] = dest[sourceKey] or {}
                    tablesList[sourceValue] = dest[sourceKey]
                    
                    copy(dest[sourceKey], sourceValue, tablesList)
                else
                    dest[sourceKey] = tablesList[sourceValue]
                end
            else
                dest[sourceKey] = sourceValue
            end
        end
    end
    
    copy(dest, source, _tablesList)
end

function changeSkins(panel)
	
	local widgetCounter = panel:getWidgetCount() - 1
    local widget
	--base.print("---changeSkins---", widgetCounter)
	
	for i = 0, widgetCounter do
		widget = panel:getWidget(i)
		if widget then
			local widgetType = widget:getTypeName()
			if widgetType == "Panel" then
				changeSkins(widget)
			elseif widgetType == "Button" and widget:getText() ~= "" then
				widget:setSkin(Skin["buttonSkin_MENew2"]())
			elseif widgetType == "Static" and widget:getText() ~= "DTC PARTITION:" then
				widget:setSkin(Skin["staticSkin_ME"]())
			elseif widgetType == "EditBox" then
				widget:setSkin(Skin["editBoxSkin_ME"]())
			elseif widgetType == "TabGroupItem" then
				widget:setSkin(Skin["tabGroupItemSkin_DTC"]())
			elseif widgetType == "CheckBox" then
				widget:setSkin(Skin["checkBoxSkin_MENew"]())
			elseif widgetType == "ComboList" then
				widget:setSkin(Skin["comboListSkinNew_"]())
			elseif widgetType == "Grid" then
				--widget:setSkin(Skin["gridSkin_Multiplayer_roleNew"]())
			elseif widgetType == "GridHeaderCell" then
				widget:setSkin(Skin["gridHeaderCellSkinNew"]())
			elseif widgetType == "SpinBox" then
				widget:setSkin(Skin["spinBoxSkin_ME"]())
			end
		end
    end	
end

function create(pathDlg, pathLua, screenSizeY)
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/DTC_manager/DTC_manager_PanelCommon.dlg', {})
	pMainCont  = window_.pMainCont

	-- Open .dlg and .lua for current aircraft
	local contWindow_ = DialogLoader.spawnDialogFromFile(pathDlg, {})
	local pMainTmpl = DialogLoader.findWidgetByName(contWindow_, 'pMain')

	if pMainTmpl then
		pMain = pMainTmpl:clone()
		local w,h = pMain:getSize()
		pMain:setSize(570,h)
		pMainCont:setSize(590,screenSizeY-130)
		pMainCont:insertWidget(pMain)
		pMain:setPosition(0,0)
	end

	--pNoVisible	= window_.pNoVisible
	--staticSkin 	= pNoVisible.sStatic:getSkin()

	aircraftDescriptor = loadDescriptor(pathLua)
	-- init current aicraft's panel with default values
	if aircraftDescriptor ~= nil then
    	aircraftDescriptor.init()
	end

	changeSkins(window_.pMainCont)
end

function kill()
	if MsgWindowHandler then
		MsgWindowHandler:hide()
		MsgWindowHandler = nil
	end
	window_:kill()
	window_ = nil
	
	for i, dv in pairs(tablesWidgetStorage) do
		UpdateManager.delete(dv)
	end
	for i, dv in pairs(userUpdates) do
		UpdateManager.delete(dv)
	end
	
	tablesWidgetStorage = {}
	userUpdates = {}
end

function show(value)
	--base.print("---show()---")
	openedExtWindow = value

	window_:setVisible(true)
	
	for i, dv in pairs(userUpdates) do
		UpdateManager.add(dv)
	end
	if aircraftDescriptor.show then
		aircraftDescriptor.show(true)
	end
end

function hide()
	--base.print("---hide()---")
	if openedExtWindow == "BriefingDialog" then
		BriefingDialog.show()
	end
	openedExtWindow = ""

	if MsgWindowHandler then
		MsgWindowHandler:hide()
		MsgWindowHandler = nil
	end
	window_:setVisible(false)
	for i, dv in pairs(userUpdates) do
		UpdateManager.delete(dv)		
	end
	if aircraftDescriptor.show then
		aircraftDescriptor.show(false)
	end
	DTC_manager_Utils.unlockKeyboardInput(true)
end

function isVisible()
	return window_:getVisible()
end

function getVisible()
    if window_ == nil then
        return false
    end
	return window_:getVisible()
end

function getWindow()
	return window_.widget
end

function setPosition(widget, x, y)
	local widgetPtr = DialogLoader.findWidgetByName(window_, widget)
	if widgetPtr ~= nil then
		widgetPtr:setPosition(x,y)
	end
end

function setSize(widget, x, y)
	local widgetPtr = DialogLoader.findWidgetByName(window_, widget)
	if widgetPtr ~= nil then
		widgetPtr:setSize(x,y)
	end	
end

function removeStaticMapWidgetPlaceholder()
	window_:removeWidget(window_.staticMapWidgetPlaceholder)
	window_.staticMapWidgetPlaceholder:destroy()
	window_.staticMapWidgetPlaceholder = nil
end

function setData(data, name, unit_type)
	--base.print("---getDataME---", data)
	if aircraftDescriptor ~= nil then
		local MEData = JSON:decode(data)
		if name then
			MEData.data.name = name
		end
		if unit_type and MEData.type ~= unit_type then
			if MsgWindowHandler then
				MsgWindowHandler:hide()
				MsgWindowHandler = nil
			end
			MsgWindowHandler = MsgWindow.error("Wrong cartridge type!", "ERROR", "OK")
			MsgWindowHandler:show()
		else
			aircraftDescriptor.setData(MEData.data)
		end
	end
end

function getJsonDataForExport(unit_type)
	if aircraftDescriptor ~= nil then
		local DTCdata = {data = {}, name = "", type = ""}
		local aircraftTbl = aircraftDescriptor.returnData()		
		recursiveCopyTable(DTCdata.data, aircraftDescriptor.returnData())
		
		DTCdata.type = unit_type
		return JSON:encode_pretty(DTCdata)
	end
end


function getDataJson()
	if aircraftDescriptor ~= nil then
		local DTCdata = {data = {}, name = "", type = ""}		
		recursiveCopyTable(DTCdata.data, aircraftDescriptor.returnData())
		return JSON:encode_pretty(DTCdata)
	end
end

function importData(path, unit_type)
	base.print("---importData---")
	if aircraftDescriptor ~= nil then
		local contents
		local myTable
		local file = io.open( path, "r")
		if file then
			contents = file:read( "*a")
			io.close( file )			
			setData(contents,nil,unit_type)
			--myTable = JSON:decode(contents);
		end
		--base.print("---importData---", contents)
	end
end

function exportData(path, unit_type)
	base.print("---exportData---")
	if aircraftDescriptor ~= nil then
		local file = io.open( path, "w" )

		if file then
			base.print("---exportData---")
			file:write(getJsonDataForExport(unit_type))
			file:close()
		end
		io.close(path)
	end

	--[[
		local path = lfs.writedir()
		local filters = {FileDialogFilters.DTC()}
		local filename = FileDialog.save(path, filters, _("Export DTC"), 'dtc', curDTC.name)
		
		if filename then
			if curDTC.data ~= nil and curDTC.type ~= nil then
				curDTC.data = {}
				base.U.recursiveCopyTable(curDTC.data, descriptorByUnitType[curDTC.type].returnData())
			end
			
			ExportToJSON(filename)
		end
	]]
end

function getData()
if aircraftDescriptor ~= nil then
	local moduleTable = aircraftDescriptor.returnData()
	data = {}
	recursiveCopyTable(data, moduleTable)
	return data
end
end

function getSections()
	--local moduleSections = returnData()
	--recursiveCopyTable(sections, moduleSections)
end

function callButton0Change()
	--buttonChange()
end

function prepareCallbacks()

end

 function onAction(a_widgetName, a_action, a_data)
	local source = 'PanelCommon'
	tbl = {tablesWidgetStorage_ = tablesWidgetStorage}
	return DTC_manager_Utils.onAction(window_, a_widgetName, a_action, a_data, source, tbl)
end

function setCurrentScrollPosition(a_widgetName, position)
	local widget = DialogLoader.findWidgetByName(window_, a_widgetName)
    if not widget then return false end

	widget:setVertScrollPosition(position)
end

function getCurrentScrollPosition(a_widgetName)
	local widget = DialogLoader.findWidgetByName(window_, a_widgetName)
    if not widget then return false end

	return widget:getVertScrollPosition()
end

function loadDefaults()
	if aircraftDescriptor ~= nil then
    	aircraftDescriptor.init(true)
	end
	DTC_manager_Map.removeAllWaypoints()
end

local function matchBeaconRSBNSideType(sideType)
	return	sideType == BeaconTypes.BEACON_TYPE_RSBN 
end

local function matchBeaconPRMGLocalizerSideType(sideType)
	return	sideType == BeaconTypes.BEACON_TYPE_PRMG_LOCALIZER 
end

local function matchBeaconPRMGGlideslopeSideType(sideType)
	return	sideType == BeaconTypes.BEACON_TYPE_PRMG_GLIDESLOPE 
end

local function matchBeaconILSType(sideType)
	return	sideType == BeaconTypes.BEACON_TYPE_ILS_LOCALIZER
			or sideType == BeaconTypes.BEACON_TYPE_PRMG_LOCALIZER 
end

local function matchBeaconTacanSideType(sideType)
	return	sideType == BeaconTypes.BEACON_TYPE_TACAN or sideType == BeaconTypes.BEACON_TYPE_VORTAC
end

function getBeaconsRSBN()
	local tblBeacons = Terrain.getBeacons()
	local beaconsRSBN_ = {}
	for name, beaconData in pairs(tblBeacons)do
		if matchBeaconRSBNSideType(beaconData.type) then  
			table.insert(beaconsRSBN_, beaconData)
		end
	end
	local MovableBeaconsRSBNs = base.l_getMovableBeaconsRSBN()
  	for k, data in base.pairs(MovableBeaconsRSBNs) do
		table.insert(beaconsRSBN_, {unitId = data.unitId, display_name = data.display_name, channel = data.channel, callsign = data.callsign,
									position = {data.x, data.alt, data.y}})
  	end
	return beaconsRSBN_
end

function getBeaconsTacan()
	local tblBeacons = Terrain.getBeacons()
	local beaconsTacan_ = {}
	for name, beaconData in pairs(tblBeacons)do
		if matchBeaconTacanSideType(beaconData.type) then  
			table.insert(beaconsTacan_, beaconData)
		end
	end
	local MovableBeaconsTacan = base.l_getMovableBeaconsTacan()
  	for k, data in base.pairs(MovableBeaconsTacan) do
		table.insert(beaconsTacan_, {unitId = data.unitId, display_name = data.display_name, channel = data.channel, modeChannel = data.modeChannel, callsign = data.callsign,
									position = {data.x, data.alt, data.y}})
  	end
	return beaconsTacan_
end

function getMagVar(lat, long)
	return magvar.get_mag_decl(lat, long)
end

function getAircraftPosition()
	return base.l_getAircraftPos() or {x = 0, y = 0}
end

function getLandingCourse(airdromeName, runwayName)
	return base.l_getLandingCourse(airdromeName, runwayName) or 0
end

function getTime()
	return base.l_getAbsoluteModelTime()
end

function timeToDHMS(value)
	if not value then
		return 0,0,0,0
	end
	
	local dd = math.floor(value / 86400)
	value = value - dd * 60*60*24
	local hh = math.floor(value / 3600)
	value = value - hh * 60*60
	local mm = math.floor(value / 60)
	local ss = math.floor(value - mm * 60)
	return dd, hh, mm, ss
end

function showWarningWindow(text)
	if MsgWindowHandler then
		MsgWindowHandler:hide()
		MsgWindowHandler = nil
	end
	MsgWindowHandler = MsgWindow.newFromResource('dxgui/skins/skinME/msg_windowDTC.dlg', text, "WARNING", MsgWindow.warningIcon, "OK")
	MsgWindowHandler:show()
end

function getCurrentTerrainID()
	local id = Terrain.GetTerrainConfig('id')
	return Terrain.GetTerrainConfig('id')
end

function getCurrentTerrainBounds()
	local SW_bound = Terrain.GetTerrainConfig('SW_bound')
	local NE_bound = Terrain.GetTerrainConfig('NE_bound')
	return SW_bound, NE_bound
end

function getBeaconsPRMGLocalizer()
	--[[
	local tblBeacons = Terrain.getBeacons()
	local beaconsPRMGLocalizer_ = {}
	for name, beaconData in pairs(tblBeacons)do
		if matchBeaconPRMGLocalizerSideType(beaconData.type) then  
			table.insert(beaconsPRMGLocalizer_, beaconData)
		end
	end
	]]

	--[[
	num = "ARD"..#data[curProgram].Airdromes + 1,
		id = "ARD"..airdromeIdx,
		name = selectedAirdrome.display_name, 
		unit_name = selectedAirdrome.names.en,
		note = "",
		type = "Airdrome",
		x = selectedAirdrome.reference_point.x, 
		y = selectedAirdrome.reference_point.y, 
		alt = 0,
		speed = 790, 
		selectedRunwaySide = "", 
		runways = {}
	]]

	--[[
	if #selectedAirdrome.ILS_data > 0 then
			for i, dv in pairs(selectedAirdrome.ILS_data) do
				table.insert(runways_, {text = dv.runwaySide, direction = dv.data.direction, display_name = dv.data.display_name, channel = dv.data.channel})
			end
		else
			for i, dv in pairs(selectedAirdrome.runwayName) do
				table.insert(runways_, {text = dv, direction = -361.0, display_name = selectedAirdrome.display_name, channel = -1})
			end
		end

		num = "ARD"..#data[curProgram].Airdromes + 1,
		id = "ARD"..airdromeIdx,
		name = selectedAirdrome.display_name, 
		unit_name = selectedAirdrome.names.en,
		note = "",
		type = "Airdrome",
		x = selectedAirdrome.reference_point.x, 
		y = selectedAirdrome.reference_point.y, 
		alt = 0,
		speed = 790,
		selectedRunwaySide = runways[1].text, 
		runways = {}
	]]
	local beaconsPRMGLocalizer_ = {}
	local beaconsPRMGLocalizers = base.l_getMovableBeaconsPRMG_Loc()
  	for k, data in base.pairs(beaconsPRMGLocalizers) do
		table.insert(beaconsPRMGLocalizer_, { ILS_data = {}, display_name = data.display_name, names = {en = ""}, reference_point = {x = data.x, y = data.y}})
		
		table.insert(beaconsPRMGLocalizer_[#beaconsPRMGLocalizer_].ILS_data, {runwaySide = "",  data = {direction = data.direction, display_name = "", channel = data.channel}})
  	end
	return beaconsPRMGLocalizer_
end

function getBeaconsPRMGGlideslope()
	local beaconsPRMGGlideslope_ = {}
	local beaconsPRMGGlideslopes = base.l_getMovableBeaconsPRMG_GP()
  	for k, data in base.pairs(beaconsPRMGGlideslopes) do
		table.insert(beaconsPRMGGlideslope_, { ILS_data = {}, display_name = data.display_name, names = {en = ""}, reference_point = {x = data.x, y = data.y}})
		table.insert(beaconsPRMGGlideslope_[#beaconsPRMGGlideslope_].ILS_data, {runwaySide = "",  data = {direction = data.direction, display_name = "", channel = data.channel}})
  	end
	return beaconsPRMGGlideslope_
end

function onChangeMapState(mapState)
	if aircraftDescriptor and aircraftDescriptor.onUpdateMapStateToggleButtons then
		aircraftDescriptor.onUpdateMapStateToggleButtons(mapState == 1, mapState == 2)
	end
end

function getBeaconsILS(display_name)
	local tblBeacons = Terrain.getBeacons()
	local beaconsILSLocalizer_ = {}
	for name, beaconData in pairs(tblBeacons) do
		if matchBeaconILSType(beaconData.type) and beaconData.display_name == display_name then
			table.insert(beaconsILSLocalizer_, beaconData)
		end
	end
	return beaconsILSLocalizer_
end

function getAirdromes()
	--luaTerrainITerrain.cpp
	
	local Airdromes = Terrain.GetTerrainConfig('Airdromes')

	return Airdromes
end

function getAltitude(x, y)
	--return base.U.getAltitude(x, y) or 0
	return math.floor(Terrain.GetHeight(x, y) + 0.5)
end

function getCoords_LatLonStandard(x, z)
	local lat, long = Terrain.convertMetersToLatLon(x, z) 
	local radLAT = UC.toRadians(lat, true)
	local radLON = UC.toRadians(long, true)
	local d, g, m, s
	local coords = {lat = {d = 0, g = 0, m = 0, s = 0}, lon = {d = 0, g = 0, m = 0, s = 0}}

	coords.lat.d, coords.lat.g, coords.lat.m, coords.lat.s = DTC_manager_Utils.radian2latitude(radLAT)
	coords.lon.d, coords.lon.g, coords.lon.m, coords.lon.s = DTC_manager_Utils.radian2longitude(radLON)

	coords.lat.s = math.floor(coords.lat.s + 0.5)
	coords.lon.s = math.floor(coords.lon.s + 0.5)

	return coords
end

function getCoords_LatLonDec(x, z)
	local lat, long = Terrain.convertMetersToLatLon(x, z) 
	local radLAT = UC.toRadians(lat, true)
	local radLON = UC.toRadians(long, true)
	local d, g, m, s
	local coords = {lat = {d = 0, g = 0, m = 0, s = 0}, lon = {d = 0, g = 0, m = 0, s = 0}}

	coords.lat.d, coords.lat.g, coords.lat.m, coords.lat.s = DTC_manager_Utils.radian2latitude(radLAT)
	coords.lon.d, coords.lon.g, coords.lon.m, coords.lon.s = DTC_manager_Utils.radian2longitude(radLON)

	coords.lat.s = math.floor(coords.lat.s/60*1000 + 0.5)
	coords.lon.s = math.floor(coords.lon.s/60*1000 + 0.5)

	return coords
end

function getCoords_LatLonPrecise(x, z)
	local lat, long = Terrain.convertMetersToLatLon(x, z) 
	local radLAT = UC.toRadians(lat, true)
	local radLON = UC.toRadians(long, true)
	local d, g, m, s
	local coords = {lat = {d = 0, g = 0, m = 0, s = 0}, lon = {d = 0, g = 0, m = 0, s = 0}}

	coords.lat.d, coords.lat.g, coords.lat.m, coords.lat.s = DTC_manager_Utils.radian2latitude(radLAT)
	coords.lon.d, coords.lon.g, coords.lon.m, coords.lon.s = DTC_manager_Utils.radian2longitude(radLON)

	coords.lat.s = math.floor(coords.lat.s*100 + 0.5)/100
	coords.lon.s = math.floor(coords.lon.s*100 + 0.5)/100

	return coords
end

function getCoords_MGRS_Grid(x, z)
	local coords =  Terrain.GetMGRScoordinates(x,z)
	local coordTbl = {}
	local txt = ""
	for i = 1, #coords do
        local c = string.byte(coords,i)
        if c ~= 0x20 then
            txt = txt..string.char(c)
		else
			table.insert(coordTbl, txt)
			txt = ""
        end		
    end
	if txt ~= "" then
		table.insert(coordTbl, txt)
		txt = ""
	end
	return coordTbl
end

function updateManager_Add(func)
	local functionPtr = function() local result = func() return result end
	table.insert(userUpdates, functionPtr)
	--UpdateManager.add(functionPtr)
end


returnTable = {
	create							    = create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow							= getWindow,
	removeStaticMapWidgetPlaceholder	= removeStaticMapWidgetPlaceholder,
	returnTableModule 					= returnTableModule,
	getDataJson							= getDataJson,
	data 								= data,
	getData 							= getData,
	sections 							= sections,
	getSections							= getSections,
	callButton0Change 					= callButton0Change,
	buttonChange 						= buttonChange,
	setData 							= setData,
	importData 							= importData,
	exportData 							= exportData,
	loadDefaults						= loadDefaults,
	onChangeMapState					= onChangeMapState,
	getVisible 							= getVisible,
}

return returnTable