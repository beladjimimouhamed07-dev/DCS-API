local base = _G

module('DTC_manager_SimChooseData')

local require 		= base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local string        = base.string
local dofile		= base.dofile
local print 		= base.print
local tonumber		= base.tonumber

local DialogLoader			= require('DialogLoader')
local dxgui					= require('dxgui')
local lfs					= require('lfs')
local FileDialog			= require('FileDialog')
local FileDialogFilters		= require('FileDialogFilters')
local ListBoxItem 			= require('ListBoxItem')
local Skin              	= require('Skin')
local DTC_manager_Map		= require('DTC_manager_Map')
local DTC_manager_Utils 	= require('DTC_manager_Utils')

JSON = dofile("Scripts/JSON.lua")


local window_
local datafileNames = {}
local selectedDatafileName;
local DTC_manager_Import

function changeSkins(panel)
	local widgetCounter = panel:getWidgetCount() - 1
    local widget
	--base.print("---changeSkins---", widgetCounter)
	
	for i = 0, widgetCounter do
		widget = panel:getWidget(i)
		if widget then
			local widgetType = widget:getTypeName()
			if widgetType == "Panel" then
				changeSkins(widget)
			--elseif widgetType == "Button" then
				--widget:setSkin(Skin["buttonSkin_MENew2"]())
			elseif widgetType == "Static" then
				widget:setSkin(Skin["staticSkin_ME"]())
			elseif widgetType == "EditBox" then
				widget:setSkin(Skin["editBoxSkin_ME"]())
			elseif widgetType == "TabGroupItem" then
				widget:setSkin(Skin["tabGroupItemSkin_optionsNew"]())
			elseif widgetType == "CheckBox" then
				widget:setSkin(Skin["checkBoxSkin_MENew"]())
			elseif widgetType == "ComboList" then
				widget:setSkin(Skin["comboListSkinNew_"]())
			elseif widgetType == "Grid" then
				widget:setSkin(Skin["gridSkin_Multiplayer_roleNew"]())
			elseif widgetType == "GridHeaderCell" then
				widget:setSkin(Skin["gridHeaderCellSkinNew"]())
			end
		end
    end	
end

local function onAction(a_widgetName, a_action, a_data)
	local widget = DialogLoader.findWidgetByName(window_, a_widgetName)
	if widget then
		local widgetType = widget:getTypeName()
		--base.print("--widgetType---",widgetType)
		if widgetType == "ComboList" then
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
			end
		elseif widgetType == "Static" then
			if a_action == "setText" then
				widget:setText(a_data)
			end	
		elseif widgetType == "EditBox" then
			if a_action == "setText" then
				widget:setText(a_data)
				--base.print("---onAction.setText---")
				--widget:onChange()
				--onAction(a_widgetName,"onChange",a_data)
			end	
		elseif widgetType == "SpinBox" then
			if a_action == "setValue" then
				widget:setValue(a_data)
			end	
		elseif widgetType == "Grid" then
			if a_action == "addRow" then
				local rowIndex = widget:getRowCount()
				widget:insertRow(20)
				for k,v in base.pairs(a_data) do
					local cell
					if v.widget == "Static" then
						cell = Static.new(v.text)
						cell:setSkin(staticSkin)
					end
					
					if v.widget == "EditBox" then
						cell = EditBox.new(v.text)
						cell:setSkin(editBoxSkin)
					end
					
					if v.widget == "SpinBox" then
						cell = SpinBox.new()
						cell:setSkin(spinBoxSkin)
						if v.acceptDecimalPoint then
							cell:setAcceptDecimalPoint(v.acceptDecimalPoint)
						end	
						cell:setRange(v.min, v.max)
						cell:setStep(v.step)
						cell:setValue(v.value)
					end

					if v.widget == "CheckBox" then
						cell = CheckBox.new()
						cell:setSkin(checkBoxSkin)
						cell:setName(v.name)
						cell:setState(v.defaultState)
					end
					
					if v.widget == "Button" then
						cell = Button.new()
						--cell:setSkin("modul_btn_del")
					end
					
					if v.wData then
						cell.wData = v.wData
					end
					
					if v.SkinName then
						cell:setSkin(Skin[v.SkinName]())
					end
					
					if v.onChange then
						cell:addChangeCallback(function(self)
							v.onChange(self--[[,unit.datalinks[curDatalink]])
						end)
					end
										
					widget:setCell(k-1, rowIndex, cell)
				end
			end	
			if a_action == "removeAllRows" then
				widget:removeAllRows()
			end	
		elseif widgetType == "TabGroupItem" then
			if a_action == "setState" and a_data ~= nil then
				widget:setState(a_data)
			end			
		elseif widgetType == "CheckBox" then		
			if a_action == "setState" and a_data ~= nil then
				widget:setState(a_data)
			end	
		end
		
		if a_action == "setVisible" then
			widget:setVisible(a_data)
		end
		
		if a_action == "setPosition" and a_data[1] ~= nil and a_data[2] ~= nil then
			widget:setPosition(a_data[1], a_data[2])
		end
		
		if a_action == "setEnabled" and a_data ~= nil then
			widget:setEnabled(a_data)
		end
		
		if a_action == "setWData" and a_data ~= nil then
			widget.wData = a_data
		end
		
		if a_action == "getWData" then
			return widget.wData 
		end
		
		if a_action == "add_callback" and a_data[1] ~= nil and a_data[2] ~= nil then
			if a_data[1] == "onChange" then
				widget:addChangeCallback(function(self)
					a_data[2](self--[[,unit.datalinks[curDatalink]])
				end)
				--base.print("---onAction.onChange---")
			end
			
			if a_data[1] == "onShow" then
				widget:addShowCallback(function(self)
					a_data[2](self--[[,unit.datalinks[curDatalink]])
				end)
			end
		end
	end
	
	return false
end

function create()
	--print("---SimChooseData create---")

	lfs.mkdir(lfs.writedir() .. 'DTC/')

	window_ = DialogLoader.spawnDialogFromFile('./Scripts/UI/DTC_manager/DTC_manager_SimChooseData.dlg', {})
	window_.onClose = onClose

	changeSkins(window_)
end

function onClose()
	FileDialog.close()
	window_:setVisible(false)
	base.l_onClose()
end

function kill()
	--print("---kill")
	FileDialog.close()
	window_:kill()
	window_ = nil
end

function show()
	window_:setVisible(true)
end

function hide()
	--print("---hide")
	window_:setVisible(false)
	FileDialog.close()
	base.l_onClose()
end

function isVisible()
	--print("---isVisible")
	return window_:getVisible()
end

function getVisible()
    if window_ == nil then
        return false
    end
	return window_:getVisible()
end

function getWindow()
	return window_.widget
end

local function alphanumsort(o)
	local function padnum(d) local dec, n = base.string.match(d, "(%.?)0*(.+)")
	  return #dec > 0 and ("%.12f"):format(d) or ("%s%03d%s"):format(dec, #n, n) end
	base.table.sort(o, function(a,b)
  		return base.tostring(a.name):gsub("%.?%d+",padnum)..("%3d"):format(#b.name)
	  	< base.tostring(b.name):gsub("%.?%d+",padnum)..("%3d"):format(#a.name) end)
	return o
end

function onChange_coLDatafileNames(self)
	local selectItem = self:getSelectedItem()
	if selectItem then
		selectedDatafileName = self:getText(selectItem)
	end
end

function setDatafileNames(data)
	local dataDecoded = JSON:decode(data)
	selectedDatafileName = dataDecoded["1"]
	local labels_ = {}
	for k,v in base.pairs(dataDecoded) do
		base.table.insert(labels_, {name = v})
	end
	local filenamesTbl = alphanumsort(labels_)

	onAction("coLDatafileNames", "clear")	
	local selectedItemIndex
	for k,v in pairs(filenamesTbl) do
		--base.print("---setDatafileNames---", tonumber(tableIndex), name)
		onAction("coLDatafileNames", "add", {
				{text = v.name, id = k}
				})
		if v.name == selectedDatafileName then
			selectedItemIndex = k
		end
	end
	onAction("coLDatafileNames", "add_callback", {"onChange", onChange_coLDatafileNames})
	onAction("coLDatafileNames", "selectItem", selectedItemIndex)
end

function getSelectedDatafileName()
	--base.print("---getSelectedDatafileName---", selectedDatafileName)
	return selectedDatafileName
end

function removeStaticMapWidgetPlaceholder()
	window_:removeWidget(window_.staticMapWidgetPlaceholder)
	window_.staticMapWidgetPlaceholder:destroy()
	window_.staticMapWidgetPlaceholder = nil
end

function show_bImport(option, unit_type)
	DTC_manager_Map.setEditDTCWaypointState()

	local result
	local path = lfs.writedir() .. 'DTC/'
	local filters = {FileDialogFilters.DTC()}
	DTC_manager_Utils.lockKeyboardInput()
	if option == "open" then		
		result = FileDialog.open(path, filters, ("Import DTC"), 'dtc')
	elseif option == "save" then
		result = FileDialog.save(path, filters, ("Export DTC"), 'dtc', unit_type.."_DTC")
	end
	if result ~= nil then
        base.l_get_import_path(option, result, 123)
    end
	DTC_manager_Utils.unlockKeyboardInput(true)
end

return {
	create								= create,
	kill								= kill,
	show								= show,
	hide								= hide,
	isVisible							= isVisible,
	getWindow 							= getWindow,
	removeStaticMapWidgetPlaceholder	= removeStaticMapWidgetPlaceholder,
	setDatafileNames 					= setDatafileNames,
	getSelectedDatafileName 			= getSelectedDatafileName,
	onChange_coLDatafileNames 			= onChange_coLDatafileNames,
	show_bImport 						= show_bImport,
	getVisible 							= getVisible,
}
