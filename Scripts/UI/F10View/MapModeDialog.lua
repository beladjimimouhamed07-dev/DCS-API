local base = _G

module('MapModeDialog')

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

print('MapModeDialog required')
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

function new(parent)
	return Factory.create(_M, parent)
end

function construct(self, parent)
	local localization = {		
		Map					= 'Map',
		Alt					= 'Alt',
		Sat					= 'Sat',
	}
	self.parent = parent
	self.window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/F10View/AwacsCameraDialogModes.dlg', localization)
	print('MapModeDialog.construct: self.window_.widget = ', self.window_.widget)
--[[	
	self.window_.panelRight.switchButtonMapModeScheme:setState(true)
	self.window_.panelRight.switchButtonMapModeSchemeAlt:setState(false)
	self.window_.panelRight.switchButtonMapModeSatellite:setState(false)	
--]]	
end

function kill(self)
	if self.window_ then
		self.window_:kill()
		self.window_ = nil
	end
end

function setVisible(self, vis)
	if self.window_ then
		self.window_:setVisible(vis)
	end
end

function getVisible(self)
	if self.window_ then
		return self.window_:getVisible()
	end
	return false
end

function show(self)
	if self.window_ then
		self.window_:setVisible(true)
	end
end

function hide(self)
	if self.window_ then
		self.window_:setVisible(false)
	end
end

function getWindow(self)
	if self.window_ then
		return self.window_.widget
	end
	return nil
end

function getSwitchButtonMapModeScheme(self)
	if self.window_ then
		return self.window_.panelRight.switchButtonMapModeScheme.widget
	end
	return nil	
end

function getSwitchButtonMapModeSchemeAlt(self)
	if self.window_ then
		return self.window_.panelRight.switchButtonMapModeSchemeAlt.widget
	end
	return nil
end

function getSwitchButtonMapModeSatellite(self)
	if self.window_ then
		return self.window_.panelRight.switchButtonMapModeSatellite.widget
	end
	return nil
end

function update(self)

end