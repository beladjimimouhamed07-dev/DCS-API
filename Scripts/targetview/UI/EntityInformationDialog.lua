local base = _G

module('EntityInformationDialog')

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
local Static				= require('Static')

i18n.setup(_M)
local locale = i18n.getLocale()

local cdata = 
{

}

function onButtonCancel()
	show(false)
end

function create()
	window = DialogLoader.spawnDialogFromFile('./Scripts/UI/EntityInformationDialog.dlg', cdata)
	
	grid = window.grid
	gridItemSkin = window.gridItem:getSkin()
	
	local w, h = Gui.GetWindowSize()
	local wW, wH = window:getSize()
	window:setPosition((w - wW) / 2, (h - wH) / 2)
end

function show(state)
	if state == nil then
		return
	end
	
	if window == nil then
        create()
    end
	
	window:setVisible(state)
end

function setupInfo(infoTable)
	grid:removeAllRows()
	
	if infoTable == nil then
		return
	end

	base.U.traverseTable(infoTable)
	local rowIndex = 0
	for name, value in pairs(infoTable) do
        grid:insertRow(26)
		
		local cellName = Static.new()
		cellName:setSkin(gridItemSkin)
		cellName:setText(name)
		cellName:setTooltipText(name)
		grid:setCell(0, rowIndex, cellName)
		
		local cellValue = Static.new()
		cellValue:setSkin(gridItemSkin)
		cellValue:setText(value)
		cellValue:setTooltipText(value)
		grid:setCell(1, rowIndex, cellValue)
		
		rowIndex = rowIndex + 1
    end
end
