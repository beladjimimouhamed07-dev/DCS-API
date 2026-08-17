-- окно с картой для вида F10
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
		Map					= _('Map'),
		Alt					= _('Alt'),
		Sat					= _('Sat'),
	}
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/F10View/AwacsCameraDialogModes.dlg', localization)
end

local function kill()
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

local function getSwitchButtonMapModeScheme()
	return window_.panelRight.switchButtonMapModeScheme.widget
end

local function getSwitchButtonMapModeSchemeAlt()
	return window_.panelRight.switchButtonMapModeSchemeAlt.widget
end

local function getSwitchButtonMapModeSatellite()
	return window_.panelRight.switchButtonMapModeSatellite.widget
end

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow							= getWindow,
	
	getSwitchButtonMapModeScheme		= getSwitchButtonMapModeScheme,
	getSwitchButtonMapModeSchemeAlt		= getSwitchButtonMapModeSchemeAlt,
	getSwitchButtonMapModeSatellite		= getSwitchButtonMapModeSatellite,
}