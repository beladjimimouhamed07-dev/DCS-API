-- toolbar for the Briefing Room view
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
local i18n 				= require('i18n')

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
	room_views				= _('Room Views'),
	air_squadrons			= _('Air Squadrons'),
	pilots					= _('Pilots'),	
	from_room				= _('From Room'),
	to_room					= _('To Room'),
	TV						= _('TV'),
	projector				= _('Projector'),
	greenie_board			= _('Greenie Board'),
	kill_board				= _('Kill Board'),
	pilot_PC				= _('Pilot PC'),
	commander_PC			= _('Commander PC'),
}

local camera_name_
local window_
local menuBar_
local menuViews_
local menuRoomViews_
local menuAirSquadrons_
local menuPilots_
local buttonClose_

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
    menuViews_.menuItemSupercarrier.func  	= BriefingRoomToolbarDialog_onSupercarrier
    menuViews_.menuItemAirBoss.func       	= BriefingRoomToolbarDialog_onAirBoss
    menuViews_.menuItemLSO.func           	= BriefingRoomToolbarDialog_onLSO
    menuViews_.menuItemCatapults.func     	= BriefingRoomToolbarDialog_onCatapults
    menuViews_.menuItemHangar.func      	= BriefingRoomToolbarDialog_onHangar
    menuViews_.menuItemBriefingRoom.func  	= BriefingRoomToolbarDialog_onBriefingRoom
    setMenuCallback(menuViews_)
end

local function setRoomViewsMenu()
    menuRoomViews_.menuItemFromRoom.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(1) end
    menuRoomViews_.menuItemToRoom.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(2) end
    menuRoomViews_.menuItemTV.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(3) end
    menuRoomViews_.menuItemProjector.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(4) end
    menuRoomViews_.menuItemGreenieBoard.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(5) end
	menuRoomViews_.menuItemKillBoard.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(6) end
	menuRoomViews_.menuItemCommanderPC.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(7) end	
	menuRoomViews_.menuItemPilotPC.func  = function() BriefingRoomToolbarDialog_onCameraCustomPosition(8) end	
	setMenuCallback(menuRoomViews_)
end

local function updateAirSquadronsMenu()
--	print('updateAirSquadronsMenu()')
	if (menuAirSquadrons_ ~= nil and AirSquadrons ~= nil) then
		menuAirSquadrons_:clear()
--		print('AirSquadrons: ', table.getn(AirSquadrons))
--		for k, v in pairs(AirSquadrons) do
--			print('~~~k, v', k, v)
--		end
		for i = 1, table.getn(AirSquadrons) do
			local name = AirSquadrons[i]
			local menuItem = MenuItem.new(name)
--			menuItem.id = i - 1
			menuAirSquadrons_:insertItem(menuItem)			
		end
		function menuAirSquadrons_:onChange()
			local item = self:getSelectedItem()
			BriefingRoomToolbarDialog_onAirSquadron(item:getText())
		end	
	end
end

local function updatePilotsMenu()
--	print('updatePilotsMenu()')
	if (menuPilots_ ~= nil and Pilots ~= nil) then
		menuPilots_:clear()
--		print('Pilots: ', table.getn(Pilots))
--		for k, v in pairs(Pilots) do
--			print('~~~k, v', k, v)
--		end
		for i = 1, table.getn(Pilots) do
			local name = Pilots[i]
			local menuItem = MenuItem.new(name)
--			menuItem.id = i - 1
			menuPilots_:insertItem(menuItem)			
		end
		function menuPilots_:onChange()
			local item = self:getSelectedItem()
			onPilot(item:getText())
		end	
	end
end

local function create(camera_name)
	camera_name_ = camera_name
--	print('BriefingRoomToolbarDialog:create(' .. camera_name_ .. ')')
	local screenWidth, screenHeight = dxgui.GetWindowSize()
	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/View/BriefingRoomToolbarDialog.dlg', localization)
	local w, h = window_:getSize()
--	print('screenWidth = ', screenWidth)
	window_:setBounds(0, 0, screenWidth, h)	
	window_:setSkin(SkinUtils.setWindowBkgColor(window_:getSkin(), 0x00000080))
	
	buttonClose_ = window_.button_close
	function buttonClose_:onChange()
		window_:setVisible(false)
	end
	
	menuBar_ = window_.menuBarTop	
	
	menuViews_ = menuBar_.menuBarItemViews.menu
	menuRoomViews_ = menuBar_.menuBarItemRoomViews.menu
	menuAirSquadrons_ = menuBar_.menuBarItemAirSquadrons.menu
	function menuAirSquadrons_:onChange()
		local item = self:getSelectedItem()
		BriefingRoomToolbarDialog_onAirSquadron(item:getText())
	end	
	menuPilots_ = menuBar_.menuBarItemPilots.menu
	function menuPilots_:onChange()
		local item = self:getSelectedItem()
		BriefingRoomToolbarDialog_onPilot(item:getText())
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

local function isVisible()
	return window_:getVisible()
end

local function setVisible(visible)
	window_:setVisible(visible)
end

local function getWindow()
	return window_.widget
end

local function setMenuCallbacks()
	setViewsMenu()
	setRoomViewsMenu()
end

return {
	create						= create,
	kill						= kill,
	show						= show,
	hide						= hide,
	getWindow					= getWindow,
	isVisible					= isVisible,
	setVisible					= setVisible,
	setMenuCallbacks			= setMenuCallbacks,
	updateAirSquadronsMenu		= updateAirSquadronsMenu,
	updatePilotsMenu			= updatePilotsMenu,
}
