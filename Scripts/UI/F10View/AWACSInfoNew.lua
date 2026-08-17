local base = _G

module('AWACSInfoNew')

mtab = {__index = _M}	

local require	= base.require
local table = base.table
local string = base.string
local print		= base.print
local type		= base.type
local tostring	= base.tostring
local tonumber  = base.tonumber

local Factory   = require('Factory')					
local Window = require('Window')
local DialogLoader = require('DialogLoader')
local i18n = require('i18n')
local Gui = require("dxgui")

i18n.setup(_M)

print('AWACSInfoNew required')
--[[
local handlerFunctions_ = {}

local function addHandlerFunc(name, func)
	handlerFunctions_[name] = func
end

local function callHandlerFunc(name, ...)
	local func = handlerFunctions_[name]
	
	if func then
		func(...)
	end
end
--]]

local cdata = 
{
	altitude 	= _('ALT'),
	speed 		= _('SPEED'),
	heading 	= _('HEADING'),
	coord 		= _('COORD'),
	country 	= _('COUNTRY'),
	group 		= _('GROUP'),
	task 		= _('TASK'),
	callsign 	= _('CALLSIGN'),
	Resources 	= _('RESOURCES'),
	unit_data	= _('UNIT DATA'),
	RouteTool	= _('ROUTE TOOL'),
}

dialogs = {}

function getWindow(surfaceId)
	if not dialogs[surfaceId] then 
		return nil
	end
	return dialogs[surfaceId].window.widget
end

function new(surfaceId, base_w, base_h)
	return Factory.create(_M, surfaceId, base_w, base_h)
end

function construct(self, surfaceId, base_w, base_h)
	print(string.format('AWACSInfoNew.construct, surfaceId = %d, base_w = %d, base_h = %d', surfaceId, base_w, base_h))
	self.window = DialogLoader.spawnDialogFromFile("./Scripts/UI/F10View/AWACSInfoNew.dlg", cdata)
	self.surfaceId = surfaceId
	self.base_w = base_w
	self.base_h = base_h
	self.window:setSurfaceId(surfaceId)
	
	local x, y, w, h = self.window:getBounds()
	h = h - 40 -- to hide btnStats
	self.window.btnStats:setVisible(false)
	self.window:setBounds(15, base_h - h - 15, w, h)
		
--[[	
	function self.window.btnStats:onChange()
		if onShowStats ~= nil then
		   onShowStats(self.surfaceId)
		end
	end
--]]	
	self.window:setVisible(false)
	dialogs[surfaceId] = self
end

function destroy(surfaceId)
	--print(string.format('AWACSInfoNew.destroy: surfaceId = %d, b = %s', surfaceId, tostring(b)))
	if not dialogs[surfaceId] then
		print(string.format('AWACSInfoNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	dialogs[surfaceId].window:kill()
	dialogs[surfaceId] = nil
end

function updateStaticData(surfaceId, country, group, unitType, callsign)
	--print(string.format('AWACSInfoNew.updateStaticData: surfaceId = %d', surfaceId))	
	if not dialogs[surfaceId] then
		print(string.format('AWACSInfoNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	dialogs[surfaceId].window:setText(unitType)	
	dialogs[surfaceId].window.sCountryValue:setText(country)
	dialogs[surfaceId].window.sGroupValue:setText(group)
	dialogs[surfaceId].window.sCallsignValue:setText(callsign)
end

function updateDynamicData(surfaceId, alt, speed, hdg, coordsStr, task, mag)
	--print(string.format('AWACSInfoNew.updateDynamicData: surfaceId = %d', surfaceId))	
	if not dialogs[surfaceId] then
		print(string.format('AWACSInfoNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
--	print(string.format('AWACSInfoNew.updateDynamicData: surfaceId = %d, alt = %s, speed = %s, hdg = %s, coordsStr = %s, task = %s, mag = %s', 
--		surfaceId, alt, speed, hdg, coordsStr, task, mag))
	dialogs[surfaceId].window.sSpeedValue:setText(base.tostring(speed))
	dialogs[surfaceId].window.sAltValue:setText(base.tostring(alt))
	dialogs[surfaceId].window.sHeadingValue:setText(base.tostring(hdg))
	dialogs[surfaceId].window.sCoordsValue:setText(coordsStr)
	dialogs[surfaceId].window.sTaskValue:setText(task)
	dialogs[surfaceId].window.sHeadingMagneticValue:setText(mag)
end

function show(surfaceId, b)
	--print(string.format('AWACSInfoNew.show: surfaceId = %d, b = %s', surfaceId, tostring(b)))
	if not dialogs[surfaceId] then
		print(string.format('AWACSInfoNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	dialogs[surfaceId].window:setVisible(b)
end
