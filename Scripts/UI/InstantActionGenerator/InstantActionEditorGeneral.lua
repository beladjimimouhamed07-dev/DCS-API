local base = _G

module('InstantActionEditorGeneral')

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
local CoalitionController 	= require('Mission.CoalitionController')
local DB 					= require('me_db_api')
local U    					= require('me_utilities')
local T 					= require('tools')
local MissionGenerator 		= require('MissionGenerator')

local InstantActionGeneratorData 		= require('InstantActionGeneratorData')
local InstantActionEditor 				= require('InstantActionEditor')
local InstantActionEditorPlayer			= require('InstantActionEditorPlayer')

i18n.setup(_M)

local fEnvironment = T.safeDoFileWithRequire("MissionEditor/data/MissionGenerator/GeneratorData/environment.lua", {"i_18n"})

local iaeData = nil

local cdata = 
{
	instantActionEditor = _('SCENARIO'),
	era = _('ERA'),
	country = _('COUNTRY'),
	missionType = _('MISSION TYPE'),
	theatreOfWar = _('MAP'),
	season = _('SEASON'),
	weather = _('WEATHER'),
	startTime = _('START TIME'),
	random = _('RANDOM'),
	time = _('TIME'),
}

local function fillEras()
	if iaeData == nil then
        return
    end
    
    comboboxEra:clear()
    
    for i, era in ipairs(InstantActionGeneratorData.getConstants().getEras()) do       
        local item = comboboxEra:newItem(era.name)
		item.value = era.id

		if iaeData.generalData.era == item.value then
			comboboxEra:selectItem(item)
			InstantActionGeneratorData.setEraYears(iaeData.generalData)
		end
	end

	if comboboxEra:getSelectedItem() == nil then
		local item = comboboxEra:getItem(0)
		comboboxEra:selectItem(item)
		iaeData.generalData.era = item.value
		InstantActionGeneratorData.setEraYears(iaeData.generalData)
	end
end

local function fillCountries()
	if iaeData == nil then
        return
    end

    if iaeData.generalData.country == "" then
		local item = comboboxCountry:getSelectedItem()
		if item and item.value then
			iaeData.generalData.country = item.value
		end
	end	
	
	comboboxCountry:clear()
	
	local countries
	if iaeData.playerGroupData.unitType == "" then
		local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
		if iaeData.generalData.missionType ~= "" and iaeData.generalData.missionType ~= nil then
			local missionTypeAndRange = {["missionType"] = iaeData.generalData.missionType, ["missionRange"] = iaeData.generalData.missionRange}
			playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, {missionTypeAndRange, })
		elseif iaeData.playerGroupData.takeoffFrom ~= nil and iaeData.playerGroupData.takeoffFrom ~= "" then
			local missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
			missionTypesAndRanges = InstantActionGeneratorData.filterMissionTypesAndRangesByTakeoffFrom(missionTypesAndRanges, {iaeData.playerGroupData.takeoffFrom, })
			playableAircrafts = InstantActionGeneratorData.filterUnitsByMissionTypesAndRanges(playableAircrafts, missionTypesAndRanges)
		end
		
		countries = InstantActionGeneratorData.getCountriesForAircrafts(playableAircrafts, false)
	else
		countries = MissionGenerator.getCountriesForAircraftByEpoch(iaeData.playerGroupData.unitType, iaeData.generalData.yearStart or 0, iaeData.generalData.yearEnd or 9999)
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
		if iaeData.generalData.country == v.id then
			comboboxCountry:selectItem(item)
		end
	end

	if comboboxCountry:getSelectedItem() == nil then
		local item = comboboxCountry:getItem(0)
		if item then
			comboboxCountry:selectItem(item)
			iaeData.generalData.country = item.value
		end
	end	
end

local function fillMissionType()
	if iaeData == nil then
        return
    end
	
	if iaeData.generalData.missionType == "" then
		local item = comboboxMissionType:getSelectedItem()
		if item and item.value then
			iaeData.generalData.missionType = item.value.missionType
			iaeData.generalData.missionRange = item.value.missionRange
		end
	end	

	comboboxMissionType:clear()
	
	local missionTypesAndRanges
	if iaeData.playerGroupData.unitType == "" then
		local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
		if iaeData.generalData.country ~= nil and iaeData.generalData.country ~= ""  then
			playableAircrafts = InstantActionGeneratorData.filterUnitsByCountries(playableAircrafts, {iaeData.generalData.country, }, false)
		end
		
		missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
	else
		missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({iaeData.playerGroupData.unitType, })
	end
			
	if missionTypesAndRanges == nil then
		iaeData.generalData.missionType = nil
		return
	end

	local itemMissionType = nil
	for i, missionTypeAndRange in ipairs(missionTypesAndRanges) do
		local item = comboboxMissionType:newItem(InstantActionGeneratorData.getConstants().getLocalizedMissionType(missionTypeAndRange.missionType, missionTypeAndRange.missionRange))
		item.value = {missionType = missionTypeAndRange.missionType, missionRange = missionTypeAndRange.missionRange}
		if iaeData.generalData.missionType == missionTypeAndRange.missionType then
			if iaeData.generalData.missionRange == missionTypeAndRange.missionRange then
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
			iaeData.generalData.missionType = item.value.missionType
			iaeData.generalData.missionRange = item.value.missionRange
		end
	end
end

local function fillTheatreOfWar()
	if iaeData == nil then
        return
    end

    if iaeData.generalData.map == "" then
		local item = comboboxTheatreOfWar:getSelectedItem()
		if item and item.value then
			iaeData.generalData.map = item.value
		end
	end

	comboboxTheatreOfWar:clear()
	
	for i, theatreOfWar in ipairs(CoalitionController.getTheatresOfWar()) do       
		local item = comboboxTheatreOfWar:newItem(theatreOfWar.localizedName)
		item.value = theatreOfWar.name

		if theatreOfWar.name == iaeData.generalData.map then
			local item = comboboxTheatreOfWar:getItem(i - 1)
			comboboxTheatreOfWar:selectItem(item)
		end
	end

	if comboboxTheatreOfWar:getSelectedItem() == nil then
		local item = comboboxTheatreOfWar:getItem(0)
		if item ~= nil then
			comboboxTheatreOfWar:selectItem(item)
			iaeData.generalData.map = item.value
		end
	end
end

local function fillSeason()
	if iaeData == nil then
        return
    end

    if iaeData.generalData.season == "" then
		local item = comboboxSeason:getSelectedItem()
		if item and item.value then
			iaeData.generalData.season = item.value
		end
	end

	local seasons = (fEnvironment and fEnvironment.seasons) or {}
	comboboxSeason:clear()
	
	for i, season in ipairs(seasons) do       
		local item = comboboxSeason:newItem(season.name)
		item.value = season.id

		if season.id == iaeData.generalData.season then
			comboboxSeason:selectItem(comboboxSeason:getItem(i - 1))
		end
	end

	if comboboxSeason:getSelectedItem() == nil then
		local item = comboboxSeason:getItem(0)
		if item ~= nil then
			comboboxSeason:selectItem(item)
			iaeData.generalData.season = item.value
		end
	end
end

local function fillWeather()
	if iaeData == nil then
        return
    end

    if iaeData.generalData.weather == "" then
		local item = comboboxWeather:getSelectedItem()
		if item and item.value then
			iaeData.generalData.weather = item.value
		end
	end

	local weathers = (fEnvironment and fEnvironment.weather) or {}
	comboboxWeather:clear()
	
	for i, weather in ipairs(weathers) do       
		local item = comboboxWeather:newItem(weather.name)
		item.value = weather.id

		if weather.id == iaeData.generalData.weather then
			comboboxWeather:selectItem(comboboxWeather:getItem(i - 1))
		end
	end

	if comboboxWeather:getSelectedItem() == nil then
		local item = comboboxWeather:getItem(0)
		if item ~= nil then
			comboboxWeather:selectItem(item)
			iaeData.generalData.weather = item.value
		end
	end
end

local function fillTime()
	if iaeData == nil then
        return
    end

	local isRandom = iaeData.generalData.startTime < 0
	radiobuttonStartTimeRandom:setState(isRandom)
	radiobuttonStartTimeTime:setState(not isRandom)
	editboxHour:setEnabled(not isRandom)
	editboxMinute:setEnabled(not isRandom)

	local timeMins = iaeData.generalData.startTime / 60
	local hours, minutes
	minutes = timeMins % 60
	hours = (timeMins - minutes) / 60

	if isRandom == false then
		editboxHour:setText(hours)
		editboxMinute:setText(minutes)
	end
end

function refillCountries()
	local oldCountry = iaeData.generalData.country
	fillCountries()
	if oldCountry ~= iaeData.generalData.country then
		onChangeCountry()
	end	
end

function refillMissionType()
	if iaeData.generalData.missionType == "" then
		--
	else
		local oldMissionType = iaeData.generalData.missionType
		local oldMissionRange = iaeData.generalData.missionRange
		fillMissionType()
		if oldMissionType ~= iaeData.generalData.missionType or oldMissionRange ~= iaeData.generalData.missionRange then
			onChangeMissionTypeOrRange()
		end			
	end	
end

local function onShow()
	iaeData = InstantActionGeneratorData.getIAEData()

	fillEras()
	fillCountries()
	fillMissionType()
	fillTheatreOfWar()
	fillSeason()
	fillWeather()
	fillTime()
end

local function onHide()
	iaeData = nil
end

local function create()
	local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorGeneral.dlg", cdata)
	local w, h = window:getSize()
	window:setPosition(wS - w, 0)

    local container = window.MainPanel.containerCommon
	comboboxEra = container.comboboxEra
	comboboxCountry = container.comboboxCountry
	comboboxMissionType = container.comboboxMissionType
	comboboxTheatreOfWar = container.comboboxTheatreOfWar
	comboboxSeason = container.comboboxSeason
	comboboxWeather = container.comboboxWeather
	
	radiobuttonStartTimeRandom = container.radiobuttonStartTimeRandom
	radiobuttonStartTimeTime = container.radiobuttonStartTimeTime
	editboxHour = container.editboxHour
	editboxMinute = container.editboxMinute

	local function onChangeCombobox(combobox, paramName)
		local item = combobox:getSelectedItem()
		if item and item.value then
			if iaeData.generalData[paramName] == item.value then
				return false
			end

			iaeData.generalData[paramName] = item.value
			return true
		end
		return false
	end

	function onChangeMissionTypeOrRange()		
		if iaeData.playerGroupData.unitType == "" then
			refillCountries()
		end		
	end

	function onChangeCountry()
		if iaeData.playerGroupData.unitType == "" then
			refillMissionType()
		end

		InstantActionEditorPlayer.onChangeCountry()
	end

	function comboboxEra:onChange()
		onChangeCombobox(comboboxEra, "era")
		InstantActionGeneratorData.setEraYears(iaeData.generalData)
		InstantActionGeneratorData.onChangeEra()
	end

	function comboboxCountry:onChange()
		onChangeCombobox(comboboxCountry, "country")
		onChangeCountry()
		InstantActionGeneratorData.generateLoadout(iaeData.playerGroupData, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.country, false, false, true)
	end

	function comboboxMissionType:onChange()
		local item = comboboxMissionType:getSelectedItem()
		if item and item.value then
			if iaeData.generalData.missionType == item.value.missionType and 
				iaeData.generalData.missionRange == item.value.missionRange then
					return
			end

			iaeData.generalData.missionType = item.value.missionType
			iaeData.generalData.missionRange = item.value.missionRange

			onChangeMissionTypeOrRange()
			local unitDefaultData = InstantActionGeneratorData.getConstants().getDefaultSpawningRules(iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.missionRange)
        	if unitDefaultData ~= nil then
				iaeData.playerGroupData.altitude = unitDefaultData.altMin
				iaeData.playerGroupData.speed = unitDefaultData.speed
        	end

			
			InstantActionEditor.showRegenerateButton(InstantActionGeneratorData.haveHaramsRequiringRegenerating())
			InstantActionGeneratorData.onChangeMissionType()
			InstantActionGeneratorData.generateLoadout(iaeData.playerGroupData, iaeData.playerGroupData.unitType, iaeData.generalData.missionType, iaeData.generalData.country, false, true, false)
		end
	end

	function comboboxTheatreOfWar:onChange()
		if onChangeCombobox(comboboxTheatreOfWar, "map") == true then
			InstantActionEditor.showRegenerateButton(InstantActionGeneratorData.haveHaramsRequiringRegenerating())
		end
	end

	function comboboxSeason:onChange()
		onChangeCombobox(comboboxSeason, "season")
	end

	function comboboxWeather:onChange()
		onChangeCombobox(comboboxWeather, "weather")
	end

	function radiobuttonStartTimeRandom:onChange()
		editboxHour:setEnabled(false)
		editboxMinute:setEnabled(false)

		editboxHour:setText("")
		editboxMinute:setText("")

		iaeData.generalData.startTime = -1
	end

	function radiobuttonStartTimeTime:onChange()
		editboxHour:setEnabled(true)
		editboxMinute:setEnabled(true)

		editboxHour:setText("12")
		editboxMinute:setText("30")

		iaeData.generalData.startTime = 12*3600+30*60
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

		local minutes = tonumber(editboxMinute:getText())
		if minutes == nil then
			minutes = 0
		end

		iaeData.generalData.startTime = hours*3600+minutes*60
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

		local hours = tonumber(editboxHour:getText())
		if hours == nil then
			hours = 0
		end

		iaeData.generalData.startTime = hours*3600+minutes*60
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
	fillCountries()
end
