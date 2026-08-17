local base = _G

module('InstantActionMissionEnd')

local require	= base.require

local i18n                  = require('i18n')
local DialogLoader          = require("DialogLoader")
local Gui					= require('dxgui')
local DCS                   = require('DCS')

i18n.setup(_M)

local cdata = {
	continue				= _('RESUME'),
	refly	                = _('FLY AGAIN'),
    endMission				= _('END MISSION'),
    red				        = _('The Red Coalition has won'),
    blue				    = _('The Blue Coalition has won'),
    winText				    = _('Congratulations, you have completed the combat mission.'),
    loseText				= _('You have failed the mission.'),
}

function onChangeContinue()
    show(false)
    DCS.setPause(false)
end

function onChangeRefly()
    show(false)
    DCS.restartMission()
end

function onChangeEndMission()
    show(false)
    DCS.stopMission()
end

local function onShow(winnerSide)
    window:setText(cdata[winnerSide])
    local playerCoalition = DCS.getPlayerCoalition()
    if playerCoalition == winnerSide then
	    text:setText(cdata.winText)
    else
        text:setText(cdata.loseText)
    end
end

local function onHide()
	
end

local function create()
    local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionMissionEnd.dlg", cdata)
	local w, h = window:getSize()
	window:setPosition((wS - w)/2, (hS - h)/2)

    text = window.containerMain.text

	function window.containerMain.btnContinue:onChange()
		onChangeContinue()
	end

	function window.containerMain.btnRefly:onChange()
		onChangeRefly()
	end

    function window.containerMain.btnEndMission:onChange()
		onChangeEndMission()
	end

    function window:onClose()
        onChangeEndMission()
    end
end

function show(b, winnerSide)
	if window == nil then
        create()
    end

	if b == true then
		onShow(winnerSide)
	else
		onHide()
	end

    window:setVisible(b)
end