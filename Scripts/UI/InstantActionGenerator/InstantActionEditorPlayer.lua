local base = _G

module('InstantActionEditorPlayer')

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
local U 					= require('me_utilities')
local OptionsData 			= require('Options.Data')
local DB 					= require('me_db_api')
local CoalitionController 	= require('Mission.CoalitionController')
local MissionGenerator 		= require('MissionGenerator')
local textutil          	= require('textutil')
local keys					= require('mul_keys')

local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionEditor = require('InstantActionEditor')
local InstantActionEditorGeneral = require('InstantActionEditorGeneral')
local InstantActionEditorAlliedGroups = require('InstantActionEditorAlliedGroups')

i18n.setup(_M)

local iaeData = nil

local cdata = 
{
	playerPosition = _('PLAYER'),
	aircraft = _('AIRCRAFT'),
	distanceToTarget = _('DISTANCE TO TARGET'),
	headingToTarget = _('HEADING TO TARGET'),
	altitude = _('ALTITUDE'),
	speed = _('SPEED'),
	wingmen = _('FLIGHT'),
	wingmenAISkill = _('WINGMEN AI SKILL'),
	loadout = _('LOADOUT'),
	edit = _('EDIT'),
	alliedGroups = _('ALLIED GROUPS'),
	random = _('Random'),
}

function fillAircrafts()    
    comboboxAircraft:clear()

	if iaeData == nil then
        return
    end

	local availableAircrafts = {}
	for aType, v in pairs(base.aircraftFlyableInPlugins) do
		if InstantActionGeneratorData.getConstants().isMissionTypeAvailableForAircraft(aType, iaeData.generalData.missionType) == true then
			if InstantActionGeneratorData.isUnitFitToEra(aType, iaeData.generalData.era) then
				table.insert(availableAircrafts, aType)
			end
		end
	end
	
	table.sort(availableAircrafts, function(left, right)
		if left.isAvailable == right.isAvailable then
			return textutil.Utf8Compare(left, right)
		end
	end)
    
	comboboxAircraft.itemByType = {}
    for i, aType in ipairs(availableAircrafts) do
		local item = comboboxAircraft:newItem(keys.tabTr[aType] or keys.getDisplayName(aType))
		item.value = aType
		comboboxAircraft.itemByType[aType] = item

		if iaeData.playerGroupData.unitType == aType then
			comboboxAircraft:selectItem(item)
		end
	end
end

function fillDataByPositions()
	local dirX = iaeData["enemyGroupsData"].x - iaeData["playerGroupData"].x
	local dirY = iaeData["enemyGroupsData"].y - iaeData["playerGroupData"].y

	local distance = math.sqrt(dirX * dirX + dirY * dirY)

	local heading = math.deg(math.atan2(dirY, dirX));
	if heading < 0 then
		heading = heading + 360
	end

	distanceToTargetSpinBox:setValue(distance)
    sHeadingToTarget:setValue(heading)
    dHeadingToTarget:setValue(heading)
end

local function fillPositionByData()
	local angleInRadians = math.rad(tonumber(sHeadingToTarget:getValue()))
	angleInRadians = angleInRadians + math.rad(180)

	iaeData["playerGroupData"].x = math.cos(angleInRadians) * distanceToTargetSpinBox:getValue() + iaeData["enemyGroupsData"].x
	iaeData["playerGroupData"].y = math.sin(angleInRadians) * distanceToTargetSpinBox:getValue() + iaeData["enemyGroupsData"].y
	InstantActionGeneratorData.onPlayerPositionUpdated()
end

local function fiilWingmensSkill()
	comboboxWingmenAISkill:clear()

	if iaeData == nil then
        return
    end

	local item = comboboxWingmenAISkill:newItem(cdata.random)
	item.value = ""
    
    for i, skill in ipairs(InstantActionGeneratorData.getConstants().getAISkills()) do       
        local item = comboboxWingmenAISkill:newItem(skill.name)
		item.value = skill.id

		if iaeData.playerGroupData.wingmenAISkill == skill.id then
			comboboxWingmenAISkill:selectItem(item)
		end
	end

	if comboboxWingmenAISkill:getSelectedItem() == nil then
		local item = comboboxWingmenAISkill:getItem(0)
		comboboxWingmenAISkill:selectItem(item)
		iaeData.playerGroupData.wingmenAISkill = item.value
	end
end

local function updateAltAndSpeedRanges()
	local minSpeed, maxSpeed = InstantActionGeneratorData.getMinAndMaxSpeed(iaeData.playerGroupData.unitType)
	local maxAlt = 10000
	local unitDef = DB.unit_by_type[iaeData.playerGroupData.unitType]
	if unitDef and unitDef.MaxHeight then
		maxAlt = base.tonumber(unitDef.MaxHeight)
	end

	altitudeSpinBox:setRange(0, maxAlt)
	speedSpinBox:setRange(minSpeed, maxSpeed)
end

local function updateUnitSystem(self)
	local unitSystem = OptionsData.getUnits()
	
	distanceToTargetSpinBox:setUnitSystem(unitSystem)
	altitudeSpinBox:setUnitSystem(unitSystem)
	speedSpinBox:setUnitSystem(unitSystem)

	sDistanceToTarget:setStep(1)
end

local function onShow()
	iaeData = InstantActionGeneratorData.getIAEData()

	fillDataByPositions()
	fillAircrafts()
	fiilWingmensSkill()

	altitudeSpinBox:setValue(iaeData.playerGroupData.altitude)
    speedSpinBox:setValue(iaeData.playerGroupData.speed)
	updateAltAndSpeedRanges()
	onChangeTakeoff()

	updateUnitSystem()

	toggleButtonAlliedGroups:setState(false)
	InstantActionEditorAlliedGroups.show(false)
end

local function onHide()
	iaeData = nil
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorPlayer.dlg", cdata)
	local w, h = window:getSize()
	window:setPosition(wS - w, 240)

	-- add unis label support
    local container = window.MainPanel.containerCommon
	comboboxAircraft = container.comboboxAircraft
	sDistanceToTarget = container.sDistanceToTarget
    sHeadingToTarget = container.sHeadingToTarget
    dHeadingToTarget = container.dHeadingToTarget
    sAltitude = container.sAltitude
    sSpeed = container.sSpeed
    comboboxWingmenAISkill = container.comboboxWingmenAISkill
	toggleButtonAlliedGroups = container.toggleButtonAlliedGroups

	distanceToTargetSpinBox = U.createUnitSpinBox(container.textDistanceToTarget, sDistanceToTarget, U.distanceUnits, sDistanceToTarget:getRange())
	altitudeSpinBox = U.createUnitSpinBox(container.textAltitude, sAltitude, U.altitudeUnits, sAltitude:getRange())
	speedSpinBox = U.createUnitSpinBox(container.textSpeed, sSpeed, U.speedUnits, sSpeed:getRange())
	function comboboxAircraft:onChange()
		local item = comboboxAircraft:getSelectedItem()

		if item and item.value then
			if iaeData.playerGroupData.unitType == item.value then
				return
			end
			iaeData.playerGroupData.unitType = item.value

			updateAltAndSpeedRanges()

			local unitDefaultData = InstantActionGeneratorData.getConstants().getDefaultSpawningRules(iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.missionRange)
        	if unitDefaultData ~= nil then
				iaeData.playerGroupData.altitude = unitDefaultData.altMin
				iaeData.playerGroupData.speed = unitDefaultData.speed

				altitudeSpinBox:setValue(iaeData.playerGroupData.altitude)
    			speedSpinBox:setValue(iaeData.playerGroupData.speed)
        	end

			InstantActionEditorGeneral.refillCountries()
			InstantActionEditorGeneral.refillMissionType()
			InstantActionGeneratorData.updateTakeoff(iaeData.playerGroupData, iaeData.generalData.missionType, iaeData.playerGroupData.unitType)
			InstantActionGeneratorData.updateFormation(iaeData.playerGroupData, iaeData.playerGroupData.unitType)
			InstantActionGeneratorData.generateLoadout(iaeData.playerGroupData, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.country, true, true, true)
			InstantActionGeneratorData.onPlayerUnitTypeChanged()

			InstantActionEditor.showRegenerateButton(InstantActionGeneratorData.haveHaramsRequiringRegenerating())
		end
	end

	function sDistanceToTarget:onChange()
		fillPositionByData()
	end

    function sHeadingToTarget:onChange()
		dHeadingToTarget:setValue(sHeadingToTarget:getValue())
		fillPositionByData()
	end

	function dHeadingToTarget:onChange()
		sHeadingToTarget:setValue(dHeadingToTarget:getValue())
		fillPositionByData()
	end

	function sAltitude:onChange()
		iaeData.playerGroupData.altitude = tonumber(altitudeSpinBox:getValue())
	end

	function sSpeed:onChange()
		iaeData.playerGroupData.speed = tonumber(speedSpinBox:getValue())
	end

	function comboboxWingmenAISkill:onChange()
		local item = comboboxWingmenAISkill:getSelectedItem()

		if item and item.value then
			iaeData.playerGroupData.wingmenAISkill = item.value
		end
	end

	function toggleButtonAlliedGroups:onChange()
		InstantActionEditorAlliedGroups.show(toggleButtonAlliedGroups:getState())
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

function onGenerationComplete()
	show(false)
end

function onChangeEra()
	fillAircrafts()

	if comboboxAircraft:getSelectedItem() == nil then
		local firstItem = comboboxAircraft:getItem(0)

		if firstItem then
			comboboxAircraft:selectItem(firstItem)
			comboboxAircraft:onChange()
		end
	end
end

function onChangeCountry()
	--onChangeEra()
end

function onChangeMissionType()
	fillAircrafts()
end

function onChangeTakeoff()
	local isInAir = iaeData.playerGroupData.takeoffFrom == "Turning Point"
	altitudeSpinBox:setEnabled(isInAir)
	speedSpinBox:setEnabled(isInAir)
end
