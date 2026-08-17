local base = _G

module('InstantActionEditorGroupWgt')
mtab = { __index = _M }

local require = base.require
local ipairs = base.ipairs
local pairs = base.pairs

local i18n = require('i18n')
local DialogLoader = require('DialogLoader')
local Factory = require('Factory')
local keys = require('mul_keys')
local InstantActionGeneratorData = require('InstantActionGeneratorData')
local CoalitionController = require('Mission.CoalitionController')

---------------------------
i18n.setup(_M)
local cdata = {
    class = _('CLASS'),
    type = _('TYPE'),
    group = _('GROUP'),
}

---------------------------
local function fillClassWgt(self)
	local showClassWgt = false
    self.wgt.comboboxClass:clear()
    self.wgt.comboboxClass.itemByValue = {}
    local playerUnitData = InstantActionGeneratorData.getConstants().getUnit(self.playerUnitType)
    local function checkHaveSuitableUnitsInClass(class)
        local unitsCount = 0
        for i, v in ipairs(InstantActionGeneratorData.getConstants().getUnitTypesForClass(self.dataReference.groupTask, class, playerUnitData.modern)) do
            local canAdd = false
            if InstantActionGeneratorData.getConstants().isGroupTemplate(class) then
                canAdd = InstantActionGeneratorData.isTemplateFitToEra(v, self.era)
            else
                canAdd = InstantActionGeneratorData.isUnitFitToEra(v, self.era)
            end
    
            if canAdd == true then
                unitsCount = unitsCount + 1
            end
        end

        return unitsCount > 0
    end

	local j = 0
    for i, v in ipairs(InstantActionGeneratorData.getConstants().getClassesForGroupTask(self.dataReference.groupTask)) do
        if checkHaveSuitableUnitsInClass(v.id) == true then
            local item = self.wgt.comboboxClass:newItem(v.name)
			j = j + 1
            item.value = v.id
            self.wgt.comboboxClass.itemByValue[v.id] = item
	    	if j > 1 then
	    		showClassWgt = true
	    	end
        end
    end

    self.wgt.comboboxClass:selectItem(self.wgt.comboboxClass:getItem(0))
	return showClassWgt
end

local function fillTypeWgt(self)
    self.wgt.comboboxType:clear()
    self.wgt.comboboxType.itemByValue = {}
    local playerUnitData = InstantActionGeneratorData.getConstants().getUnit(self.playerUnitType)
    for i, v in ipairs(InstantActionGeneratorData.getConstants().getUnitTypesForClass(self.dataReference.groupTask, self.dataReference.class, playerUnitData.modern)) do
        local canAdd = false
		if InstantActionGeneratorData.getConstants().isGroupTemplate(self.dataReference.class) then
			canAdd = InstantActionGeneratorData.isTemplateFitToEra(v, self.era)
		else
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

local function onChangeComboboxClass(self)
    if self.dataReference == nil then
        return
    end

    local className = self.wgt.comboboxClass:getSelectedItem() and self.wgt.comboboxClass:getSelectedItem().value or ""
    self.dataReference.class = className
	fillTypeWgt(self)
    local item = self.wgt.comboboxType:getItem(0)
    self.wgt.comboboxType:selectItem(item)
    self.wgt.comboboxType.onChange(self)

    local overrideWingmensData = InstantActionGeneratorData.getConstants().getWingmensAmountForClass(self.missionType, className)
    if overrideWingmensData then
        self.wgt.sWingmen:setRange(1, overrideWingmensData.maxWingmens)
    else
        self.wgt.sWingmen:setRange(self.wgt.sWingmen.rangeMin, self.wgt.sWingmen.rangeMax)
    end
    
    local rangeMin, rangeMax = self.wgt.sWingmen:getRange()
    self.wgt.sWingmen:setVisible(not (rangeMin == 1 and rangeMax == 1))
end

local function onChangeComboboxType(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.unitType = self.wgt.comboboxType:getSelectedItem() and self.wgt.comboboxType:getSelectedItem().value or ""
end

local function onChangeSWingmen(self)
    if self.dataReference == nil then
        return
    end

    self.dataReference.wingmen = self.wgt.sWingmen:getValue()
end

local function onChangeBtnDel(self)
    InstantActionGeneratorData.deleteGroup(self.tableName, self.index)
end

---------------------------
function new()
  return Factory.create(_M)
end

function construct(self)
    local dialog = DialogLoader.spawnDialogFromFile("./Scripts/UI/InstantActionGenerator/InstantActionEditorGroupWgt.dlg", cdata)
    local wgt = dialog.wgt
    
    dialog:removeWidget(wgt)
    dialog:kill()
    
    self.wgt = wgt
    self.dataReference = nil
    self.playerCountry = nil
	self.missionType = nil
	self.missionRange = nil

    self.wgt.comboboxClass.onChange = function() onChangeComboboxClass(self) end
    self.wgt.comboboxType.onChange = function() onChangeComboboxType(self) end
    self.wgt.sWingmen.onChange = function() onChangeSWingmen(self) end
    self.wgt.btnDel.onChange = function() onChangeBtnDel(self) end
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

	local showClassWgt = fillClassWgt(self)
    if not showClassWgt then
        self.wgt.labelClass:setVisible(false)
        self.wgt.comboboxClass:setVisible(false)

        local xType, yType, wType, hType = self.wgt.labelType:getBounds()
        local xCbType, yCbType = self.wgt.comboboxType:getPosition()
        local xClass = self.wgt.labelClass:getPosition()
        local xPosDif = xType - xClass
        self.wgt.labelType:setBounds(xClass, yType, wType + xPosDif, hType)
        self.wgt.comboboxType:setBounds(xClass, yCbType, wType + xPosDif, hType)
    end

    self.wgt.labelGroupName:setText(cdata.group.." "..number)

    local class = self.dataReference.class -- InstantActionGeneratorData.getConstants().getClassByUnitType(self.dataReference.groupTask, self.dataReference.unitType)
    local type = self.dataReference.unitType
    if class ~= nil and class ~= "" and self.wgt.comboboxClass.itemByValue[class] ~= nil then
        self.wgt.comboboxClass:selectItem(self.wgt.comboboxClass.itemByValue[class])
        self.wgt.comboboxClass.onChange(self)
    else
        local item = self.wgt.comboboxClass:getItem(0)
        self.wgt.comboboxClass:selectItem(item)
        self.wgt.comboboxClass.onChange(self)
    end

    self.dataReference.unitType = type
    if self.dataReference.unitType ~= nil then
        if self.wgt.comboboxType.itemByValue[self.dataReference.unitType] then
            self.wgt.comboboxType:selectItem(self.wgt.comboboxType.itemByValue[self.dataReference.unitType])
        else
            local item = self.wgt.comboboxType:getItem(0)
            if item then
                self.wgt.comboboxType:selectItem(item)
                self.dataReference.unitType = item.value
            else
                self.dataReference.unitType = nil
            end
        end
    else
        local item = self.wgt.comboboxType:getItem(0)
        if item then
            self.wgt.comboboxType:selectItem(item)
            self.dataReference.unitType = item.value
        end
    end
    self.wgt.sWingmen:setValue(self.dataReference.wingmen)
end

function updateDeleteButtonVisibility(self, value)
    self.wgt.btnDel:setVisible(value)
end

function setWingmenRange(self, min, max)
    self.wgt.sWingmen:setRange(min, max)
    self.wgt.sWingmen:setVisible(not (min == 1 and max == 1))
    self.wgt.sWingmen.rangeMin = min
    self.wgt.sWingmen.rangeMax = max
end

function getWidget(self)
    return self.wgt
end
