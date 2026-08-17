local base = _G

module('WarehouseStatusDialog')

local require = base.require
local tostring = base.tostring

local DialogLoader 	    = require('DialogLoader')	
local Static 			= require('Static')
local GridHeaderCell 	= require('GridHeaderCell')
local RadioButton       = require('RadioButton')
local gettext			= require('i_18n')
local UpdateManager		= require('UpdateManager')

local _ = gettext.translate

local localization = {
	warehouseState	= _('Warehouse State'),
	ok				= _('OK'),
	type			= _('type'),
	count			= _('count'),
	a2aMissiles		= _('A2A MISSILES'),
	a2gMissiles		= _('A2G MISSILES'),
	rockets			= _('ROCKETS'),
	bombs			= _('BOMBS'),
	bombsGuided		= _('BOMBS GUIDED'),
	fuelTanks		= _('FUEL TANKS'),
	aircraft		= _('AIRCRAFT'),
	jetFuel			= _('JET FUEL'),
	gasoline		= _('GASOLINE'),
	methanolMix		= _('METHANOL MIX'),
	diesel			= _('DIESEL'),
	misc			= _('MISC'),
}

local function _(text) 
	return gettext.translate(text) 
end

local colums = {170,91,24}
local cellSkin

function radio_button_item(radioButton,i)
	function radioButton:onChange()
		if selectResourceGroup then
		   selectResourceGroup(i)
		end
	end
	return radioButton
end

local function init(wnd)
	window  = wnd
	window:centerWindow()
	window.process_reg = false
	window.process = function ()
		if  window and refresh and window:isVisible() then 
			refresh();
		end
	end

    cellSkin = window.staticCell:getSkin()
    
    function window.buttonOk:onChange()
        show(false)
    end

    function window:onClose()
        show(false)
    end
    
	rc_list = window.RC_LIST
	MISSILES_A2A = radio_button_item(window.CONTROLS.MISSILES_A2A, 0)
	MISSILES_A2G = radio_button_item(window.CONTROLS.MISSILES_A2G, 1)
	ROCKETS		 = radio_button_item(window.CONTROLS.ROCKETS		, 2)
	BOMBS		 = radio_button_item(window.CONTROLS.BOMBS		, 3)
	BOMBS_GUIDED = radio_button_item(window.CONTROLS.BOMBS_GUIDED, 4)
	FUEL_TANKS	 = radio_button_item(window.CONTROLS.FUEL_TANKS	, 5)
	AIRCRAFTS	 = radio_button_item(window.CONTROLS.AIRCRAFTS	, 6)
	MISC		 = radio_button_item(window.CONTROLS.MISC 		, 7)
end

function create()
	local wnd = DialogLoader.spawnDialogFromFile('Scripts/UI/WarehouseStatusDialog.dlg', localization)
	init(wnd)
end

function destroy()
	if window then
	   window:kill()
	   window = nil
	end
end;

function show(state)
	if state and not window then
	   create()
	end
	if window then
	   window:setVisible(state);
	end
	if window and window.process then
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

function set_row_count(count,do_not_decrease)
	if  not window or 
		not rc_list then
		return
	end
	local c = rc_list:getRowCount()
	if  c > count then
		if do_not_decrease then
		   return
		end
		for i = c - 1,count - 1,-1 do
			rc_list:clearRow(i)
		end
	elseif c < count then
		for i = c,count-1 do
			rc_list:insertRow(18)
			for j = 0,rc_list:getColumnCount() - 1 do
				local cell = window.staticCell:clone()
				cell:setVisible(true)
				rc_list:setCell(j,i,cell)			
			end
		end		
	end
end

function update_item(row,item,status)
	if  window and rc_list then
		local w1 = rc_list:getCell(0,row)
		local w2 = rc_list:getCell(1,row)	
		if w1 and w2 then
		   w1:setText(item)	
		   w2:setText(status)		
  	    end
	end
end

function set_fuel(jet,gas,methanol,diesel)
	
	if not window then return end
	
	local txt = function (item,value)
		if item then
			if value < 10 then
				item:setText("EMPTY")
			elseif value < 100 then
				item:setText("< 100 kg")
			else
				item:setText(base.string.format("%.1f",value/1000.0)..' '.._('t'))
			end
		end
	end
	txt(window.CONTROLS.jet_fuel,jet)
	txt(window.CONTROLS.gasoline,gas)
	txt(window.CONTROLS.methanol,methanol)
	txt(window.CONTROLS.diesel  ,diesel)
end

function unit_test(wnd)
	wnd:localize(localization)
	init(wnd)
	
	set_row_count(15)
	
	local rows = rc_list:getRowCount()
	for i = 1,rows  do
		update_item(i-1,"A-10C" .. base.tostring(i),i)
	end
end
