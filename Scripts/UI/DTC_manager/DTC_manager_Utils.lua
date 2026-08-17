local base = _G

module('DTC_manager_Utils')

local require = base.require
local table = base.table
local type = base.type
local tonumber = base.tonumber
local pairs = base.pairs

local DialogLoader		= require('DialogLoader')
local Static 			= require('Static')
local CheckBox 			= require('CheckBox')
local Button 			= require('Button')
local ComboList 		= require('ComboList')
local SpinBox 			= require('SpinBox')
local EditBox 			= require('EditBox')
local ListBoxItem 		= require('ListBoxItem')
local Skin              = require('Skin')
local UpdateManager 	= require('UpdateManager')
local DCS               = require('DCS')
local UC				= base.require('utils_common')
local Terrain			= require('terrain')
local Align				= require('Align')

local keyboardLocked	= false

local function handleComboList(window, widget, a_action, a_data)
	widget:setSkin(Skin["comboListSkinNew_"]())
	if a_action == "fill" then
		widget:clear()
		for k,v in base.ipairs(a_data) do
			local item = ListBoxItem.new(v.text)		
			item.id = v.id
			widget:insertItem(item)					
		end
		return true
	elseif a_action == "selectItem"	then
		for i=0, widget:getItemCount()-1 do
			local item = widget:getItem(i)
			if item and item.id == a_data then
				widget:selectItem(item)
				return true
			end
		end
	elseif a_action == "add" then		
		for k,v in base.ipairs(a_data) do
			local item = ListBoxItem.new(v.text)		
			item.id = v.id
			widget:insertItem(item)					
		end
		return true
	elseif a_action == "clear" then
		widget:clear()
	elseif a_action == "setEnabledItem" then
		for i=0, widget:getItemCount()-1 do
			local item = widget:getItem(i)
			if item and item.id == a_data[1] then
				item:setEnabled(a_data[2])
				return true
			end
		end
	end
end

local function handleStatic(window, widget, a_action, a_data)
    if a_action == "setText" then
		widget:setText(a_data)
	end	
end

local function handleEditBox(window, widget, a_action, a_data)
	
	if a_action == "setText" then
		widget:setText(a_data)
	end	
	if a_action == "getText" then
		return widget:getText()
	end
end

local function handleSpinBox(window, widget, a_action, a_data)
    if a_action == "setValue" then
		widget:setValue(a_data)
	end
	if a_action == "setRange" then
		widget:setRange(a_data[1], a_data[2])
	end
	if a_action == "setAcceptDecimalPoint" then
		widget:setAcceptDecimalPoint(a_data)
	end
	if a_action == "setStep" then
		widget:setStep(a_data)
	end
	if a_action == "setFormatString" then
		widget:setFormatString(a_data)
	end
end

local function gridAddRow(widget, a_data, rowIndex)
--base.print("addRow")
widget:insertRow(20)
	for k,v in base.pairs(a_data) do
		local cell
		if v.widget == "Static" then
			if v.text then
				if v.align and v.align == "Right" then
					v.text = v.text.." "
				elseif v.align and v.align == "Center" then
					--do nothing
				else
					v.text = " "..v.text
				end
			end

			cell = Static.new(v.text)
			if v.tooltip then
				cell:setTooltipText(v.tooltip)
			end

			local skin = Skin["staticSkin_ME"]()
			if v.align and v.align == "Center" then
				for i, dv in pairs(skin.skinData.states.disabled) do
					if dv.text ~= nil then
						dv.text.horzAlign.type = Align.center
					end
				end
				for i, dv in pairs(skin.skinData.states.released) do
					if dv.text ~= nil then
						dv.text.horzAlign.type = Align.center
					end
				end
			end
			if v.align and v.align == "Right" then
				for i, dv in pairs(skin.skinData.states.disabled) do
					if dv.text ~= nil then
						dv.text.horzAlign.type = Align.right
					end
				end
				for i, dv in pairs(skin.skinData.states.released) do
					if dv.text ~= nil then
						dv.text.horzAlign.type = Align.right
					end
				end
			end

			cell:setSkin(skin)
			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
		end
		
		if v.widget == "EditBox" then
			cell = EditBox.new(v.text)
			cell:setSkin(Skin["editBoxSkin_ME"]())
			cell:addFocusCallback(function(self) InputCheck(self, self:getFocused(), widget.name..(k-1)..rowIndex) end)

			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
		end
		
		if v.widget == "ComboList" then
			cell = ComboList.new()
			
			cell:setSkin(Skin["comboListSkinNew_"]())
			
			--base.print("---ComboList name", v.name)
			cell:setName(v.name)
			if v.items then
				for index = 1, #v.items do
					local item = ListBoxItem.new(v.items[index].text)		
					item.id = v.items[index].id
					cell:insertItem(item)	
				end		
			end			
			if 	v.selectItem then
				for i=0, cell:getItemCount()-1 do
					local item = cell:getItem(i)
					if item and item.id == v.selectItem then
						cell:selectItem(item)								
					end
				end
			end
			if v.enabled == false then
				cell:setEnabled(false)
			end
			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
			--cell:setSkin(Skin["comboListSkin_ME"]())
		end
		
		if v.widget == "SpinBox" then
			cell = SpinBox.new()
			--cell:setSkin(spinBoxSkin)
			if v.acceptDecimalPoint then
				cell:setAcceptDecimalPoint(v.acceptDecimalPoint)
			end	
			cell:setRange(v.min, v.max)
			cell:setStep(v.step)
			cell:setValue(v.value)
			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
		end

		if v.widget == "CheckBox" then
			cell = CheckBox.new()

			local skin = Skin["checkBoxSkin_MENew"]()

			for i, dv in pairs(skin.skinData.states.pressed) do
				if dv.check ~= nil then
					dv.check.horzAlign.type = Align.center
				end
			end
			for i, dv in pairs(skin.skinData.states.disabled) do
				if dv.check ~= nil then
					dv.check.horzAlign.type = Align.center
				end
			end
			for i, dv in pairs(skin.skinData.states.hover) do
				if dv.check ~= nil then
					dv.check.horzAlign.type = Align.center
				end
			end
			for i, dv in pairs(skin.skinData.states.released) do
				if dv.check ~= nil then
					dv.check.horzAlign.type = Align.center
				end
			end

			cell:setSkin(skin)
			cell:setName(v.name)
			cell:setState(v.defaultState)
			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
		end
		
		if v.widget == "Button" then
			cell = Button.new()
			--cell:setSkin("modul_btn_del")
			if v.visibility ~= nil then
				cell:setVisible(v.visibility)
			end
		end
		
		if v.wData then
			cell.wData = v.wData
		end
		
		if v.SkinName then
			cell:setSkin(Skin[v.SkinName]())
		end
		
		if v.onChange then
			cell:addChangeCallback(function(self) v.onChange(self) end)
		end
		widget:setRowHeight(rowIndex, 20)
		widget:setCell(k-1, rowIndex, cell)			
	end
end

local function fillTableQueue(window, widget)
	--for i, dv in pairs(widget.queue.rowQueue) do
	if not window then
		return true
	end
	if not widget then
		return true
	end
	--if not fillTableQueueUpdateNeedToStop and window and windowDTCnew and widget then 
		if widget:getVisible(true) then
			local partCount = 15
			local min, max
			min = widget.queue.counter
			if widget.queue.counter + partCount >= #widget.queue.rowQueue then
				max = #widget.queue.rowQueue
			else
				max = widget.queue.counter + partCount
			end
		
			for i = min, max do
				--base.print("---fillTableQueue---", dv[1].text)
				
				widget:removeRow(i-1)
				gridAddRow(widget, widget.queue.rowQueue[i], i-1)
				widget.queue.counter = widget.queue.counter + 1
				--table.remove(widget.rowQueue, i)
				
			end
		end
		local result = false
		if widget.queue.counter >= #widget.queue.rowQueue then
			result = true
		end
		--base.print("fillTableQueue", result)
		return result
	--end
	--return true
end



local function handleGrid(window, widget, a_action, a_data, source, tbl)
	if type(a_action) ~= 'table' then
		if a_action == "addRow" then
			local rowIndex = widget:getRowCount()
			gridAddRow(widget, a_data, rowIndex)
		end	
		if a_action == "removeAllRows" then
			widget:removeAllRows()
			widget.queue = nil
			widget.queue = {counter = 1, rowQueue = {}}
			--widget:setSkin(Skin["gridSkin_Multiplayer_roleNew"]())
		end
		if a_action == "addMouseDownCallback" then
			return widget:addMouseDownCallback(function(self, x, y, button) a_data[1](self, x, y, button) end)
		end
		if a_action == "selectRow" then
			return widget:selectRow(a_data[1])
		end
		if a_action == "getSelectedRowNum" then
			return widget:getSelectedRow()
		end
		if a_action == "setScrollPosition" then
			--base.print("Grid setScrollPosition", a_data[1], a_data[2])
			widget:setScrollPosition(a_data[1], a_data[2])
		end
		if a_action == "addRowQueue" then
			if not widget.queue then
				widget.queue = {counter = 1, rowQueue = {}}
			end
			
			table.insert(widget.queue.rowQueue, a_data)
			widget:setRowCount(#widget.queue.rowQueue-1)			
		end
		if a_action == "fillRowQueue" then
            if source == "ME" then
                local functionPtr = function() local result = fillTableQueue(window, widget) return result end
                table.insert(tbl.tablesWidgetStorage_, functionPtr)
                tbl.UpdateManager_.add(functionPtr)
            elseif source == "PanelCommon" then
				local functionPtr = function() local result = fillTableQueue(window, widget) return result end
                table.insert(tbl.tablesWidgetStorage_, functionPtr)
                UpdateManager.add(functionPtr)
            end
			--UpdateManager.add(function()
			--	local result = fillTableQueue(widget)
			--	return result
			--end)
		end
		if a_action == "updateCellVisible" then
			local cell = widget:getCell(a_data[2], a_data[1])
			cell:setVisible(a_data[3])
		end

		if a_action == "setTooltip" then
			local cell = widget:getCell(a_data[2], a_data[1])
			local cellType = cell:getTypeName()

			if cellType == "Static" then
				cell:setTooltipText(a_data[3])
			end
		end

		if a_action == "updateCell" then
			local cell = widget:getCell(a_data[2], a_data[1]) -- getCell indices starts from 0 like c++
			local cellType = cell:getTypeName()

			if cellType == "Static" then
				if a_data[4] and a_data[4] == "Right" then
					a_data[3] = a_data[3].." "
				elseif a_data[4] and a_data[4] == "Center" then
					--do nothing
				elseif a_data[4] and a_data[4] == "Left" then
					a_data[3] = " "..a_data[3]
				end

				cell:setText(a_data[3])
			end
			if cellType == "EditBox" then
				cell:setText(a_data[3])
			end
			if cellType == "ComboList" then
				if a_data[3] == "selectItem"	then
					for i=0, cell:getItemCount()-1 do
						local item = cell:getItem(i)
						if item and item.id == a_data[4] then
							cell:selectItem(item)							
						end
					end
				end
			end
			if cellType == "CheckBox" then
				cell:setState(a_data[3])
			end
		end
	end
end

local function handleTabGroupItem(window, widget, a_action, a_data)
	if a_action == "setState" and a_data ~= nil then
		widget:setState(a_data)
	end	
end

local function handleCheckBox(window, widget, a_action, a_data)
	if a_action == "setState" and a_data ~= nil then
		widget:setState(a_data)
	end
	if a_action == "getState" then
		return widget:getState()
	end
end

local function handleVertScrollBar(window, widget, a_action, a_data)
	if a_action == "setRange" and a_data ~= nil then
		widget:setRange(a_data[1], a_data[2])
	end
	if a_action == "connectWithGrid" and a_data ~= nil then
		local grid = DialogLoader.findWidgetByName(window, a_data)

		widget.wData = {gridName = a_data}
		widget:setRange(0, grid:getRowCount() * (2915/153))--grid:getRowHeight(2))		
		widget:setThumbValue(widget:getRange() / 10)
		widget:setStep(15)

		local grW,grH = grid:getSize()
		local grX, grY = grid:getPosition()
		widget:setSize(20, grH)
		widget:setPosition(grX+grW-10,grY)

		grid:addMouseWheelCallback(function(self)			
			widget:setValue(grid:getVertScrollPosition())
		end)
	end
end

local function handlerButton(window, widget, a_action, a_data)
	if a_action == "setText" then
		widget:setText(a_data)
	end
end

local function handlerToggleButton(window, widget, a_action, a_data)
	if a_action == "setState" and a_data ~= nil then
		widget:setState(a_data)
	end
end

local function handlerPanel(window, widget, a_action, a_data)
	if a_action == "setVisible" and a_data ~= nil then
		widget:setVisible(a_data)
	end
	if a_action == "getVisible" then
		return widget:getVisible()
	end
end

function unlockKeyboardInput(releaseKeyboardKeys)
	if keyboardLocked then
		DCS.unlockKeyboardInput(releaseKeyboardKeys)
		
		keyboardLocked = false
	end
end

function lockKeyboardInput()
	if keyboardLocked then
		return
	end
	DCS.lockAllKeyboardInput()
	keyboardLocked = true
end

local inputWidgetName
function InputCheck(self, focused, name)
	if focused then
		inputWidgetName = name
		lockKeyboardInput()
	else
		if name == inputWidgetName then
			unlockKeyboardInput(true)
		end
	end
end

function onAction(window, a_widgetName, a_action, a_data, source, tbl)
	if window == nil then
		return
	end
	
    local widget = DialogLoader.findWidgetByName(window, a_widgetName)
    if not widget then return false end
	widget.name = a_widgetName
    local widgetTypeHandlers = {
		["Button"] = handlerButton,
        ["ComboList"] = handleComboList,
        ["Static"] = handleStatic,
        ["EditBox"] = handleEditBox,
        ["SpinBox"] = handleSpinBox,
        ["Grid"] = handleGrid,

		["TabGroupItem"] = handleTabGroupItem,
		["CheckBox"] = handleCheckBox,
		["VertScrollBar"] = handleVertScrollBar,
		["ToggleButton"] = handlerToggleButton,

		["Panel"] = handlerPanel,
    }

	
		-- Универсальные действия для всех виджетов
	local value
	if type(a_action) ~= 'table' then
		if a_action == "setVisible" then
			widget:setVisible(a_data)
			--unlockKeyboardInput(true)
		elseif a_action == "setPosition" then
			widget:setPosition(a_data[1], a_data[2])
		elseif a_action == "setEnabled" then
			widget:setEnabled(a_data)
		elseif a_action == "setWData" then
			widget.wData = a_data
		elseif a_action == "getWData" then
			return widget.wData
		elseif a_action == "add_callback" then
			if a_data[1] == "onChange" then
				widget:addChangeCallback(function(self) a_data[2](self) end)
				if widget:getTypeName() == "EditBox" then
					widget:addFocusCallback(function(self) InputCheck(self, self:getFocused(), widget.name) end)
				end
			elseif a_data[1] == "onShow" then
				widget:addShowCallback(function(self) a_data[2](self) end)
			elseif a_data[1] == "onFocus" then
				widget:addFocusCallback(function(self) a_data[2](self, self:getFocused()) end)
			elseif a_data[1] == "onMouseWheelCallback" then
				widget:addMouseWheelCallback(function(self) a_data[2](self) end)			
			end
		else
			local handler = widgetTypeHandlers[widget:getTypeName()]
			if handler then
				value = handler(window, widget, a_action, a_data, source, tbl)
			end
		end
	else
		local handler = widgetTypeHandlers[widget:getTypeName()]
			if handler then
				value = handler(window, widget, a_action, a_data, source, tbl)
			end
	end
    return value or false
end

function radian2longitude(radians)
  local d
  
	if radians < 0 then
		d = 'W'
		radians = -radians
	else
		d = 'E'
	end
  
	local c = UC.toDegrees(radians, true)
	local g = base.math.floor(c)
	local m = base.math.floor(c * 60 - g * 60)
	local s = c * 3600 - g * 3600 - m * 60
  
  return d, g, m, s
end

function radian2latitude(radians)
  local d
  
	if radians < 0 then
		d = 'S'
		radians = -radians
	else
    d = 'N'
	end
  
	local c = UC.toDegrees(radians, true)
	local g = base.math.floor(c)
	local m = base.math.floor(c * 60 - g * 60)
	local s = c * 3600 - g * 3600 - m * 60
  
  return d, g, m, s
end

function LatLongToDegrees(a_val1, a_val2, a_val3, a_val4) -- N 44°12'12" 
	local degrees = a_val4/3600 + a_val3/60 + a_val2
	
	if a_val1 == 'W' or a_val1 == 'w' or a_val1 == 'S' or a_val1 == 's' then
		degrees = -degrees
	end

	return degrees
end

function LatLongDToDegrees(a_val1, a_val2, a_val3) -- N 44°12.343'
	local degrees = a_val3/60 + a_val2
	
	if a_val1 == 'W' or a_val1 == 'w' or a_val1 == 'S' or a_val1 == 's' then
		degrees = -degrees
	end

	return degrees
end

function LatLongPToDegrees(a_val1, a_val2, a_val3, a_val4) -- N 44°11'12.33"
	local degrees = a_val4/3600 + a_val3/60 + a_val2
	
	if a_val1 == 'W' or a_val1 == 'w' or a_val1 == 'S' or a_val1 == 's' then
		degrees = -degrees
	end

	return degrees
end

function convertLatLonStandardToMeters(lat_D, lat_G, lat_M, lat_S, lon_D, lon_G, lon_M, lon_S)
	local lat  = LatLongToDegrees(lat_D, lat_G, lat_M, lat_S) -- N 44°12'12" 
	local lon = LatLongToDegrees(lon_D, lon_G, lon_M, lon_S) -- N 44°12'12" 

	if lon == nil or lat == nil then
		return 0,0
	end

	return Terrain.convertLatLonToMeters(lat, lon)
end

function convertLatLonMinutesDecimalToMeters(lat_D, lat_G, lat_MinM, lat_MinDec, lon_D, lon_G, lon_MinM, lon_MinDec)
	local lat  = LatLongDToDegrees(lat_D, lat_G, lat_MinM.."."..lat_MinDec) -- N 44°12.343'
	local lon = LatLongDToDegrees(lon_D, lon_G, lon_MinM.."."..lon_MinDec) -- N 44°12.343'

	if lon == nil or lat == nil then
		return 0,0
	end
			
	return Terrain.convertLatLonToMeters(lat, lon)
end

function convertLatLonPreciseToMeters(lat_D, lat_G, lat_M, lat_S, lon_D, lon_G, lon_M, lon_S)
		local lat  = LatLongPToDegrees(lat_D, lat_G, lat_M, lat_S) -- N 44°12'12.343"
		local lon = LatLongPToDegrees(lon_D, lon_G, lon_M, lon_S) -- N 44°12'12.343"
	
		
		if lon == nil or lat == nil then
			return 0,0
		end
	
		return Terrain.convertLatLonToMeters(lat, lon)	
end

function convertMGRSGRIDToMeters(val_1, val_2, val_3, val_4, val_5)
	return Terrain.convertMGRStoMeters(base.string.format("%d %s %s %05d %05d",
											val_1,
											val_2,
											val_3,
											val_4,
											val_5))  -- 38 T LL 49930 49350	
end