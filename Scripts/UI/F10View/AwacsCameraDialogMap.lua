-- окно с картой для вида F10
local DialogLoader			= require('DialogLoader')
local dxgui					= require('dxgui')

local window_

local function create()
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/F10View/AwacsCameraDialogMap.dlg', {})
end

local function kill()
	if window_ then
		window_:kill()
		window_ = nil
	end
end

local function show()
	if window_ then
		window_:setVisible(true)
	end
end

local function hide()
	if window_ then
		window_:setVisible(false)
	end
end

local function isVisible()
	if window_ then
		return window_:getVisible()
	end
	return false
end

local function getWindow()
	if window_ then
		return window_.widget
	end
	return nil
end

local function removeStaticMapWidgetPlaceholder()
	if window_ then
		window_:removeWidget(window_.staticMapWidgetPlaceholder)
		window_.staticMapWidgetPlaceholder:destroy()
		window_.staticMapWidgetPlaceholder = nil
	end
end

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow							= getWindow,
	removeStaticMapWidgetPlaceholder	= removeStaticMapWidgetPlaceholder,
}