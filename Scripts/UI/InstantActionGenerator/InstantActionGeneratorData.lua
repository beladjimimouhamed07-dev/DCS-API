local base = _G

module('InstantActionGeneratorData')

local require	= base.require
local pairs		= base.pairs
local ipairs	= base.ipairs
local print		= base.print
local table		= base.table
local math 		= base.math

local i18n			= require('i18n')
local TableUtils 	= require('TableUtils')
local DB 			= require('me_db_api')
local CoalitionController = require('Mission.CoalitionController')

local InstantActionEditor = require('InstantActionEditor')
local InstantActionEditorGeneral = require('InstantActionEditorGeneral')
local InstantActionEditorPlayer = require('InstantActionEditorPlayer')
local InstantActionEditorTargets = require('InstantActionEditorTargets')
local InstantActionEditorAlliedGroups = require('InstantActionEditorAlliedGroups')

local T = require('tools')
local MissionGenerator = require('MissionGenerator')
local InstantActionGeneratorConstants = T.safeDoFileWithRequire("MissionEditor/data/MissionGenerator/GeneratorData/InstantActionGeneratorConstants.lua")

i18n.setup(_M)

local iaeData = {}
local paramsRequiringRegenerating = {}

local modulesForNotifications = { 
	InstantActionEditor, 
	InstantActionEditorGeneral,
	InstantActionEditorPlayer,
	InstantActionEditorTargets,
	InstantActionEditorAlliedGroups,
}

enmGenStart, enmGenFinish, enmPercent = 0, 1, 2
generationModeSimple, generationModeForEditor, generationModeFromEditor, generationModeUpdateParameters, generationModeKeepParameters = 0, 1, 2, 3, 4

local function onAddGroup()
	for i, module in ipairs(modulesForNotifications) do
		if module.onAddGroup then
			module.onAddGroup()
		end
	end
end

local function onDeleteGroup()
	for i, module in ipairs(modulesForNotifications) do
		if module.onDeleteGroup then
			module.onDeleteGroup()
		end
	end
end

function onPlayerPositionUpdated()
	for i, module in ipairs(modulesForNotifications) do
		if module.onPlayerPositionUpdated then
			module.onPlayerPositionUpdated()
		end
	end
end

function onGenerationComplete()
	for i, module in ipairs(modulesForNotifications) do
		if module.onGenerationComplete then
			module.onGenerationComplete()
		end
	end
end

function onChangeEra()
	for i, module in ipairs(modulesForNotifications) do
		if module.onChangeEra then
			module.onChangeEra()
		end
	end
end

function onChangeMissionType()
	for i, module in ipairs(modulesForNotifications) do
		if module.onChangeMissionType then
			module.onChangeMissionType()
		end
	end
end

function onPlayerUnitTypeChanged()
	for i, module in ipairs(modulesForNotifications) do
		if module.onPlayerUnitTypeChanged then
			module.onPlayerUnitTypeChanged()
		end
	end
end

function getConstants()
	return InstantActionGeneratorConstants
end

function getIAEData()
	return iaeData
end

function setIAEData(data)
	iaeData = {}
	TableUtils.copyTable(iaeData, data)

	paramsRequiringRegenerating.map = iaeData.generalData.map
	paramsRequiringRegenerating.unitType = iaeData.playerGroupData.unitType
	paramsRequiringRegenerating.missionType = iaeData.generalData.missionType
	paramsRequiringRegenerating.missionRange = iaeData.generalData.missionRange
end

function haveHaramsRequiringRegenerating()
	if paramsRequiringRegenerating.map ~= iaeData.generalData.map or
		paramsRequiringRegenerating.unitType ~= iaeData.playerGroupData.unitType or
		paramsRequiringRegenerating.missionType ~= iaeData.generalData.missionType or
		paramsRequiringRegenerating.missionRange ~= iaeData.generalData.missionRange then
		return true
	end

	return false
end

function addGroup(tableName, playerAircraft, missionType, missionRange, groupTask, takeoffFrom)
	if iaeData == nil then
		return
	end

	if iaeData[tableName] == nil then
		return
	end

	local groupData = MissionGenerator.getGroupData(playerAircraft, missionType, missionRange, groupTask, takeoffFrom)
	table.insert(iaeData[tableName].groups, groupData)
	onAddGroup()
end

function deleteGroup(tableName, groupIndex)
	if iaeData == nil then
		return
	end

	if iaeData[tableName] == nil then
		return
	end

	table.remove(iaeData[tableName].groups, groupIndex)
	onDeleteGroup()
end

function createRandomGroups(tableName, playerAircraft, missionType, missionRange, groupTask)
	if iaeData == nil then
		return
	end

	if iaeData[tableName] == nil then
		return
	end

	--TODO
	--STUB
	local groupsFiltered = {}
	for i, v in ipairs(iaeData[tableName].groups) do
		if v.groupTask ~= groupTask then
			table.insert(groupsFiltered, v)
		end
	end
	iaeData[tableName].groups = groupsFiltered
	local groupData = MissionGenerator.getGroupData(playerAircraft, missionType, missionRange, groupTask, "Turning Point")
	table.insert(iaeData[tableName].groups, groupData)
	local groupData = MissionGenerator.getGroupData(playerAircraft, missionType, missionRange, groupTask, "Turning Point")
	table.insert(iaeData[tableName].groups, groupData)
	local groupData = MissionGenerator.getGroupData(playerAircraft, missionType, missionRange, groupTask, "Turning Point")
	table.insert(iaeData[tableName].groups, groupData)
	local groupData = MissionGenerator.getGroupData(playerAircraft, missionType, missionRange, groupTask, "Turning Point")
	table.insert(iaeData[tableName].groups, groupData)
	onAddGroup()
end

function getDataForGenerator()
	local dataTable = {}
	TableUtils.recursiveCopyTable(dataTable, iaeData)	
	
	local AISkills = getConstants().getAISkills()
	if dataTable.playerGroupData.wingmenAISkill == nil or dataTable.playerGroupData.wingmenAISkill == "" then
		dataTable.playerGroupData.wingmenAISkill = AISkills[MissionGenerator.getRandArrayIndex(#AISkills)].id
	end

	if dataTable.generalData.enemyAISkill == nil or dataTable.generalData.enemyAISkill == "" then
		dataTable.generalData.enemyAISkill = AISkills[MissionGenerator.getRandArrayIndex(#AISkills)].id
	end

	print("DEBUG: getDataForGenerator()")
	base.U.traverseTable(dataTable)

	return dataTable
end

function getPlayableUnits()
	local playableAircrafts = {}
	local unitsForIAG = InstantActionGeneratorConstants.getUnits()
	for aType, v in pairs(base.aircraftFlyableInPlugins) do
		if unitsForIAG[aType] ~= nil and DB.unit_by_type[aType] ~= nil then
			table.insert(playableAircrafts, aType)
		end
	end
	
	return playableAircrafts
end

function isUnitPlayable(unitType)
	local playableUnits = getPlayableUnits()
	for i, playableUnit in ipairs(playableUnits) do
		if unitType == playableUnit then
			return true
		end
	end
	
	return false
end

function getCountriesForAircrafts(aircraftTypes, useHistory)
	local countriesSet = {}
	for i, aircraft in ipairs(aircraftTypes) do
		local countries = MissionGenerator.getCountriesForAircraftByEpoch(aircraft, iaeData.generalData.yearStart or 0, iaeData.generalData.yearEnd or 9999)
		for j, country in ipairs(countries) do
			countriesSet[country] = true
		end
	end
	local result = {}
	for k, v in pairs(countriesSet) do
		table.insert(result, k)
	end
	return result
end

function getMissionTypesAndRangesForAircrafts(aircraftTypes)
	local typesAndRangesMap = {}
	for i, aircraft in ipairs(aircraftTypes) do
		local missionTypes = InstantActionGeneratorConstants.getMissionTypesByAircraftType(aircraft)
		for j, missionType in ipairs(missionTypes) do
			if typesAndRangesMap[missionType.id] == nil then
				typesAndRangesMap[missionType.id] = {}
			end
			local missionRanges = InstantActionGeneratorConstants.getMissionsRangesForAircraft(aircraft, missionType.id)
			for k, range in ipairs(missionRanges) do
				typesAndRangesMap[missionType.id][range] = true
			end
		end
	end
	local result = {}
	local missionTypesOrdered = InstantActionGeneratorConstants.getMissionTypesOrdered()
	local missionRangesOrdered = InstantActionGeneratorConstants.getMissionRangesOrdered()
	for i, missionType in ipairs(missionTypesOrdered) do
		for j, range in ipairs(missionRangesOrdered) do
			if typesAndRangesMap[missionType] and typesAndRangesMap[missionType][range] then
				table.insert(result, {["missionType"] = missionType, ["missionRange"] = range})
			end
		end
	end
	return result
end

function getTakeoffFromForMissionTypesAndRanges(missionTypesAndRanges)
	takeoffFromSet = {}
	for i, typeAndRange in ipairs(missionTypesAndRanges) do
		-- TODO: add check by aircraft type(s)
		local takeOffPositions = InstantActionGeneratorConstants.getTakeOffByMissionType(typeAndRange.missionType)
		for j, takeOffPosition in ipairs(takeOffPositions) do
			takeoffFromSet[takeOffPosition.id] = true
		end		
	end
	local result = {}
	local takeoffFromOrdered = InstantActionGeneratorConstants.getTakeoffFromOrdered()
	for i, takeOffPosition in ipairs(takeoffFromOrdered) do
		if takeoffFromSet[takeOffPosition] then
			table.insert(result, takeOffPosition)
		end
	end
	return result
end

function filterUnitsByCountries(unitsIn, countriesIn, useHistory)
	local result = {}
	for i, unit in ipairs(unitsIn) do
		for j, countryId in ipairs(countriesIn) do
			if MissionGenerator.isAircraftPlayableForCountryId(unit, countryId, useHistory) == true then
				table.insert(result, unit)
			end
		end
	end
	return result
end

function filterUnitsByMissionTypesAndRanges(unitsIn, missionTypesAndRangesIn)
	local result = {}
	for i, unit in ipairs(unitsIn) do
		for j, typeAndRange in ipairs(missionTypesAndRangesIn) do
			if InstantActionGeneratorConstants.isMissionTypeAvailableForAircraft(unit, typeAndRange.missionType) and 
			InstantActionGeneratorConstants.isMissionRangeCompatible(unit, typeAndRange.missionType, typeAndRange.missionRange) then
				table.insert(result, unit)
			end
		end
	end
	return result
end

function filterMissionTypesAndRangesByTakeoffFrom(missionTypesAndRangesIn, takeoffFromIn)
	local result = {}
	for i, missionTypeAndRange in ipairs(missionTypesAndRangesIn) do
		for j, takeoffFrom in ipairs(takeoffFromIn) do
			if InstantActionGeneratorConstants.isMissionTypeCompatibleWithTakeoffFrom(missionTypeAndRange.missionType, takeoffFrom) then
				table.insert(result, missionTypeAndRange)
			end
		end
	end
	return result
end

function getMinAndMaxSpeed(unitType)
	local min = 0
	local max = 10000
	local unitDef = DB.unit_by_type[unitType]
	if unitDef then
		if DB.getCategoryByType(unitType) == "Plane" then
			if unitDef.V_land then
				min = unitDef.V_land * 3.6
			else
				min = 250
			end
		else
			min = 0
		end

		max = unitDef.MaxSpeed or (unitDef.max_velocity and (unitDef.max_velocity * 3.6))
	end

	return base.tonumber(min) / 3.6, base.tonumber(max) / 3.6
end

function generateLoadout(dataOut, aircraftType, missionType, countryId, setWholeLoadout, setPylons, setLivery)
	if dataOut == nil then
        return
    end

	local loadout

	if aircraftType == "" then
		loadout = nil
	elseif missionType == "" then
		loadout = InstantActionGeneratorConstants.getDefaultLoadout(aircraftType)
		if countryId == "" then
			loadout.livery_id = ""
		else
			loadout.livery_id = InstantActionGeneratorConstants.getDefaultLiveryId(aircraftType, DB.country_by_id[countryId].ShortName)
		end
	else
		if countryId == "" then
			countryId = 999
		end
		loadout = MissionGenerator.getLoadout(aircraftType, missionType, "player", countryId)		
	end

	if setWholeLoadout or (loadout == nil) or (dataOut.loadout == nil) then
		dataOut.loadout = loadout
	else
		if setPylons then
			dataOut.loadout.pylons = loadout.pylons
		end
		if setLivery then
			dataOut.loadout.livery_id = loadout.livery_id
		end
	end
end

function setEraYears(generationData)
	local era = InstantActionGeneratorConstants.getEra(generationData.era)
	if era ~= nil then
		generationData.yearStart = era.beginning
		generationData.yearEnd = era.ending
	end
end

function isUnitFitToEra(unitType, era)
	local eraAll = (era == nil or era == "" or era == "all")
	if eraAll then
		return true
	end
	
	local eraData = InstantActionGeneratorConstants.getEra(era)
	local countries = MissionGenerator.getCountriesForUnitByEpoch(unitType, eraData.beginning, eraData.ending)
	if #countries > 0 then
		return true
	end
	return false
end

function isTemplateFitToEra(templateName, era)
	local template = InstantActionGeneratorConstants.getGroupTemplates()[templateName]
	if template == nil then
		return false
	end
	for unit_i, unitTempl in pairs(template.units) do
		if not isUnitFitToEra(unitTempl.name, era) then
			return false
		end
	end
	return true
end

function isMapAvailable(mapName)
	local availableMaps = CoalitionController.getTheatresOfWar()
	for i, map in ipairs(availableMaps) do
		if mapName == map.name then
			return true
		end
	end
	return false
end

function getTopPriorityMap()
	local availableMaps = CoalitionController.getTheatresOfWar()
	local topPriority = InstantActionGeneratorConstants.getUpperBoundPriorityOfTOW()
	local result = nil
	
	for i, map in ipairs(availableMaps) do
		local mapPriority = InstantActionGeneratorConstants.getPriorityOfTOW(map.name)
		if mapPriority == nil then
			return map.name
		end
		if mapPriority < topPriority then
			topPriority = mapPriority
			result = map.name
		end
	end
	
	return result
end

function updateTakeoff(dataOut, missionType, aircraftType)
	if not InstantActionGeneratorConstants.isTakeOffAcceptable(dataOut.takeoffFrom, missionType, aircraftType) then
		dataOut.takeoffFrom = InstantActionGeneratorConstants.getDefaultTakeOffValue(missionType, aircraftType)
	end
end

function updateFormation(dataOut, aircraftType)
	if not InstantActionGeneratorConstants.isFormationAcceptable(dataOut.formation, aircraftType) then
		dataOut.formation = InstantActionGeneratorConstants.getDefaultFormationValue(aircraftType)
	end
end
