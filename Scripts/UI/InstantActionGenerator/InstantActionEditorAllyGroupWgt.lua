local base = _G

module('InstantActionEditorAllyGroupWgt')
mtab = { __index = _M }

local require = base.require
local ipairs = base.ipairs
local pairs = base.pairs
local table = base.table

local i18n = require('i18n')
local DialogLoader = require('DialogLoader')
local Factory = require('Factory')
local U = require('me_utilities')
local keys = require('mul_keys')
local OptionsData = require('Options.Data')
local InstantActionEditor = require('InstantActionEditor')
local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionEditorLoadout = require('InstantActionEditorLoadout')
local InstantActionEditorPlayer = require('InstantActionEditorPlayer')
local MissionGenerator = require('MissionGenerator')
local Skin = require('Skin')
local Rect = require("Rect")
local textutil = require('textutil')
local DB = require('me_db_api')

---------------------------
i18n.setup(_M)
local cdata = {
    type = _('TYPE'),
    altitude = _('ALTITUDE'),
	speed = _('SPEED'),
    aspectToPlayer = _('ASPECT TO PLAYER'),
    loadout = _('LOADOUT'),
	edit = _('EDIT'),
    formation = _('FORMATION'),
	startFrom = _('START FROM'),
    wingmen = _('FLIGHT'),
}

---------------------------
local function fillType(self)
	if self.dataReference == nil or self.wgt.comboboxType == nil then
        return
    end

    self.wgt.comboboxType:clear()
    self.wgt.comboboxType.itemByValue = {}

	local suitableTypesForPlayerUnit = InstantActionGeneratorData.getConstants().getAIAircrafts(self.playerUnitType)

    for i, v in ipairs(suitableTypesForPlayerUnit) do
		local canAdd = true
        canAdd = InstantActionGeneratorData.isUnitFitToEra(v, self.era)

		if canAdd == true then
    	    local name = keys.tabTr[v] or keys.getDisplayName(v)
    	    local item = self.wgt.comboboxType:newItem(name)
    	    item.value = v
			if self.dataReference.unitType == item.value then
				self.wgt.comboboxType:selectItem(item)
			end
    	    self.wgt.comboboxType.itemByValue[v] = item
		end
    end

    if self.wgt.comboboxType:getSelectedItem() == nil then
		local item = self.wgt.comboboxType:getItem(0)
		if item ~= nil then
			self.wgt.comboboxType:selectItem(item)
			self.dataReference.unitType = item.value
			self.dataReference.loadout = MissionGenerator.getLoadout(self.dataReference.unitType, self.missionType, "player", -1)
		else
			self.dataReference.unitType = nil
			self.dataReference.loadout = {}
		end
	end
end

local function fillFormation(self)
	if self.dataReference == nil or self.wgt.comboboxFormation == nil then
        return
    end

	self.wgt.comboboxFormation:clear()

	local formations, imageData = InstantActionGeneratorData.getConstants().getFormations(self.dataReference.unitType)
	if formations == nil or imageData == nil then
		return
	end

	for i, formation in ipairs(formations) do
		local k = base.math.floor((i-1) / imageData.iconsInLine)
		local j = (i-1) % imageData.iconsInLine

		local comboListFormationsItemSkin = Skin.listBoxItemIAGFormationsSkin()
		local states = comboListFormationsItemSkin.skinData.states
    	local rect = Rect.new(j*imageData.iconWidth, k*imageData.iconHeight,
			j*imageData.iconWidth + imageData.iconWidth, k*imageData.iconHeight + imageData.iconHeight)
		
    	states.released[1].picture.file = imageData.imagePath
    	states.released[1].picture.rect = rect
		
    	states.released[2].picture.file = imageData.imagePath
    	states.released[2].picture.rect = rect
		
    	states.hover[1].picture.file = imageData.imagePath
    	states.hover[1].picture.rect = rect
		
    	states.hover[2].picture.file = imageData.imagePath
    	states.hover[2].picture.rect = rect

		local item = self.wgt.comboboxFormation:newItem()
		item:setSkin(comboListFormationsItemSkin)
		item:setText(formation.name)
		item.value = formation.id

		if self.dataReference.formation == item.value then
			self.wgt.comboboxFormation:selectItem(item)
		end
	end

	if self.wgt.comboboxFormation:getSelectedItem() == nil then
		local item = self.wgt.comboboxFormation:getItem(0)
		if item ~= nil then
			self.wgt.comboboxFormation:selectItem(item)
			self.dataReference.formation = item.value
		end
	end
end

local function fillTakeoffFrom(self)
	if self.dataReference == nil or self.wgt.comboboxTakeoffFrom == nil then
        return
    end	

	self.wgt.comboboxTakeoffFrom:clear()
	
	local takeOffPositions
	if self.missionType == "" then
		local missionTypesAndRanges
		if self.dataReference.unitType == "" then
			local playableAircrafts = InstantActionGeneratorData.getPlayableUnits()
			if self.playerCountry ~= "" and self.playerCountry ~= nil then
				playableAircrafts = InstantActionGeneratorData.filterUnitsByCountries(playableAircrafts, {self.playerCountry, }, false)
			end
			
			missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts(playableAircrafts)
		else
			missionTypesAndRanges = InstantActionGeneratorData.getMissionTypesAndRangesForAircrafts({self.dataReference.unitType, })
		end
	
		-- TODO: add check by aircraft type(s), including random (?)
		takeOffPositions = InstantActionGeneratorData.getTakeoffFromForMissionTypesAndRanges(missionTypesAndRanges)
		
		local takeOffPositionsDisplay = {}
		for i, v in ipairs(takeOffPositions) do
			base.table.insert(takeOffPositionsDisplay, {id = v, name = InstantActionGeneratorData.getConstants().getLocalizedTakeoffPosition(v)})
		end
		takeOffPositions = takeOffPositionsDisplay	
	else
		takeOffPositions = InstantActionGeneratorData.getConstants().getTakeOffByMissionType(self.missionType, self.dataReference.unitType)
	end

	if takeOffPositions == nil then
		self.dataReference.takeoffFrom = nil
		return
	end

	for i, type in ipairs(takeOffPositions) do       
		local item = self.wgt.comboboxTakeoffFrom:newItem(type.name)
		item.value = type.id

		if self.dataReference.takeoffFrom == item.value then
			self.wgt.comboboxTakeoffFrom:selectItem(item)
		end
	end

	if self.wgt.comboboxTakeoffFrom:getSelectedItem() == nil then
		local item = self.wgt.comboboxTakeoffFrom:getItem(0)
		if item ~= nil then
			self.wgt.comboboxTakeoffFrom:selectItem(item)
			self.dataReference.takeoffFrom = item.value
		end
	end

	self.wgt.comboboxTakeoffFrom:onChange()
end

local function updateAltAndSpeed(self)
	if self.wgt.altUnitSpinBox then
		local maxAlt = 10000
		local unitDef = DB.unit_by_type[self.dataReference.unitType]
		if unitDef and unitDef.MaxHeight then
			maxAlt = base.tonumber(unitDef.MaxHeight)
		end
		self.wgt.altUnitSpinBox:setRange(0, maxAlt)
	end

	if self.wgt.speedUnitSpinBox then
		local minSpeed, maxSpeed = InstantActionGeneratorData.getMinAndMaxSpeed(self.dataReference.unitType)
		self.wgt.speedUnitSpinBox:setRange(minSpeed, maxSpeed)
	end

	local unitDefaultData = InstantActionGeneratorData.getConstants().getDefaultSpawningRules(self.dataReference.unitType, self.missionType, self.missionRange)
    if unitDefaultData ~= nil then
		if self.wgt.altUnitSpinBox then
			self.dataReference.altitude = unitDefaultData.altMin
			self.wgt.altUnitSpinBox:setValue(self.dataReference.altitude)
		end

		if self.wgt.speedUnitSpinBox then
			self.dataReference.speed = unitDefaultData.speed
			self.wgt.speedUnitSpinBox:setValue(self.dataReference.speed)
		end
    end
end

local function updateAltAndSpeedWgtsEnableState(self)
	local isInAir = self.dataReference.takeoffFrom == "Turning Point"
	if self.wgt.altUnitSpinBox then
		self.wgt.altUnitSpinBox:setEnabled(isInAir)
	end
	if self.wgt.speedUnitSpinBox then
		self.wgt.speedUnitSpinBox:setEnabled(isInAir)
	end
end

local function onChangeComboboxType(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.unitType = self.wgt.comboboxType:getSelectedItem().value
	self.dataReference.loadout = MissionGenerator.getLoadout(self.dataReference.unitType, self.missionType, "player", -1)
	
	fillFormation(self)
	fillTakeoffFrom(self)

	updateAltAndSpeed(self)
end

local function onChangeSWingmen(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.wingmen = self.wgt.sWingmen:getValue()
end

local function onChangeSAltitude(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.altitude = self.wgt.altUnitSpinBox:getValue()
end

local function onChangeSSpeed(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.speed = self.wgt.speedUnitSpinBox:getValue()
end

local function onChangeComboboxFormation(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.formation = self.wgt.comboboxFormation:getSelectedItem().value
end

local function onChangeComboboxTakeoffFrom(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.takeoffFrom = self.wgt.comboboxTakeoffFrom:getSelectedItem().value

	if self.tableName == "playerGroupData" then
		if self.dataReference.takeoffFrom == "TakeOffParking" or self.dataReference.takeoffFrom == "TakeOffParkingHot" or
			self.dataReference.takeoffFrom == "TakeOff"  then
			local nearestAirdrome = InstantActionEditor.getNearestAirdromePosition(self.dataReference.x, self.dataReference.y, self.dataReference.unitType)
			if nearestAirdrome ~= nil then
				self.dataReference.x = nearestAirdrome.x
				self.dataReference.y = nearestAirdrome.y
				InstantActionGeneratorData.onPlayerPositionUpdated()
			end
		end
		InstantActionEditorPlayer.onChangeTakeoff()
	end

	updateAltAndSpeedWgtsEnableState(self)
end

local function onChangeButtonLoadout(self)
	if self.dataReference.unitType == nil or self.dataReference.unitType == "" then
        return
    end

    local countryName = nil
	if DB.country_by_id[self.playerCountry] then
		countryName = DB.country_by_id[self.playerCountry].ShortName
	end
    InstantActionEditorLoadout.show(true, self.dataReference.unitType, self.dataReference.loadout, countryName, self.missionType, "player")
end

local function onChangeBtnDel(self)
    InstantActionGeneratorData.deleteGroup(self.tableName, self.index)
end

local function updateUnitSystem(self)
	local unitSystem = OptionsData.getUnits()
	
	if self.wgt.altUnitSpinBox then self.wgt.altUnitSpinBox:setUnitSystem(unitSystem) end
	if self.wgt.speedUnitSpinBox then self.wgt.speedUnitSpinBox:setUnitSystem(unitSystem) end
end

---------------------------
function new(dlgPath)
  return Factory.create(_M, dlgPath)
end

function construct(self, dlgPath)
    local dialog = DialogLoader.spawnDialogFromFile(dlgPath or "./Scripts/UI/InstantActionGenerator/InstantActionEditorAllyGroupWgt.dlg", cdata)
    local wgt = dialog.wgt
    
    dialog:removeWidget(wgt)
    dialog:kill()
    
    self.wgt = wgt
    self.dataReference = nil
    self.playerCountry = nil
    self.missionType = nil
	self.missionRange = nil
    self.index = nil
    self.tableName = nil

    if self.wgt.comboboxType then self.wgt.comboboxType.onChange = function() onChangeComboboxType(self) end end
	if self.wgt.sWingmen then self.wgt.sWingmen.onChange = function() onChangeSWingmen(self) end end
    if self.wgt.sAltitude then self.wgt.sAltitude.onChange = function() onChangeSAltitude(self) end end
    if self.wgt.sSpeed then self.wgt.sSpeed.onChange = function() onChangeSSpeed(self) end end
    if self.wgt.buttonLoadout then self.wgt.buttonLoadout.onChange = function() onChangeButtonLoadout(self) end end
    if self.wgt.comboboxFormation then self.wgt.comboboxFormation.onChange = function() onChangeComboboxFormation(self) end end
    if self.wgt.comboboxTakeoffFrom then self.wgt.comboboxTakeoffFrom.onChange = function() onChangeComboboxTakeoffFrom(self) end end
    if self.wgt.btnDel then self.wgt.btnDel.onChange = function() onChangeBtnDel(self) end end

	if self.wgt.sAltitude and self.wgt.textAltitude then
    	self.wgt.altUnitSpinBox = U.createUnitSpinBox(self.wgt.textAltitude, self.wgt.sAltitude, U.altitudeUnits, self.wgt.sAltitude:getRange())
    end

	if self.wgt.sSpeed and self.wgt.textSpeed then
		self.wgt.speedUnitSpinBox = U.createUnitSpinBox(self.wgt.textSpeed, self.wgt.sSpeed, U.speedUnits, self.wgt.sSpeed:getRange())
	end
end

function setData(self, dataReference, playerUnitType, playerCountry, missionType, missionRange, era, groupName, tableName, tableIndex)
	self.dataReference = dataReference

    if self.dataReference == nil then
        return
    end

    self.playerUnitType = playerUnitType
    self.playerCountry = playerCountry
    self.missionType = missionType
	self.missionRange = missionRange
    self.era = era
    self.index = tableIndex
    self.tableName = tableName

    fillType(self)
    fillFormation(self)
    fillTakeoffFrom(self)

	updateAltAndSpeed(self)
	updateAltAndSpeedWgtsEnableState(self)

	if self.wgt.labelGroupName then self.wgt.labelGroupName:setText(groupName) end
	if self.wgt.altUnitSpinBox then self.wgt.altUnitSpinBox:setValue(dataReference.altitude or 0) end
	if self.wgt.speedUnitSpinBox then self.wgt.speedUnitSpinBox:setValue(dataReference.speed or 0) end
	if self.wgt.sWingmen then self.wgt.sWingmen:setValue(dataReference.wingmen) end

    updateUnitSystem(self)
end

--[[function setIsPlayerWing(self, value)
    if value == true then
        self.wgt.btnDel:setVisible(false)
        self.wgt.labelType:setVisible(false)
        self.wgt.comboboxType:setVisible(false)
    else
        self.wgt.btnDel:setVisible(true)
        self.wgt.labelType:setVisible(true)
        self.wgt.comboboxType:setVisible(true)
    end
end]]

function setWingmenRange(self, min, max)
	if self.wgt.sWingmen then
		self.wgt.sWingmen:setRange(min, max)
    	self.wgt.sWingmen:setVisible(not (min == 1 and max == 1))
	end    
end

function getWidget(self)
    return self.wgt
end

