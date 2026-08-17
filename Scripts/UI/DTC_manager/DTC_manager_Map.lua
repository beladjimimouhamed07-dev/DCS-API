local base = _G

module('DTC_manager_Map')

local require 		= base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local string        = base.string
local table 		= base.table
local math			= base.math

local DialogLoader			= require('DialogLoader')
local dxgui					= require('dxgui')
local MapColor 				= require('MapColor')
local DCS               	= require('DCS')
local DB					= require('me_db_api')
local keys					= require('mul_keys')
local nickname          	= require('mul_nickname')

local window_

local mapAddUserObjects = nil
local MapObject = nil

-------------------
local onWaypointAddDescriptorCallback = nil
local onWaypointMoveDescriptorCallback = nil
local onWaypointSelectDescriptorCallback = nil
local onMouseMoveDescriptorCallback = nil
local onMapStateChangeDescriptorCallback = nil

local waypoints = {}
local waypointIdByIconId = {}

local playerUnitMapObjects = nil

local selectedWaypointId = nil
local draggingWaypointId = nil
local mouseDragProcess = false

local defaultIconClasskey = 'P0091000041'
local defaultTextClasskey = 'NavigationPointDescription'
local defaultLineClasskey = 'RouteLine'
local defaultCircleClasskey = 'AirdromeCircleZoneBorder'
local defaultColor = MapColor.new(1, 1, 1)
local selectedColor = MapColor.new(1, 1, 0)
-------------------

local objId = 1000000

function create()
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/DTC_manager/DTC_manager_Map.dlg', {})
end

function kill()
	window_:kill()
	window_ = nil
	mapAddUserObjects = nil
	MapObject = nil
	objId = 1000000
end

function show()
	window_:setVisible(true)
end

function hide()
	window_:setVisible(false)
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

function removeStaticMapWidgetPlaceholder()
	window_:removeWidget(window_.staticMapWidgetPlaceholder)
	window_.staticMapWidgetPlaceholder:destroy()
	window_.staticMapWidgetPlaceholder = nil
end

function getNextMapId()
	objId = objId + 1
	return objId
end

function createCircleZonePoints(x, y, radius)
	local points = {}
	local sides = 32
	local da = 2 * math.pi / sides
	local sin = math.sin
	local cos = math.cos

	for i = 0, sides - 1 do
		table.insert(points, MapWindow.createPoint(	x + radius * sin(da * i), 
													y + radius * cos(da * i)))
	end
	table.insert(points, points[1])

	return points
end

function createDOT(classKey, id, x, y, angle, color, zOrder)
	return {
	  classKey	= classKey,		
	  id			= id,
	  x			= x,
	  y			= y,
	  angle		= angle,
	  color		= color,
	  zOrder		= zOrder,
  }
end
function createLIN(classKey, id, points, color, zOrder)
	return {
		classKey	= classKey,
		id			= id,
		points		= points,
		color		= color,
		zOrder		= zOrder,
	}
end

function createTIT(classKey, id, x, y, title, color, angle, lineHeight, align, offsetX, offsetY, horzAnchor)
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
	horzAnchor	= horzAnchor,
}
end

function setSelectedIcon(waypointId, value)
	if MapObject == nil then
		return
	end

	if waypoints[waypointId] == nil then
		return
	end

	local iconObject = waypoints[waypointId].icon
	local waypointMapObjects = waypoints[waypointId].mapObjects
	if waypointMapObjects and iconObject.classKey == "P0091000220" then
		local textObject = waypoints[waypointId].texts[1]
		if textObject then
			MapWindow.removeUserObjects(waypointMapObjects)
			local color = value and selectedColor or waypoints[waypointId].color
			textObject.color = color
			MapWindow.addUserObjects(waypointMapObjects)
		end
	elseif waypointMapObjects and iconObject then
		MapObject.removeUserObjects(waypointMapObjects)
		local color = value and selectedColor or waypoints[waypointId].color
		iconObject.color = color
		MapObject.addUserObjects(waypointMapObjects)
	end
end

function resetSelectedWaypoint()
	if selectedWaypointId then
		setSelectedIcon(selectedWaypointId, false)

		selectedWaypointId = nil

		if onWaypointSelectDescriptorCallback then
			onWaypointSelectDescriptorCallback(selectedWaypointId)
		end
	end
end

function isInteractiveWaypoint(id)
	if waypointIdByIconId[id] ~= nil and waypoints[waypointIdByIconId[id]] 
		and waypoints[waypointIdByIconId[id]].interactive == true then
		return true, waypointIdByIconId[id]
	end

	return false
end

function findObjects(mapX, mapY) --TODO
	local x, y, w, h = MapObject.getBounds()
	local mx1= MapObject.getMapPoint(w / 2, h / 2)
	local mx2 = MapObject.getMapPoint(w / 2 + 10, h / 2 + 10)  
 
	local radius = math.abs(mx2 - mx1)
	return MapObject.findUserObjects(mapX, mapY, radius)
end

function moveWaypoint(waypointId, mapX, mapY)
	if waypoints[waypointId] ~= nil and onWaypointMoveDescriptorCallback then
		onWaypointMoveDescriptorCallback(waypointId, mapX, mapY)
	end
end

function setMapPosition(x, y)
	MapControl.setMapPosition(x, y)
end

function setFunctions(funcAddUserObjects, funcRemoveUserObjects, funcFindUserObjects, funcSetMapState,
	funcGetMapState, funcGetBounds, funcGetMapPoint, funcSetMapPosition)
	MapObject = {}
	MapObject.addUserObjects = funcAddUserObjects
	MapObject.removeUserObjects = funcRemoveUserObjects
	MapObject.findUserObjects = funcFindUserObjects

	MapObject.setMapState = funcSetMapState
	MapObject.getMapState = funcGetMapState

	MapObject.getBounds = funcGetBounds
	MapObject.getMapPoint = funcGetMapPoint

	MapControl = {}
	MapControl.setMapPosition = funcSetMapPosition
end

function setupDescriptorCallbacks(onWaypointAddFunc, onWaypointMoveFunc, onWaypointSelectFunc,
		onMouseMoveFunc, onMapStateChangeFunc)
	onWaypointAddDescriptorCallback = onWaypointAddFunc
	onWaypointMoveDescriptorCallback = onWaypointMoveFunc
	onWaypointSelectDescriptorCallback = onWaypointSelectFunc
	onMouseMoveDescriptorCallback = onMouseMoveFunc
	onMapStateChangeDescriptorCallback= onMapStateChangeFunc
end

function addWaypoint(id, waypointInfo) -- collapse adding different objects types in functions here and in update func
	if MapObject == nil then
		return
	end

	if waypoints[id] ~= nil then
		updateWaypoint(id, waypointInfo)
		return
	end
	
	local mapObjects = {}
	local iconId = nil
	waypoints[id] = { mapObjects = mapObjects, interactive = waypointInfo.interactive }

	if waypointInfo.color then
		waypoints[id].color = MapColor.new(waypointInfo.color[1], waypointInfo.color[2], waypointInfo.color[3])
	else
		waypoints[id].color = defaultColor
	end

	if waypointInfo.icon ~= nil then
		iconId = getNextMapId()
		local icon = createDOT(waypointInfo.icon.classKey or defaultIconClasskey, iconId, waypointInfo.x, waypointInfo.y, 0, waypoints[id].color)
		table.insert(mapObjects, icon)
		waypoints[id].icon = mapObjects[#mapObjects]

		waypointIdByIconId[iconId] = id
	end

	if waypointInfo.texts ~= nil then
		waypoints[id].texts = {}
		for i, textInfo in ipairs(waypointInfo.texts) do
			local text = createTIT(textInfo.classKey or defaultTextClasskey, getNextMapId(), waypointInfo.x, waypointInfo.y, textInfo.title, waypoints[id].color, nil, nil, nil, textInfo.offsetX, textInfo.offsetY)
			table.insert(mapObjects, text)
			table.insert(waypoints[id].texts, mapObjects[#mapObjects])
		end
	end

	if waypointInfo.line ~= nil then
		local line = createLIN(waypointInfo.line.classKey or defaultLineClasskey, getNextMapId(), {{x = waypointInfo.line.x1 or waypointInfo.x, y = waypointInfo.line.y1 or waypointInfo.y,}, {x = waypointInfo.line.x2 or waypointInfo.x, y = waypointInfo.line.y2 or waypointInfo.y}}, waypoints[id].color)
		table.insert(mapObjects, line)
		waypoints[id].line = mapObjects[#mapObjects]
	end

	if waypointInfo.circle ~= nil then
		local points = createCircleZonePoints(waypointInfo.x, waypointInfo.y, waypointInfo.circle.radius)
		local circle = createLIN(defaultCircleClasskey, getNextMapId(), points, waypoints[id].color)
		circle.radius = waypointInfo.circle.radius
		table.insert(mapObjects, circle)
		waypoints[id].circle = mapObjects[#mapObjects]
	end

	MapObject.addUserObjects(mapObjects)
end

function updateWaypoint(id, waypointInfo)
	if MapObject == nil then
		return
	end

	local waypoint = waypoints[id]
	if waypoint == nil then
		return
	end

	MapObject.removeUserObjects(waypoint.mapObjects)

	if waypointInfo.color then
		waypoint.color = MapColor.new(waypointInfo.color[1], waypointInfo.color[2], waypointInfo.color[3])
	end

	local color = selectedWaypointId == id and selectedColor or waypoint.color

	local iconId
	if waypoint.icon then
		iconId = waypoint.icon.id
		waypoint.icon.x = waypointInfo.x
		waypoint.icon.y = waypointInfo.y
		waypoint.icon.color = color
		if waypointInfo.icon then
			waypoint.icon.classKey = waypointInfo.icon.classKey or defaultIconClasskey
		end
	elseif waypointInfo.icon then
		iconId = getNextMapId()
		local icon = createDOT(waypointInfo.icon.classKey or defaultIconClasskey, iconId, waypointInfo.x, waypointInfo.y, 0, color)
		table.insert(waypoint.mapObjects, icon)
		waypoint.icon = waypoint.mapObjects[#waypoint.mapObjects]

		waypointIdByIconId[iconId] = id
	end

	if waypoint.texts then
		for i, textObject in ipairs(waypoint.texts) do
			textObject.x = waypointInfo.x
			textObject.y = waypointInfo.y
			textObject.color = waypoint.color

			if waypointInfo.texts and waypointInfo.texts[i] then
				textObject.classKey = waypointInfo.texts[i].classKey or defaultTextClasskey
				textObject.title = waypointInfo.texts[i].title
				textObject.offsetX = waypointInfo.texts[i].offsetX
				textObject.offsetY = waypointInfo.texts[i].offsetY
			end
		end
	elseif waypointInfo.texts then
		waypoint.texts = {}
		for i, textInfo in ipairs(waypointInfo.texts) do
			local text = createTIT(textInfo.classKey or defaultTextClasskey, getNextMapId(), waypointInfo.x, waypointInfo.y, textInfo.title, waypoint.color, nil, nil, nil, textInfo.offsetX, textInfo.offsetY)
			table.insert(waypoint.mapObjects, text)
			table.insert(waypoint.texts, waypoint.mapObjects[#waypoint.mapObjects])
		end
	end

	if waypoint.line then
		if waypointInfo.line then
			waypoint.line.classKey = waypointInfo.line.classKey or defaultLineClasskey
			waypoint.line.points = {{x = waypointInfo.line.x1 or waypointInfo.x, y = waypointInfo.line.y1 or waypointInfo.y}, {x = waypointInfo.line.x2 or waypointInfo.x, y = waypointInfo.line.y2 or waypointInfo.y}}
		else
			waypoint.line.points = {{x = waypointInfo.x, y = waypointInfo.y}, {x = waypointInfo.x, y = waypointInfo.y}}
		end
		waypoint.line.color = waypoint.color
	elseif waypointInfo.line then
		local line = createLIN(waypointInfo.line.classKey or defaultLineClasskey, getNextMapId(), {{x = waypointInfo.line.x1 or waypointInfo.x, y = waypointInfo.line.y1 or waypointInfo.y,}, {x = waypointInfo.line.x2 or waypointInfo.x, y = waypointInfo.line.y2 or waypointInfo.y}}, waypoint.color)
		table.insert(waypoint.mapObjects, line)
		waypoint.line = waypoint.mapObjects[#waypoint.mapObjects]
	end

	if waypoint.circle then
		local radius = waypointInfo.circle and waypointInfo.circle.radius or waypoint.circle.radius
		waypoint.circle.points = createCircleZonePoints(waypointInfo.x, waypointInfo.y, radius)
		waypoint.circle.color = waypoint.color
	elseif waypointInfo.circle then
		local points = createCircleZonePoints(waypointInfo.x, waypointInfo.y, waypointInfo.circle.radius)
		local circle = createLIN(defaultCircleClasskey, getNextMapId(), points, waypoint.color)
		table.insert(waypoint.mapObjects, circle)
		waypoint.line = waypoint.mapObjects[#waypoint.mapObjects]
	end

	MapObject.addUserObjects(waypoint.mapObjects)
end

function removeWaypoint(id)
	if MapObject == nil then
		return
	end

	if waypoints[id] == nil then
		return
	end

	MapObject.removeUserObjects(waypoints[id].mapObjects)

	if waypoints[id].mapObjects[1].id ~= nil then
		waypointIdByIconId[waypoints[id].mapObjects[1].id] = nil
	end

	waypoints[id] = nil
end

function removeAllWaypoints()
	for id, wptInfo in pairs(waypoints) do
		removeWaypoint(id)
	end

	waypoints = {}
	waypointIdByIconId = {}
	selectedWaypointId = nil
	draggingWaypointId = nil
end

function showAllWaypoints()
	if MapObject == nil then
		return
	end

	for id, wptInfo in pairs(waypoints) do
		MapObject.addUserObjects(wptInfo.mapObjects)
	end
end

function hideAllWaypoints()
	if MapObject == nil then
		return
	end

	resetSelectedWaypoint()

	for id, wptInfo in pairs(waypoints) do
		MapObject.removeUserObjects(wptInfo.mapObjects)
	end
end

function addPlayerUnitIcon(unitType, defaultCameraPosX, defaultCameraPosY)
	removePlayerUnitIcon()
	--collect init datas type, startX, startY, name
	
	local slot = nil

	if not unitType then
		local playerUnitId = DCS.getPlayerUnit()
		if playerUnitId == nil or playerUnitId == "" then
			return
		end

		for i, v in ipairs(DCS.getAvailableSlots(DCS.getPlayerCoalition())) do
			if v.unitId == playerUnitId then
				slot = v
				break
			end
		end

		if slot == nil then
			return
		end
	end
	
	playerUnitMapObjects = {}

	if unitType ~= nil and slot == nil then
		slot = {}
		slot.type = unitType
		slot.startX = defaultCameraPosX
		slot.startY = defaultCameraPosY
		slot.callsign = ""
	end

	local iconClassKey = DB.getClassKeyByType(slot.type)
	if not iconClassKey then
		print('No class key for "'..slot.type..'"')
		-- значек здания
		iconClassKey = "P0091000076"
	end
	
	local iconObject = createDOT(iconClassKey, getNextMapId(), slot.startX, slot.startY, 0, defaultColor)
	table.insert(playerUnitMapObjects, iconObject)

	local textClassKey = "UnitCaption"
	local blurColor = MapColor.new(0, 0, 0)

	local textUnitType = createTIT(textClassKey, getNextMapId(), slot.startX, slot.startY, keys.tabTr[slot.type] or keys.getDisplayName(slot.type), defaultColor, nil, nil, nil, 18, 8, "left")
	textUnitType.blurColor = blurColor
	table.insert(playerUnitMapObjects, textUnitType)

	local textNickname = createTIT(textClassKey, getNextMapId(), slot.startX, slot.startY, nickname:getNickname(), defaultColor, nil, nil, nil, 0, -40, "middle")
	textNickname.blurColor = blurColor
	table.insert(playerUnitMapObjects, textNickname)

	local textCallsing = createTIT(textClassKey, getNextMapId(), slot.startX, slot.startY, slot.callsign, defaultColor, nil, nil, nil, 0, -20, "middle")
	textCallsing.blurColor = blurColor
	table.insert(playerUnitMapObjects, textCallsing)

	local text1 = createTIT(textClassKey, getNextMapId(), slot.startX, slot.startY, "1", defaultColor, nil, nil, nil, -18, 8, "right")
	text1.blurColor = blurColor
	table.insert(playerUnitMapObjects, text1)

	MapObject.addUserObjects(playerUnitMapObjects)
end

function removePlayerUnitIcon()
	if playerUnitMapObjects ~= nil then
		MapObject.removeUserObjects(playerUnitMapObjects)
	end

	playerUnitMapObjects = nil
end

function getDTCWaypointState()
	return MapObject.getMapState()
end

function setPanMapState()
	if MapObject then
		if MapObject.getMapState() ~= 0 then
			MapObject.setMapState(0)

			draggingWaypointId = nil
			mouseDragProcess = false
			resetSelectedWaypoint()
			if onMapStateChangeDescriptorCallback then
				onMapStateChangeDescriptorCallback("pan")
			end
		end
	end
end

function setEditDTCWaypointState()
	if MapObject then
		if MapObject.getMapState() ~= 2 then
			MapObject.setMapState(2)
			draggingWaypointId = nil
			mouseDragProcess = false
			resetSelectedWaypoint()
			if onMapStateChangeDescriptorCallback then
				onMapStateChangeDescriptorCallback("edit")
			end
		end
	end
end

function setAddDTCWaypointState()
	if MapObject then
		if MapObject.getMapState() ~= 1 then
			MapObject.setMapState(1)
			draggingWaypointId = nil
			mouseDragProcess = false
			resetSelectedWaypoint()
			if onMapStateChangeDescriptorCallback then
				onMapStateChangeDescriptorCallback("add")
			end
		end
	end
end

function selectWaypointById(waypointId)
	if selectedWaypointId then
		setSelectedIcon(selectedWaypointId, false)
	end

	if waypointId then
		setSelectedIcon(waypointId, true)
	end

	selectedWaypointId = waypointId
end

function waypointDragging()
	return draggingWaypointId ~= nil
end

function editDTCWaypointState_onMouseDown(x, y, button)
	local mapX, mapY = MapObject.getMapPoint(x, y)

	if 1 == button then
		local oldSelected = selectedWaypointId
		if oldSelected then
			setSelectedIcon(oldSelected, false)
		end

		selectedWaypointId = nil

		local objects = findObjects(mapX, mapY)

		if objects ~= nil or #objects > 0 then
			for i, id in ipairs(objects) do
				local isInteractive, waypointId = isInteractiveWaypoint(id)
				if isInteractive == true then
					draggingWaypointId = waypointId
					selectedWaypointId = waypointId
					setSelectedIcon(selectedWaypointId, true)
					break
				end
			end
		end

		if onWaypointSelectDescriptorCallback then
			onWaypointSelectDescriptorCallback(selectedWaypointId)
		end
    end
end

function editDTCWaypointState_onMouseUp(x, y, button)
	if button == 1 then
		draggingWaypointId = nil
	end

	mouseDragProcess = false
end

function editDTCWaypointState_onMouseDrag(x, y, button)
	mouseDragProcess = true

	local mapX, mapY = MapObject.getMapPoint(x, y)
	
    if draggingWaypointId ~= nil then
		moveWaypoint(draggingWaypointId, mapX, mapY)
	end
end

function editDTCWaypointState_onMouseMove(x, y)
	if onMouseMoveDescriptorCallback then
		local mapX, mapY = MapObject.getMapPoint(x, y)
		onMouseMoveDescriptorCallback("edit", mapX, mapY)
	end
end

function addDTCWaypointState_onMouseDown(x, y, button)

end

function addDTCWaypointState_onMouseUp(x, y, button)
	if 1 == button and mouseDragProcess == false then
		local mapX, mapY = MapObject.getMapPoint(x, y)

		if onWaypointAddDescriptorCallback then
			onWaypointAddDescriptorCallback(mapX, mapY)
		end

		mouseDragProcess = false
	end

	mouseDragProcess = false
end

function addDTCWaypointState_onMouseDrag(x, y, button)
	mouseDragProcess = true
end

function addDTCWaypointState_onMouseMove(x, y)
	if onMouseMoveDescriptorCallback then
		local mapX, mapY = MapObject.getMapPoint(x, y)
		onMouseMoveDescriptorCallback("add", mapX, mapY)
	end
end

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow 							= getWindow,
	removeStaticMapWidgetPlaceholder	= removeStaticMapWidgetPlaceholder,
	setFunctions						= setFunctions,
	setupDescriptorCallbacks			= setupDescriptorCallbacks,
	addWaypoint							= addWaypoint,
	updateWaypoint						= updateWaypoint,
	removeWaypoint						= removeWaypoint,
	removeAllWaypoints					= removeAllWaypoints,
	showAllWaypoints					= showAllWaypoints,
	hideAllWaypoints					= hideAllWaypoints,
	addPlayerUnitIcon					= addPlayerUnitIcon,
	removePlayerUnitIcon				= removePlayerUnitIcon,
	getDTCWaypointState					= getDTCWaypointState,
	setPanMapState						= setPanMapState,
	setEditDTCWaypointState				= setEditDTCWaypointState,
	setAddDTCWaypointState				= setAddDTCWaypointState,
	selectWaypointById					= selectWaypointById,
	waypointDragging					= waypointDragging,
	editDTCWaypointState_onMouseDown	= editDTCWaypointState_onMouseDown,
	editDTCWaypointState_onMouseUp		= editDTCWaypointState_onMouseUp,
	editDTCWaypointState_onMouseDrag	= editDTCWaypointState_onMouseDrag,
	editDTCWaypointState_onMouseMove	= editDTCWaypointState_onMouseMove,
	addDTCWaypointState_onMouseDown		= addDTCWaypointState_onMouseDown,
	addDTCWaypointState_onMouseUp		= addDTCWaypointState_onMouseUp,
	addDTCWaypointState_onMouseDrag		= addDTCWaypointState_onMouseDrag,
	addDTCWaypointState_onMouseMove		= addDTCWaypointState_onMouseMove,
	getVisible = getVisible,

	setMapPosition = setMapPosition,
}