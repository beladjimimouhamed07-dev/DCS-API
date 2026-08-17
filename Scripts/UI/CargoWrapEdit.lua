local base = _G
module('CargoWrapEdit')

local require  = base.require
local tostring = base.tostring
local table    = base.table
local ipairs   = base.ipairs
local pairs    = base.pairs


local DialogLoader 	    = require('DialogLoader')	
local gettext			= require('i_18n')
local UpdateManager		= require('UpdateManager')
local _ = gettext.translate
local findWidgetByName = DialogLoader.findWidgetByName

if base.blank_run then
	local function test_units_fill() 
		return {
			{name = "FIRST CARGO"	,id = 1600001},
			{name = "SECOND CARGO"	,id = 1600002},
			{name = "3RD CARGO"		,id = 1600003},
			{name = "4RTH CARGO"	,id = 1600004},
			{name = "Some Ammo"		,id = 1600005},
			{name = "Fuel  200 L"	,id = 1600006},
			{name = "Some Ammo"		,id = 1600007},
			{name = "Fuel  200 L"	,id = 1600008},
			{name = "Some Ammo"		,id = 1600009},
			{name = "Fuel  200 L"	,id = 16000010},
			{name = "Some Ammo"		,id = 16000011},
			{name = "Fuel  200 L"	,id = 16000012},
			{name = "Some Ammo"		,id = 16000013},
			{name = "Fuel  200 L"	,id = 16000014},
			{name = "Some Ammo"		,id = 16000015},
			{name = "Fuel  200 L"	,id = 16000016}
		}
	end
	get_nearby_units_available_for_transportation = function (v) 
		if not test_units or  #test_units == 0 then 
			test_units = test_units_fill()
		end
		return test_units
	end
	wrap_selected_unit		= function (id)
		for i,o in ipairs(test_units) do 
			if o.id == id then 
				table.remove(test_units,i)
				return
			end
		end
	end
	getModelTime = function ()  return 0 end
end

local localization = 
{
	wrapUnitAsCargo = _("SELECT UNIT FOR TRANSPORTATION"),
	wrapAsCargo 	= _("WRAP AS CARGO"),
}

local function process_on_off(process,value)
	if process then
		if value then 
			UpdateManager.add(process)
		else
			UpdateManager.delete(process)
		end	
	end
end

local function fillCargoGrid(dlg,cargoData)
	local cargos  = dlg.grid

	if cargos:getColumnCount() < 1 then
		local w, h = cargos:getSize() 
		cargos:insertColumn(w - 16)
	end

	if not cargoData then
		cargos:setRowCount(0)
		return
	end
	local sz = #cargoData
	if  cargos:getRowCount() ~= sz then
		cargos:setRowCount(sz)
	end
	for i,o in ipairs(cargoData) do 
		local cell = cargos:getCell(0,i - 1)
		if not cell then 
			cell = dlg.txtTemplate:clone()
			cell:setVisible(true)
			cargos:setCell(0,i - 1,cell)
		end
		cell.cargo_id = o.id
		cell:setText(o.name)

		if o.selected then 
			cargos:selectRow(i - 1)
		end 
	end
end

local function updateGrid()
	local cargos_new = get_nearby_units_available_for_transportation()
	if cargos_new then 
		local cargos    = window.grid
		local cargo_row = cargos:getSelectedRow()
		if cargo_row > -1 then  
			local cell = cargos:getCell(0,cargo_row)
			if  cell and cell.cargo_id then
				for i,o in ipairs(cargos_new) do
					if	o.id == cell.cargo_id then 
						o.selected = true
					end
				end
			end
		end
	end
	fillCargoGrid(window,cargos_new)
end

local function init(wnd,parent)
	window	= wnd
	wnd.txtTemplate:setVisible(false)
	if parent then 
		local x_base, y_base = parent:getPosition()
		local l_w	, l_h    = wnd:getSize()
		wnd:setPosition(x_base - l_w - 8,y_base)
	end
	wnd.grid 			= findWidgetByName(wnd.containerMain, 'gridUnits')
	wnd.wrap   	  		= findWidgetByName(wnd.containerMain, 'buttonOk')
	wnd.wrap.onChange 	= function (self)
		local cargo_row = wnd.grid:getSelectedRow()
		if cargo_row < 0 then 
			return 
		end
		local cell = wnd.grid:getCell(0,cargo_row)
		if not cell or not cell.cargo_id then
			return 
		end

		wrap_selected_unit(cell.cargo_id)
		updateGrid()
		local actual_rows = wnd.grid:getRowCount()
		if cargo_row < actual_rows then 
			wnd.grid:selectRow(cargo_row)
		else
			wnd.grid:selectRow(actual_rows - 1)
		end
	end
	
	wnd.grid.onMouseDown = function(self, x, y, button)
		if 1 == button then
			local col, row = self:getMouseCursorColumnRow(x, y)
			if  row > -1 then 
				self:selectRow(row)
			end
		end
	end	 
	function wnd:onClose()
		process_on_off(window.process,false)
	end	
	wnd.process = function ()
		local dlg = window
		if not dlg or not dlg:isVisible() then 
			return
		end
		local t = getModelTime()
		if not dlg.last_time or t - dlg.last_time > 0.5 then
			dlg.last_time = t
			updateGrid()
		end
	end
end

function create()
	local wnd = DialogLoader.spawnDialogFromFile('Scripts/UI/CargoWrapEdit.dlg', localization)
	init(wnd)
	window = wnd
end

function destroy()
	if window then
	   window:kill()
	   window = nil
	end
end;

function 	show(state)
	if not wrap_selected_unit_available and state then 
		return
	end
	if state and not window then
	   create()
	end
	if window then
		window.last_time = -1
		window:setVisible(state);
		if window.process then
			if state then 
				window.process()
				if not window.process_reg then
					UpdateManager.add(window.process)
					window.process_reg = true
				end
			elseif window.process_reg then
				UpdateManager.delete(window.process)
				window.process_reg = false
			end
		end
	end
end

function make_new()
	if not window then
		create()
	elseif window:isVisible() then
		return
	end
	show(true)
end


function unit_test(wnd)
	wnd:localize(localization)
	init(wnd)
	make_new()
end

function  unit_test_done(wnd)
	if wnd.process and wnd.process_reg then
		UpdateManager.delete(wnd.process)
		wnd.process 	= nil
		wnd.process_reg = nil
	end
end
