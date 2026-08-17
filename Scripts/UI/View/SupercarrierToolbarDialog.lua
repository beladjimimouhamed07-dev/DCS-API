-- Root toolbar for the Supercarrier view
local DialogLoader		= require('DialogLoader')
local gettext			= require('i_18n')
local dxgui				= require('dxgui')
local SkinUtils			= require('SkinUtils')
local Skin              = require('Skin')
local Menu          	= require("Menu")
local MenuItem      	= require("MenuItem")
local MenuSubItem   	= require("MenuSubItem")
local MenuSeparatorItem = require("MenuSeparatorItem")
local MenuRadioItem 	= require("MenuRadioItem")
local MenuCheckItem 	= require("MenuCheckItem")
local Button			= require("Button")
local Terrain           = require('terrain')
local i18n 				= require('i18n')
--local console			= require('ConsoleDialog')	-- for debugging

--local function consoleCallback(text)
--	loadstring(text)
--end

local function _(text) 
	return gettext.dtranslate('simulator', text) 
end

local localization = {
	views					= _('Views'),
	supercarrier			= _('Supercarrier'),
	air_boss 				= _('Air Boss'),
	lso    					= _('LSO'),
	catapults				= _('Catapults'),
	hangar					= _('Hangar'),
	briefing_room			= _('Briefing Room'),
	camera_mode				= _('Camera Mode'),
	unit_collision			= _('Unit Collision'),
	inside_room				= _('Inside Room'),
	along_deck				= _('Along The Deck'),
	bookmarks				= _('Bookmarks'),
	visible					= _('Visible'),
	animated				= _('Animated'),
	predefined				= _('Predefined'),
	user_defined			= _('User Defined'),
	editor					= _('Editor'),
	clipboard				= _('Clipboard'),
	camera_to_clipboard		= _('Camera To Clipboard'),
	routes					= _('Routes'),
}

local camera_name_
local window_
local menuBar_
local menuViews_
local menuCameraMode_
local menuCheckItemUnitCollision_
local menuCheckItemInsideRoom_
local menuCheckItemAlongDeck_
local menuBookmarks_
local menuClipboard_
local menuRoutes_
--local button_close_
local menuCheckItemBookmarksVisible_
local menuCheckItemBookmarksAnimated_
local menuCheckItemBookmarksEditor_
local menuPredefinedBookmarks_
local menuUserDefinedBookmarks_
local predefinedBookmarks_
local menuCheckItemRoutesVisible_
local menuCheckItemRouteEditor_
local menuCheckItemRoutePlayer_

local function setMenuCallback(menu)
    function menu:onChange()
		local item = self:getSelectedItem()
        if item.func then
			if item.getState then
				item.func(item:getState())
			else
				item.func()
			end
        end
    end
end

local function setViewsMenu()
    local menu = menuViews_

    setMenuCallback(menu)

    menu.menuItemSupercarrier.func  = SupercarrierToolbarDialog_onSupercarrier
    menu.menuItemAirBoss.func       = SupercarrierToolbarDialog_onAirBoss
    menu.menuItemLSO.func           = SupercarrierToolbarDialog_onLSO
    menu.menuItemCatapults.func     = SupercarrierToolbarDialog_onCatapults
    menu.menuItemHangar.func      	= SupercarrierToolbarDialog_onHangar
    menu.menuItemBriefingRoom.func  = SupercarrierToolbarDialog_onBriefingRoom
end

local function setCameraModeMenu()
    local menu = menuCameraMode_

    setMenuCallback(menu)
			
    menu.menuCheckItemUnitCollision.func = SupercarrierToolbarDialog_onUnitCollision
    menu.menuCheckItemInsideRoom.func 	 = SupercarrierToolbarDialog_onInsideRoom
    menu.menuCheckItemAlongDeck.func     = SupercarrierToolbarDialog_onAlongDeck
end

local function setBookmarksMenu()
    local menu = menuBookmarks_

    setMenuCallback(menu)
			
    menu.menuCheckItemVisible.func 	 = SupercarrierToolbarDialog_onBookmarksVisible
    menu.menuCheckItemAnimated.func  = SupercarrierToolbarDialog_onBookmarksAnimated
--    menu.menuSubItemPredefined.func  = SupercarrierToolbarDialog_onBookmarksPredefined
--    menu.menuSubItemUserDefined.func = SupercarrierToolbarDialog_onBookmarksUserDefined
    menu.menuCheckItemEditor.func    = SupercarrierToolbarDialog_onBookmarksEditor
end


local function setClipboardMenu()
    local menu = menuClipboard_

    setMenuCallback(menu)
			
    menu.menuItemCameraToClipboard.func = SupercarrierToolbarDialog_onCameraToClipboard
end

local function setRoutesMenu()
    local menu = menuRoutes_

    setMenuCallback(menu)
			
    menu.menuCheckItemVisible.func 	 = SupercarrierToolbarDialog_onRoutesVisible
    menu.menuCheckItemEditor.func    = SupercarrierToolbarDialog_onRouteEditor
    menu.menuCheckItemPlayer.func    = SupercarrierToolbarDialog_onRoutePlayer
end

local function create(camera_name, use_camera_routes)
	camera_name_ = camera_name
	use_camera_routes_ = use_camera_routes
--	print('SupercarrierToolbarDialog:create(' .. camera_name_ .. ')')
	local screenWidth, screenHeight = dxgui.GetWindowSize()
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/View/SupercarrierToolbarDialog.dlg', localization)
	local w, h = window_:getSize()
--	print('screenWidth = ', screenWidth)
	window_:setBounds(0, 0, screenWidth, h)	
--	window_:setSkin(SkinUtils.setWindowBkgColor(window_:getSkin(), 0x00000080))
	
	menuBar_ = window_.menuBarTop	
	
	menuViews_ = menuBar_.menuBarItemViews.menu
	menuCameraMode_ = menuBar_.menuBarItemCameraMode.menu
	menuBookmarks_ = menuBar_.menuBarItemBookmarks.menu
	
	if camera_name_ == 'CameraCatapult' then
		menuBar_.menuBarItemCameraMode:setVisible(false)		
		menuBar_.menuBarItemBookmarks:setVisible(false)
	else
		menuCheckItemUnitCollision_ = menuCameraMode_.menuCheckItemUnitCollision
		menuCheckItemUnitCollision_:setState(false)
		menuCheckItemInsideRoom_ = menuCameraMode_.menuCheckItemInsideRoom
		menuCheckItemInsideRoom_:setState(true)
		menuCheckItemAlongDeck_ = menuCameraMode_.menuCheckItemAlongDeck
		menuCheckItemAlongDeck_:setState(false)
		menuCheckItemBookmarksVisible_ = menuBookmarks_.menuCheckItemVisible
		menuCheckItemBookmarksVisible_:setState(false)
		menuCheckItemBookmarksAnimated_ = menuBookmarks_.menuCheckItemAnimated
		menuCheckItemBookmarksAnimated_:setState(false)
		menuCheckItemBookmarksEditor_ = menuBookmarks_.menuCheckItemEditor
		menuCheckItemBookmarksEditor_:setState(false)
	end
	
	
	menuClipboard_ = menuBar_.menuBarItemClipboard.menu	
	
	if use_camera_routes_ then
		menuRoutes_ = menuBar_.menuBarItemRoutes.menu
		menuCheckItemRoutesVisible_ = menuRoutes_.menuCheckItemVisible
		menuCheckItemRoutesVisible_:setState(false)
		menuCheckItemRouteEditor_ = menuRoutes_.menuCheckItemEditor
		menuCheckItemRouteEditor_:setState(false)
		menuCheckItemRoutePlayer_ = menuRoutes_.menuCheckItemPlayer
		menuCheckItemRoutePlayer_:setState(false)
	else
		menuBar_.menuBarItemRoutes:setVisible(false)
	end
		
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

local function setVisible(state)
	window_:setVisible(state)
end

local function isVisible()
	return window_:getVisible()
end

local function getWindow()
	return window_.widget
end

local function setMenuCallbacks()
	setViewsMenu()
	if camera_name_ == 'CameraBriefingRoom' then
		menuBar_.menuBarItemCameraMode:setEnabled(false)
		menuBar_.menuBarItemBookmarks:setEnabled(false)
		menuBar_.menuBarItemClipboard:setEnabled(false)	
		menuBar_.menuBarItemRoutes:setEnabled(false)
	else
		setCameraModeMenu()
		setBookmarksMenu()
		if camera_name_ == 'CameraSupercarrier' or camera_name_ == 'CameraCatapult' then
			setClipboardMenu()
		else
			menuBar_.menuBarItemClipboard:setEnabled(false)
		end
		if use_camera_routes_ then
			setRoutesMenu()
		end
	end
end

local function setPredefinedBookmarkItems()
--	print('setPredefinedBookmarkItems()')
	local menuSkin = menuViews_:getSkin()
	local menuItemSkin = menuViews_.menuItemSupercarrier:getSkin()	
	if menuPredefinedBookmarks_ == nil then	
		menuPredefinedBookmarks_ = Menu.new()
		menuPredefinedBookmarks_:setSkin(menuSkin)
		menuBookmarks_.menuSubItemPredefined:setSubmenu(menuPredefinedBookmarks_)
		function menuPredefinedBookmarks_:onChange()
			local item = self:getSelectedItem()
			SupercarrierToolbarDialog_onPredefinedBookmark(item.id)
		end
	end

	if PredefinedBookmarks ~= nil then
		menuPredefinedBookmarks_:clear()
--		print('PredefinedBookmarks: ', table.getn(PredefinedBookmarks))
		for i = 1, table.getn(PredefinedBookmarks) do
			local bookmarkInfo = PredefinedBookmarks[i]
			local name = bookmarkInfo.name	           
			local menuItem = menuPredefinedBookmarks_:newItem(name)	
			menuItem:setSkin(menuItemSkin)			
			menuItem.id = i - 1
			menuPredefinedBookmarks_:insertItem(menuItem)
--			print(string.format('insertItem(%s, id = %d)', name, menuItem.id))
		end
	end
end

local function updateUserBookmarkItems()
--	print('updateUserBookmarkItems()')
	local menuSkin = menuViews_:getSkin()
	local menuItemSkin = menuViews_.menuItemSupercarrier:getSkin()	
	if menuUserDefinedBookmarks_ == nil then
		menuUserDefinedBookmarks_ = Menu.new()
		menuUserDefinedBookmarks_:setSkin(menuSkin)
		menuBookmarks_.menuSubItemUserDefined:setSubmenu(menuUserDefinedBookmarks_)
		function menuUserDefinedBookmarks_:onChange()
			local item = self:getSelectedItem()
			SupercarrierToolbarDialog_onUserDefinedBookmark(item.id)
		end	
	end
	if (UserBookmarks ~= nil) then
		menuUserDefinedBookmarks_:clear()
--		print('UserBookmarks: ', table.getn(UserBookmarks))
--		for k, v in pairs(UserBookmarks) do
--			print('~~~k, v', k, v.name)
--		end
		for i = 1, table.getn(UserBookmarks) do
			local bookmarkInfo = UserBookmarks[i]
			local name = bookmarkInfo.name
			local menuItem = menuUserDefinedBookmarks_:newItem(name)			
			menuItem:setSkin(menuItemSkin)			
			menuItem.id = i - 1
			menuUserDefinedBookmarks_:insertItem(menuItem)
--			print(string.format('insertItem(%s, id = %d)', name, menuItem.id))
		end
	end
end

local function setUnitCollision(state)
	menuCheckItemUnitCollision_:setState(state)
end

local function setInsideRoom(state)
	menuCheckItemInsideRoom_:setState(state)
end

local function setAlongDeck(state)
	menuCheckItemAlongDeck_:setState(state)
end

local function setVisibleCamerasCheckbox(state)
	menuCheckItemBookmarksVisible_:setState(state)
end

local function setBookmarksEditorCheckbox(state)
	menuCheckItemBookmarksEditor_:setState(state)
end

local function setRouteEditorCheckbox(state)
	if use_camera_routes_ then
		menuCheckItemRouteEditor_:setState(state)
	end
end

local function setRoutePlayerCheckbox(state)
	if use_camera_routes_ then
		menuCheckItemRoutePlayer_:setState(state)
	end
end

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	getWindow							= getWindow,
	isVisible							= isVisible,
	setVisible							= setVisible,
	setMenuCallbacks					= setMenuCallbacks,
	setPredefinedBookmarkItems			= setPredefinedBookmarkItems,
	updateUserBookmarkItems				= updateUserBookmarkItems,
	setUnitCollision					= setUnitCollision,
	setInsideRoom						= setInsideRoom,
	setAlongDeck						= setAlongDeck,
	setVisibleCamerasCheckbox			= setVisibleCamerasCheckbox,
	setBookmarksEditorCheckbox			= setBookmarksEditorCheckbox,
	setRouteEditorCheckbox				= setRouteEditorCheckbox,
	setRoutePlayerCheckbox				= setRoutePlayerCheckbox,
}
