local base = _G

module('AwacsMapDialogToolbar')
mtab = { __index = _M }

local require				= base.require
local math					= base.math
local pairs					= base.pairs
local ipairs				= base.ipairs
local table					= base.table
local tonumber				= base.tonumber
local tostring				= base.tostring
local print					= base.print
local string				= base.string			

local Factory				= require('Factory')
local DialogLoader			= require('DialogLoader')
local gettext				= require('i_18n')
local dxgui					= require('dxgui')

local function _(text) 
	return gettext.dtranslate('simulator', text) 
end

instances = {}
instanceId = 0
--[[
function addHandlerFunc(self, name, func)
	self.handlerFunctions_[name] = func
end

function callHandlerFunc(self, name, ...)
	local func = self.handlerFunctions_[name]
	
	if func then
		func(...)
	end
end
--]]
local function create(self)
	local localization = {
		map					= _('MAP'),
		hdg					= _('HDG:'),
		--LL					= _('LL'),
		--MGRS				= _('MGRS'),
		--me					= _('>Me<'),
		tip_Coordinates		= _("Coordinates,Height"),
		tip_EnterVehicle	= _("Unit  Take Control"),
		tip_AllRoutes		= _('Show all routes'),
		tip_AllTargets		= _('Show all targets'),
		tip_DetectionAreas	= _('View detection areas'),
		tip_EngagementAreas	= _('View engagement areas'),
		tip_LabelsA			= _("Show Labels , Aerial"),
		tip_LabelsG			= _("Show Labels , Ground Units"),
		tip_LabelsW			= _("Show Labels , Weapon in flight"),
		tip_Ruler			= _('Show ruler'),
		tip_ZoomIn			= _('Zoom in'),
		tip_ZoomOut			= _('Zoom out'),
		tip_ActualSize		= _('Actual size'),
		tip_BullseyeRfrnce	= _("On/Off BullsEye reference"),
		tip_CenterOnPlane	= _('Center on plane'),
		tip_MarksOnOff		= _('Mark Labels On/Off'),
		tip_LifeBar			= _('Show life bar'),
		tip_MarkLabel		= _('Mark Label'),
		tip_LL_grid			= _("Show LL grid"),
		tip_MGRS_grid		= _("Show MGRS grid"),
		tip_UserDraw		= _("Show Drawings"),
		tip_WINDY			= _("Show wind map"),
		tip_RouteTool		= _('Show Route Tool'),
	}
	self.window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/F10View/AwacsCameraDialogToolbar.dlg', localization)
--	print('window_ = ', window_)	
end

function getInstance(id)
	if instances[id] then
		return instances[id]
	end
	print(string.format('AwacsMapDialogToolbar.getInstance: instance not found for id = %d', id))
	return nil
end

function getWindow(self)
	return self.window_.widget
end

function kill(self)
	if instances[self.id] then
		instances[self.id] = nil
	end
	self.window_:kill()
	self.window_ = nil
end

function show(self)
	self.window_:setVisible(true)
end

function hide(self)
	self.window_:setVisible(false)
end

function setVisible(self, b)
	self.window_:setVisible(b)
end

function isVisible(self)
	return self.window_:getVisible()
end

function getVisible(self)
	return self.window_:getVisible()
end

getToggleButtonShowLatLonGrid		= function (self) return self.window_.panelTop.toggleButtonShowLatLonGrid.widget end
getToggleButtonShowMgrsGrid			= function (self) return self.window_.panelTop.toggleButtonShowMgrsGrid.widget end
getToggleButtonShowWindy			= function (self) return self.window_.panelTop.toggleButtonShowWindy.widget end
getToggleButtonShowUserDraw			= function (self) return self.window_.panelTop.toggleButtonShowUserDraw.widget end
getButtonZoom100					= function (self) return self.window_.panelTop.buttonZoom100.widget end
getToggleButtonZoomIn				= function (self) return self.window_.panelTop.toggleButtonZoomIn.widget end
getToggleButtonZoomOut				= function (self) return self.window_.panelTop.toggleButtonZoomOut.widget end
getToggleButtonCenterOnPlane		= function (self) return self.window_.panelTop.toggleButtonCenterOnPlane.widget end
getToggleButtonShowLifeBar			= function (self) return self.window_.panelTop.toggleButtonShowLifeBar.widget end
getToggleButtonMarkPanel			= function (self) return self.window_.panelTop.buttonMarkPanel.widget end
getButtonEnterVehicle				= function (self) return self.window_.panelTop.buttonEnterVehicle.widget end
getButtonEnterRadio					= function (self) return self.window_.panelTop.buttonEnterRadio.widget end
getToggleButtonShowRoutes			= function (self) return self.window_.panelTop.toggleButtonShowRoutes.widget end
getToggleButtonShowTargets			= function (self) return self.window_.panelTop.toggleButtonShowTargets.widget end
getToggleButtonShowDetectionAreas	= function (self) return self.window_.panelTop.toggleButtonShowDetectionAreas.widget end
getToggleButtonShowEngagementAreas 	= function (self) return self.window_.panelTop.toggleButtonShowEngagementAreas.widget end
getToggleButtonMarkVis 				= function (self) return self.window_.panelTop.buttonMarkVis.widget end
getToggleButtonShowLabelsA			= function (self) return self.window_.panelTop.toggleButtonShowLabelsA.widget end
getToggleButtonShowLabelsG			= function (self) return self.window_.panelTop.toggleButtonShowLabelsG.widget end
getToggleButtonShowLabelsW			= function (self) return self.window_.panelTop.toggleButtonShowLabelsW.widget end
getToggleButtonShowRuler			= function (self) return self.window_.panelTop.toggleButtonShowRuler.widget   end
getToggleButtonBullsEyeRef			= function (self) return self.window_.panelTop.toggleButtonBullsEyeRef.widget end
getStaticCoordinates				= function (self) return self.window_.panelTop.staticCoordinates.widget end
getDatum							= function (self) return self.window_.panelTop.buttonDatum.widget end
getStaticTime 						= function (self) return self.window_.TIME_DATE.TIME.widget	end
getStaticDate 						= function (self) return self.window_.TIME_DATE.DATE.widget 	end
getStaticSimSpeed 					= function (self) return self.window_.TIME_DATE.SIMSPEED.widget	end
getHeadingUnits 					= function (self) return self.window_.panelTop.buttonHeadingUnits.widget	end
getImperialMetric 					= function (self) return self.window_.panelTop.buttonImperialMetric.widget	end
getToggleButtonShowRouteTool		= function (self) return self.window_.panelTop.toggleButtonShowRouteTool.widget  end

function setCallbacks(self, mapDialog, funcShowRouteToolCallback)
	print(string.format('AwacsMapDialogToolbar: setCallbacks, id = %d, surfaceId = %d', self.id, self.window_:getSurfaceId()))	
	self.mapDialog = mapDialog
	self.onShowRouteToolCallback = funcShowRouteToolCallback
end

function new()
	return Factory.create(_M)
end

function construct(self)
	create(self)
	self.mapDialog = nil
	
	self.window_.panelTop.toggleButtonShowRouteTool.onChange = function(self2)
		if self.onShowRouteToolCallback then
			print(string.format('AwacsMapDialogToolbar: id = %d, onShowRouteToolCallback(%s)', self.id, tostring(self2:getState())))
			self.onShowRouteToolCallback(self.mapDialog, self2:getState())
		end
	end	
	
	instanceId = instanceId + 1
	self.id = instanceId
	self:setVisible(false)
	instances[instanceId] = self
	print(string.format('AwacsMapDialogToolbar: new instanceId = %d', self.id))
end
