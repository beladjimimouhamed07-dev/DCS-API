dofile('./Scripts/UI/initGUI.lua')

local base = _G

module('ChoiceOfRoleDialog')

local require = base.require
local pairs = base.pairs
local ipairs = base.ipairs
local print = base.print
local table = base.table
local string = base.string
local tonumber = base.tonumber
local tostring = base.tostring
local assert = base.assert
local type = base.type
local math = base.math

local Gui               = require('dxgui')
local GuiWin            = require('dxguiWin')
local DialogLoader      = require('DialogLoader')
local WidgetParams      = require('WidgetParams')
local gettext           = require('i_18n')
local DCS               = require('DCS')
local GameMenu          = require('GameMenu')
local Static            = require('Static')
local Skin              = require('Skin')
local Terrain 			= require('terrain')
local i18n              = require('i18n')
local textutil          = require('textutil')
local keys				= require('mul_keys')

local locale = i18n.getLocale()
local ChoiceOfCoalitionDialog = require('ChoiceOfCoalitionDialog')

base.setmetatable(base.dxgui, {__index = base.dxguiWin})

local curKeySort = 'groupName'
local sortReverse = false

local KeysSort = 
{
	"role",
    "type", 
	"onboard_num",
    "countryName",
    "task",
    "groupName",
    "airdromeName",
}

local function _(text) 
    if text == nil then
        return ""
    end
    return gettext.translate(text) 
end

tabTr = {
    artillery_commander     =   _("TACTICAL CMDR"),
    forward_observer        =   _("FORWARD OBSERVER"),  
    observer                =   _("OBSERVER"),
    instructor              =   _("GAME MASTER"),
    pilot                   =   _("Pilot"),  -- default role
    pilot2                  =   _("Pilot2"), -- was used with hardcoded roles names
}

local function getColumnHeaderSkin(a_key, a_index)
    groupSkin = 2
	
	local skinKey = 'skinNoSort'
	if curKeySort == a_key then
		if sortReverse then
			skinKey = 'skinSortDown'
		else
			skinKey = 'skinSortUp'
		end
	end
    
	return SkinsHeaders[groupSkin][skinKey]
end

local function getAirdromeName(a_data)
	local airdromeName
	if a_data.type == a_data.role then
        airdromeName = ""
	elseif a_data.role == "airboss" or a_data.role == "lso" then
		airdromeName = ""
    elseif a_data.action then
        if a_data.action == 'From Ground Area' then
            airdromeName = _('Ground')
        end
        if a_data.action == 'From Ground Area Hot' then
            airdromeName = _('Ground') 
        end
    elseif a_data.airdromeId and airdromes[a_data.airdromeId] then
		if airdromes[a_data.airdromeId].display_name then
			airdromeName = _(airdromes[a_data.airdromeId].display_name) 
		else
			airdromeName = airdromes[a_data.airdromeId].names[locale] or airdromes[a_data.airdromeId].names['en']
		end        
	end
	return a_data.helipadName or airdromeName or _("Air")
end

function create()
    local localization = {

		back            = _('BACK'),
        ChoiceOfRole    = _('Choice of role'),
        Role            = _('Role'),
        ok              = _('OK'),
        Unit            = _('Unit'),
        onBoard         = _('Onboard'),
        country         = _('Country'),
        task            = _('Task'),
        groupName       = _('Group name'),
        playerName      = _('Start Position'),
	}

    if base.LOFAC then
        localization.Unit   = _('Unit-LOFAC')
    end
    
	window = DialogLoader.spawnDialogFromFile('Scripts/UI/ChoiceOfRole.dlg', localization)
    local width, height = Gui.GetWindowSize()
    window:setBounds(0,0,width, height)
    window.containerMain:setBounds((width-977)/2, (height-570)/2, 977, 570)
    
    btnStart = window.containerMain.panelBottom.btnOk
    btnBack = window.containerMain.panelBottom.btnBack
    gridRoles = window.containerMain.gridRoles
    btnClose = window.containerMain.panelTop.btnClose
    
    SkinStatic = window.containerMain.StaticTempl:getSkin()
    
    btnStart.onChange = onChange_Start
    btnBack.onChange = onChange_Back
    btnClose.onChange = onChange_Back
    gridRoles.onMouseDown = onMouseDown_gridRoles
    gridRoles.onMouseDoubleClick = onMouseDoubleClickGrid
    gridRoles:setColumnWidth(0, 170)  
    gridRoles:setColumnWidth(1, 100)
    gridRoles:setColumnWidth(2, 60)
    gridRoles:setColumnWidth(3, 110)
    gridRoles:setColumnWidth(4, 180)    
    gridRoles:setColumnWidth(5, 160)
    gridRoles:setColumnWidth(6, 177)

    pNoVisible = window.pNoVisible
    SkinsHeaders = 
    {
        [1] = {
            skinNoSort      = pNoVisible.gridHeaderCellNoSort:getSkin(),
			skinSortUp     	= pNoVisible.gridHeaderCellSortUp:getSkin(),
			skinSortDown  	= pNoVisible.gridHeaderCellSortDown:getSkin(),
        },
        [2] = {
            skinNoSort      = pNoVisible.gridHeaderCellNoSortPadding:getSkin(),
			skinSortUp      = pNoVisible.gridHeaderCellSortUpPadding:getSkin(),
			skinSortDown 	= pNoVisible.gridHeaderCellSortDownPadding:getSkin(),
        }        
    }

    local count = gridRoles:getColumnCount()
    for i = 0, count - 1 do
		local headerCell = gridRoles:getColumnHeader(i)
		headerCell.KeySort = KeysSort[i+1]  
	
		
		headerCell:addChangeCallback(function(self) 
			if self.KeySort == 'not' then
				return
			end
			
			if curKeySort == self.KeySort then
				sortReverse = not sortReverse
			else
				sortReverse = false
			end
			curKeySort = self.KeySort
	
			updateColumnHeaders()
			base.table.sort(Slots, compareFunction)
            update()
		end	)		
	end
    
    Slots = {}
    returnScreen = nil
    CoalitionLast = nil
end

function onMouseDoubleClickGrid(self, x, y, button)
	local col, row = gridRoles:getMouseCursorColumnRow(x, y)
	local selectRow = gridRoles:getSelectedRow()

    if -1 < row and selectRow == row then
		onChange_Start()
    end   
end

function onMouseDown_gridRoles(self, x, y, button)
    if 1 ~= button then
        return
    end
        
    local col, row = gridRoles:getMouseCursorColumnRow(x, y)
    
    if -1 < row then
      selectRow(row)
    end
end

function selectRow(row)
	btnStart:setEnabled(true)
    gridRoles:selectRow(row)
end

function compareFunction(data1, data2)
	if curKeySort == 'groupName' or curKeySort == 'airdromeName' or curKeySort == 'countryName'
		or curKeySort == 'onboard_num' or curKeySort == 'task' then
		if data1[curKeySort] == nil and data2[curKeySort] == nil then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		end
		
		if data1[curKeySort] == nil and data2[curKeySort] ~= nil then
			if sortReverse then
				return true
			end
			return false
		end
		
		if data1[curKeySort] ~= nil and data2[curKeySort] == nil then
			if sortReverse then
				return false
			end
			return true
		end
		
		if data1[curKeySort] == data2[curKeySort] then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		else
			if sortReverse then
				return textutil.Utf8Compare(data2[curKeySort], data1[curKeySort])
			end
			return textutil.Utf8Compare(data1[curKeySort], data2[curKeySort])
		end
	elseif curKeySort == 'type' or curKeySort == 'role' then
		if data1[curKeySort] == nil and data2[curKeySort] == nil then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		end
		
		if data1[curKeySort] == nil and data2[curKeySort] ~= nil then
			if sortReverse then
				return true
			end
			return false
		end
		
		if data1[curKeySort] ~= nil and data2[curKeySort] == nil then
			if sortReverse then
				return false
			end
			return true
		end
		
		local kk1 = keys.tabTr[data1[curKeySort]] or keys.getDisplayName(data1[curKeySort])
		local kk2 = keys.tabTr[data2[curKeySort]] or keys.getDisplayName(data2[curKeySort])
		if kk1 == kk2 then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		else
			if sortReverse then
				return textutil.Utf8Compare(kk2, kk1)
			end
			
			return textutil.Utf8Compare(kk1, kk2)
		end
	end
end
  
function show(a_coalition, a_needBack, returnScreen)
    if not window then
		 create()
	end
    
    btnBack:setVisible(a_needBack or false)
    CoalitionLast = a_coalition or CoalitionLast

    updateColumnHeaders()
    update()
    
	if window:getVisible() == false then
		window:setVisible(true)
		DCS.lockAllMouseInput()
		DCS.setPause(true)
	end
end

function isSelectCoalition()
    return CoalitionLast ~= nil
end

function updateColumnHeaders()
    local count = gridRoles:getColumnCount()
	
	for i = 0, count - 1 do
		local gridHeaderCell = gridRoles:getColumnHeader(i)
		
		if gridHeaderCell then
			local skin = getColumnHeaderSkin(gridHeaderCell.KeySort, i)
			
			if skin then
				gridHeaderCell:setSkin(skin)
			end
		end
	end
end

function update()
    airdromes = Terrain.GetTerrainConfig("Airdromes")
    if CoalitionLast then
        Slots = DCS.getAvailableSlots(CoalitionLast)  
    end
    
    for k,v in base.pairs(Slots) do
		v.airdromeName = getAirdromeName(v)
	end
    base.table.sort(Slots, compareFunction)
    
    rowIndex = 0 
    gridRoles:removeAllRows()
    if Slots ~= nil and Slots ~= 'nil' then
        for k,v in ipairs(Slots) do    
            insertRow(v)  
            rowIndex = rowIndex +1    
        end  
    end 

	btnStart:setEnabled(false)
end

function insertRow(v)
    gridRoles:insertRow(20)

    local cell

    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(tabTr[v.role] or v.role) 
    cell.slotId = v.unitId
    gridRoles:setCell(0, rowIndex, cell)

    cell = Static.new()
    cell:setSkin(SkinStatic)
	
	
	local unitsTxt = DCS.getUnitTypeAttribute(v.type, "DisplayNameShort")    
	if not unitsTxt then 
		unitsTxt = DCS.getUnitTypeAttribute(v.type, "DisplayName")   
	end
    if v.groupSize and v.groupSize > 1 then
        unitsTxt = unitsTxt.."/"..v.groupSize
    end
    if v.type == v.role then
        unitsTxt = ""
    end
    cell:setText(unitsTxt) 
    gridRoles:setCell(1, rowIndex, cell)
    
    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(v.onboard_num) 
    gridRoles:setCell(2, rowIndex, cell)
    
    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(_(v.countryName)) 
    gridRoles:setCell(3, rowIndex, cell)
    
    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(_(v.task)) 
    gridRoles:setCell(4, rowIndex, cell)
    
    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(v.groupName) 
    gridRoles:setCell(5, rowIndex, cell)

    cell = Static.new()
    cell:setSkin(SkinStatic)
    cell:setText(v.airdromeName) 
    
    gridRoles:setCell(6, rowIndex, cell)
end

function hide()
	if window and window:getVisible() == true then
		window:setVisible(false)
		DCS.unlockMouseInput()
		DCS.setPause(false)
	end
end

function getVisible()
    if window == nil then
        return false
    end
	return window:getVisible()
end

function setVisible(b)
    if window then
        window:setVisible(b)
    end
end

function onChange_Start()
    local selectRow = gridRoles:getSelectedRow()
    local widget = gridRoles:getCell(0, selectRow) 
    
    if widget then
        DCS.setPlayerUnit(widget.slotId)
        hide()
    end
end

function startSupervisor()
	local tmpSlots = DCS.getAvailableSlots("blue")  
	for k,v in ipairs(tmpSlots) do  
		if v.role == 'instructor' then
			DCS.setPlayerUnit(v.unitId)
			return
		end
	end
end

function onChange_Back()
    DCS.setPlayerUnit("")
    hide()
    
    if returnScreen == 'Menu' then
        GameMenu.show()
    else        
        ChoiceOfCoalitionDialog.show()
    end
end

function kill()
	if window_ then
	   window_:setVisible(false)
	   window_:kill()
	   window_ = nil
	end
end


-- отладочная функция для сериализации таблицы на экран
function traverseTable(_t, _numLevels, _tabString, filename, filter)
    local _tablesList = {}
    filter = filter or {}
    fun = print
    if ( filename and (filename ~= '') ) then
        local out = io.open(filename, 'w')
        fun = function (...)
            out:write(..., '\n')
        end
    end
    function _traverseTable(t, tabString, tablesList, numLevels, filter)
        if (numLevels <1) then 
            return
        end

      for k,v in pairs(t or {} ) do      
            if type(k) == "number" then
                k = '[' .. tostring(k) .. ']'
            end
        if type(v) == "table" then 
            local skip = false
            for i,ignoredField in ipairs(filter) do
                if ignoredField == k then
                    skip = true
                    break
                end
            end
            if skip == false then
                local str = string.gsub(tostring(v), 'table: ','')
                if not tablesList[v] then
                    tablesList[v] = tostring(k)
                    fun(tabString  .. tostring(k) .. "--[[" .. str .. "--]]  = {")
                    --numLevels = numLevels - 1
                    _traverseTable(v, tabString .. '    ', tablesList, numLevels - 1, filter)
                    fun(tabString .. "}")
                else 
                    fun(tabString .. k .. " = -> " .. (tostring(tablesList[v])  or '') .. "--[[" .. str .. "--]],")
                end
            end
        elseif type(v) == "function" then
          fun(tabString .. k .. " = " .. "function() {},")
        elseif type(v) == "string" then
          fun(tabString .. k .. " = '" .. v .. "'")
        else
          fun(tabString .. k .. " = " .. tostring(v) or '' .. ",")
        end
      end        
    end 

    if not _t then 
        fun('traverseTable(): nil value')
        return
    end
    
    if 'table' ~= type(_t) then 
        fun('traverseTable(): not a table', tostring(_t)  or '')
        return
    end
    fun('displaying table:', (tostring(_t) or ''), tostring(_numLevels) or '')
    
    if _numLevels == nil then 
        _numLevels  = math.huge
    end
    
    if (_numLevels <1) then 
        return
    end
    
    if _tabString == nil then
        _tabString = ""
    end
    
    if not _tablesList then 
        _tablesList = {}
    end 
    --fun('_numLevels',_numLevels)
    for k,v in ipairs(filter) do
        print(k,v)
    end
    _traverseTable(_t, _tabString, _tablesList, _numLevels, filter)
    
end