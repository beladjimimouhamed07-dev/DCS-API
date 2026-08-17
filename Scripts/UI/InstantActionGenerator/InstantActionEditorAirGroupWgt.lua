local base = _G

module('InstantActionEditorAirGroupWgt')
mtab = { __index = _M }

local require = base.require
local ipairs = base.ipairs
local pairs = base.pairs
local math = base.math

local i18n = require('i18n')
local DialogLoader = require('DialogLoader')
local Factory = require('Factory')
local U = require('me_utilities')
local keys = require('mul_keys')
local Skin = require('Skin')
local Rect = require("Rect")
local DB = require('me_db_api')
local CoalitionController = require('Mission.CoalitionController')
local OptionsData = require('Options.Data')
local InstantActionGeneratorData = require('InstantActionGeneratorData')
local InstantActionEditorLoadout = require('InstantActionEditorLoadout')
local MissionGenerator = require('MissionGenerator')

---------------------------
i18n.setup(_M)
local cdata = {
    type = _('TYPE'),
    altitude = _('ALTITUDE'),
	speed = _('SPEED'),
    formation = _('FORMATION'),
    aspectToPlayer = _('ASPECT TO PLAYER'),
    loadout = _('LOADOUT'),
	edit = _('EDIT'),
    group = _('GROUP'),
}

---------------------------
local function fillTypeWgt(self)
    self.wgt.comboboxType:clear()
    self.wgt.comboboxType.itemByValue = {}

    local unitList = {}
    if self.dataReference.groupTask == "target" then
        unitList = InstantActionGeneratorData.getConstants().getAIAircrafts(self.playerUnitType)
    elseif self.dataReference.groupTask == "bomber" then
        unitList = InstantActionGeneratorData.getConstants().getBombers(self.playerUnitType)
    else
        
    end

    for i, v in ipairs(unitList) do
        local canAdd = true
        if self.dataReference.groupTask ~= "bomber" then
            canAdd = InstantActionGeneratorData.isUnitFitToEra(v, self.era)
        end

        if canAdd == true then
            local name = keys.tabTr[v] or keys.getDisplayName(v)
            local item = self.wgt.comboboxType:newItem(name)
            item.value = v
            self.wgt.comboboxType.itemByValue[v] = item
        end
    end

    self.wgt.comboboxType:selectItem(self.wgt.comboboxType:getItem(0))
end

local function fillFormation(self)
	self.wgt.comboboxFormation:clear()

	if self.dataReference == nil then
        return
    end

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

local function fillAspecToPlayerWgt(self)
    self.wgt.comboboxAspectToPlayer:clear()
    self.wgt.comboboxAspectToPlayer.itemByValue = {}
    for i, v in ipairs(InstantActionGeneratorData.getConstants().getApectsToPlayer()) do
        local item = self.wgt.comboboxAspectToPlayer:newItem(v.name)
        item.value = v.id
        self.wgt.comboboxAspectToPlayer.itemByValue[v.id] = item
    end

    self.wgt.comboboxAspectToPlayer:selectItem(self.wgt.comboboxAspectToPlayer:getItem(0))
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

local function onChangeComboboxType(self)
    if self.dataReference == nil then
        return
    end

    local item = self.wgt.comboboxType:getSelectedItem()
    if item then
        self.dataReference.unitType = item.value
	    self.dataReference.loadout = MissionGenerator.getLoadout(self.dataReference.unitType, self.missionType, self.dataReference.groupTask, -1)
        fillFormation(self)
        updateAltAndSpeed(self)
    else
        self.dataReference.unitType = nil
	    self.dataReference.loadout = {}
        self.dataReference.altitude = nil
        self.dataReference.speed = nil
    end
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

local function onChangeComboboxAspectToPlayer(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.aspectToPlayer = self.wgt.comboboxAspectToPlayer:getSelectedItem().value
	if self.aspectChangeCallback ~= nil then
		self.aspectChangeCallback(self.dataReference.aspectToPlayer)
	end
end

local function onChangeButtonLoadout(self)
    if self.dataReference.unitType == nil or self.dataReference.unitType == "" then
        return
    end

    InstantActionEditorLoadout.show(true, self.dataReference.unitType, self.dataReference.loadout, nil, self.missionType, self.dataReference.groupTask)
end

local function onChangeBtnDel(self)
    InstantActionGeneratorData.deleteGroup(self.tableName, self.index)
end

local function updateUnitSystem(self)
	local unitSystem = OptionsData.getUnits()
	
	self.wgt.altUnitSpinBox:setUnitSystem(unitSystem)
	self.wgt.speedUnitSpinBox:setUnitSystem(unitSystem)
end

---------------------------
function new()
  return Factory.create(_M)
end

function construct(self)
    local dialog = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorAirGroupWgt.dlg", cdata)
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
	self.aspectChangeCallback = nil

    self.wgt.comboboxType.onChange = function() onChangeComboboxType(self) end
    self.wgt.sWingmen.onChange = function() onChangeSWingmen(self) end
    self.wgt.sAltitude.onChange = function() onChangeSAltitude(self) end
    self.wgt.sSpeed.onChange = function() onChangeSSpeed(self) end
    self.wgt.comboboxFormation.onChange = function() onChangeComboboxFormation(self) end
    self.wgt.comboboxAspectToPlayer.onChange = function() onChangeComboboxAspectToPlayer(self) end
    self.wgt.buttonLoadout.onChange = function() onChangeButtonLoadout(self) end
    self.wgt.btnDel.onChange = function() onChangeBtnDel(self) end

    self.wgt.altUnitSpinBox = U.createUnitSpinBox(self.wgt.textAltitude, self.wgt.sAltitude, U.altitudeUnits, self.wgt.sAltitude:getRange())
    self.wgt.speedUnitSpinBox = U.createUnitSpinBox(self.wgt.textSpeed, self.wgt.sSpeed, U.speedUnits, self.wgt.sSpeed:getRange())
end

function setData(self, dataReference, playerUnitType, playerCountry, missionType, missionRange, era, number, tableName, tableIndex)
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

    local value = InstantActionGeneratorData.getConstants().canConfigureAspectToPlayerByGroupTask(self.dataReference.groupTask, self.missionType)
    self.wgt.comboboxAspectToPlayer:setVisible(value)
    self.wgt.labelAspectToPlayer:setVisible(value)

    fillTypeWgt(self)
    fillFormation(self)
    fillAspecToPlayerWgt(self)
    self.wgt.labelGroupName:setText(cdata.group.." "..number)
    if self.dataReference.unitType ~= nil then
        if self.wgt.comboboxType.itemByValue[self.dataReference.unitType] then
            self.wgt.comboboxType:selectItem(self.wgt.comboboxType.itemByValue[dataReference.unitType])
        else
            local item = self.wgt.comboboxType:getItem(0)
            if item then
                self.wgt.comboboxType:selectItem(self.wgt.comboboxType:getItem(0))
            end
            self.wgt.comboboxType.onChange(self)
        end
    else
        local item = self.wgt.comboboxType:getItem(0)
        if item then
            self.wgt.comboboxType:selectItem(item)
            self.wgt.comboboxType.onChange(self)
        end
    end

    updateAltAndSpeed(self)

    self.wgt.altUnitSpinBox:setValue(self.dataReference.altitude or 0)
    self.wgt.speedUnitSpinBox:setValue(self.dataReference.speed or 0)
    self.wgt.sWingmen:setValue(dataReference.wingmen)
    self.wgt.comboboxAspectToPlayer:selectItem(self.wgt.comboboxAspectToPlayer.itemByValue[dataReference.aspectToPlayer])

    updateUnitSystem(self)
end

function updateDeleteButtonVisibility(self, value)
    self.wgt.btnDel:setVisible(value)
end

function setWingmenRange(self, min, max)
    self.wgt.sWingmen:setRange(min, max)
    self.wgt.sWingmen:setVisible(not (min == 1 and max == 1))
end

function setAspectChangeCallback(self, callback)
	self.aspectChangeCallback = callback
end

function getWidget(self)
    return self.wgt
end

