local base = _G

module('InstantActionEditorTargets')

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
local InstantActionEditorAirGroupWgt = require('InstantActionEditorAirGroupWgt')
local InstantActionEditorGroupWgt = require('InstantActionEditorGroupWgt')

i18n.setup(_M)

local offsetY = 240 + 260
local dialogHeight

local iaeData = nil
local panelsData = {}
local enemySkillPanel = nil

local cdata = 
{
	add = _('ADD'),
	enemyAISkill = _('ENEMY AI SKILL'),
	random = _('Random'),
	randomGroupsTooltip = _('Generate random groups'),
}

local setupsByMissionType = {
	["Dogfight"] = { 			[1] = { blockName = _('TARGETS'), groupTask = "target", dataTableName = "enemyGroupsData", maxWingmens = 4, canBeEmpty = false, enemySkillBlock = true, wgtClass = InstantActionEditorAirGroupWgt }},
	["BVR"] = { 				[1] = { blockName = _('TARGETS'), groupTask = "target", dataTableName = "enemyGroupsData", maxWingmens = 4, canBeEmpty = false,  enemySkillBlock = true, wgtClass = InstantActionEditorAirGroupWgt }},
	["BomberIntercept"] = { 	[1] = { blockName = _('TARGETS'), groupTask = "bomber", dataTableName = "enemyGroupsData", maxWingmens = 4, canBeEmpty = false, wgtClass = InstantActionEditorAirGroupWgt },
								[2] = { blockName = _('ESCORT'), groupTask = "target", dataTableName = "enemyGroupsData", maxWingmens = 4, canBeEmpty = true, enemySkillBlock = true, wgtClass = InstantActionEditorAirGroupWgt }},
	["BomberEscort"] = { 		[1] = { blockName = _('FRIENDLY BOMBERS'), groupTask = "bomber", dataTableName = "friendlyGroupsData", maxWingmens = 4, canBeEmpty = false, wgtClass = InstantActionEditorAirGroupWgt },
								[2] = { blockName = _('ENEMY'), groupTask = "target", dataTableName = "enemyGroupsData", maxWingmens = 4, canBeEmpty = false, enemySkillBlock = true, wgtClass = InstantActionEditorAirGroupWgt }},
	["GroundAttack"] = { 		[1] = { blockName = _('TARGETS'), groupTask = "groundTarget", dataTableName = "enemyGroupsData", maxWingmens = 20, canBeEmpty = true, wgtClass = InstantActionEditorGroupWgt },
								[2] = { blockName = _('PROTECTING AIR DEFENCE'), groupTask = "airDefence", dataTableName = "enemyGroupsData", maxWingmens = 20, canBeEmpty = true, enemySkillBlock = true, wgtClass = InstantActionEditorGroupWgt}},
	["SEAD"] = { 				[1] = { blockName = _('TARGETS'), groupTask = "airDefence", dataTableName = "enemyGroupsData", maxWingmens = 20, canBeEmpty = false, enemySkillBlock = true, wgtClass = InstantActionEditorGroupWgt }},
	["AntiShip"] = { 			[1] = { blockName = _('TARGETS'), groupTask = "shipTarget", dataTableName = "enemyGroupsData", maxWingmens = 20, canBeEmpty = false, enemySkillBlock = true, wgtClass = InstantActionEditorGroupWgt }},
}

local function fillData()
	if iaeData == nil then
		return
	end

	local setup = setupsByMissionType[iaeData.generalData.missionType]
	if setup == nil then
		print("DEBUG: TODO setup for mission type - "..iaeData.generalData.missionType.." not exist" )
		return
	end
	local panelByGroupTask = {}
	for i, data in ipairs(setup) do
		panelByGroupTask[data.groupTask] = i
		panelsData[i].scroll:removeAllWidgets()
		panelsData[i].wgts = {}
	end

	local function readData(tableName)
		if iaeData[tableName] == nil then
			return
		end

		for i, data in ipairs(iaeData[tableName].groups) do
			if panelByGroupTask[data.groupTask] ~= nil then
				if setup[panelByGroupTask[data.groupTask]].dataTableName == tableName then
					local panel = panelsData[panelByGroupTask[data.groupTask]]
					local panelSetup = setup[panelByGroupTask[data.groupTask]]
					local wgt = panelSetup.wgtClass.new()
					wgt:setWingmenRange(1, panelSetup.maxWingmens)
					wgt:setData(data, iaeData.playerGroupData.unitType, iaeData.playerGroupData.country, iaeData.generalData.missionType, iaeData.generalData.missionRange, iaeData.generalData.era, #panel.wgts + 1, tableName, i)
					if data.groupTask == "bomber" then
						wgt:setAspectChangeCallback(syncronizeBombersAspects)
					end
					table.insert(panel.wgts, wgt)
					panel.scroll:insertWidget(wgt:getWidget())
				end
			end
		end
	end

	readData("enemyGroupsData")
	readData("friendlyGroupsData")

	local function updatePanelInnerWidgets(panelIndex, panel)
		local w, h = panel.panel:getSize()
		local scrollItemCount = panel.scroll:getWidgetCount()
		local scrollHeight = 0
		if scrollItemCount > 0 then
			local item = panel.scroll:getWidget(0)
			if item ~= nil then
				local iW, iH = item:getSize()
				scrollHeight = ( iH + 4 ) * scrollItemCount
			end
		end

		local yOffsetAfterEnemySkillPanel = panel.enemySkillPanel and 35 or 0
		local scrollHeight = math.min((#setup == 1 and dialogHeight - 50 or dialogHeight / 2 - 50 ) - 40 - yOffsetAfterEnemySkillPanel, scrollHeight)
		panel.scroll:setSize(w, scrollHeight)
		panel.scroll:setPosition(0, yOffsetAfterEnemySkillPanel)
		panel.buttonAdd:setPosition(15, scrollHeight + 10 + yOffsetAfterEnemySkillPanel)
		panel.buttonRandom:setPosition(80, scrollHeight + 5 + yOffsetAfterEnemySkillPanel)

		if panel.wgts then
			for i, wgt in ipairs(panel.wgts) do
				wgt:updateDeleteButtonVisibility(#panel.wgts > 1 or setup[panelIndex].canBeEmpty == true)
			end
		end
	end

	for i, panel in ipairs(panelsData) do
		updatePanelInnerWidgets(i, panel)
	end
end

local function onShow()
	iaeData = InstantActionGeneratorData.getIAEData()

	local setup = setupsByMissionType[iaeData.generalData.missionType]
	if setup == nil then
		print("DEBUG: TODO setup for mission type - "..iaeData.generalData.missionType.." not exist" )
		return
	end
	local function setupPanel(panel, dataIndex)
		panel.scroll:removeAllWidgets()
		panel.wgts = nil
		panel.panel:setVisible(setup[dataIndex] ~= nil)
		if setup[dataIndex] == nil then
			return
		end

		panel.title:setText(setup[dataIndex].blockName)

		panel.panel:setPosition(0, dataIndex == 1 and 0 or dialogHeight / 2)
		local w, h = panel.panel:getSize()
		panel.panel:setSize(w, #setup == 1 and dialogHeight or dialogHeight / 2)
		local containerCommonHeight = #setup == 1 and dialogHeight - 50 or dialogHeight / 2 - 50
		panel.containerCommon:setSize(w, containerCommonHeight)

		panel.buttonAdd.onChange = function()
			InstantActionGeneratorData.addGroup(setup[dataIndex].dataTableName, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.missionRange,
				setup[dataIndex].groupTask, "Turning Point")
		end

		panel.buttonRandom.onChange = function()
			InstantActionGeneratorData.createRandomGroups(setup[dataIndex].dataTableName, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.missionRange,
				setup[dataIndex].groupTask)
		end

		if panel.enemySkillPanel ~= nil then
			panel.panel:removeWidget(panel.enemySkillPanel)
			panel.enemySkillPanel:destroy()
			panel.enemySkillPanel = nil
		end

		if setup[dataIndex].enemySkillBlock == true then
			panel.enemySkillPanel = enemySkillPanel:clone()
			window:removeWidget(panel.enemySkillPanel)
			panel.containerCommon:insertWidget(panel.enemySkillPanel)
			panel.enemySkillPanel:setPosition(0, 0)
			panel.enemySkillPanel:setVisible(true)
			
			panel.enemySkillPanel.comboboxEnemyAISkill:addChangeCallback(function()
				local item = panel.enemySkillPanel.comboboxEnemyAISkill:getSelectedItem()
				if item and item.value then
					iaeData.generalData.enemyAISkill = item.value
				end
			end)
		
			if iaeData == nil then
				return
			end
			
			panel.enemySkillPanel.comboboxEnemyAISkill:clear()
			
			local item = panel.enemySkillPanel.comboboxEnemyAISkill:newItem(cdata.random)
			item.value = ""

			for i, skill in ipairs(InstantActionGeneratorData.getConstants().getAISkills()) do       
				local item = panel.enemySkillPanel.comboboxEnemyAISkill:newItem(skill.name)
				item.value = skill.id
		
				if iaeData.generalData.enemyAISkill == item.value then
					panel.enemySkillPanel.comboboxEnemyAISkill:selectItem(item)
				end
			end
		
			if panel.enemySkillPanel.comboboxEnemyAISkill:getSelectedItem() == nil then
				local item = panel.enemySkillPanel.comboboxEnemyAISkill:getItem(0)
				panel.enemySkillPanel.comboboxEnemyAISkill:selectItem(item)
				iaeData.generalData.enemyAISkill = item.value
			end
		end
	end

	setupPanel(panelsData[1], 1)
	setupPanel(panelsData[2], 2)

	fillData()
end

local function onHide()
	iaeData = nil
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorTargets.dlg", cdata)
	local w, h = window:getSize()
	dialogHeight = hS - offsetY - 33

	window:setPosition(wS - w, offsetY)
	window:setSize(w, dialogHeight)
	
	panelsData = {}
	local function findPanel(panelName)
		local data = {}

		data.panel = window[panelName]
		data.title = data.panel.staticTitle
		data.containerCommon = data.panel.containerCommon
		data.scroll = data.containerCommon.scrollPanel
		data.buttonAdd = data.containerCommon.buttonAdd
		data.buttonRandom = data.containerCommon.buttonRandom

		table.insert(panelsData, data)
	end

	findPanel("MainPanel")
	findPanel("SecondPanel")

	enemySkillPanel = window.enemySkillPanel
end

function syncronizeBombersAspects(value)
	for i, panelData in ipairs(panelsData) do
		if panelData.wgts ~= nil then
			for j, wgt in ipairs(panelData.wgts) do
				if wgt.dataReference and wgt.dataReference.groupTask == "bomber" then
					if value == nil then
						value = wgt.dataReference.aspectToPlayer
					elseif wgt.dataReference.aspectToPlayer ~= value then
						wgt.dataReference.aspectToPlayer = value
						wgt.wgt.comboboxAspectToPlayer:selectItem(wgt.wgt.comboboxAspectToPlayer.itemByValue[wgt.dataReference.aspectToPlayer])
					end
				end
			end
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
	fillData()
end

function onAddGroup()
	fillData()
	syncronizeBombersAspects(nil)
end

function onDeleteGroup()
	fillData()
end

function onChangeEra()
	fillData()
end

function onChangeMissionType()
	onShow()
end

function onGenerationComplete()
	show(false)
end
