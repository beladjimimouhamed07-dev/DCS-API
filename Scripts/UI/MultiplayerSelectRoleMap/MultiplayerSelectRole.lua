local base = _G

module('MultiplayerSelectRole')

local require = base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local string        = base.string

local DialogLoader		= require('DialogLoader')
local dxgui				= require('dxgui')
local Terrain			= require('terrain')
local i18n				= require('i18n')
local DCS				= require('DCS')
local Chat				= require('mul_chat')
local DcsWeb			= require('DcsWeb')
local Tools				= require('tools')
local textutil          = require('textutil')
local SkinUtils			= require('SkinUtils')
local Gui				= require('dxgui')
local net				= require('net')
local lfs				= require('lfs')
local MeSettings		= require('MeSettings')
local FileDialog		= require('FileDialog')
local FileDialogFilters	= require('FileDialogFilters')
local log 				= require('log')
local MsgWindow			= require('MsgWindow')
local waitScreen		= require('me_wait_screen')
local UC				= require('utils_common')
local UpdateManager		= require('UpdateManager')
local slotJoinQuery		= require('mul_query')
local keys				= require('mul_keys')
local U                 = require('me_utilities')
local PlayersPool		= require('mul_playersPool')
local Input				= require('Input')
local BriefingDialog	= require('BriefingDialog')

local MultiplayerSelectRoleDialog = require('MultiplayerSelectRoleDialog')
local MultiplayerSelectDynamicDialog = require('MultiplayerSelectDynamicDialog')
local MultiplayerSelectCoalitionDialog = require('MultiplayerSelectCoalitionDialog')
local MultiplayerSelectAirdromeDialog = require('MultiplayerSelectAirdromeDialog')

local _ = i18n.ptranslate

local toolbar
local toolbarBottom
local panelServerInfo
local panelRight
local panelLeft
local sServerName
local acsServerAddress
local sNameMission
local checkStar
local sServerFlag
local btnClose
local btnChangeMission

local initialized = false

local airdromes
local farpsAndCarriers

local favoritesList = {}
local addressLong
local isServerOuter = true
local selectedCoalition_
local hideNewFlowPopupMenuAnnouncement_
local dynamicSlotsLastShowed = false
local dialogsPositions
local inputIgnored = false
local routeToolDlgId = -1

local cdata = 
{
	ChangeMission       	= _("CHANGE MISSION"),
	openMission        		= _('Open mission:'),
	cantSpectate        	= _('Spectators disabled in this mission'),
	Disconnect          	= _("DISCONNECT"),
	PlayersPool          	= _("PLAYERS POOL"),
	msgLeaveServer			= _('Are you sure you want to exit the server?'),
	msgExit					= _('Are you sure you want to exit to the main menu?'),								 	
	warning         		= _('WARNING'),
	yes             		= _('YES'),
    no              		= _('NO'),
    dynamicSlotsNotExist	= _('No suitable airfields'),
	tip_selectCoalition		= _('tip_selectCoalition'),
	tip_selectSlot			= _('tip_selectSlot'),
	tip_selectDynamicSlot	= _('tip_selectDynamicSlot'),
	tip_RouteTool			= _('Show Route Tool'),
}

local function showNewFlowPopupMenuAnnouncement()
	if not hideNewFlowPopupMenuAnnouncement_ then
		hideNewFlowPopupMenuAnnouncement_ = true
		
		local hideNewFlowPopupMenuAnnouncement = MeSettings.getMultiplayerHideNewFlowPopupMenuAnnouncement()
		
		if not hideNewFlowPopupMenuAnnouncement then
			UpdateManager.add(function()
				local text		= _('text_Multiplayer new flow announcement')
				local caption	= _('Do you know...')
				local handler	= MsgWindow.info(text, caption, _('OK'))
				
				-- загружаем картинку и чекбокс из ресурсов
				local dialog	= DialogLoader.spawnDialogFromFile('./Scripts/UI/MultiplayerSelectRoleMap/PopupMenuHelp.dlg')
				local checkBox	= dialog.checkBoxShowNextTime
				
				checkBox:setText(_('Show next time'))
				
				handler:addWidget(dialog.staticPicture)
				handler:addWidget(checkBox)
				
				-- диалог ресурсов больше не нужен
				dialog:kill()
				
				function handler:onClose()
					MeSettings.setMultiplayerHideNewFlowPopupMenuAnnouncement(not checkBox:getState())
					
					return false
				end
	
				function handler:onChange(text)
					if text == _('OK') then
						MeSettings.setMultiplayerHideNewFlowPopupMenuAnnouncement(not checkBox:getState())
					end	
				end
				
				handler:show()
				
				return true
			end)
		end	
	end
end

function getAllAirdromesId()
	local data = {}
	for i, v in pairs(airdromes) do
		base.table.insert(data, base.tonumber(i))
	end
	return data
end

function getAllFarpsId()
	local data = {}
	for i, v in pairs(farpsAndCarriers.farps) do
		base.table.insert(data, base.tonumber(i))
	end
	return data
end

function getAllCarriersId()
	local data = {}
	for i, v in pairs(farpsAndCarriers.carriers) do
		base.table.insert(data, base.tonumber(i))
	end
	return data
end

function getAirdrome(airdromeId)
	if airdromes[airdromeId] then
		return airdromes[airdromeId]
	end
	log.error("trying ask for unknown airfield "..base.tostring(airdromeId))
	return nil
end

function getFarpOrCarrierData(id)
	local unit
	if farpsAndCarriers.farps then
		unit = farpsAndCarriers.farps[id]
	end
	if not unit and farpsAndCarriers.carriers then
		unit = farpsAndCarriers.carriers[id]
	end
	if unit then
		return unit.name, unit.x, unit.y
	end
	log.error("trying ask for unknown unit "..base.tostring(id))
	return nil
end

function getAirdromeMapCoord(airdromeId)	
	local a = getAirdrome(airdromeId)
	if a then
		return a.reference_point.x,a.reference_point.y
	else
		return 0, 0
	end
end

function getAirdromeName(airdromeId)
	local a = getAirdrome(airdromeId)
	if a then
		if a.display_name then
			return _(a.display_name) 
		else
			return a.names[locale] or a.names['en']
		end
	end
	
	return nil
end

function getUnitNameByType(aType)
	local name = keys.tabTr[aType] or keys.getDisplayName(aType)
	return name
end

function onSlotSelected(unitId)
	MultiplayerSelectRoleDialog.onSlotSelected(unitId)
end

function onDynamicSlotSelected(id, isAirdrome)
	if id == nil then
		MultiplayerSelectAirdromeDialog.show(false)
	else
		MultiplayerSelectAirdromeDialog.show(true, id, isAirdrome)
		MultiplayerSelectDynamicDialog.onAirdromeSelected(id)
	end
end

local function loadFavorite()
	if isServerOuter then
		local tbl = Tools.safeDoFile(lfs.writedir() .. 'MissionEditor/favorites.lua', false)
		if (tbl and tbl.favorites and addressLong) then
			favoritesList = tbl.favorites
			checkStar:setState(favoritesList[addressLong])
		end
	end
end

local function saveFavorite()
    U.saveInFile(favoritesList, 'favorites', lfs.writedir() .. 'MissionEditor/favorites.lua')	
end

local function addtoFavorites(a_address)
    favoritesList[a_address] = true        
    saveFavorite()    
end

local function removefromFavorites(a_address)   
    favoritesList[a_address] = nil        
    saveFavorite()    
end

local function onChange_btnChangeMission()
    local path = MeSettings.getMissionPath()
		
    local filters = {FileDialogFilters.mission(), FileDialogFilters.track()}
    local filename = FileDialog.open(path, filters, cdata.openMission)

    if filename then
        net.restart(filename)
    end
end

local function onChange_chkFavorStar()
	if addressLong then
		if checkStar:getState() == true then
			addtoFavorites(addressLong)
		else
			removefromFavorites(addressLong)
		end
	end
end

local function onDoubleMouse_acsServerAddress()
	Gui.CopyTextToClipboard(acsServerAddress:getText())
	acsServerAddress:setTextColor("0xffffffff")
end

local function mouseEnter_ServerNameStatic()
	if string.len(sServerName:getText()) > 119 then
		sServerName:setEnabled(false) -- if false skin is centered
	end	
end

local function mouseLeave_ServerNameStatic()
	sServerName:setEnabled(true)	-- if true skin change to default right align
end

local function setNameMission(a_text)
	sNameMission:setText(_("Mission")..": "..a_text)
end

local function setIpTooltip(isPublicIp)
	if isPublicIp then
		acsServerAddress:addMouseCallback("double down", onDoubleMouse_acsServerAddress)
		acsServerAddress:setTooltipText( _('Public IP, double click to Copy'))
	else		
		acsServerAddress:removeMouseCallback("double down", onDoubleMouse_acsServerAddress)
		acsServerAddress:setTooltipText( _('Local IP'))
	end
end

local function setServerInfo()
	local server = net.get_server_settings()
	addressLong = net.get_server_host()		
	
	sServerName:addMouseEnterCallback(mouseEnter_ServerNameStatic)
	sServerName:addMouseLeaveCallback(mouseLeave_ServerNameStatic)
	
	acsServerAddress:setText("")
	sServerFlag:setVisible(true)
	sServerFlag:setText("")
	sServerFlag:setTooltipText("")
	checkStar:setTooltipText(_("Toggle Favorites"))

	local isPublicIp = true
	if addressLong ~= nil then
		isServerOuter = true
		acsServerAddress:setText(addressLong)
		if server.geoCountry then						
			sServerFlag:setSkin(SkinUtils.setStaticPicture("dxgui\\skins\\skinME\\images\\Flags\\"..server.geoCountry..".png",  sServerFlag:getSkin()))
			local geo = server.geoContinent ..': '.. server.geoCountry
			sServerFlag:setTooltipText(geo)						
		else -- dedicated server
			sServerFlag:setVisible(false)
			sServerFlag:setTooltipText('')
		end
	else -- own DCS server
		isServerOuter = false
		isPublicIp = false
		local port = ""
		local cfg = Tools.safeDoFile(lfs.writedir() .. 'Config/serverSettings.lua', false)		
			if (cfg and cfg.cfg and cfg.cfg.version and cfg.cfg.version > 0) then
				port = ':' .. cfg.cfg.port			
			end 
		
		local ip = DcsWeb.get_data('dcs:whatsmyip')      
		if ip then 
			acsServerAddress:setText(ip .. port) 
		end
		checkStar:setTooltipText('')
		sServerFlag:setVisible(false)
	end

	sServerName:setText((server and server.name) or "")
	setIpTooltip(isPublicIp)
end

local function updateInfo()
	if DCS.isServer() == true then
		btnChangeMission:setVisible(true)
		sNameMission:setPosition(0, 4)
	else
		btnChangeMission:setVisible(false)
		sNameMission:setPosition(145, 4)
	end
	
	setNameMission(DCS.getMissionName())	
	setServerInfo()
end

function getSelectedCoalition()
	return selectedCoalition_
end

function getSelectedCoalitionId()
	if selectedCoalition_ == "red" then
		return 1
	elseif selectedCoalition_ == "blue" then
		return 2
	else
		return 0
	end
end

function updateCloseButtonVisibility()
	if checkSpectatorExternalViews() == true then
		btnClose:setEnabled(true)
		btnClose:setTooltipText()
	else
		btnClose:setEnabled(false)
		btnClose:setTooltipText(cdata.cantSpectate)
	end
end

function onNetConnect(myPlayerId)
	MultiplayerSelectRoleDialog.resetPasswords()
	MultiplayerSelectCoalitionDialog.resetPasswords()
	MultiplayerSelectAirdromeDialog.onNetConnect()
end

function onPlayerConnect(id, name)
	if initialized ~= true then
		return
	end
	
	MultiplayerSelectRoleDialog.onPlayerConnect(id)
	MultiplayerSelectCoalitionDialog.setCoalitionInfo()
end

function onPlayerDisconnect(id, code)
	if initialized ~= true then
		return
	end
	
	MultiplayerSelectRoleDialog.onPlayerDisconnect(id)
	MultiplayerSelectCoalitionDialog.setCoalitionInfo()
end

function onPlayerChangeSlot(id)
	if initialized ~= true then
		return
	end
	
    MultiplayerSelectRoleDialog.onPlayerChangeSlot(id)
    MultiplayerSelectCoalitionDialog.setCoalitionInfo()
	MultiplayerSelectAirdromeDialog.onPlayerChangeSlot(id)
end 

function onChangeCoalition(coalition)
	if initialized ~= true then
		return
	end

	local oldCoalition = selectedCoalition_
	selectedCoalition_ = coalition
	
	-- check invalid value
	if selectedCoalition_ ~= "red" and selectedCoalition_ ~= "blue" then
		selectedCoalition_ = nil
	end
	
	MultiplayerSelectCoalitionDialog.onChangeCoalition(selectedCoalition_)
	MultiplayerSelectRoleDialog.onChangeCoalition(selectedCoalition_)
	MultiplayerSelectDynamicDialog.onChangeCoalition(selectedCoalition_)
	
	initMultilpayerObjectsLayer()
	if selectedCoalition_ then
		tglbtnSlots:setEnabled(true)
		local dynamicSlotsExist = #MultiplayerSelectDynamicDialog.getDynamicsAirdromes(selectedCoalition_) + #MultiplayerSelectDynamicDialog.getDynamicsFarpsAndCarriers(selectedCoalition_) > 0
		tglbtnDynamicSlots:setEnabled(dynamicSlotsExist)
		tglbtnDynamicSlots:setTooltipText(dynamicSlotsExist and cdata.tip_selectDynamicSlot or cdata.dynamicSlotsNotExist)
		if oldCoalition ~= selectedCoalition_ then
			dynamicSlotsLastShowed = ((#DCS.getAvailableSlots(selectedCoalition_) == 0 and dynamicSlotsExist == true) and true) or false
		end
	else
		onToggleButtonSelect(tglbtnCoalitions)
		tglbtnSlots:setEnabled(false)
		tglbtnDynamicSlots:setEnabled(false)
		tglbtnDynamicSlots:setTooltipText(cdata.tip_selectDynamicSlot)
		hideAllDialogs()
		MultiplayerSelectCoalitionDialog.show(true)
	end
	
	updateCloseButtonVisibility()
	onCoalitionChangeSelectRoleDialog(selectedCoalition_)
end

function onChangeCoalitionDenied(reason, value)
	MultiplayerSelectCoalitionDialog.onChangeCoalitionDenied(reason, value)
end

function releaseSlot()
    slotJoinQuery.onChange_bDenyAll() -- отказываем всем на присоединение к ЛА
	local coalition = net.get_coalition(net.get_my_player_id())
	local passwordCoal = ""
	if coalition == 1 then
		passwordCoal = MultiplayerSelectCoalitionDialog.getCoalitionPassword("red")
	elseif coalition == 2 then
		passwordCoal = MultiplayerSelectCoalitionDialog.getCoalitionPassword("blue")
	end
	net.set_coalition(coalition, passwordCoal)
end

function backToSpectrators()
	slotJoinQuery.onChange_bDenyAll() -- отказываем всем на присоединение к ЛА
	net.set_coalition(0, "")
end

function onMissionLoadEnd()
	if initialized ~= true then
		return
	end
	
	initMultilpayerObjectsLayer()
	
	if initialized ~= true then
		return
	end
	
	hideAllDialogs()
	onChangeCoalition()
	updateInfo()
	MultiplayerSelectCoalitionDialog.onMissionLoadEnd()
	MultiplayerSelectRoleDialog.onMissionLoadEnd()
	MultiplayerSelectDynamicDialog.onMissionLoadEnd()
	MultiplayerSelectAirdromeDialog.onMissionLoadEnd()
end

function onSimulationStart()
	if initialized ~= true then
		return
	end
	
	updateInfo()
	MultiplayerSelectRoleDialog.onSimulationStart()
	MultiplayerSelectCoalitionDialog.onSimulationStart()
end

function checkSpectatorExternalViews()
    local opt = DCS.getMissionOptions()
    if not(opt and opt.difficulty.spectatorExternalViews == false and getSelectedCoalition() == nil) then
		return true
	else
		return false
	end
end

function onEsc(notNetSpawn)
    if checkSpectatorExternalViews() == true then  
		if notNetSpawn ~= true then
			net.spawn_player()
			BriefingDialog.savePlayerId()
		end
		
		hideInSelectRoleMode()
        DCS.setViewPause(false)
    end
end

function hideAllDialogs()
	MultiplayerSelectRoleDialog.show(false)
	MultiplayerSelectDynamicDialog.show(false)
	MultiplayerSelectCoalitionDialog.show(false)
	MultiplayerSelectAirdromeDialog.show(false)
end

function onToggleButtonStateChanged(toggleButton)
	if toggleButton:getState() == true then
		hideAllDialogs()
		
		for k, tB in ipairs(toggleButtons) do
			if tB.button == toggleButton then
				if tB.func then
					tB.func()
				end
				if tB.showFunc then
					tB.showFunc(true)
				end
			else
				tB.button:setState(false)
			end
		end
	else
		toggleButton:setState(true)
	end
end

function onToggleButtonSelect(toggleButton)
	for k, tB in ipairs(toggleButtons) do
		tB.button:setState(tB.button == toggleButton)
	end
end

function onChange_btnDisconnect()
	local handler = MsgWindow.warning(cdata.msgLeaveServer, cdata.warning, cdata.yes, cdata.no)

    function handler:onChange(buttonText)
        if buttonText == cdata.yes then			
			base.START_PARAMS.returnScreen = 'multiplayer'
			waitScreen.setUpdateFunction(function()
				net.stop_game()
				hideInSelectRoleMode()
				UC.sleep(1000) 
			end)		
        end
    end
    handler:show()
end

function onChange_btnPlayersPool()
    PlayersPool.show(true)
end

function onShowSlots()
	onToggleButtonSelect(tglbtnSlots)
	hideAllDialogs()
	local dynamicSlotsExist = #MultiplayerSelectDynamicDialog.getDynamicsAirdromes(selectedCoalition_) + #MultiplayerSelectDynamicDialog.getDynamicsFarpsAndCarriers(selectedCoalition_) > 0
	
	if dynamicSlotsLastShowed == true and dynamicSlotsExist == true then
		MultiplayerSelectDynamicDialog.show(true)
		dynamicSlotsLastShowed = true
	else
		MultiplayerSelectRoleDialog.show(true)
		dynamicSlotsLastShowed = false
	end
end

function onSwitchToSlots()
	onToggleButtonSelect(tglbtnSlots)
	hideAllDialogs()
	MultiplayerSelectRoleDialog.show(true)
	dynamicSlotsLastShowed = false
end

function onSwitchToDynamicSlots()
	onToggleButtonSelect(tglbtnSlots)
	hideAllDialogs()
	MultiplayerSelectDynamicDialog.show(true)
	dynamicSlotsLastShowed = true
end

function createToolbar()
	kill()
	toolbar = DialogLoader.spawnDialogFromFile('./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectRole.dlg', cdata)
	panelLeft = toolbar.panelLeft
	panelServerInfo = panelLeft.panelServerInfo
	panelRight = toolbar.panelRight
	sServerName = panelServerInfo.sServerName
	acsServerAddress = panelServerInfo.acsServerAddress
	checkStar = panelServerInfo.checkStar
	checkStar.onChange = onChange_chkFavorStar
	sServerFlag = panelServerInfo.sServerFlag
	sNameMission = panelRight.sNameMission
	btnClose = toolbar.panelRight.btnClose
	btnClose.onChange = function()
		onEsc()
	end
	
	panelTglBtns = panelLeft.panelTglBtns
	tglbtnCoalitions = panelTglBtns.tglbtnCoalitions
	tglbtnSlots = panelTglBtns.tglbtnSlots
	tglbtnDynamicSlots = panelTglBtns.tglbtnDynamicSlots
	
	tglbtnCoalitions.onChange = function()
		onToggleButtonStateChanged(tglbtnCoalitions)
	end
	
	tglbtnSlots.onChange = function()
		onToggleButtonStateChanged(tglbtnSlots)
	end
	
	tglbtnDynamicSlots.onChange = function()
		onToggleButtonStateChanged(tglbtnDynamicSlots)
	end
	
	toggleButtons = { 
		{ button = tglbtnCoalitions, showFunc = MultiplayerSelectCoalitionDialog.show, func = nil },
		--{ button = tglbtnSlots, showFunc = MultiplayerSelectRoleDialog.show, func = nil },
		{ button = tglbtnSlots, showFunc = onShowSlots, func = nil },
		{ button = tglbtnDynamicSlots, showFunc = MultiplayerSelectDynamicDialog.show, func = nil },
	}
	
	btnChangeMission = toolbar.panelRight.btnChangeMission
	btnChangeMission.onChange = onChange_btnChangeMission
	
	toolbarBottom = DialogLoader.spawnDialogFromFile('./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectRoleBottom.dlg', cdata)
	toolbarBottom.btnDisconnect.onChange = onChange_btnDisconnect
	toolbarBottom.btnPlayersPool.onChange = onChange_btnPlayersPool
end

function validateSavedPotitions()
	local wS, hS = Gui.GetWindowSize()
	for category, data in pairs(dialogsPositions) do
		if data.x < -6 or data.y < -6 or data.x > (wS - 34) or data.y > (hS - 34) then
			data.x = nil
			data.y = nil
		end
	end
end

function loadDialogsPositions()
	if dialogsPositions ~= nil then
		return
	end
	
    local result = Tools.safeDoFile(lfs.writedir() .. 'Config/MultiplayerDialogsPositions.lua', false) or {}
	dialogsPositions = result.dialogsPositions or {}
	validateSavedPotitions()
end

function saveDialogsPositions()
	local saveToCategory = function(dlgTbl, dlgController)
		local x, y = dlgController.getDialogPosition()
		if x ~= nil and y ~= nil then
			dialogsPositions[dlgTbl] = {}
			dialogsPositions[dlgTbl].x = x
			dialogsPositions[dlgTbl].y = y
		end
	end
	
	saveToCategory("selectCoalition", MultiplayerSelectCoalitionDialog)
	saveToCategory("selectRole", MultiplayerSelectRoleDialog)
	saveToCategory("selectAirdrome", MultiplayerSelectAirdromeDialog)
    U.saveInFile(dialogsPositions, 'dialogsPositions', lfs.writedir() .. 'Config/MultiplayerDialogsPositions.lua')	
end

function getSavedDialogPosition(dlgTbl) -- selectCoalition, selectRole, selectAirdrome
	if dialogsPositions ~= nil and dialogsPositions[dlgTbl] ~= nil then
		return dialogsPositions[dlgTbl].x, dialogsPositions[dlgTbl].y
	end
	
	return nil, nil
end

function getToggleButtonShowRouteTool()
	return toolbar.panelLeft.toggleButtonShowRouteTool.widget
end

function setIgnoreInput(value)
	if value == true and inputIgnored == false then
		DCS.lockAllKeyboardInput()
		inputIgnored = true
	elseif value == false and inputIgnored == true then
		DCS.unlockKeyboardInput()
		inputIgnored = false
	end
	Input.ignoreUiLayer(value)
end

function init()
	if initialized ~= true then
		createToolbar()
		loadDialogsPositions()
		MultiplayerSelectRoleDialog.create()
		MultiplayerSelectDynamicDialog.create()
		MultiplayerSelectCoalitionDialog.create()
		MultiplayerSelectAirdromeDialog.create()
	end

	airdromes = Terrain.GetTerrainConfig("Airdromes")
	farpsAndCarriers = DCS.getFarpsAndCarriersMissionData()
	initialized = true
end

function show()
	if initialized ~= true then
		return
	end
	
	if toolbar:getVisible() == false then
		DCS.lockAllMouseInput()
	end
	
	base.START_PARAMS.returnScreen = 'multiplayer'
	Chat.show(false)

	local w, h = Gui.GetWindowSize()
	local tW, tH = toolbar:getSize()
	toolbar:setBounds(0, 0, w, tH)
	panelRight:setPosition(w-panelRight:getSize()-10, 0)
	toolbar:setVisible(true)
	
	tW, tH = toolbarBottom:getSize()
	toolbarBottom:setBounds(0, h - tH, w, tH)
	toolbarBottom:setVisible(true)
	
	updateInfo()
	
	onChangeCoalition(selectedCoalition_)
	if selectedCoalition_ ~= nil then
		onShowSlots()
	end
	
	checkStar:setEnabled(isServerOuter)
	loadFavorite()
	
	panelServerInfo:getLayout():updateSize()
	
	updateCloseButtonVisibility()
	
	showNewFlowPopupMenuAnnouncement()
end

function hide()
	if initialized ~= true then
		return
	end
	
	if toolbar:getVisible() == true then
		DCS.unlockMouseInput()
	end

	toolbar:setVisible(false)
	toolbarBottom:setVisible(false)
	hideAllDialogs()
end

function kill()
	if toolbar then
		toolbar:kill()
	end
	toolbar = nil
	if toolbarBottom then
		toolbarBottom:kill()
	end
	toolbarBottom = nil

	airdromes = {}
	farpsAndCarriers = {}

	routeToolDlgId = -1
	initialized = false
end

function isVisible()
	if toolbar == nil then
		return false
	else
		return toolbar:getVisible()
	end
end