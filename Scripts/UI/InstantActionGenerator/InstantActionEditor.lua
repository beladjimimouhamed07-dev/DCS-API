local base = _G

module('InstantActionEditor')

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
local DB					= require('me_db_api')
local textutil          	= require('textutil')
local MsgWindow				= require('MsgWindow')
local U    					= require('me_utilities')
local T 					= require('tools')
local UC				    = require('utils_common')
local OptionsData			= base.safe_require('Options.Data')
local MainMenu 				= require('MainMenu')
local GUIMapView			= require('GUIMapView')
local NewMapState			= require('NewMapState')
local Mission               = require('me_mission')
local map_classifier 		= require('me_map_classifier')
local MapColor				= require('MapColor')
local MissionData			= require('Mission.Data')
local AirdromeData			= require('Mission.AirdromeData')
local MapController			= require('Mission.MapController')
local MapLayerController	= require('Mission.MapLayerController')
local TheatreOfWarData		= require('Mission.TheatreOfWarData')
local Terrain				= require('terrain')
local terrainDATA			= require('me_terrainDATA')
local waitScreen			= require('me_wait_screen')
local UpdateManager			= require('UpdateManager')
local AutoBriefingModule	= require('me_autobriefing')

local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionGeneratorParamsCache = require('InstantActionGeneratorParamsCache')
local InstantActionEditorGeneral = require('InstantActionEditorGeneral')
local InstantActionEditorPlayer = require('InstantActionEditorPlayer')
local InstantActionEditorTargets = require('InstantActionEditorTargets')
local InstantActionEditorAlliedGroups = require('InstantActionEditorAlliedGroups')
local MissionGenerator = require('MissionGenerator')

local fEnvironment = T.safeDoFileWithRequire("MissionEditor/data/MissionGenerator/GeneratorData/environment.lua", {"i_18n"})

local generationData = nil

local airdromeMapObjects = {}
local groupsMapObjects = {}
local clickableGroupsIconsIds = {}

local iaeData = nil

local idCounter = 0
local groupForDragging = nil

local mapView
local ruler

i18n.setup(_M)

local cdata = 
{
	title = _('INSTANT ACTION EDITOR'),
	MAP = _('sb_MAP','MAP'),
    SAT = _('sb_SAT','SAT'),
    ALT = _('sb_ALT','ALT'),
	tip_MAP = _("General charts"),
	tip_SAT = _("Satellite map"),
	tip_ALT = _("Height map"),
	Generate = _('GENERATE'),
	Restore = _('RESTORE'),
	CloseTitle = _('Close Instant Action Editor?'),
	CloseText = _('Do you really want to close Quick Action Generator?'),
	RestoreTitle = _('Restore Instant Action Editor data?'),
	RestoreText = _('Do you really want to restore Instant Action Editor data?'),
	yes = _('Yes'),
	no = _('No'),
	warning = _('WARNING'),
	shipPlacingWarningText = _('Settle ships on appropriate water, please.'),
	groundPlacingWarningText = _('Place ground vehicles on the land, please.'),
	ok = _('Ok'),
	back = _('BACK'),
	saveAndFly = _('SAVE AND FLY'),
	regenerate = _('REGENERATE'),
	yes = _('Yes'),
	no = _('No'),
	playerIconTitle = _("PLAYER"),
	enemyIconTitle = _("ENEMY"),
	regenerateTitle = _('Regenerate mission?'),
	regenerateDesc = _('Do you really want to regenerate? Targets, allies, and some other data may be changed!'),
	needSeaWarningText = _('You need sea to generate this mission. Select a map with sea or change parameters: MISSION TYPE, START FROM'),
	generatorDataNotValid = _('The generated data is not valid. Run generation again.'),
	changeEpochWarningText = _('Some units are missing for chosen era. Please, try different era.'),
	loadingAndGenerating = _('Loading Terrain and Generating:'),
	noModulesWarningText = _('No suitable modules found. Please install aircraft modules to play.'),
}

local function resetIdCounter()
	idCounter = 10000000
end

local function getNextId()
	idCounter = idCounter + 1
	
	return idCounter
end

local function removeAllAirdromesIcons()
	if mapView == nil then
		return
	end
	
	for name, mapObjects in pairs(airdromeMapObjects) do
		mapView:removeUserObjects(mapObjects)
	end

	airdromeMapObjects = {}
end

local function removeAllFormationsIcons()
	if mapView == nil then
		return
	end

	for name, mapObjects in pairs(groupsMapObjects) do
		mapView:removeUserObjects(mapObjects)
	end

	groupsMapObjects = {}
end

local function reset()
	--InstantActionGeneratorData.resetData()

	resetIdCounter()
	clickableGroupsIconsIds = {}

	removeAllAirdromesIcons()
	removeAllFormationsIcons()
end

local function createNewMapState(mouseDownCb, mouseUpCb, mouseDragCb, mouseMoveCb, mouseWheelCb) 
	local result = NewMapState.new(mapView)
  
	if mouseUpCb then
		result.onMouseUp = mouseUpCb
	end

	if mouseDownCb then
		result.onMouseDown = mouseDownCb		
	end

	if mouseDragCb then
		result.onMouseDrag = mouseDragCb
	end
  
	if mouseMoveCb then
		result.onMouseMove = mouseMoveCb
	end  
  
	if mouseWheelCb then
		result.onMouseWheel = mouseWheelCb
	end
  
	return result
end

local function createNewMapStates()
	local panState = createNewMapState(panState_onMouseDown, panState_onMouseUp, panState_onMouseDrag, panState_onMouseMove, panState_onMouseWheel)
	mapView:setState(panState)
end

local function getMapSize(px, py, sign) 
	local x, y, w, h	= mapView:getBounds()
	local mx1, my1		= mapView:getMapPoint(w / 2, h / 2)
	local mx2, my2		= mapView:getMapPoint(w / 2 + px, h / 2 + py)  

	if sign then
		return mx2 - mx1, my2 - my1
	else
		return math.abs(mx2 - mx1), math.abs(my2 - my1)
	end
end

local function findObjects(mapX, mapY)
	local x, y, w, h = mapView:getBounds()
	local mx1= mapView:getMapPoint(w / 2, h / 2)
	local mx2 = mapView:getMapPoint(w / 2 + 10, h / 2 + 10)  
 
	local radius = math.abs(mx2 - mx1)
	return mapView:findUserObjects(mapX, mapY, radius)
end

local function calcGroupsIconsHeadings(xP, yP, xE, yE)
	local dirX = xE - xP
	local dirY = yE - yP

	local playerHeading = math.deg(math.atan2(dirY, dirX));
	if playerHeading < 0 then
		playerHeading = playerHeading + 360
	end
	local enemyHeading = playerHeading + 180
	if enemyHeading > 360 then
		enemyHeading = enemyHeading - 360
	end

	return playerHeading, enemyHeading
end

local function createIcon(classKey, id, x, y, angle, color, zOrder)
	return {
	  classKey	= classKey,		
	  id		= id,
	  x			= x,
	  y			= y,
	  angle		= angle,
	  color		= color,
	  zOrder	= zOrder,
  }
end

local function createCaption(classKey, id, x, y, title, offsetX, offsetY, color, angle, lineHeight, align)
	return {
		classKey	= classKey,		
		id			= id,
		x			= x,
		y			= y,
		title		= title,
		color		= color,
		angle		= angle,
		lineHeight	= lineHeight, 
		align		= align,
		offsetX		= offsetX,
		offsetY		= offsetY,
	}
end

local function getGroupIconClassKey(groupType)
	if "playerGroupData" == groupType then	--draft
		return "IAG_PLANE"
	else
		return "IAG_TARGET"
	end
end

local function createGroupIcon(groupType, title, color, iconAngle)
	local groupData = iaeData[groupType]
	if groupData == nil then
		return
	end

	local iconId = getNextId()
	local icon = createIcon(getGroupIconClassKey(groupType), iconId,groupData.x, groupData.y, iconAngle, color)
	icon.normalColor = color
	local caption	= createCaption('AirdromeCaption', getNextId(), groupData.x, groupData.y, title, 25, 10, MapColor.new(1, 1, 1))
	caption.blurColor = MapColor.new(0, 0, 0)
	caption.normalColor = color
	local mapObjects = {icon, caption} -- add spawn zone circle
	groupsMapObjects[groupType] = mapObjects
	clickableGroupsIconsIds[iconId] = groupType
	
	mapView:addUserObjects(mapObjects)
end

local function setParamMapView()
    local SW_bound_tmp 		= terrainDATA.getTerrainDATA('SW_bound')
    local NE_bound_tmp 		= terrainDATA.getTerrainDATA('NE_bound')

	SW_bound_test 	        = SW_bound_tmp
	NE_bound_test			= NE_bound_tmp
	SW_bound 	        = {SW_bound_tmp[1], 0, SW_bound_tmp[3]}
	NE_bound 			= {NE_bound_tmp[1], 0, NE_bound_tmp[3]}
  
	local x_bound_1 = SW_bound[1]*1000
	local y_bound_1 = SW_bound[3]*1000
	local x_bound_2 = NE_bound[1]*1000
	local y_bound_2 = NE_bound[3]*1000
	
	if (iaeData.playerGroupData.x < x_bound_1 and iaeData.playerGroupData.x < x_bound_2) or (iaeData.playerGroupData.x > x_bound_1 and iaeData.playerGroupData.x > x_bound_2) then
		iaeData.playerGroupData.x = (x_bound_1 + x_bound_2) * 0.5 + 5000
	end
	if (iaeData.playerGroupData.y < y_bound_1 and iaeData.playerGroupData.y < y_bound_2) or (iaeData.playerGroupData.y > y_bound_1 and iaeData.playerGroupData.y > y_bound_2) then
		iaeData.playerGroupData.y = (y_bound_1 + y_bound_2) * 0.5 + 5000
	end
	if (iaeData.enemyGroupsData.x < x_bound_1 and iaeData.enemyGroupsData.x < x_bound_2) or (iaeData.enemyGroupsData.x > x_bound_1 and iaeData.enemyGroupsData.x > x_bound_2) then
		iaeData.enemyGroupsData.x = (x_bound_1 + x_bound_2) * 0.5 - 5000
	end
	if (iaeData.enemyGroupsData.y < y_bound_1 and iaeData.enemyGroupsData.y < y_bound_2) or (iaeData.enemyGroupsData.y > y_bound_1 and iaeData.enemyGroupsData.y > y_bound_2) then
		iaeData.enemyGroupsData.y = (y_bound_1 + y_bound_2) * 0.5 - 5000
	end
	
	mapView:setMapBounds(x_bound_1, y_bound_1, x_bound_2, y_bound_2)

	local dirX = iaeData.enemyGroupsData.x - iaeData.playerGroupData.x
	local dirY = iaeData.enemyGroupsData.y - iaeData.playerGroupData.y
	local distance = math.sqrt(dirX * dirX + dirY * dirY)
	mapView:setScale(distance * 2 + 130000)

	mapView:setCamera((iaeData.playerGroupData.x + iaeData.enemyGroupsData.x) / 2, (iaeData.playerGroupData.y + iaeData.enemyGroupsData.y) / 2)
	
	local playerHeading, enemyHeading = calcGroupsIconsHeadings(iaeData["playerGroupData"].x, iaeData["playerGroupData"].y, iaeData["enemyGroupsData"].x, iaeData["enemyGroupsData"].y)

	createGroupIcon("playerGroupData", cdata.playerIconTitle, MapColor.new(80 / 255, 150 / 255, 240 / 255), playerHeading)
	createGroupIcon("enemyGroupsData", cdata.enemyIconTitle, MapColor.new(1, 55 / 255, 55 / 255), enemyHeading)	
end

local function createLine(classKey, id, points, color, zOrder)
	return {
		classKey	= classKey,
		id			= id,
		points		= points,
		color		= color,
		zOrder		= zOrder,
	}
end

local function getAirdromeIconClassKey(airdrome)
	local class = airdrome:getClass()
	if '1' == class then	
		return 'AirdromeClass1'
	elseif '2' == class then
		return 'AirdromeClass2'
	elseif '3' == class then
		return 'AirdromeClass3'
	else
		return 'AirdromeClassNone'
	end
end

local function createAirdromeIcon(airdrome)
	local x, y = airdrome:getPosition()
	local classKey = getAirdromeIconClassKey(airdrome)
	local color = MapColor.new(1, 1, 1)
	local angle = airdrome:getAngle()
	
	local icon = createIcon(classKey, getNextId(),x, y, angle, color)
	
	return icon
end

local function createAirdromeCaption(airdrome, color, blurColor)
	local x, y		= airdrome:getPosition()
	local text		= airdrome:getName()
	local offsetX	= 20
	local offsetY	= -20
	local caption	= createCaption('AirdromeCaption', getNextId(), x, y, text, offsetX, offsetY, color)
	
	caption.blurColor = blurColor
	
	return caption	
end

local function addAirdrome(airdrome)
	local color				= MapColor.new(1, 1, 1)
	local blurColor			= MapColor.new(0, 0, 0)
	local icon				= createAirdromeIcon(airdrome)
	local caption			= createAirdromeCaption(airdrome, color, blurColor)
	local mapObjects		= {icon, caption}
	local id				= airdrome:getId()

	airdromeMapObjects[id] 	= mapObjects
	
	mapView:addUserObjects(mapObjects)
end

local function initAirdromes()
	--AirdromeData.onNewMission()
	for i, airdrome in ipairs(AirdromeData.getAirdromes()) do
		addAirdrome(airdrome)
	end
end

local function updateCachedGenerationParams(editorGenerationDump)
	local cachedParams = InstantActionGeneratorParamsCache.getCachedGenerationParams()
	cachedParams.aircraftType = editorGenerationDump.playerGroupData.unitType
	cachedParams.map = editorGenerationDump.generalData.map
	cachedParams.editorGenerationDump = editorGenerationDump

	InstantActionGeneratorParamsCache.saveCachedParams()
end

local function valueBasicValidation(value, valueType)
	return value ~= nil and type(value) == valueType
end

-- TODO: Consider more validation rules
local function dataValidation(inputData)
	if not valueBasicValidation(inputData, 'table') then
		return false
	end

	if not valueBasicValidation(inputData.generalData, 'table') then
		return false
	end
	
	if not valueBasicValidation(inputData.generalData.map, 'string') then
		return false
	end
	
	if not InstantActionGeneratorData.isMapAvailable(inputData.generalData.map) then
		return false
	end

	if not valueBasicValidation(inputData.generalData.country, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.enemyAISkill, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.season, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.missionType, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.startTime, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.era, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.missionRange, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.generalData.weather, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData, 'table') then
		return false
	end
	
	if not valueBasicValidation(inputData.playerGroupData.wingmen, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.wingmenAISkill, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.takeoffFrom, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.loadout, 'table') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.altitude, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.x, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.y, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.unitType, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.formation, 'string') then
		return false
	end

	if not valueBasicValidation(inputData.playerGroupData.speed, 'number') then
		return false
	end
	
	if not InstantActionGeneratorData.isUnitPlayable(inputData.playerGroupData.unitType) then
		return false
	end
	
	if not InstantActionGeneratorData.getConstants().isTakeOffAcceptable(inputData.playerGroupData.takeoffFrom, inputData.generalData.missionType, inputData.playerGroupData.unitType) then
		return false
	end
	
	if not InstantActionGeneratorData.getConstants().isFormationAcceptable(inputData.playerGroupData.formation, inputData.playerGroupData.unitType) then
		return false
	end	

	if not valueBasicValidation(inputData.enemyGroupsData, 'table') then
		return false
	end

	if not valueBasicValidation(inputData.enemyGroupsData.x, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.enemyGroupsData.y, 'number') then
		return false
	end

	if not valueBasicValidation(inputData.enemyGroupsData.groups, 'table') then
		return false
	end

	if not valueBasicValidation(inputData.friendlyGroupsData, 'table') then
		return false
	end
	
	if not valueBasicValidation(inputData.friendlyGroupsData.groups, 'table') then
		return false
	end
	
	local unitGroupsAll = {inputData.enemyGroupsData.groups, inputData.friendlyGroupsData.groups}
	for i, unitGroups in ipairs(unitGroupsAll) do
		for j, unitGroup in ipairs(unitGroups) do
			if InstantActionGeneratorData.getConstants().isAircraftGroupTask(unitGroup.groupTask) then
				if not InstantActionGeneratorData.getConstants().isAircraftUnitType(unitGroup.unitType) then
					return false
				end
				
				if unitGroup.takeoffFrom ~= nil and unitGroup.takeoffFrom ~= "" and
					not InstantActionGeneratorData.getConstants().isTakeOffAcceptable(unitGroup.takeoffFrom, inputData.generalData.missionType, unitGroup.unitType) then
					return false
				end

				if not InstantActionGeneratorData.getConstants().isFormationAcceptable(unitGroup.formation, unitGroup.unitType) then
					return false
				end
			end
		end
	end

	return true
end

local function initData()
	iaeData = InstantActionGeneratorData.getIAEData()
	if dataValidation(iaeData) ~= true then
		print("QMG Error: There are invalid values in the data table.")
		return false
	end

	updateCachedGenerationParams(iaeData)
	
	InstantActionEditorGeneral.show(true)
	InstantActionEditorPlayer.show(true)
	InstantActionEditorTargets.show(true)
	return true
end

local function createMapView()
	if mapView then
		mapView:onIconsThemeChange(OptionsData.getIconsTheme())
		mapView:showLayer("GEOGRAPHICAL GRID", false)
		mapView:showLayer("MGRS GRID", true)
		mapView:initEDTerrainGraphics('./')
		return
	end

	local wS, hS = Gui.GetWindowSize()
	mapView = GUIMapView.new()
	window:insertWidget(mapView)
	mapView:setBounds(0, 0, wS - 400, hS - window:getSkin().skinData.params.headerHeight)
	MapController.initialize() 		

	mapView:setBkgColor({107 / 255, 175 / 255, 248 / 255})

	local classifier = map_classifier.get()
	mapView:loadClassifier(classifier)
	MapLayerController.setClassifierLayers(classifier.layers)

	createNewMapStates()
	mapView:onIconsThemeChange(OptionsData.getIconsTheme())
	mapView:showLayer("GEOGRAPHICAL GRID", false)
	mapView:showLayer("MGRS GRID", true)
	mapView:initEDTerrainGraphics('./')
end

local function onShow(terrainName)
	waitScreen.showSplash(true)
	terrainName = terrainName or InstantActionGeneratorData.getIAEData().generalData.map or 'Caucasus'
	TheatreOfWarData.selectTheatreOfWar(terrainName)
	terrainDATA.updateDATA()
	createMapView()
	reset()
	MissionData.newMission()
	initAirdromes()
	local dataValid = initData()
	if dataValid ~= true then
		show(false)
		returnToMainMenu()
		InstantActionGeneratorParamsCache.deleteCachedParams()
		MsgWindow.warning(cdata.generatorDataNotValid, cdata.warning, cdata.ok):show()
		return
	end
	setParamMapView()
	mapView:setMapMode("altitude")
	bottombar.btnSaveAndFly:setVisible(true)
	bottombar.btnRegenerate:setVisible(false)
	waitScreen.showSplash(false)
	mapView:setVisible(true)
	window:setVisible(true)
	bottombar:setVisible(true)
	return true
end

local function onHide()
	waitScreen.showSplash(true)
	InstantActionEditorGeneral.show(false)
	InstantActionEditorPlayer.show(false)
	InstantActionEditorTargets.show(false)
	InstantActionEditorAlliedGroups.show(false)
	mapView:setVisible(false)
	window:setVisible(false)
	bottombar:setVisible(false)
	waitScreen.showSplash(false)
end

function returnToMainMenu()
	MissionGenerator.resetGeneratorInstantAction()
	MainMenu.show(true)
end

local function onCloseBtn()
	local handler = MsgWindow.question(cdata.CloseText, cdata.CloseTitle, cdata.yes, cdata.no)

	function handler:onChange(buttonText)
		handler:hide()
		if buttonText == cdata.yes then
			show(false)
			returnToMainMenu()
		end
	end
	
	handler:show()
end

local function setSelectedIcon(name, value)
	local mapObjects = groupsMapObjects[groupForDragging]
	if mapObjects ~= nil then
		mapView:removeUserObjects(mapObjects)
		local color = value and MapColor.new(1, 1, 0) or mapObjects[1].normalColor
		mapObjects[1].color = color
		mapView:addUserObjects(mapObjects)
	end
end

local function moveIcon(iconName, mapX, mapY)
	local mapObjects = groupsMapObjects[iconName]

	if mapObjects ~= nil then
		mapView:removeUserObjects(mapObjects)
		mapObjects[1].x = mapX
		mapObjects[1].y = mapY
		mapObjects[2].x = mapX
		mapObjects[2].y = mapY
		mapView:addUserObjects(mapObjects)
	end
end

local function updateGroupIconsHeadings(xP, yP, xE, yE)
	local playerHeading, enemyHeading = calcGroupsIconsHeadings(xP, yP, xE, yE)

	local playerObjects = groupsMapObjects["playerGroupData"]
	if playerObjects ~= nil then
		mapView:removeUserObjects(playerObjects)
		playerObjects[1].angle = playerHeading
		mapView:addUserObjects(playerObjects)
	end

	local enemyObjects = groupsMapObjects["enemyGroupsData"]
	if enemyObjects ~= nil then
		mapView:removeUserObjects(enemyObjects)
		enemyObjects[1].angle = enemyHeading
		mapView:addUserObjects(enemyObjects)
	end
end

local function isSeaRequired()
	if iaeData.generalData.missionType == "AntiShip" then
		return true
	end
	if iaeData.playerGroupData.takeoffFrom == "AirCarrier" then
		return true
	end
	for i, data in ipairs(iaeData.friendlyGroupsData.groups) do
		if data.takeoffFrom == "AirCarrier" then
			return true
		end
	end
	return false
end

local function checkUnitTypes()
	if iaeData.playerGroupData.unitType == nil or iaeData.playerGroupData.unitType == "" then
		return false
	end
		
	for i, data in ipairs(iaeData.friendlyGroupsData.groups) do
		if data.unitType == nil or data.unitType == "" then
			return false
		end
	end
	
	for i, data in ipairs(iaeData.enemyGroupsData.groups) do
		if data.unitType == nil or data.unitType == "" then
			return false
		end
	end	

	return true
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditor.dlg", cdata)
	window:setBounds(0, 0, wS, hS)

	bottombar = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorBottombar.dlg", cdata)
	bottombar:setBounds(wS - 400, hS - 34, 400, 34)
	local function resizeAndUpdButtonPosition(button, leftOrRight)
		local w, h = button:getSize()
		local calcW = button:calcSize()
		if calcW < 100 then
			calcW = 100
		end

		button:setSize(calcW + 10, h)
		local newW, newH = button:getSize()
		if leftOrRight == true then
			button:setPosition(15, (34 - newH) / 2)
		else
			
			button:setPosition(400-15-newW, (34 - newH) / 2)
		end
	end

	resizeAndUpdButtonPosition(bottombar.btnBack, true)
	resizeAndUpdButtonPosition(bottombar.btnSaveAndFly, false)
	resizeAndUpdButtonPosition(bottombar.btnRegenerate, false)
	function bottombar.btnBack:onChange()
		onCloseBtn()
	end

	function bottombar.btnSaveAndFly:onChange()
		if not terrainDATA.getTerrainDATA('seaEnabled') and isSeaRequired() then
			MsgWindow.warning(cdata.needSeaWarningText, cdata.warning, cdata.ok):show()
		elseif not checkUnitTypes() then
			MsgWindow.warning(cdata.changeEpochWarningText, cdata.warning, cdata.ok):show()
		else
			startGenerateInstantAction()
		end
	end

	bottombar.btnRegenerate:setVisible(false)

	function bottombar.btnRegenerate:onChange()
		local handler = MsgWindow.question(cdata.regenerateDesc, cdata.regenerateTitle, cdata.yes, cdata.no)

			function handler:onChange(buttonText)
				handler:hide()
				if buttonText == cdata.yes then
					onRegenerate()
				end
			end

			function handler:onClose()
				return false
			end

			handler:show()
	end
end

function startGenerateInstantAction()
	if dataValidation(iaeData) ~= true then
		print("QMG Error: There are invalid values in the data table.")
		return
	end

	updateCachedGenerationParams(iaeData)
	
	local dataTable = InstantActionGeneratorData.getDataForGenerator()

	waitScreen.showMini(true, cdata.loadingAndGenerating.."0%")
	UpdateManager.add(function()
		local MGModule = require('me_generator')
		MGModule.generateInstantAction(dataTable, InstantActionGeneratorData.generationModeFromEditor, endGenerate)
		return true
	end)
end

function endGenerate(returnCode, nodeId, error)
	if returnCode == InstantActionGeneratorData.enmGenFinish then
		if nodeId ~= -1 then
			AutoBriefingModule.updateAutoBriefing()
			AutoBriefingModule.returnToME = true
			AutoBriefingModule.show(true, 'iag')
		end
		
		InstantActionGeneratorData.onGenerationComplete()
	elseif returnCode == InstantActionGeneratorData.enmPercent then
		waitScreen.setMiniText(cdata.loadingAndGenerating..base.tostring(base.math.floor(nodeId or 0))..'%'--[[- '..error]])
		waitScreen.setMiniValue(base.math.floor(nodeId))
	end
end

function onRegenerate()
	if dataValidation(iaeData) ~= true then
		print("QMG Error: There are invalid values in the data table.")
		return
	end

	updateCachedGenerationParams(iaeData)

	waitScreen.showMini(true, cdata.loadingAndGenerating.."0%")
	UpdateManager.add(function()
		local MGModule = require('me_generator')
		local result = MGModule.generateInstantAction(iaeData, InstantActionGeneratorData.generationModeUpdateParameters, proceedRegenerate)
		InstantActionGeneratorData.setIAEData(result)
		return true
	end)	
end

function proceedRegenerate(returnCode, nodeId, error)
	if returnCode == InstantActionGeneratorData.enmGenFinish then
		waitScreen.showMini(false)

		if nodeId ~= -1 then
			local mapName = iaeData.generalData.map
			MainMenu.show(false)
			show(true, mapName)
		end
	elseif returnCode == InstantActionGeneratorData.enmPercent then
		waitScreen.setMiniText(cdata.loadingAndGenerating..base.tostring(base.math.floor(nodeId or 0))..'%'--[[- '..error]])
		waitScreen.setMiniValue(base.math.floor(nodeId))
	end
end

function onGenerationComplete()
	window:setVisible(false)
	bottombar:setVisible(false)
	waitScreen.showMini(false)
end

function onReturnFromBriefing()
	show(true, InstantActionGeneratorData.getIAEData().generalData.map)
end

function showRegenerateButton(value)
	bottombar.btnSaveAndFly:setVisible(not value)
	bottombar.btnRegenerate:setVisible(value)
end

local function getDefaultCountryId(aircraftType)
	local countries = MissionGenerator.getCountriesForAircraft(aircraftType, false)
	local availableCountries = {}
	for i, countryId in ipairs(countries) do
		local country = DB.country_by_id[countryId]
		table.insert(availableCountries, {Name = country.Name, id = countryId})
	end

	if availableCountries then
		U.sortCountries(availableCountries, 'Name')
	end

	return availableCountries[1].id	
end

function generateAndRunEditor(keepParamsAsIs)
	local cachedParams = InstantActionGeneratorParamsCache.getCachedGenerationParams()
	MissionGenerator.initGeneratorInstantAction()
	InstantActionGeneratorData.getConstants().loadGroupTemplates()
	if cachedParams.editorGenerationDump == nil or (dataValidation(cachedParams.editorGenerationDump) ~= true) then
		-- with new logic if editorGenerationDump is nil then other cached params will be nil
		-- generation will be performed with the first suitable parameters
		generationData = {}
		--
		local era = InstantActionGeneratorData.getConstants().getEras()[1] -- all
		generationData.era = era.id
		InstantActionGeneratorData.setEraYears(generationData)
		--
		local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()

		table.sort(playableAircrafts, function(left, right)
			if left.isAvailable == right.isAvailable then
				return textutil.Utf8Compare(left, right)
			end
		end)

		if cachedParams.aircraftType then
			for i, type in ipairs(playableAircrafts) do
				if cachedParams.aircraftType == type then
					generationData.aircraftType = type
					break
				end
			end

			if generationData.aircraftType == nil then
				generationData.aircraftType = playableAircrafts[1]
			end
		else
			generationData.aircraftType = playableAircrafts[1]
		end
		
		if generationData.aircraftType == nil then
			MsgWindow.warning(cdata.noModulesWarningText, cdata.warning, cdata.ok):show()
			MissionGenerator.resetGeneratorInstantAction()
			return
		end
		
		--
		generationData.country = getDefaultCountryId(generationData.aircraftType)
		--
		local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({generationData.aircraftType, })
		if cachedParams.missionType and cachedParams.missionRange then
			for i, typeAndRange in ipairs(missionTypesAndRanges) do
				if cachedParams.missionType == typeAndRange.missionType then
					generationData.missionType = cachedParams.missionType
					generationData.missionRange = cachedParams.missionRange
					break
				end
			end

			if generationData.missionType == nil then
				generationData.missionType = missionTypesAndRanges[1].missionType
				generationData.missionRange = missionTypesAndRanges[1].missionRange
			end
		else
			generationData.missionType = missionTypesAndRanges[1].missionType
			generationData.missionRange = missionTypesAndRanges[1].missionRange
		end
		--
		generationData.takeoffFrom = InstantActionGeneratorData.getConstants().getTakeOffByMissionType(generationData.missionType, generationData.aircraftType)[1].id
		--
		generationData.enemyAISkill = InstantActionGeneratorData.getConstants().getAISkills()[1].id
		--
		if cachedParams.map and InstantActionGeneratorData.isMapAvailable(cachedParams.map) then
			generationData.map = cachedParams.map
		else
			generationData.map = InstantActionGeneratorData.getTopPriorityMap()
		end
		--
		local seasons = (fEnvironment and fEnvironment.seasons) or {}
		generationData.season = seasons[1].id
		--
		local weathers = (fEnvironment and fEnvironment.weather) or {}
		generationData.weather = weathers[1].id
		--
		generationData.startTime = -1
		generationData.isTimeRandom = true
		--
		InstantActionGeneratorData.generateLoadout(generationData, generationData.aircraftType, generationData.missionType, generationData.country, true, true, true)

		-- start generate process for IAE, close this dialog and open IAE dialog
		waitScreen.showMini(true, cdata.loadingAndGenerating.."0%")
		UpdateManager.add(function()
			local MGModule = require('me_generator')
			local result = MGModule.generateInstantAction({generalData = generationData}, InstantActionGeneratorData.generationModeForEditor, proceedToEditor)
			InstantActionGeneratorData.setIAEData(result)
			return true
		end)
	else
		iaeData = cachedParams.editorGenerationDump
		local externalChangesApplied = false -- "external" means "outside instant action generator"
		
		if not keepParamsAsIs then
			if cachedParams.aircraftType ~= nil and cachedParams.aircraftType ~= iaeData.playerGroupData.unitType and InstantActionGeneratorData.isUnitPlayable(cachedParams.aircraftType) then
				iaeData.playerGroupData.unitType = cachedParams.aircraftType
				externalChangesApplied = true
				
				-- Reset/update parameters that affect or are affected by player unit type
				local era = InstantActionGeneratorData.getConstants().getEras()[1] -- all
				iaeData.generalData.era = era.id
				InstantActionGeneratorData.setEraYears(iaeData.generalData)
				iaeData.generalData.country = getDefaultCountryId(iaeData.playerGroupData.unitType)
						
				-- local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({iaeData.playerGroupData.unitType, })
				-- local missionTypeSuitable = false
				-- for i, typeAndRange in ipairs(missionTypesAndRanges) do
					-- if iaeData.generalData.missionType == typeAndRange.missionType and
						-- iaeData.generalData.missionRange == typeAndRange.missionRange then
						-- missionTypeSuitable = true
						-- break
					-- end
				-- end
				-- if missionTypeSuitable == false then
					-- iaeData.generalData.missionType = missionTypesAndRanges[1].missionType
					-- iaeData.generalData.missionRange = missionTypesAndRanges[1].missionRange
				-- end
			end
			
			if cachedParams.map ~= nil and cachedParams.map ~= iaeData.generalData.map then
				iaeData.generalData.map = cachedParams.map
				externalChangesApplied = true
			end		
		end		
				
		if externalChangesApplied then
			-- Set mission type to first available from list, because it must be Dogfight and it is fastest to generate
			missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({iaeData.playerGroupData.unitType, })
			iaeData.generalData.missionType = missionTypesAndRanges[1].missionType
			iaeData.generalData.missionRange = missionTypesAndRanges[1].missionRange

			-- Reset/update parameters that affect or are affected by player unit type
			InstantActionGeneratorData.updateTakeoff(iaeData.playerGroupData, iaeData.generalData.missionType, iaeData.playerGroupData.unitType)
			InstantActionGeneratorData.updateFormation(iaeData.playerGroupData, iaeData.playerGroupData.unitType)
			InstantActionGeneratorData.generateLoadout(iaeData.playerGroupData, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.country, true, true, true)				
		else
			keepParamsAsIs = true -- restore cached parameters as is
		end
	
		waitScreen.showMini(true, cdata.loadingAndGenerating.."0%")
		UpdateManager.add(function()
			local MGModule = require('me_generator')
			local generationMode
			if keepParamsAsIs then
				generationMode = InstantActionGeneratorData.generationModeKeepParameters
			else
				generationMode = InstantActionGeneratorData.generationModeUpdateParameters
			end
			local result = MGModule.generateInstantAction(iaeData, generationMode, proceedRegenerate)
			InstantActionGeneratorData.setIAEData(result)
			return true
		end)
	end
end

function proceedToEditor(returnCode, nodeId, error)
	if returnCode == InstantActionGeneratorData.enmGenFinish then
		waitScreen.showMini(false)
		
		if nodeId ~= -1 then
			MainMenu.show(false)
			show(true, generationData.map)
		end
	elseif returnCode == InstantActionGeneratorData.enmPercent then
		waitScreen.setMiniText(cdata.loadingAndGenerating..base.tostring(base.math.floor(nodeId or 0))..'%'--[[- '..error]])
		waitScreen.setMiniValue(base.math.floor(nodeId))
	end
end

function show(b, terrainName)
	if window == nil then
        create()
    end

	if b == true then
		onShow(terrainName)
	else
		onHide()
	end
end

function onPlayerPositionUpdated()
	moveIcon("playerGroupData", iaeData["playerGroupData"].x, iaeData["playerGroupData"].y)
	updateGroupIconsHeadings(iaeData["playerGroupData"].x, iaeData["playerGroupData"].y, iaeData["enemyGroupsData"].x, iaeData["enemyGroupsData"].y)
end

--Ruler
local function getRulerStarted()
	return ruler and ruler.started
end
  
local function updateRulerText()
	if getRulerStarted() then
	local dx = ruler.tape.points[2].x - ruler.tape.points[1].x
  	local dy = ruler.tape.points[2].y - ruler.tape.points[1].y
	local distance = math.sqrt(dx * dx + dy * dy)
	local angleInRadians = math.atan2(dy, dx)
	local angle = math.mod(360 + UC.toDegrees(angleInRadians), 360)
	  
	local unitSys = OptionsData.getUnits()
	local sunit
	  
	if (unitSys == "metric") then
		sunit = _('m')	
		distance = math.floor(distance)
		if (distance > 1000) then
			distance = distance /1000
			sunit = _('km')
		end
	else
		sunit = _('feet')
		distance = math.floor(distance/0.3048)
		if (distance > 6076.12) then
			distance = math.floor(distance/6.07612) / 1000
			sunit = _('nm')
		end
	end
	  
	ruler.text.title = distance ..' '..sunit..', '.. angle ..'°'
	end
end
  
local function updateRulerSecondPoint(mapX, mapY)
	if getRulerStarted() then
		local point = ruler.tape.points[2]
	  
		point.x = mapX
		point.y = mapY
	  
	  	-- смещение текста рулетки относительно второй точки
	  	local tx, ty = getMapSize(15, -10)
	  
	  	ruler.text.x = mapX + tx
	  	ruler.text.y = mapY + ty
	end
end
  
local function updateRuler(mapX, mapY)
	if getRulerStarted() then
	  	updateRulerSecondPoint(mapX, mapY)
	  	updateRulerText()
	  
	  	mapView:removeUserObjects({ruler.tape, ruler.text})
	  	mapView:addUserObjects({ruler.tape, ruler.text})
	end  
end

local function createRuler(mapX, mapY)
	if not ruler then
	  	local points = {{x = mapX, y = mapY}, {x = mapX, y = mapY}}     
	  
	  	ruler = {}
	  	ruler.tape = createLine('L0000000525', 0, points)
	  	ruler.text = createCaption('T0000000533', 1, mapX, mapY, "")
	else
	  	local point = ruler.tape.points[1]
	  
	  	point.x = mapX
	  	point.y = mapY
	end
	
	ruler.started = true  
	updateRuler(mapX, mapY)  
end

local function resetRuler()
	if ruler then
	  	--module_mission.set_mapObjects(ruler.tape.id, nil)
	  	--module_mission.set_mapObjects(ruler.text.id, nil)
	  	mapView:removeUserObjects({ruler.tape, ruler.text})
	  	ruler.started = false
	end
end
  
local function startRuler(x, y)
	resetRuler()
	createRuler(mapView:getMapPoint(x, y))
end

local function moveRuler(x, y)
	updateRuler(mapView:getMapPoint(x, y))
end

local function updateRulerTextOnZoom()
	if getRulerStarted() then
	  	local point = ruler.tape.points[2]
	  	updateRuler(point.x, point.y)
	end  
end

function getNearestAirdromePosition(x, y, unitType)
	return MissionGenerator.getNearestAirdromePositionForAircraft(x, y, unitType or "")
end

--stateCallbacks

function emptyState_func()

end

function panState_onMouseDown(self, x, y, button)
    local mapX, mapY = mapView:getMapPoint(x, y)

	if 1 == button then
		local objects = findObjects(mapX, mapY)

		if objects ~= nil or #objects > 0 then
			for i, id in ipairs(objects) do
				local name = clickableGroupsIconsIds[id]
				if name ~= nil then
					groupForDragging = name
					setSelectedIcon(groupForDragging, true)
					break
				end
			end
		end
	elseif 2 == button then		
        startRuler(x, y)
    end
end

function panState_onMouseUp(self, x, y, button)
	if button == 1 then
		if groupForDragging ~= nil then
			setSelectedIcon(groupForDragging, false)
			local mapX, mapY = mapView:getMapPoint(x, y)
			local groupData = iaeData[groupForDragging]
			local isValidPosition = true
	
			if groupForDragging ~= "playerGroupData" then
				if iaeData.generalData.missionType == "AntiShip" then
					if Terrain.GetSurfaceType(mapX, mapY) ~= "sea" then
						MsgWindow.warning(cdata.shipPlacingWarningText, cdata.warning, cdata.ok):show()
						isValidPosition = false
					end
				elseif iaeData.generalData.missionType == "GroundAttack" or iaeData.generalData.missionType == "SEAD" then
					if Terrain.GetSurfaceType(mapX, mapY) ~= "land" then
						MsgWindow.warning(cdata.groundPlacingWarningText, cdata.warning, cdata.ok):show()
						isValidPosition = false
					end
				end
			end
	
			if isValidPosition == true then
				if groupData.takeoffFrom == "TakeOffParking" or groupData.takeoffFrom == "TakeOffParkingHot" or
					groupData.takeoffFrom == "TakeOff"  then
					local nearestAirdrome = getNearestAirdromePosition(mapX, mapY, groupData.unitType)
					if nearestAirdrome ~= nil then
						groupData.x = nearestAirdrome.x
						groupData.y = nearestAirdrome.y
					else
						groupData.x = mapX
						groupData.y = mapY
					end
				else
					groupData.x = mapX
					groupData.y = mapY
				end
				moveIcon(groupForDragging, groupData.x, groupData.y)
				InstantActionEditorPlayer.fillDataByPositions()
			else
				moveIcon(groupForDragging, groupData.x, groupData.y)
			end

			updateGroupIconsHeadings(iaeData["playerGroupData"].x, iaeData["playerGroupData"].y, iaeData["enemyGroupsData"].x, iaeData["enemyGroupsData"].y)
		end

		groupForDragging = nil
	elseif button == 2 then
		resetRuler()
	end
end

function panState_onMouseDrag(self, dx, dy, button, x, y)
    local mapX, mapY = mapView:getMapPoint(x, y)
	
    if groupForDragging ~= nil then
		moveIcon(groupForDragging, mapX, mapY)
		local xP = iaeData["playerGroupData"].x
		local yP = iaeData["playerGroupData"].y
		local xE = iaeData["enemyGroupsData"].x
		local yE = iaeData["enemyGroupsData"].y

		if groupForDragging == "playerGroupData" then
			xP = mapX
			yP = mapY
		elseif groupForDragging == "enemyGroupsData" then
			xE = mapX
			yE = mapY
		end
		updateGroupIconsHeadings(xP, yP, xE, yE)
	end

	if button == 2 then
		moveRuler(x, y)
	end

	NewMapState.onMouseDrag(self, dx, dy, button, x, y)
end

function panState_onMouseMove(self, x, y)

end

function panState_onMouseWheel(self, x, y, clicks)
	setZoom(x, y, -clicks)
end

function setZoom(x, y, dScale)
    local cx, cy = mapView:getCamera()
    local mx, my = mapView:getMapPoint(x, y)
    
    mapView:setScale(mapView:getScale() + dScale * (mapView:getScale() * 0.1))
    
    local nx, ny = mapView:getMapPoint(x, y)     
    
    local dx = nx - mx
    local dy = ny - my

    mapView:setCamera(cx - dx, cy - dy)

	updateRulerTextOnZoom()
end