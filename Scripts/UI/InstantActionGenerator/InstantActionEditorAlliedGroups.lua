local base = _G

module('InstantActionEditorAlliedGroups')

local require				= base.require
local math					= base.math
local pairs					= base.pairs
local ipairs				= base.ipairs
local table					= base.table
local tonumber				= base.tonumber
local tostring				= base.tostring
local print					= base.print
local string				= base.string
local type 					= base.type

local DialogLoader			= require("DialogLoader")
local i18n					= require('i18n')
local Gui					= require('dxgui')

local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionEditorAllyGroupWgt = require('InstantActionEditorAllyGroupWgt')
local InstantActionEditorPlayer = require('InstantActionEditorPlayer')

i18n.setup(_M)

local dialogHeight

local iaeData = nil

local playerGroupWgt = nil

local cdata = 
{
	alliedGroups = _('ALLIED GROUPS'),
	add = _('ADD'),
	group = _('GROUP'),
	myWing = _('MY WING'),
}

local function updatePanelInnerWidgets()
	local w, h = panel:getSize()
	local scrollItemCount = scroll:getWidgetCount()
	local scrollHeight = 0
	if scrollItemCount > 0 then
		local playerGroupW, playerGroupH = 0, 0
		local item = scroll:getWidget(0)
		if item ~= nil then
			playerGroupW, playerGroupH = item:getSize()
		end
		local allyGroupW, allyGroupH = 0, 0
		item = scroll:getWidget(1)
		if item ~= nil then
			allyGroupW, allyGroupH = item:getSize()
		end

		scrollHeight = (playerGroupH + 4) + (allyGroupH + 4) * (scrollItemCount - 1)
	end

	local scrollHeight = math.min(dialogHeight - 50 - 40, scrollHeight)
	scroll:setSize(w, scrollHeight)
	buttonAdd:setPosition(15, scrollHeight + 10)
end

local function fillData()
	if iaeData == nil then
		return
	end

	scroll:removeAllWidgets()
	scroll.wgts = {}

	playerGroupWgt = InstantActionEditorAllyGroupWgt.new("./Scripts/UI/InstantActionGenerator/InstantActionEditorAllyGroupWgtPlayer.dlg")
	playerGroupWgt:setData(iaeData.playerGroupData, iaeData.playerGroupData.unitType, iaeData.generalData.country, iaeData.generalData.missionType, iaeData.generalData.missionRange, iaeData.generalData.era, cdata.myWing, "playerGroupData", 0)
	playerGroupWgt:setWingmenRange(1, 4)
	table.insert(scroll.wgts, playerGroupWgt)
	scroll:insertWidget(playerGroupWgt:getWidget())

	if iaeData.friendlyGroupsData == nil then
		return
	end

	local counter = 1
	for i, data in ipairs(iaeData.friendlyGroupsData.groups) do
		if data.groupTask == "allyGroup" then
			local wgt = InstantActionEditorAllyGroupWgt.new()
			wgt:setData(data, iaeData.playerGroupData.unitType, iaeData.generalData.country, iaeData.generalData.missionType, iaeData.generalData.missionRange, iaeData.generalData.era, cdata.group.." "..counter, "friendlyGroupsData", i)
			wgt:setWingmenRange(1, 4)
			table.insert(scroll.wgts, wgt)
			scroll:insertWidget(wgt:getWidget())
			counter = counter + 1
		end
	end

	updatePanelInnerWidgets()
end

local function onShow()
	iaeData = InstantActionGeneratorData.getIAEData()

	fillData()
end

local function onHide()
	iaeData = nil
	playerGroupWgt = nil
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorAlliedGroups.dlg", cdata)
	local w, h = window:getSize()
	dialogHeight = hS - 265

	window:setPosition(wS - w - 400, 240)
	window:setSize(w, dialogHeight)
	window.MainPanel:setSize(w, dialogHeight)
	window.MainPanel.containerCommon:setSize(w, dialogHeight - 50)
	
	panel = window.MainPanel
	containerCommon = window.MainPanel.containerCommon
	scroll = window.MainPanel.containerCommon.scrollPanel
	buttonAdd = window.MainPanel.containerCommon.buttonAdd

	buttonAdd.onChange = function()
		InstantActionGeneratorData.addGroup("friendlyGroupsData", iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.missionRange, "allyGroup", iaeData.playerGroupData.takeoffFrom)
	end

	window.MainPanel.btnCancel.onChange = function()
		show(false)
		if InstantActionEditorPlayer.toggleButtonAlliedGroups then
			InstantActionEditorPlayer.toggleButtonAlliedGroups:setState(false)
		end
	end
end

function show(b)
	if window == nil then
        create()
    end

	if b == true then
		onShow()
	else
		onHide()
	end

    window:setVisible(b)
end

--callbacks

function onPlayerUnitTypeChanged()
	onShow()
	if window:getVisible() == false then
		onHide()
	end
end

function onAddGroup()
	if window:getVisible() == true then
		fillData()
	end
end

function onDeleteGroup()
	if window:getVisible() == true then
		fillData()
	end
end

function onChangeEra()
	onShow()
	if window:getVisible() == false then
		onHide()
	end
end

function onChangeMissionType()
	onShow()
	if window:getVisible() == false then
		onHide()
	end
end

function onGenerationComplete()
	show(false)
end
