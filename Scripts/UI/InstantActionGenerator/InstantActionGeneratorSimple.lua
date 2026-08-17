local base = _G

module('InstantActionGeneratorSimple')

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
local T 					= require('tools')
local U    					= require('me_utilities')
local keys					= require('mul_keys')
local DB 					= require('me_db_api')
local CoalitionController 	= require('Mission.CoalitionController')
local textutil          	= require('textutil')
local waitScreen			= require('me_wait_screen')
local UpdateManager			= require('UpdateManager')
local AutoBriefingModule	= require('me_autobriefing')
local MapWindow 			= require('me_map_window')

local MainMenu 				= require('MainMenu')
local panel_quickstart      = require('me_quickstart') 

local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionEditor = require('InstantActionEditor')
local InstantActionEditorLoadout = require('InstantActionEditorLoadout')
local MissionGenerator = require('MissionGenerator')

i18n.setup(_M)

local simpleGenerationData = nil

local fEnvironment = T.safeDoFileWithRequire("MissionEditor/data/MissionGenerator/GeneratorData/environment.lua", {"i_18n"})

local cdata = 
{
	instantActionGenerator = _('INSTANT ACTION GENERATOR'),
	instantActionEditor = _('INSTANT ACTION EDITOR'),
	aircraft = _('AIRCRAFT'),
	country = _('COUNTRY'),
	missionType = _('MISSION TYPE'),
	loadout = _('LOADOUT'),
	edit = _('EDIT'),
	startFrom = _('START FROM'),
	enemyAISkill = _('ENEMY AI SKILL'),
	theatreOfWar = _('MAP'),
	season = _('SEASON'),
	weather = _('WEATHER'),
	startTime = _('START TIME'),
	random = _('RANDOM'),
	time = _('TIME'),
	fly = _('FLY'),
	cancel = _('CANCEL'),
}


local function fillAircrafts()
    if simpleGenerationData == nil then
        return
    end
	
	if cbAircraftRnd:getState() == true then
		simpleGenerationData.aircraftType = ""
	else
		if simpleGenerationData.aircraftType == "" then
			local item = comboboxAircraft:getSelectedItem()
			if item and item.value then
				simpleGenerationData.aircraftType = item.value
			end
		end
	
		comboboxAircraft:clear()

		local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
		
		table.sort(playableAircrafts, function(left, right)
			if left.isAvailable == right.isAvailable then
				return textutil.Utf8Compare(left, right)
			end
		end)
		
		for i, aType in ipairs(playableAircrafts) do
			local item = comboboxAircraft:newItem(keys.tabTr[aType] or keys.getDisplayName(aType))
			item.value = aType

			if simpleGenerationData.aircraftType == aType then
				comboboxAircraft:selectItem(item)
			end
		end

		if comboboxAircraft:getSelectedItem() == nil then
			local item = comboboxAircraft:getItem(0)
			comboboxAircraft:selectItem(item)
			simpleGenerationData.aircraftType = item.value
		end
	end		
end

local function fillCountries()
	if simpleGenerationData == nil then
        return
    end

    if cbCountryRnd:getState() == true then
		simpleGenerationData.country = ""
	else
		if simpleGenerationData.country == "" then
			local item = comboboxCountry:getSelectedItem()
			if item and item.value then
				simpleGenerationData.country = item.value
			end
		end	
		
		comboboxCountry:clear()
		
		local countries
		if simpleGenerationData.aircraftType == "" then
			local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
			if simpleGenerationData.missionType ~= "" and simpleGenerationData.missionType ~= nil then
				local missionTypeAndRange = {["missionType"] = simpleGenerationData.missionType, ["missionRange"] = simpleGenerationData.missionRange}
				playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, {missionTypeAndRange, })
			elseif simpleGenerationData.takeoffFrom ~= "" and simpleGenerationData.takeoffFrom ~= nil then
				local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
				missionTypesAndRanges = InstantActionGeneratorData.filterMissionTypesAndRangesByTakeoffFrom(missionTypesAndRanges, {simpleGenerationData.takeoffFrom, })
				playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, missionTypesAndRanges)
			end
			
			countries = InstantActionGeneratorData.getCountriesForAircrafts(playableAircrafts, false)
		else
			countries = MissionGenerator.getCountriesForAircraft(simpleGenerationData.aircraftType, false)
		end
		
		local availableCountries = {}
		for i, countryId in base.ipairs(countries) do
			local country = DB.country_by_id[countryId]
			base.table.insert(availableCountries, {Name = country.Name, id = countryId})
		end
		
		if availableCountries then
			U.sortCountries(availableCountries, 'Name')
		end
		
		for i, v in base.ipairs(availableCountries) do						
			local item = comboboxCountry:newItem(v.Name)
			item.value = v.id
			if simpleGenerationData.country == v.id then
				comboboxCountry:selectItem(item)
			end
		end

		if comboboxCountry:getSelectedItem() == nil then
			local item = comboboxCountry:getItem(0)
			comboboxCountry:selectItem(item)
			simpleGenerationData.country = item.value
		end		
	end
end

local function fillMissionType()
	if simpleGenerationData == nil then
        return
    end

    if cbMissionTypeRnd:getState() == true then
		simpleGenerationData.missionType = ""
		simpleGenerationData.missionRange = ""
	else
		if simpleGenerationData.missionType == "" then
			local item = comboboxMissionType:getSelectedItem()
			if item and item.value then
				simpleGenerationData.missionType = item.value.missionType
				simpleGenerationData.missionRange = item.value.missionRange
			end
		end	

		comboboxMissionType:clear()
		
		local missionTypesAndRanges
		if simpleGenerationData.aircraftType == "" then
			local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
			if simpleGenerationData.country ~= "" and simpleGenerationData.country ~= nil then
				playableAircrafts = InstantActionGeneratorData.filterUnitsByCountries(playableAircrafts, {simpleGenerationData.country, }, false)
			end
			
			missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
		else
			missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({simpleGenerationData.aircraftType, })
		end
				
		if missionTypesAndRanges == nil then
			simpleGenerationData.missionType = nil
			return
		end

		local itemMissionType = nil
		for i, missionTypeAndRange in ipairs(missionTypesAndRanges) do
			local item = comboboxMissionType:newItem(InstantActionGeneratorData.getConstants().getLocalizedMissionType(missionTypeAndRange.missionType, missionTypeAndRange.missionRange))
			item.value = {missionType = missionTypeAndRange.missionType, missionRange = missionTypeAndRange.missionRange}
			if simpleGenerationData.missionType == missionTypeAndRange.missionType then
				if simpleGenerationData.missionRange == missionTypeAndRange.missionRange then
					comboboxMissionType:selectItem(item)
				elseif itemMissionType == nil then
					itemMissionType = item
				end
			end
		end

		if comboboxMissionType:getSelectedItem() == nil then
			local item
			if itemMissionType ~= nil then
				item = itemMissionType
			else
				item = comboboxMissionType:getItem(0)
			end
			if item ~= nil then
				comboboxMissionType:selectItem(item)
				simpleGenerationData.missionType = item.value.missionType
				simpleGenerationData.missionRange = item.value.missionRange
			end
		end
	end
end

local function fillTakeoffFrom()
	if simpleGenerationData == nil then
        return
    end
	
    if cbTakeoffFromRnd:getState() == true then
		simpleGenerationData.takeoffFrom = ""
	else
		if simpleGenerationData.takeoffFrom == "" then
			local item = comboboxTakeoffFrom:getSelectedItem()
			if item and item.value then
				simpleGenerationData.takeoffFrom = item.value
			end
		end		
	
		comboboxTakeoffFrom:clear()
		
		local takeOffPositions
		if simpleGenerationData.missionType == "" then
			local missionTypesAndRanges
			if simpleGenerationData.aircraftType == "" then
				local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
				if simpleGenerationData.country ~= "" and simpleGenerationData.country ~= nil then
					playableAircrafts = InstantActionGeneratorData.filterUnitsByCountries(playableAircrafts, {simpleGenerationData.country, }, false)
				end
				
				missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
			else
				missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({simpleGenerationData.aircraftType, })
			end
		
			-- TODO: add check by aircraft type(s), including random
			takeOffPositions = InstantActionGeneratorData.getTakeoffFromForMissionTypesAndRanges(missionTypesAndRanges)
			
			local takeOffPositionsDisplay = {}
			for i, v in ipairs(takeOffPositions) do
				base.table.insert(takeOffPositionsDisplay, {id = v, name = InstantActionGeneratorData.getConstants().getLocalizedTakeoffPosition(v)})
			end
			takeOffPositions = takeOffPositionsDisplay	
		else
			-- TODO: add check by aircraft type(s), including random
			takeOffPositions = InstantActionGeneratorData.getConstants().getTakeOffByMissionType(simpleGenerationData.missionType)
		end

		if takeOffPositions == nil then
			simpleGenerationData.takeoffFrom = nil
			return
		end

		for i, type in ipairs(takeOffPositions) do       
			local item = comboboxTakeoffFrom:newItem(type.name)
			item.value = type.id

			if simpleGenerationData.takeoffFrom == type.id then
				comboboxTakeoffFrom:selectItem(item)
			end
		end

		if comboboxTakeoffFrom:getSelectedItem() == nil then
			local item = comboboxTakeoffFrom:getItem(0)
			if item ~= nil then
				comboboxTakeoffFrom:selectItem(item)
				simpleGenerationData.takeoffFrom = item.value
			end
		end	
	end
end

local function fillEnemyAISkill()
    if simpleGenerationData == nil then
        return
    end
	
    if cbEnemyAISkillRnd:getState() == true then
		simpleGenerationData.enemyAISkill = ""
	else
		if simpleGenerationData.enemyAISkill == "" then
			local item = comboboxEnemyAISkill:getSelectedItem()
			if item and item.value then
				simpleGenerationData.enemyAISkill = item.value
			end
		end
		
		comboboxEnemyAISkill:clear()
		
		for i, skill in ipairs(InstantActionGeneratorData.getConstants().getAISkills()) do       
			local item = comboboxEnemyAISkill:newItem(skill.name)
			item.value = skill.id

			if simpleGenerationData.enemyAISkill == skill.id then
				comboboxEnemyAISkill:selectItem(item)
			end
		end

		if comboboxEnemyAISkill:getSelectedItem() == nil then
			local item = comboboxEnemyAISkill:getItem(0)
			if item ~= nil then
				comboboxEnemyAISkill:selectItem(item)
				simpleGenerationData.enemyAISkill = item.value
			end
		end		
	end
end

local function fillTheatreOfWar()
    if cbTheatreOfWarRnd:getState() == true then
		simpleGenerationData.map = ""
	else
		if simpleGenerationData.map == "" then
			local item = comboboxTheatreOfWar:getSelectedItem()
			if item and item.value then
				simpleGenerationData.map = item.value
			end
		end

		comboboxTheatreOfWar:clear()
		
		for i, theatreOfWar in ipairs(CoalitionController.getTheatresOfWar()) do       
			local item = comboboxTheatreOfWar:newItem(theatreOfWar.localizedName)
			item.value = theatreOfWar.name

			if theatreOfWar.name == simpleGenerationData.map then
				local item = comboboxTheatreOfWar:getItem(i - 1)
				comboboxTheatreOfWar:selectItem(item)
			end
		end

		if comboboxTheatreOfWar:getSelectedItem() == nil then
			local item = comboboxTheatreOfWar:getItem(0)
			if item ~= nil then
				comboboxTheatreOfWar:selectItem(item)
				simpleGenerationData.map = item.value
			end
		end
	end
end

local function fillSeason()
    if cbSeasonRnd:getState() == true then
		simpleGenerationData.season = ""
	else
		if simpleGenerationData.season == "" then
			local item = comboboxSeason:getSelectedItem()
			if item and item.value then
				simpleGenerationData.season = item.value
			end
		end

		local seasons = (fEnvironment and fEnvironment.seasons) or {}
		comboboxSeason:clear()
		
		for i, season in ipairs(seasons) do       
			local item = comboboxSeason:newItem(season.name)
			item.value = season.id

			if season.id == simpleGenerationData.season then
				comboboxSeason:selectItem(comboboxSeason:getItem(i - 1))
			end
		end

		if comboboxSeason:getSelectedItem() == nil then
			local item = comboboxSeason:getItem(0)
			if item ~= nil then
				comboboxSeason:selectItem(item)
				simpleGenerationData.season = item.value
			end
		end
	end
end

local function fillWeather()
    if cbWeatherRnd:getState() == true then
		simpleGenerationData.weather = ""
	else
		if simpleGenerationData.weather == "" then
			local item = comboboxWeather:getSelectedItem()
			if item and item.value then
				simpleGenerationData.weather = item.value
			end
		end

		local weathers = (fEnvironment and fEnvironment.weather) or {}
		comboboxWeather:clear()
		
		for i, weather in ipairs(weathers) do       
			local item = comboboxWeather:newItem(weather.name)
			item.value = weather.id

			if weather.id == simpleGenerationData.weather then
				comboboxWeather:selectItem(comboboxWeather:getItem(i - 1))
			end
		end

		if comboboxWeather:getSelectedItem() == nil then
			local item = comboboxWeather:getItem(0)
			if item ~= nil then
				comboboxWeather:selectItem(item)
				simpleGenerationData.weather = item.value
			end
		end
	end
end

local function fillTime()
	if simpleGenerationData.isTimeRandom == nil then
		simpleGenerationData.isTimeRandom = true
	end

	local isRandom = simpleGenerationData.isTimeRandom
	radiobuttonStartTimeRandom:setState(isRandom)
	radiobuttonStartTimeTime:setState(not isRandom)
	editboxHour:setEnabled(not isRandom)
	editboxMinute:setEnabled(not isRandom)

	editboxHour:setText(simpleGenerationData.hours)
	editboxMinute:setText(simpleGenerationData.minutes)
end

local function onChangeBtnLoadout()
	local countryName
	if simpleGenerationData.country == "" then
		countryName = ""
	else
		countryName = DB.country_by_id[simpleGenerationData.country].ShortName
	end
	InstantActionEditorLoadout.show(true, simpleGenerationData.aircraftType, simpleGenerationData.loadout, countryName, simpleGenerationData.missionType, "player")
end

local function setStartTime()
	if simpleGenerationData.isTimeRandom then
		simpleGenerationData.startTime = -1
		return
	end
	
	simpleGenerationData.startTime = simpleGenerationData.minutes * 60 + simpleGenerationData.hours * 3600
end

-- TODO: delete if we return back to simple menu and test that InstantActionGeneratorData.generateLoadout() works fine
-- local function generateLoadout(setWholeLoadout, setPylons, setLivery)
	-- local loadout

	-- if simpleGenerationData.aircraftType == "" then
		-- loadout = nil
	-- elseif simpleGenerationData.missionType == "" then
		-- loadout = InstantActionGeneratorData.getConstants().getDefaultLoadout(simpleGenerationData.aircraftType)
		-- if simpleGenerationData.country == "" then
			-- loadout.livery_id = ""
		-- else
			-- loadout.livery_id = InstantActionGeneratorData.getConstants().getDefaultLiveryId(simpleGenerationData.aircraftType, DB.country_by_id[simpleGenerationData.country].ShortName)
		-- end
	-- else
		-- local countryId = simpleGenerationData.country
		-- if countryId == "" then
			-- countryId = 999
		-- end
		-- loadout = MissionGenerator.getLoadout(simpleGenerationData.aircraftType, simpleGenerationData.missionType, "player", countryId)		
	-- end

	-- if setWholeLoadout or (loadout == nil) or (simpleGenerationData.loadout == nil) then
		-- simpleGenerationData.loadout = loadout
	-- else
		-- if setPylons then
			-- simpleGenerationData.loadout.pylons = loadout.pylons
		-- end
		-- if setLivery then
			-- simpleGenerationData.loadout.livery_id = loadout.livery_id
		-- end
	-- end
-- end

local function fillRandomParameters()
	local setWholeLoadout = false
	local setPylons = false
	local setLivery = false

	if simpleGenerationData.aircraftType == "" then
		local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
		if simpleGenerationData.country ~= "" and simpleGenerationData.country ~= nil then
			playableAircrafts = InstantActionGeneratorData.filterUnitsByCountries(playableAircrafts, {simpleGenerationData.country, }, false)
		end
		if simpleGenerationData.missionType ~= "" and simpleGenerationData.missionType ~= nil then
			local missionTypeAndRange = {["missionType"] = simpleGenerationData.missionType, ["missionRange"] = simpleGenerationData.missionRange}
			playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, {missionTypeAndRange, })
		elseif simpleGenerationData.takeoffFrom ~= "" and simpleGenerationData.takeoffFrom ~= nil then
			local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
			missionTypesAndRanges = InstantActionGeneratorData.filterMissionTypesAndRangesByTakeoffFrom(missionTypesAndRanges, {simpleGenerationData.takeoffFrom, })
			playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, missionTypesAndRanges)
		end
		
		simpleGenerationData.aircraftType = playableAircrafts[MissionGenerator.getRandArrayIndex(#playableAircrafts)]
		setWholeLoadout = true
	end
	
	if simpleGenerationData.country == "" then
		local countries = MissionGenerator.getCountriesForAircraft(simpleGenerationData.aircraftType, false)
		simpleGenerationData.country = countries[MissionGenerator.getRandArrayIndex(#countries)]
		setLivery = true
	end
	
	if simpleGenerationData.missionType == "" then
		local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({simpleGenerationData.aircraftType, })
		local missionTypeAndRange = missionTypesAndRanges[MissionGenerator.getRandArrayIndex(#missionTypesAndRanges)]
		simpleGenerationData.missionType = missionTypeAndRange.missionType
		simpleGenerationData.missionRange = missionTypeAndRange.missionRange
		setPylons = true
	end
	
	if simpleGenerationData.takeoffFrom == "" then
		-- TODO: add check by aircraft type
		local takeOffPositions = InstantActionGeneratorData.getConstants().getTakeOffByMissionType(simpleGenerationData.missionType)
		simpleGenerationData.takeoffFrom = takeOffPositions[MissionGenerator.getRandArrayIndex(#takeOffPositions)].id
	end
	
	if simpleGenerationData.enemyAISkill == "" then
		local AISkills = InstantActionGeneratorData.getConstants().getAISkills()
		simpleGenerationData.enemyAISkill = AISkills[MissionGenerator.getRandArrayIndex(#AISkills)].id
	end
	
	if simpleGenerationData.map == "" then
		local theatresOfWar = CoalitionController.getTheatresOfWar()
		simpleGenerationData.map = theatresOfWar[MissionGenerator.getRandArrayIndex(#theatresOfWar)].name
	end
	
	if simpleGenerationData.season == "" then
		local seasons = (fEnvironment and fEnvironment.seasons) or {}
		simpleGenerationData.season = seasons[MissionGenerator.getRandArrayIndex(#seasons)].id
	end
	
	if simpleGenerationData.weather == "" then
		local weathers = (fEnvironment and fEnvironment.weather) or {}
		simpleGenerationData.weather = weathers[MissionGenerator.getRandArrayIndex(#weathers)].id
	end
	
	if setWholeLoadout or setPylons or setLivery then
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, setWholeLoadout, setPylons, setLivery)
	end
end

local function onChangeBtnFly()
	-- start full generate process and go to sim
	if simpleGenerationData == nil then
        return
	end
	setStartTime()
	fillRandomParameters()
	
	waitScreen.showMini(true, _("Generated:").."0%")
	UpdateManager.add(function()
		local MGModule = require('me_generator')
		local result = MGModule.generateInstantAction({generalData = simpleGenerationData}, InstantActionGeneratorData.generationModeSimple, endGenerateSimple)
		InstantActionGeneratorData.setIAEData(result)
		return true
	end)
end

function endGenerateSimple(returnCode, nodeId, error)
	if returnCode == InstantActionGeneratorData.enmGenFinish then
		if nodeId ~= -1 then
			AutoBriefingModule.updateAutoBriefing()
			AutoBriefingModule.returnToME = true
			AutoBriefingModule.show(true, 'iag')
		end
		
		show(false)
		waitScreen.showMini(false)
		panel_quickstart.onChangeClose()
		MainMenu.show(false)
	elseif returnCode == InstantActionGeneratorData.enmPercent then
		waitScreen.setMiniText(_("Generated:")..base.tostring(base.math.floor(nodeId or 0))..'%'--[[- '..error]])
		waitScreen.setMiniValue(base.math.floor(nodeId))
	end
end

local function onChangeBtnIAE()
	if simpleGenerationData == nil then
        return
    end
	setStartTime()
	fillRandomParameters()
	
	-- start generate process for IAE, close this dialog and open IAE dialog
	waitScreen.showMini(true, _("Generated:").."0%")
	UpdateManager.add(function()
		local MGModule = require('me_generator')
		local result = MGModule.generateInstantAction({generalData = simpleGenerationData}, InstantActionGeneratorData.generationModeForEditor, proceedToEditor)
		InstantActionGeneratorData.setIAEData(result)
		return true
	end)	
end

function proceedToEditor(returnCode, nodeId, error)
	if returnCode == InstantActionGeneratorData.enmGenFinish then
		waitScreen.showMini(false)
		
		if nodeId ~= -1 then
			local mapName = simpleGenerationData.map
			InstantActionEditor.show(true, mapName)
		end		

		show(false)
		panel_quickstart.onChangeClose()
		MainMenu.show(false)
	elseif returnCode == InstantActionGeneratorData.enmPercent then
		waitScreen.setMiniText(_("Generated:")..base.tostring(base.math.floor(nodeId or 0))..'%'--[[- '..error]])
		waitScreen.setMiniValue(base.math.floor(nodeId))
	end
end

local function onShow()
	MissionGenerator.initGeneratorInstantAction()
	simpleGenerationData = {}

	fillAircrafts()
	fillCountries()
	fillMissionType()
	fillTakeoffFrom()
    fillEnemyAISkill()
	fillTheatreOfWar()
	fillSeason()
	fillWeather()
	fillTime()

	InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, true, true, true)
	InstantActionGeneratorData.getConstants().loadGroupTemplates()
end

local function onHide()
	simpleGenerationData = nil
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionGeneratorSimple.dlg", cdata)
	window:setBounds(0, 0 , wS, hS)
	local w, h = window.MainPanel:getSize()
	window.MainPanel:setPosition((wS - w)/2, (hS - h)/2)

    local container = window.MainPanel.containerCommon
	comboboxAircraft = container.comboboxAircraft
    comboboxCountry = container.comboboxCountry
    comboboxMissionType = container.comboboxMissionType
    comboboxTakeoffFrom = container.comboboxTakeoffFrom
    comboboxEnemyAISkill = container.comboboxEnemyAISkill
    comboboxTheatreOfWar = container.comboboxTheatreOfWar
	comboboxSeason = container.comboboxSeason
	comboboxWeather = container.comboboxWeather

	local function onChangeCombobox(combobox, paramName)
		local item = combobox:getSelectedItem()
		if item and item.value then
			simpleGenerationData[paramName] = item.value
		end
	end

	function refillCountries()
		local oldCountry = simpleGenerationData.country
		fillCountries()
		if oldCountry ~= simpleGenerationData.country then
			onChangeCountry()
		end	
	end
	
	function refillMissionType()
		if simpleGenerationData.missionType == "" then
			refillTakeoffFrom()
		else
			local oldMissionType = simpleGenerationData.missionType
			local oldMissionRange = simpleGenerationData.missionRange
			fillMissionType()
			if oldMissionType ~= simpleGenerationData.missionType or oldMissionRange ~= simpleGenerationData.missionRange then
				onChangeMissionTypeOrRange()
			end			
		end	
	end	

	function refillTakeoffFrom()
		local oldTakeoffFrom = simpleGenerationData.takeoffFrom
		fillTakeoffFrom()
		if oldTakeoffFrom ~= simpleGenerationData.takeoffFrom then
			onChangeTakeoffFrom()
		end	
	end

	function onChangeTakeoffFrom()
		if simpleGenerationData.missionType == "" and simpleGenerationData.aircraftType == "" then
			refillCountries()
		end
	end

	function onChangeCountry()
		if simpleGenerationData.aircraftType == "" then
			refillMissionType()
		end
	end
	
	function onChangeMissionTypeOrRange()
		refillTakeoffFrom()
		
		if simpleGenerationData.aircraftType == "" then
			refillCountries()
		end		
	end

	function onChangeAircraft()
		refillCountries()
		refillMissionType()
	end

	function comboboxAircraft:onChange()
		onChangeCombobox(comboboxAircraft, "aircraftType")
		onChangeAircraft()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, true, true, true)
	end

	function comboboxCountry:onChange()
		onChangeCombobox(comboboxCountry, "country")
		onChangeCountry()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, false, false, true)
	end

	function comboboxMissionType:onChange()
		local item = comboboxMissionType:getSelectedItem()
		if item and item.value then
			simpleGenerationData.missionType = item.value.missionType
			simpleGenerationData.missionRange = item.value.missionRange
		end
		onChangeMissionTypeOrRange()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, false, true, false)
	end

	function comboboxTakeoffFrom:onChange()
		onChangeCombobox(comboboxTakeoffFrom, "takeoffFrom")
		onChangeTakeoffFrom()
	end

    function comboboxEnemyAISkill:onChange()
		onChangeCombobox(comboboxEnemyAISkill, "enemyAISkill")
	end

	function comboboxTheatreOfWar:onChange()
		onChangeCombobox(comboboxTheatreOfWar, "map")
	end

	function comboboxSeason:onChange()
		onChangeCombobox(comboboxSeason, "season")
	end

	function comboboxWeather:onChange()
		onChangeCombobox(comboboxWeather, "weather")
	end

	cbAircraftRnd = container.cbAircraftRnd
	cbCountryRnd = container.cbCountryRnd
	cbMissionTypeRnd = container.cbMissionTypeRnd
	cbTakeoffFromRnd = container.cbTakeoffFromRnd
	cbEnemyAISkillRnd = container.cbEnemyAISkillRnd
	cbTheatreOfWarRnd = container.cbTheatreOfWarRnd
	cbSeasonRnd = container.cbSeasonRnd
	cbWeatherRnd = container.cbWeatherRnd

	local function onChangeCheckbox(checkbox, combobox, paramName)
		if checkbox:getState() == true then
			combobox:setEnabled(false)
			-- simpleGenerationData[paramName] = "" 
		else
			combobox:setEnabled(true)
			-- local item = combobox:getSelectedItem()
			-- if item and item.value then
				-- simpleGenerationData[paramName] = item.value
			-- end
		end
	end

	function cbAircraftRnd:onChange()
		onChangeCheckbox(cbAircraftRnd, comboboxAircraft, "aircraftType")
		container.btnLoadout:setEnabled(not cbAircraftRnd:getState())
		fillAircrafts()
		onChangeAircraft()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, true, true, true)
	end

	function cbCountryRnd:onChange()
		onChangeCheckbox(cbCountryRnd, comboboxCountry, "country")
		fillCountries()
		onChangeCountry()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, false, false, true)
	end

	function cbMissionTypeRnd:onChange()
		if cbMissionTypeRnd:getState() == true then
			comboboxMissionType:setEnabled(false)
		else
			comboboxMissionType:setEnabled(true)
		end
		fillMissionType()
		onChangeMissionTypeOrRange()
		InstantActionGeneratorData.generateLoadout(simpleGenerationData, simpleGenerationData.aircraftType, simpleGenerationData.missionType, simpleGenerationData.country, false, true, false)
	end

	function cbTakeoffFromRnd:onChange()
		onChangeCheckbox(cbTakeoffFromRnd, comboboxTakeoffFrom, "takeoffFrom")
		fillTakeoffFrom()
		onChangeTakeoffFrom()
	end

    function cbEnemyAISkillRnd:onChange()
		onChangeCheckbox(cbEnemyAISkillRnd, comboboxEnemyAISkill, "enemyAISkill")
		fillEnemyAISkill()
	end

	function cbTheatreOfWarRnd:onChange()
		onChangeCheckbox(cbTheatreOfWarRnd, comboboxTheatreOfWar, "map")
		fillTheatreOfWar()
	end

	function cbSeasonRnd:onChange()
		onChangeCheckbox(cbSeasonRnd, comboboxSeason, "season")
		fillSeason()
	end

	function cbWeatherRnd:onChange()
		onChangeCheckbox(cbWeatherRnd, comboboxWeather, "weather")
		fillWeather()
	end

	radiobuttonStartTimeRandom = container.radiobuttonStartTimeRandom
	radiobuttonStartTimeTime = container.radiobuttonStartTimeTime
	editboxHour = container.editboxHour
	editboxMinute = container.editboxMinute

	function radiobuttonStartTimeRandom:onChange()
		editboxHour:setEnabled(false)
		editboxMinute:setEnabled(false)

		simpleGenerationData.isTimeRandom = true
	end

	function radiobuttonStartTimeTime:onChange()
		editboxHour:setEnabled(true)
		editboxMinute:setEnabled(true)

		editboxHour:setText("12")
		editboxMinute:setText("30")

		simpleGenerationData.isTimeRandom = false
		simpleGenerationData.hours = 12
		simpleGenerationData.minutes = 30
	end

	function editboxHour:onChange()
		local hours = tonumber(editboxHour:getText())
		if hours == nil then
			hours = 0
			editboxHour:setText("0")
		elseif hours > 23 then
			hours = 23
			editboxHour:setText("23")
		end

		simpleGenerationData.hours = hours
	end

	function editboxMinute:onChange()
		local minutes = tonumber(editboxMinute:getText())
		if minutes == nil then
			minutes = 0
			editboxMinute:setText("00")
		elseif minutes > 59 then
			minutes = 59
			editboxMinute:setText("59")
		end

		simpleGenerationData.minutes = minutes
	end

	function container.btnLoadout:onChange()
		onChangeBtnLoadout()
	end

	function window.MainPanel.footerPanel.btnCancel:onChange()
		MissionGenerator.resetGeneratorInstantAction()
		show(false)
	end

	function window.MainPanel.footerPanel.btnFly:onChange()
		onChangeBtnFly()
	end

	function container.btnIAG:onChange()
		onChangeBtnIAE()
	end

	function window.MainPanel.btnClose:onChange()
		MissionGenerator.resetGeneratorInstantAction()
		show(false)
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
