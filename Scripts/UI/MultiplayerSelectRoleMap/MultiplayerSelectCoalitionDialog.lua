local base = _G

module('MultiplayerSelectCoalitionDialog')

local require       = base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local string		= base.string
local tostring		= base.tostring

local i18n					= require('i18n')
local Window				= require('Window')
local DialogLoader			= require('DialogLoader')
local Static				= require('Static')
local keys					= require('mul_keys')
local DCS					= require('DCS')
local Gui              	 	= require('dxgui')
local net					= require('net')
local ImagePreview      	= require('imagePreview')
local MsgWindow				= require('MsgWindow')
local textutil          	= require('textutil')
local MultiplayerSelectRole = require('MultiplayerSelectRole')

i18n.setup(_M)

cdata = 
{
    CHOOSECOALITION        		= _("CHOOSE COALITION"),
    BLUECOALITION        		= _("JOIN THE BLUE COALITION"),
    REDCOALITION         		= _("JOIN THE RED COALITION"),
	BlueCoalition				= _("Blue coalition"),
	RedCoalition				= _("Red coalition"),
	UNENGAGEDBLUE				= _("UNENGAGED BLUE"),
	UNENGAGEDRED				= _("UNENGAGED RED"),
	IncorrectPassword    		= _("Incorrect password"),
    JoinRed              		= _("Join the Red coalition"),
    JoinBlue             		= _("Join the Blue coalition"),
	Password             		= _("Password:"),
	spectate        			= _('SPECTATE'),
	backToSpectators      		= _('BACK TO SPECTATORS'),
	join        				= _('JOIN'),
	cantSpectate        		= _('Spectators disabled in this mission'),
	of 							= _('OF'),

	msgReturnToSpectators				= _('Are you sure you want to return to spectators?'),								 	
	msgChangeCoalition					= _('Are you sure you want to change coalition?'),
	msgJoinCoalitionWithCooldownOpt		= _("Join a coalition? You won't be able to change it for"),
	msgChangeCoalitionWithCooldownOpt 	= _("Are you sure you want to change coalition? You won't be able to change it for"),

	warning         			= _('WARNING'),
	yes             			= _('YES'),
    no              			= _('NO'),
	ok              			= _('OK'),
    missionWithoutTitle			= _('missionWithoutTitle'),
    missionWithoutDescription	= _('missionWithoutDescription'),
	coalitionJoinDenied			= _('You cannot join this coalition.'),
	wrongCoalitionPasswordDeniedReason = _('Incorrect coalition password entered.'),
	changeCoalitionCooldownDeniedReason = _('You will be able to change the coalition in'),
}

local indexPict = 1
local dataImagesCount = 0
local dataBrf
local passwords = {}
local passwordsHash = {}
local coalitionButtonsSkins = { red = {}, blue = {} }
local descScaleMult = 1
local slotsScaleMult = 3
local enable_coalition_join_cooldown = false
local coalition_join_cooldown_seconds = 0
local lastPlayableCoalition

function compareFreeSlots(left, right)
	return textutil.Utf8Compare((keys.tabTr[left] or keys.getDisplayName(left)), (keys.tabTr[right] or keys.getDisplayName(right)))
end

function comparePlayersSlots(left, right)
	return textutil.Utf8Compare((keys.tabTr[left.unitType] or keys.getDisplayName(left.unitType)), (keys.tabTr[right.unitType] or keys.getDisplayName(right.unitType)))
end	

local function updateLocksIcons()
	local function updataLockForCoalition(isLocked, lockIcon, label, pSlots, labelText)
		lockIcon:setVisible(isLocked)
		pSlots:setVisible(not isLocked)
		label:setText((isLocked == true and labelText) or (labelText.." ("..label.coalitionPlayers..")"))
	end
	
	updataLockForCoalition(passwordsHash["red"] ~= nil and passwords["red"] == nil, redCoalitionLockIcon, redCoalitionLabel, pRedSlots, cdata.RedCoalition)
	updataLockForCoalition(passwordsHash["blue"] ~= nil and passwords["blue"] == nil, blueCoalitionLockIcon, blueCoalitionLabel, pBlueSlots, cdata.BlueCoalition)
end

local function getTime(sec)
	local dayTime = base.math.mod(sec, 86400)
	local hh = base.math.floor(dayTime / 3600)
	dayTime = dayTime - hh * 3600
	local mm = base.math.floor(dayTime / 60)
	dayTime = dayTime - mm * 60
	local ss = base.math.floor(dayTime)

	return hh, mm, ss
end

local function getConfirmationMessageWithTime(text, time)
	local hh, mm, ss = getTime(time)
	local dateStr = string.format("%02i:%02i:%02i", hh, mm, ss)
	return text.." "..dateStr
end

function setCoalitionInfo()
    if window == nil or window:getVisible() == false then
		return
	end
	
	pRedSlots:removeAllWidgets()
	pBlueSlots:removeAllWidgets()
	
	local spectators = {}
	local playerBySlot = { red = {}, blue = {} }
	local playerByUnit = { red = {}, blue = {} }
	local freeSlots = { red = {}, blue = {} }
	local freeUnitsAmounts = { red = {}, blue = {} }
 
    local players = net.get_player_list()
    for k,playerId in base.pairs(players) do
        local player_info = net.get_player_info(playerId)
        if player_info.slot ~= "" then
			if player_info.side == 1 then
				playerBySlot["red"][player_info.slot] = player_info.name
			elseif player_info.side == 2 then
				playerBySlot["blue"][player_info.slot] = player_info.name
			end
		else
			base.table.insert(spectators, player_info.name)
        end
    end
	
	local fillSlots = function(coalition)
		for k,v in base.pairs(DCS.getAvailableSlots(coalition)) do
			local playerInSlot = playerBySlot[coalition][v.unitId]
			if playerInSlot then
				base.table.insert(playerByUnit[coalition], { playerName = playerInSlot, unitType = v.type})
			else
				if v.multicrew_place == 1 then
					if freeUnitsAmounts[coalition][v.type] == nil then
						base.table.insert(freeSlots[coalition], v.type)
					end
					freeUnitsAmounts[coalition][v.type] = freeUnitsAmounts[coalition][v.type] and (freeUnitsAmounts[coalition][v.type] + 1) or 1
				end
			end
		end
	end
	
	fillSlots("red")
	fillSlots("blue")
	
	base.table.sort(playerByUnit.red, comparePlayersSlots)	
	base.table.sort(playerByUnit.blue, comparePlayersSlots)
	base.table.sort(freeSlots.red, compareFreeSlots)   	
	base.table.sort(freeSlots.blue, compareFreeSlots)  	
	
	local lineHeight = 20
	local dataForTexts = {
		red = { title = cdata.RedCoalition, titleFree = cdata.UNENGAGEDRED, titleSkin = slotsTitleSkinRed },
		blue = { title = cdata.BlueCoalition, titleFree = cdata.UNENGAGEDBLUE, titleSkin = slotsTitleSkinBlue }
	}
	
	local addText = function(pSlots, text, x, y, skin)
		local item = Static.new() 
		item:setText(text)
		item:setTooltipText(text)
		local tmpW, tmpH = item:calcSize()
		item:setSkin(skin)
		item:setBounds(x,y,230,20)
		pSlots:insertWidget(item)
	end
	
	local fillTextsByCoalition = function(coalitionLabel, pSlots, coalition, coalitionPlayers, coalitionFree)
		local offsetY = 5
		local offsetX = 5
		local offsetX2 = 10 + 230 + 5
		
		coalitionLabel:setText(dataForTexts[coalition].title.." ("..#coalitionPlayers..")")
		coalitionLabel.coalitionPlayers = #coalitionPlayers

		for i,v in base.ipairs(coalitionPlayers) do
			local textType = keys.tabTr[v.unitType] or keys.getDisplayName(v.unitType)
			local sameLine = i % 2 == 0
			addText(pSlots, textType..": "..v.playerName, sameLine and offsetX2 or offsetX, offsetY, slotsTextSkin)
			if sameLine == true or i == #coalitionPlayers then
				offsetY = offsetY + lineHeight
			end
		end
		
		if #coalitionPlayers > 0 then
			offsetY = offsetY + lineHeight
		end
		
		addText(pSlots, dataForTexts[coalition].titleFree, offsetX, offsetY, dataForTexts[coalition].titleSkin)
		offsetY = offsetY + 1.5 * lineHeight
		for i,unitType in base.ipairs(coalitionFree) do
			local textType = keys.tabTr[unitType] or keys.getDisplayName(unitType)
			local sameLine = i % 2 == 0
			addText(pSlots, string.format("%s: %i", textType, (freeUnitsAmounts[coalition][unitType] or 0)), sameLine and offsetX2 or offsetX, offsetY, slotsTextSkin)

			if sameLine == true then
				offsetY = offsetY + lineHeight
			end
		end
	end
	
	fillTextsByCoalition(redCoalitionLabel, pRedSlots, "red", playerByUnit.red, freeSlots.red)
	fillTextsByCoalition(blueCoalitionLabel, pBlueSlots, "blue", playerByUnit.blue, freeSlots.blue)
	
	updateLocksIcons()
end

function updateNumPict()
    if indexPict == 1 then
        buttonPrev:setEnabled(false)
    else
        buttonPrev:setEnabled(true)
    end
    
    if indexPict >= dataImagesCount then
        buttonNext:setEnabled(false)
    else
        buttonNext:setEnabled(true)
    end

    staticImageNumber:setText(indexPict)
end

function updatePict()
    local pictureFilename
    if dataBrf and dataBrf.missionImages and dataImagesCount > 0 then
        pictureFilename = dataBrf.missionImages[indexPict]
    end    
    
    if  pictureFilename == nil then
        pictureFilename = 'server-image-default.png'
    end

    imagePreviewWidget:setPicture(pictureFilename)
end

function Prev_onChange()
    indexPict = indexPict - 1   
    updateNumPict()  
    updatePict()    
end

function Next_onChange()
    indexPict = indexPict + 1 
    updateNumPict()  
    updatePict()    
end

local function setBriefing()
	dataBrf = DCS.getPlayerBriefing()
	missionTitle:setText((dataBrf.sortie ~= nil and dataBrf.sortie ~= "") and dataBrf.sortie or cdata.missionWithoutTitle)
	missionDescription:setText((dataBrf.descText ~= nil and dataBrf.descText ~= "") and dataBrf.descText or cdata.missionWithoutDescription)
	missionDescription:setSize(990, 95) -- reset to initial size
	missionDescription:setSize(missionDescription:calcSize())
	descriptionScrollPanel:updateWidgetsBounds()
	
	if dataBrf and dataBrf.missionImages then
        dataImagesCount = #dataBrf.missionImages
    else
        dataImagesCount = 0
    end
    
    indexPict = 1
    staticOF:setText(cdata.of .. ' ' .. tostring(dataImagesCount))
    updateNumPict()
    updatePict()
    
    if dataImagesCount < 2 then
        buttonPrev:setVisible(false)
        buttonNext:setVisible(false)  
        staticImageNumber:setVisible(false)  
        staticOF:setVisible(false)     
    else
        buttonPrev:setVisible(true)
        buttonNext:setVisible(true) 
        staticImageNumber:setVisible(true)  
        staticOF:setVisible(true)        
    end
end

local function tryJoinToCoalition(coalition)
	if passwordsHash[coalition] ~= nil and passwords[coalition] == nil  then
		pPassword.pBox.sHeader:setText(coalition == "red" and cdata.JoinRed or cdata.JoinBlue)
		ePasswordCaol:setText("")
		pPassword.type = coalition
		pPassword.pBox.pError:setVisible(false)
		pPassword:setVisible(true)
	else
		local sideId = 0
		if coalition == "red" then
			sideId = 1
		elseif coalition == "blue" then
			sideId = 2
		end

		local passwordCoal = nil
		if sideId == 1 then
			passwordCoal = getCoalitionPassword("red")
		elseif sideId == 2 then
			passwordCoal = getCoalitionPassword("blue")
		end

		net.set_coalition(sideId, passwordCoal)
	end
end

function onChangeCoalition(coalition)
	buttonRed:setSkin(coalition == "red" and coalitionButtonsSkins.red[2] or coalitionButtonsSkins.red[1])
	buttonBlue:setSkin(coalition == "blue" and coalitionButtonsSkins.blue[2] or coalitionButtonsSkins.blue[1])
	buttonRed:setText(coalition == "red" and cdata.backToSpectators or cdata.REDCOALITION)
	buttonBlue:setText(coalition == "blue" and cdata.backToSpectators or cdata.BLUECOALITION)
	btnSpectate:setText((coalition == nil and cdata.spectate) or cdata.join)
	btnSpectate:setSkin((coalition == "red" and coalitionButtonsSkins.red[1]) or ((coalition == "blue" and coalitionButtonsSkins.blue[1]) or grayButtonSkin))

	updateJoinSpectateButtonState(coalition)

	if coalition ~= nil then
		lastPlayableCoalition = coalition
	end
end

function onChangeCoalitionDenied(reason, value)
	local reasonText = cdata.defaultDeniedReason
	if reason == "wrongCoalitionPassword" then
		reasonText = cdata.wrongCoalitionPasswordDeniedReason
	elseif reason == "changeCoalitionCooldown" then
		reasonText = getConfirmationMessageWithTime(cdata.changeCoalitionCooldownDeniedReason, value)
	end

	local handler = MsgWindow.info(reasonText, cdata.coalitionJoinDenied, cdata.ok)
	handler:show()
end

local function onChange_bCancelPassword()
	pPassword:setVisible(false)
end

local function onChange_bOkPassword()
	local result = false
	
	result = net.check_password(ePasswordCaol:getText(), passwordsHash[pPassword.type])		
		
	if result then 
		passwords[pPassword.type] = ePasswordCaol:getText()
		pPassword.pBox.pError:setVisible(false)
		pPassword:setVisible(false)
		MultiplayerSelectRole.onChangeCoalition(pPassword.type)
	else
		pPassword.pBox.pError:setVisible(true)
	end
end

local function onKeyDown_ePasswordCaol(self, key, unicode)
	if 'return' == key then                      
		onChange_bOkPassword()
	end
end

function updateJoinSpectateButtonState(coalition)
	if MultiplayerSelectRole.checkSpectatorExternalViews() == false and coalition == nil then
		btnSpectate:setEnabled(false)
		btnSpectate:setTooltipText(cdata.cantSpectate)
	else
		btnSpectate:setEnabled(true)
		btnSpectate:setTooltipText()
	end
end

function updateBounds()
	local wS, hS = Gui.GetWindowSize()

	local wWidth, wHeight = window:getSize()
	local heightDelta = hS - 700 - 136
	heightDelta = ((heightDelta > 0) and heightDelta) or 0

	if heightDelta > 0 then
		window:setSize(wWidth, hS - 136)
		window.main_panel:setSize(wWidth, hS - 136 - 30)
		pPassword:setSize(wWidth, hS - 136 - 30)
		local pBoxWidth, pBoxHeight = pPassword.pBox:getSize()
		pPassword.pBox:setPosition((wWidth - pBoxWidth) / 2, ((hS - 136 - 30) - pBoxHeight) / 2)
		btnSpectate:setPosition(400, hS - 136 - 30 - 40)
		local descriptionHeightDelta = (heightDelta / (descScaleMult + slotsScaleMult) * descScaleMult)
		descriptionScrollPanel:setSize(1000, 95 + descriptionHeightDelta)
		missionDescription:setSize(990, 95 + descriptionHeightDelta)
		redPanel:setPosition(20, 375 + descriptionHeightDelta)
		bluePanel:setPosition(525, 375 + descriptionHeightDelta)
		local slotsHeightDelta = heightDelta - descriptionHeightDelta
		redPanel:setSize(495, 245 + slotsHeightDelta)
		bluePanel:setSize(495, 245 + slotsHeightDelta)
		redPanel.panel:setSize(475, 201 + slotsHeightDelta)
		bluePanel.panel:setSize(475, 201 + slotsHeightDelta)
		pRedSlots:setSize(475, 171 + slotsHeightDelta)
		pBlueSlots:setSize(475, 171 + slotsHeightDelta)
		buttonRed:setPosition(10, 245 + slotsHeightDelta - 40)
		buttonBlue:setPosition(10, 245 + slotsHeightDelta - 40)
		redCoalitionLockIcon:setPosition(176, 59 + slotsHeightDelta / 2)
		blueCoalitionLockIcon:setPosition(176, 59 + slotsHeightDelta / 2)
	end

	local x, y = MultiplayerSelectRole.getSavedDialogPosition("selectCoalition")
	if x == nil or y == nil then
		local wW, wH = window:getSize()
		x = (wS - wW) / 2
		y = (hS - wH) / 2
	end
	window:setPosition(x, y)
end

function onSpectate()
	MultiplayerSelectRole.onEsc()
end

function showConfirmationDialog(text, confirmAction)
	local handler = MsgWindow.warning(text, cdata.warning, cdata.yes, cdata.no)

    function handler:onChange(buttonText)
        if buttonText == cdata.yes then			
			confirmAction()
        end
    end
    handler:show()
end

function create()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectCoalitionDialog.dlg", cdata)
	
	redPanel = window.main_panel.redPanel
	bluePanel = window.main_panel.bluePanel
	buttonRed = redPanel.buttonRed
	buttonBlue = bluePanel.buttonBlue
	btnSpectate = window.main_panel.btnSpectate
	redCoalitionLockIcon = redPanel.redCoalitionLockIcon
	blueCoalitionLockIcon = bluePanel.blueCoalitionLockIcon
	missionTitle = window.main_panel.missionTitle
	redCoalitionLabel = redPanel.redCoalitionLabel
	blueCoalitionLabel = bluePanel.blueCoalitionLabel
	pRedSlots = redPanel.panel.pRedSlots
	pBlueSlots = bluePanel.panel.pBlueSlots
	descriptionScrollPanel = window.main_panel.descriptionScrollPanel
	missionDescription = descriptionScrollPanel.missionDescription
	
	staticImage = window.main_panel.briefingImage  
	sbHorz = window.main_panel.sbHorz
	sbVert = window.main_panel.sbVert
    imagePreviewWidget = ImagePreview.new(staticImage, sbHorz, sbVert)
	imagePreviewWidget:setViewportSize(staticImage:getSize())
	staticImageNumber = window.main_panel.staticImageNumber
    staticOF = window.main_panel.widgetOf
	buttonPrev = window.main_panel.buttonPrev
	buttonNext = window.main_panel.buttonNext
	buttonPrev.onChange = Prev_onChange
    buttonNext.onChange = Next_onChange
	
	pPassword = window.main_panel.pPassword
	bCancelPassword = pPassword.pBox.bCancel
	ePasswordCaol = pPassword.pBox.ePasswordCaol
	bOkPassword = pPassword.pBox.bOkPassword
	
	bCancelPassword.onChange = onChange_bCancelPassword
	bOkPassword.onChange = onChange_bOkPassword
	ePasswordCaol.onKeyDown = onKeyDown_ePasswordCaol
	
	local function onJoinCoalitionButton(coalitonNameStr)
		if MultiplayerSelectRole.getSelectedCoalition() == nil then
			if enable_coalition_join_cooldown == true and coalition_join_cooldown_seconds > 0 and lastPlayableCoalition ~= coalitonNameStr then
				showConfirmationDialog(getConfirmationMessageWithTime(cdata.msgJoinCoalitionWithCooldownOpt, coalition_join_cooldown_seconds), function() tryJoinToCoalition(coalitonNameStr) end)
			else
				tryJoinToCoalition(coalitonNameStr)
			end
		elseif MultiplayerSelectRole.getSelectedCoalition() == coalitonNameStr then
			MultiplayerSelectRole.backToSpectrators()
		else
			showConfirmationDialog((enable_coalition_join_cooldown and coalition_join_cooldown_seconds > 0) and getConfirmationMessageWithTime(cdata.msgChangeCoalitionWithCooldownOpt, coalition_join_cooldown_seconds) or cdata.msgChangeCoalition, function() tryJoinToCoalition(coalitonNameStr) end)
		end
	end

	function buttonRed:onChange()
		onJoinCoalitionButton("red")
	end
	function buttonBlue:onChange()
		onJoinCoalitionButton("blue")
	end
	
	function btnSpectate:onChange()
		if MultiplayerSelectRole.getSelectedCoalition() == nil then
			onSpectate()
		else
			MultiplayerSelectRole.onShowSlots()
		end
	end
	
	noVisible = window.noVisible
	coalitionButtonsSkins.red[1] = buttonRed:getSkin()
	coalitionButtonsSkins.blue[1] = buttonBlue:getSkin()
	coalitionButtonsSkins.red[2] = noVisible.buttonRedSelected:getSkin()
	coalitionButtonsSkins.blue[2] = noVisible.buttonBlueSelected:getSkin()
	grayButtonSkin = btnSpectate:getSkin()
	
	slotsTitleSkinRed = noVisible.slotsTitleRed:getSkin()
	slotsTitleSkinBlue = noVisible.slotsTitleBlue:getSkin()
	slotsTextSkin = noVisible.slotsText:getSkin()
	
	window:addPositionCallback(function()
		MultiplayerSelectRole.saveDialogsPositions()
	end)
	
	updateBounds()
	
	return window
end

function show(b)
    if window == nil then
        create()
    end

	window:setVisible(b)
	if b == true then
		setCoalitionInfo()
		setBriefing()
	
		imagePreviewWidget:setMaxScale()
		onChangeCoalition(MultiplayerSelectRole.getSelectedCoalition())
	end
end

function getCoalitionPassword(coalition)
	return passwords[coalition]
end

function onMissionLoadEnd()
	lastPlayableCoalition = nil
end

function onSimulationStart()
	enable_coalition_join_cooldown = false
	coalition_join_cooldown_seconds = 0
	if DCS.isTrackPlaying() == false then		
		local settings = net.get_server_settings()		
		if settings.advanced then
			passwordsHash["red"] = settings.advanced.redPasswordHash
			passwordsHash["blue"] = settings.advanced.bluePasswordHash
			enable_coalition_join_cooldown = settings.advanced.enable_coalition_join_cooldown
			coalition_join_cooldown_seconds = settings.advanced.coalition_join_cooldown_seconds
		end
	end
end

function resetPasswords()
	passwords = {}
end

function getDialogPosition()
    if window then
        return window:getPosition()
    end
    return nil, nil    
end