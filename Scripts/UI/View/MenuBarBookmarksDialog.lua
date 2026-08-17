-- Toolbar for the F11 view and for the RCtrl-F2 view
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

local function _(text) 
	return gettext.dtranslate('simulator', text) 
end

-- Predefined bookmarks menu item really controls current airfield camera positions
-- for the F11 view in the handler MenuBarBookmarksDialog::onPredefinedBookmarksMenu(). 
local localization = {
	predefined_bookmarks	= _('Predefined bookmarks'),
	current_positions		= _('Current positions'),
	user_bookmarks 			= _('User Bookmarks'),
	cameras_editor    		= _('Cameras editor'),
	clipboard				= _('Clipboard'),
	settings				= _('Settings'),
--	frontal					= _('Frontal'),
--	horizontal				= _('Horizontal'),
--	vertical				= _('Vertical'),
--	look_down				= _('Look down'),
--	world_axes				= _('World axes'),
	camera_to_clipboard 	= _('Camera to clipboard'),
	clipboard_to_camera 	= _('Clipboard to camera'),
	airdrome_position		= _('Airdrome position (RCtrl-Num5)'),
	custom_position			= _('Custom position (RShift-Num5)'),
	visible_cameras			= _('Visible cameras'),
	animated_cameras		= _('Animated cameras'),
}

local window_
local menuBar_
local menuPredefinedBookmarks_
local menuUserBookmarks_
local menuClipboard_
local menuSettings_
local editorMenuItem_
local visibleCamerasMenuItem_
local animatedCamerasMenuItem_
--local radioFrontal_
--local radioHorizontal_
--local radioVertical_
--local lookDownItem_
--local worldAxesItem_
--local useCameraMode_
	
local function setPredefinedBookmarkItems(useAirfields)
-- set PredefinedBookmarks somewhere in the Lua state 
	menuPredefinedBookmarks_:clear()	
	if PredefinedBookmarks ~= nil then
		for i = 1, table.getn(PredefinedBookmarks) do
			local bookmarkInfo = PredefinedBookmarks[i]
			local name = bookmarkInfo.name	           
			local menuItem = MenuItem.new(name)
			menuItem.id = i - 1
			menuPredefinedBookmarks_:insertItem(menuItem)
		end	
	end
	if useAirfields then
		local menuItem = MenuSeparatorItem.new()
		menuPredefinedBookmarks_:insertItem(menuItem)
		menuItem = MenuItem.new(localization.airdrome_position)
		menuItem.id = -2	-- airdrome position ID	
		menuPredefinedBookmarks_:insertItem(menuItem)
		
		menuItem = MenuSeparatorItem.new()
		menuPredefinedBookmarks_:insertItem(menuItem)
		menuItem = MenuItem.new(localization.custom_position)
		menuItem.id = -1	-- custom position ID	
		menuPredefinedBookmarks_:insertItem(menuItem)
	end
end

local function setAirdromeBookmarks()
-- PredefinedBookmarks created here (names only)

	PredefinedBookmarks = {}
	for airdromeNumber, airdromeInfo in pairs(Terrain.GetTerrainConfig('Airdromes')) do
        local locale = i18n.getLocale()		
        local name	           
        if airdromeInfo.display_name then
            name = _(airdromeInfo.display_name) 
        else
            name = airdromeInfo.names[locale] or airdromeInfo.names['en']
        end
		local bookmarkInfo = {name = name} 		
		table.insert(PredefinedBookmarks, bookmarkInfo)
	end
	--print("setAirdromeBookmarks: PredefinedBookmarks size = "..table.getn(PredefinedBookmarks)) 
end

local function updateUserBookmarkItems()
--	print('updateUserBookmarkItems')
-- set UserBookmarks somewhere in the Lua state
	menuUserBookmarks_:clear()	
	local bookmarks_count = 0
	if UserBookmarks ~= nil then
		bookmarks_count = table.getn(UserBookmarks)
--		print(string.format('updateUserBookmarkItems: %d bookmarks', bookmarks_count))
		for i = 1, bookmarks_count do
			local bookmarkInfo = UserBookmarks[i]
			local name = bookmarkInfo.name
			menuItem = MenuItem.new(name)
			menuItem.id = i - 1
--			print(string.format('insertItem(%s, id = %d)', name, menuItem.id))
			menuUserBookmarks_:insertItem(menuItem)
		end
	end
--	items_count = menuUserBookmarks_:getItemCount()
--	print(string.format('updateUserBookmarkItems: items_count = %d', items_count))
end

local function setEditorCheckBox(state)
	editorMenuItem_:setState(state)
end

local function setVisibleCamerasCheckBox(state)
	visibleCamerasMenuItem_:setState(state)
end

local function setAnimateCamerasCheckBox(state)
	animatedCamerasMenuItem_:setState(state)
end
--[[
local function setCameraModeRadio(id)
	if useCameraMode_ then
		menuSettings_:setRadio(id)
	end
end 
--]]
local function setClipboardItems(useAirfields)
	local id = 0
    local menuItem = MenuItem.new(localization.camera_to_clipboard)
	menuItem.id = id
	menuClipboard_:insertItem(menuItem)
	if useAirfields then		
		id = id + 1
		menuItem = MenuItem.new(localization.clipboard_to_camera)
		menuItem.id = id
		menuClipboard_:insertItem(menuItem)
	end
end

local function create(useAirfields)
--local function create(useAirfields, useCameraMode)
--	useCameraMode_ = useCameraMode		
	local screenWidth, screenHeight = dxgui.GetWindowSize()
--	print('screen:', screenWidth, screenHeight)
	if useAirfields then
		localization.predefined_bookmarks = localization.current_positions
	end
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/View/MenuBarBookmarksDialog.dlg', localization)
	local w, h = window_:getSize()
--	print('dialog:', w, h)
	window_:setBounds(0, 0, screenWidth, h)	
--	window_:setSkin(SkinUtils.setWindowBkgColor(window_:getSkin(), 0x00000080))
	menuBar_ = window_.menuBarTop
	--button_close_ = window_.button_close
	menuPredefinedBookmarks_ = menuBar_.menuBarItemPredefinedBookmarks.menu
	menuUserBookmarks_ = menuBar_.menuBarItemUserBookmarks.menu
	menuClipboard_ = menuBar_.menuBarItemClipboard.menu
	menuSettings_ = menuBar_.menuBarItemSettings.menu	
		
	setClipboardItems(useAirfields)
	
	editorMenuItem_ = menuSettings_.menuCheckItemEditor
	editorMenuItem_.id = 0
	visibleCamerasMenuItem_	= menuSettings_.menuCheckItemVisible
	visibleCamerasMenuItem_.id = 1
	animatedCamerasMenuItem_	= menuSettings_.menuCheckItemAnimated
	animatedCamerasMenuItem_.id = 2
--[[	
	if useCameraMode_ then
		menuSettings_.menuSeparatorItem0.id = 3
		
		radioFrontal_ = menuSettings_.menuRadioItemFrontal
		radioFrontal_.id = 4
		radioHorizontal_ = menuSettings_.menuRadioItemHorizontal
		radioHorizontal_.id = 5
		radioVertical_ = menuSettings_.menuRadioItemVertical
		radioVertical_.id = 6
		radioFrontal_:setState(true)

		menuSettings_.menuSeparatorItem1.id = 7
			
		lookDownItem_ = menuSettings_.menuLookDownItem
		lookDownItem_.id = 8
		worldAxesItem_ = menuSettings_.menuWorldAxesItem
		worldAxesItem_.id = 9
	end
--]]		
	function menuSettings_:onChange()
		local item = self:getSelectedItem()
--		print("menuSettings_:onChange()-> id = "..item.id..", text = "..item:getText())
		if item.id == 0 then
			local state = item:getState()
--			print('state =', state)
			MenuBarBookmarksDialog_onEditorCheckBox(state)
		elseif item.id == 1 then
			local state = item:getState()
			MenuBarBookmarksDialog_onVisibleCamerasCheckBox(state)
		elseif item.id == 2 then
			local state = item:getState()
			MenuBarBookmarksDialog_onAnimatedCamerasCheckBox(state)
		end
--[[		
		if useCameraMode_ then
			if item.id < 7 then
				MenuBarBookmarksDialog_onCameraModeRadio(item.id)
			elseif item.id == 8 then
				MenuBarBookmarksDialog_onCameraLookDown()
			elseif item.id == 9 then
				MenuBarBookmarksDialog_onCameraWorldAxes()
			end
		end
==]]		
	end
--[[	
	if useCameraMode_ then
		function menuSettings_:setRadio(id)
			if id == 4 then
				radioFrontal_:setState(true)
			elseif id == 5 then
				radioHorizontal_:setState(true)
			elseif id == 6 then
				radioVertical_:setState(true)
			end
		end	
	end
--]]	
	function menuPredefinedBookmarks_:onChange()
		local item = self:getSelectedItem()
--		print("menuPredefinedBookmarks_:onChange()-> id = "..item.id..", text = "..item:getText())
		MenuBarBookmarksDialog_onPredefinedBookmarksMenu(item.id, item:getText())
	end
	
	function menuUserBookmarks_:onChange()
		local item = self:getSelectedItem()
--		print("menuUserBookmarks_:onChange()-> id = "..item.id..", text = "..item:getText())
		MenuBarBookmarksDialog_onUserBookmarksMenu(item.id, item:getText())
	end
	
	function menuClipboard_:onChange()
		local item = self:getSelectedItem()
--		print("menuClipboard_:onChange()-> id = "..item.id..", text = "..item:getText())
		MenuBarBookmarksDialog_onClipboardMenu(item.id, item:getText())
	end
 
	if useAirfields then
		setAirdromeBookmarks()	-- C++	
		setPredefinedBookmarkItems(useAirfields)
	end

-- 	setPredefinedBookmarkItems(useAirfields) -- call from C++ if useAirfields == 0 	
--	updateUserBookmarkItems()	-- called from C++
	
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

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	setVisible							= setVisible,
	getWindow							= getWindow,
	isVisible							= isVisible,
		
	setPredefinedBookmarkItems			= setPredefinedBookmarkItems,
	setAirdromeItems					= setAirdromeItems,
	updateUserBookmarkItems				= updateUserBookmarkItems,
	setEditorCheckBox					= setEditorCheckBox,
	setVisibleCamerasCheckBox			= setVisibleCamerasCheckBox,
	setAnimatedCamerasCheckBox			= setAnimatedCamerasCheckBox,
--	setCameraModeRadio					= setCameraModeRadio,
}
