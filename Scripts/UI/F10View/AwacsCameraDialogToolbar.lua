-- окно с картой для вида F10
-- ���� � ������ ��� ���� F10
local DialogLoader			= require('DialogLoader')
local gettext				= require('i_18n')
local dxgui					= require('dxgui')

local function _(text) 
	return gettext.dtranslate('simulator', text) 
end

local window_
local awacsCameraWidgetPointer_
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

local function create()
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
		tip_Beacons			= _('Show beacons'),
		tip_MarkLabel		= _('Mark Label'),
		tip_LL_grid			= _("Show LL grid"),
		tip_MGRS_grid		= _("Show MGRS grid"),
		tip_UserDraw		= _("Show Drawings"),
		tip_WINDY			= _("Show wind map"),
		tip_RouteTool		= _('Show Route Tool'),
	}
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/F10View/AwacsCameraDialogToolbar.dlg', localization)
--	print('window_ = ', window_)
end

local function saveGridsStates()
	local optionsEditor = require('optionsEditor')
	optionsEditor.setOption("miscellaneous.mgrs_grid_visible", window_.panelTop.toggleButtonShowMgrsGrid:getState())
	optionsEditor.setOption("miscellaneous.geo_grid_visible", window_.panelTop.toggleButtonShowLatLonGrid:getState())
end

local function kill()
	saveGridsStates()

	window_:kill()
	window_ = nil
end

local function show()
	window_:setVisible(true)
end

local function hide()
	window_:setVisible(false)
end

local function isVisible()
	return window_:getVisible()
end

local function getWindow()
	--print('window_.widget = ', window_.widget)
	return window_.widget
end

local function getToggleButtonShowLatLonGrid()
	return window_.panelTop.toggleButtonShowLatLonGrid.widget
end

local function getToggleButtonShowMgrsGrid()
	return window_.panelTop.toggleButtonShowMgrsGrid.widget
end

local function getToggleButtonShowWindy()
	return window_.panelTop.toggleButtonShowWindy.widget
end

local function getToggleButtonShowUserDraw()
	return window_.panelTop.toggleButtonShowUserDraw.widget
end

local function getButtonZoom100()
	return window_.panelTop.buttonZoom100.widget
end

local function getToggleButtonZoomIn()
	return window_.panelTop.toggleButtonZoomIn.widget
end

local function getToggleButtonZoomOut()
	return window_.panelTop.toggleButtonZoomOut.widget
end

local function getToggleButtonCenterOnPlane()
	return window_.panelTop.toggleButtonCenterOnPlane.widget
end

local function getToggleButtonShowLifeBar()
	return window_.panelTop.toggleButtonShowLifeBar.widget
end

local function getToggleButtonShowBeacons()
	return window_.panelTop.toggleButtonShowBeacons.widget
end

local function getToggleButtonMarkPanel()
	return window_.panelTop.buttonMarkPanel.widget
end

local function getButtonEnterVehicle()
	return window_.panelTop.buttonEnterVehicle.widget
end

local function getButtonEnterRadio()
	return window_.panelTop.buttonEnterRadio.widget
end

local function getToggleButtonShowRoutes()
	return window_.panelTop.toggleButtonShowRoutes.widget
end

local function getToggleButtonShowTargets()
	return window_.panelTop.toggleButtonShowTargets.widget
end

local function getToggleButtonShowDetectionAreas()
	return window_.panelTop.toggleButtonShowDetectionAreas.widget
end

local function getToggleButtonShowEngagementAreas()
	return window_.panelTop.toggleButtonShowEngagementAreas.widget
end



local function getToggleButtonMarkVis()
	return window_.panelTop.buttonMarkVis.widget
end

local function setAwacsCameraWidgetPointer(pointer)
	awacsCameraWidgetPointer_ = pointer
end


return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow							= getWindow,
	
	getToggleButtonShowLatLonGrid		= getToggleButtonShowLatLonGrid,
	getToggleButtonShowMgrsGrid			= getToggleButtonShowMgrsGrid,
	getToggleButtonShowWindy			= getToggleButtonShowWindy,
	getToggleButtonShowUserDraw			= getToggleButtonShowUserDraw,
	
	getButtonZoom100					= getButtonZoom100,
	getToggleButtonZoomIn				= getToggleButtonZoomIn,
	getToggleButtonZoomOut				= getToggleButtonZoomOut,
	getToggleButtonCenterOnPlane		= getToggleButtonCenterOnPlane,
	getToggleButtonShowLifeBar			= getToggleButtonShowLifeBar,
	getToggleButtonShowBeacons			= getToggleButtonShowBeacons,

	getToggleButtonMarkPanel			= getToggleButtonMarkPanel,
	getToggleButtonMarkVis				= getToggleButtonMarkVis,

	getButtonEnterVehicle				= getButtonEnterVehicle,
	getButtonEnterRadio					= getButtonEnterRadio,
	getToggleButtonShowRoutes			= getToggleButtonShowRoutes,
	getToggleButtonShowTargets			= getToggleButtonShowTargets,
	getToggleButtonShowDetectionAreas	= getToggleButtonShowDetectionAreas,
	getToggleButtonShowEngagementAreas	= getToggleButtonShowEngagementAreas,
	getToggleButtonShowLabelsA			= function () return window_.panelTop.toggleButtonShowLabelsA.widget end,
	getToggleButtonShowLabelsG			= function () return window_.panelTop.toggleButtonShowLabelsG.widget end,
	getToggleButtonShowLabelsW			= function () return window_.panelTop.toggleButtonShowLabelsW.widget end,
	getToggleButtonShowRuler			= function () return window_.panelTop.toggleButtonShowRuler.widget   end,
	getToggleButtonBullsEyeRef			= function () return window_.panelTop.toggleButtonBullsEyeRef.widget end,
	getStaticCoordinates				= function () return window_.panelTop.staticCoordinates.widget end,
	getDatum							= function () return window_.panelTop.buttonDatum.widget end,
	getStaticTime 						= function () return window_.TIME_DATE.TIME.widget	end,
	getStaticDate 						= function () return window_.TIME_DATE.DATE.widget 	end,
	getStaticSimSpeed 					= function () return window_.TIME_DATE.SIMSPEED.widget	end,
	getHeadingUnits 					= function () return window_.panelTop.buttonHeadingUnits.widget	end,
	getImperialMetric 					= function () return window_.panelTop.buttonImperialMetric.widget	end,
	getToggleButtonShowRouteTool		= function () return window_.panelTop.toggleButtonShowRouteTool.widget  end,
	
	addHandlerFunc						= addHandlerFunc,
	callHandlerFunc						= callHandlerFunc,
	
	setAwacsCameraWidgetPointer			= setAwacsCameraWidgetPointer,
}