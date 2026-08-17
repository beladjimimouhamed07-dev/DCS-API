local base = _G

module('CargoResourcePayloadEdit')

local require  = base.require
local tostring = base.tostring
local table    = base.table
local db 				= base.db
local blank_run 		= base.blank_run

local DialogLoader 	    = require('DialogLoader')
local Static 			= require('Static')
local GridHeaderCell 	= require('GridHeaderCell')
local RadioButton       = require('RadioButton')
local gettext			= require('i_18n')
local DB				= require('me_db_api')
local ListBoxItem		= require('ListBoxItem')
local textutil			= require('textutil')
local UpdateManager		= require('UpdateManager')
local imperial          = false
local _ = gettext.translate

local	SRC_MISSILES_A2A 	= 0
local	SRC_MISSILES_A2G 	= 1
local	SRC_ROCKETS			= 2
local	SRC_BOMBS			= 3
local	SRC_BOMBS_GUIDED	= 4
local	SRC_FUEL_TANKS		= 5
local	SRC_AIRCRAFTS		= 6
local	SRC_MISC			= 7
local	COUNTER_CARGO 		= 1

if blank_run then

	local requestWarehouseStateTest =
	{
		["gasoline"] = 10,
		["diesel"] = 12,
		["methanol_mixture"] = 44,
		["aircrafts"] = {
			["CH-47Fbl1"] = {
				["amount"] = 8
			},
			["Bf-109K-4"] = {
				["amount"] = 6
			},
			["F-14A-135-GR"] = {
				["amount"] = 6
			}
		},
		["weapons"] = {
			["4.4.7.397"] = {
				["amount"] = 6
			},
			["4.4.7.446"] = {
				["amount"] = 6
			},
			["4.4.7.265"] = {
				["amount"] = 6
			},
			["4.4.7.429"] = {
				["amount"] = 4
			},
			["4.4.7.405"] = {
				["amount"] = 4
			}
		},
		["jet_fuel"] = 29.198336,
		['unlimitedMunitions'] = true,
	}
	requestWarehouseState = function ()
		return requestWarehouseStateTest
	end

	createNewCargo = function()
		return true
	end

	getPlayerName = function()
		return "MUSTANG-1-1"
	end

	getAbsoluteModelTime = function()
		return 12 * 3600 +  15 * 60  + 13
	end

	getWeightOfEntry = function(resource)
		return 1
	end

	showCargoPlacementHint = function (args)
	end

	stopShowCargoPlacementHint = function (args)
	end
end

local cargo_

local localization = {
	CargoResourcePayload	= _('CARGO RESOURCES'),
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
	amount 			= _('amount'),
	diff 			= _('diff'),
	instore			= _('in store'),
	packageWeight	= _('Package weight'),
	kg				= _("kg"),
	lbs				= _("lbs"),
	netWeight		= _("Net Weight"),
	lessTnanMinimal	= _("less than minimal allowed"),
}

local initial_store_state =
{
	["LIQUID_JET_FUEL"]	=
	{
		initial_amount	= 0,
		store_amount	= 0,
		diff			= 0,
		resource		= "LIQUID_JET_FUEL",
		display_name	= localization.jetFuel,
		liquid 			= true,
		weight_of_one	= 1000,
	},
	["LIQUID_GASOLINE"]	=
	{
		initial_amount	= 0,
		store_amount	= 0,
		diff			= 0,
		resource		= "LIQUID_GASOLINE",
		display_name	= localization.gasoline,
		liquid 			= true,
		weight_of_one	= 1000,
	},
	["LIQUID_METHANOL_MIX"]	=
	{
		initial_amount	= 0,
		store_amount	= 0,
		diff			= 0,
		resource		= "LIQUID_METHANOL_MIX",
		display_name	= localization.methanolMix,
		liquid 			= true,
		weight_of_one	= 1000,
	},
	["LIQUID_DIESEL"]	=
	{
		initial_amount	= 0,
		store_amount	= 0,
		diff			= 0,
		resource		= "LIQUID_DIESEL",
		display_name	= localization.diesel,
		liquid 			= true,
		weight_of_one	= 1000,
	},
}

local function get_resource_amount(resource)
	local ref = initial_store_state[resource]
	if ref then
		return ref.initial_amount + ref.diff
	end
	return 0
end

local function  calculate_payload_weight()
	local  netto = 0
	for i,o in base.pairs(initial_store_state) do
		local amount = o.initial_amount + o.diff
		if  amount > 0 then
			if	o.weight_of_one == nil then
				o.weight_of_one  = getWeightOfEntry(o.resource)
			end
			netto 		 = netto + amount * o.weight_of_one
		end
	end

	local  selected   = (window   and   window.cargo_type_select) and window.cargo_type_select:getSelectedItem()
	local  minmass    = (selected and  selected.minMass) or 150

	local  brutto = minmass
	if  netto > brutto 	then
		brutto = netto
	end
	return netto,brutto,minmass
end

local function submit_resource_payload()
	local resourcePayload =
	{
		aircrafts 			= {},
		weapons   			= {},
		jet_fuel 			= get_resource_amount('LIQUID_JET_FUEL'),
		gasoline 			= get_resource_amount('LIQUID_GASOLINE'),
		methanol_mixture 	= get_resource_amount('LIQUID_METHANOL_MIX'),
		diesel 				= get_resource_amount('LIQUID_DIESEL'),
	}
	local netto,brutto,minmass = calculate_payload_weight();
	for i,o in base.pairs(initial_store_state) do
		if not o.liquid then

			local t = { amount = o.initial_amount + o.diff }
			if o.category ~= nil and o.category  == SRC_AIRCRAFTS then
				resourcePayload.aircrafts[o.resource] = t
			else
				resourcePayload.weapons  [o.resource] = t
			end
		end
	end

	return resourcePayload,brutto
end

local function get_category (ws_type)
	if  ws_type[1] == base.wsType_Weapon and
		ws_type[2] == base.wsType_Missile and
	   (ws_type[3] == base.wsType_AA_Missile or ws_type[3] == base.wsType_SA_Missile) then
		return SRC_MISSILES_A2A;
	elseif   ws_type[1] == base.wsType_Weapon and
			 ws_type[2] == base.wsType_Missile and
			(ws_type[3] == base.wsType_AS_Missile or ws_type[3] == base.wsType_SS_Missile) then
		return SRC_MISSILES_A2G;
	elseif  ws_type[1] == base.wsType_Weapon and
			ws_type[2] == base.wsType_NURS then
		return SRC_ROCKETS;
	elseif  ws_type[1] == base.wsType_Weapon and
			ws_type[2] == base.wsType_Bomb and
			ws_type[3] ~= base.wsType_Bomb_Guided then
		return SRC_BOMBS;
	elseif  ws_type[1] == base.wsType_Weapon and
			ws_type[2] == base.wsType_Bomb and
			ws_type[3] == base.wsType_Bomb_Guided then
		return SRC_BOMBS_GUIDED;
	elseif  ws_type[1] == base.wsType_Air and
			ws_type[2] == base.wsType_Free_Fall and
			ws_type[3] == base.wsType_FuelTank then
		return SRC_FUEL_TANKS;
	elseif  ws_type[1] == base.wsType_Air and (
			ws_type[2] == base.wsType_Airplane or
			ws_type[2] == base.wsType_Helicopter) then
		return SRC_AIRCRAFTS;
	end
	return SRC_MISC;
end

local function get_resource_reference(resource)
	if	initial_store_state[resource] == nil then

		local display_name = resource
		local obj 		   = base.Objects[resource]
		local category     = SRC_MISC

		if obj then
			display_name = obj.DisplayName
			category     = SRC_AIRCRAFTS
		else
			local t = base.wsTypeFromString(resource)
			local nm = base.get_weapon_display_name_by_wstype(t)

			if nm and nm ~= "" then
				display_name = nm
			end
			category = get_category(t)
		end

		initial_store_state[resource] =
		{
			initial_amount	= 0,
			store_amount	= 0,
			diff			= 0,
			resource		= resource,
			display_name	= display_name,
			category		= category,
		}
	end
	return initial_store_state[resource]
end


local function _(text)
	return gettext.translate(text)
end

local update_show_case

function radio_button_item(radioButton,i)
	function radioButton:onChange()
		selected_resource_category = i
		update_show_case()
	end
	return radioButton
end

local function setViewCargoExist(nm)
	window.cargo_name_label :setVisible(true)
	window.cargo_name_label :setText(nm)
	window.cargo_type_select:setVisible(false)
	window.cargo_name_edit  :setVisible(false)
end

local function setViewCargoNew(nm)

	local  delivery_name = nm
	if not delivery_name then
		local player    = getPlayerName()
		local modeltime = getAbsoluteModelTime()
		local dayTime 	= base.math.mod(modeltime, 86400)
		local hh 	  	= base.math.floor(dayTime / 3600)
		dayTime = dayTime - hh * 3600
		local mm = base.math.floor(dayTime / 60)
		dayTime = dayTime - mm * 60
		local ss 		= base.math.floor(dayTime)
		delivery_name 	= base.string.format("%s|%02d:%02d|PKG%02d",player,hh,mm,COUNTER_CARGO)
	end
	window.cargo_name_edit	:setText(delivery_name)
	window.cargo_name_label :setVisible(false)
	window.cargo_type_select:setVisible(true)
	window.cargo_name_edit  :setVisible(true)
end

local function update_diff(self,new_diff)
	local diff_str  = nil
	if new_diff ~= 0 then
		if  self:getAcceptDecimalPoint() then
			diff_str = base.string.format("%+0.2f",new_diff)
		else
			diff_str = base.string.format("%+d",new_diff)
		end
	else
		diff_str = "--"
	end
	self.ref_diff:setText(diff_str)
end

local function updateWeight(wnd)
	if not wnd then
		return
	end

	wnd.packageWeight:setVisible(true)

	local weight_to_string = function(w)
		if imperial then
			return base.string.format("%d",2.20462 * w)..localization.lbs
		else
			return base.string.format("%d",w)..localization.kg
		end
	end


	local netto,brutto,minmass 	= calculate_payload_weight();
	local brutto_str 			= localization.packageWeight.. ": "..weight_to_string(brutto)

	if brutto > minmass then
		wnd.packageWeight:setText(brutto_str)
	elseif netto > 0 then
		wnd.packageWeight:setText(brutto_str.." ("..localization.netWeight .." "..weight_to_string(netto).." "..localization.lessTnanMinimal..")")
	else
		wnd.packageWeight:setText(brutto_str)
	end
end

local function diff_update(self)
	if  self.resource_ref then
		self.resource_ref.diff = self:getValue() - self.resource_ref.initial_amount
		if  self.resource_ref.diff > self.resource_ref.store_amount then
			self.resource_ref.diff = self.resource_ref.store_amount
			self:setValue(self.resource_ref.initial_amount + self.resource_ref.diff)
		end
		update_diff(self,self.resource_ref.diff)
	else
		update_diff(self,0)
	end
	updateWeight(window)
end



local function update_spin(spin,store,resource_ref)
	spin.resource_ref = resource_ref
	spin:setValue(resource_ref.initial_amount + resource_ref.diff)
	diff_update(spin)

	if resource_ref.store_amount > 1e6 then
		store:setText("")
	elseif spin:getAcceptDecimalPoint() then
		store:setText(base.string.format("%0.2f",resource_ref.store_amount))
	else
		store:setText(resource_ref.store_amount)
	end
end

local function init_liquid(spin_name)

	local LIQUIDS 	= window.CONTROLS
	local spin  	= LIQUIDS[spin_name]
	local diff  	= LIQUIDS[spin_name .. "_diff"]
	local store 	= LIQUIDS[spin_name .. "_store"]

	local rc_name 	= "LIQUID_" .. base.string.upper(spin_name)

	spin:setFormatString("%0.2f")
	spin.ref_diff 		= diff
	spin.onChange 		= diff_update
	update_spin(spin,store,get_resource_reference(rc_name))
	diff_update(spin)
end

local function init(wnd)

	window  = wnd
	window:centerWindow()
	wnd.last_time   = -1
	wnd.process_reg = false
	wnd.process = function ()
		if window and window:isVisible() and getAllowedAttemptsToCreate then
			local t = getAbsoluteModelTime()
			if  t - window.last_time > 0.5 then
				window.last_time = t
				local time,count = getAllowedAttemptsToCreate()
				if time ~= nil then
					local dt = time - t
					if dt < 0 then
						window.buttonOk:setText(localization.ok .. base.string.format(" (%d)",count))
						window.buttonOk:setEnabled(true)
					else
						local mm = base.math.floor(dt/60)
						local ss = base.math.floor(dt - 60 *mm)
						window.buttonOk:setText(base.string.format("%02d:%02d",mm,ss))
						window.buttonOk:setEnabled(false)
					end
				end
				local selected = window.cargo_type_select:getSelectedItem()
				if	selected then
					showCargoPlacementHint(selected.type)
				end
			end
		end
	end

    function window.buttonOk:onChange()
		if  window.cargo_type_select:isVisible() then
			local selected = window.cargo_type_select:getSelectedItem()
			if selected then
				local unit_type 				= selected.type
				local unit_name 				= window.cargo_name_edit:getText()
				local resourcePayload,weight 	= submit_resource_payload()
				if	createNewCargo(unit_type,unit_name,resourcePayload,weight) then
					COUNTER_CARGO = COUNTER_CARGO + 1
					show(false)
				end
			end
		else
			show(false)
		end
	end

    function window:onClose()
        show(false)
    end

	rc_list		   = window.RC_LIST

	local gw,gh = rc_list:getSize()

	local  width_A = 160

	rc_list:setColumnWidth(0,width_A)		--A
	rc_list:setColumnWidth(1,(gw - width_A) / 3)--count
	rc_list:setColumnWidth(2,(gw - width_A) / 3)--diff
	rc_list:setColumnWidth(3,(gw - width_A) / 3 - 18)--instore


	window.staticCell:setVisible(false)
	window.staticType:setVisible(false)
	window.editCount :setVisible(false)

	local rx,ry = window.cargo_type_select:getPosition()
	window.cargo_name_label:setPosition(rx,ry)


	MISSILES_A2A = radio_button_item(window.CONTROLS.MISSILES_A2A	, 0)
	MISSILES_A2G = radio_button_item(window.CONTROLS.MISSILES_A2G	, 1)
	ROCKETS		 = radio_button_item(window.CONTROLS.ROCKETS		, 2)
	BOMBS		 = radio_button_item(window.CONTROLS.BOMBS			, 3)
	BOMBS_GUIDED = radio_button_item(window.CONTROLS.BOMBS_GUIDED	, 4)
	FUEL_TANKS	 = radio_button_item(window.CONTROLS.FUEL_TANKS		, 5)
	AIRCRAFTS	 = radio_button_item(window.CONTROLS.AIRCRAFTS		, 6)
	MISC		 = radio_button_item(window.CONTROLS.MISC 			, 7)
	selected_resource_category = SRC_MISSILES_A2A
	MISSILES_A2A:setState(1)

	init_liquid("jet_fuel")
	init_liquid("gasoline")
	init_liquid("methanol_mix")
	init_liquid("diesel")

	setViewCargoExist("cargotype + cargoname")

	window.cargo_type_select:clear()
	local item_to_select = nil
	for i,o in base.ipairs(db.Units.Cargos.Cargo) do
		local key = o.Name
		if o.swapped_names then
			key = o.type
		end
		local	item 				= ListBoxItem.new(o.DisplayName)
				item.type 			= key
				item.DisplayName	= o.DisplayName
				item.index			= i
				item.category       = category
				item.minMass		= o.minMass
		window.cargo_type_select:insertItem(item)
		if  item.type == "ammo_cargo"  then
			item_to_select = item
		end
	end
	if item_to_select then
		window.cargo_type_select:selectItem(item_to_select)
	end

	updateWeight(window)

	function window.cargo_type_select:onChange()
		updateWeight(window)
	end
end

function create()
	local wnd = DialogLoader.spawnDialogFromFile('Scripts/UI/CargoResourcePayloadEdit.dlg', localization)
	init(wnd)
	window = wnd
end

function destroy()
	if window then
	   window:kill()
	   window = nil
	end
end;

function make_new()
	if not window then
		create()
	elseif window:isVisible() then
		return
	end
	for i,o in base.pairs(initial_store_state) do
		o.store_amount   = 0
		o.initial_amount = 0
		o.diff			 = 0
	end
	show(true)
	setViewCargoNew()
end


local update_row

function update_show_case()

	local list_rows = {}

	for i,o in base.pairs(initial_store_state) do
		if not  o.liquid  and o.category ~= nil and o.category  == selected_resource_category  then
			list_rows[#list_rows + 1] = o
		end
	end

	table.sort(list_rows, function(o1, o2)
		local nm1 = o1.display_name or o1.resource
		local nm2 = o2.display_name or o2.resource
		return textutil.Utf8Compare(nm1,nm2)
	end)

	local row = 0
	for i,o in base.ipairs(list_rows) do
		update_row(row,o)
		row = row + 1
	end

	local count = rc_list:getRowCount()
	if count > 0 then
		for i = row,count-1 do
			for j = 0,rc_list:getColumnCount() - 1 do
				local cell = rc_list:getCell(j,i)
				if  cell then
					cell:setVisible(false)
				end
			end
		end
	end
end

local function update_from_warehouse_state()
	for i,o in base.pairs(initial_store_state) do
		o.store_amount = 0
	end

	local res 			= base.get_all_available_resource_for_warehouse()
	local aircraftsList = res.aircraft_combined
	local weaponsList   = res.weaponsList

	local statew 	    = requestWarehouseState()

	local update_liquid = function (spin_name,store_amount)
		local rc_name 	 = "LIQUID_" .. base.string.upper(spin_name)
		local ref 		 = get_resource_reference(rc_name)

		ref.store_amount = store_amount

		init_liquid(spin_name)
	end

	update_liquid("jet_fuel"		,statew.jet_fuel)
	update_liquid("gasoline"		,statew.gasoline)
	update_liquid("methanol_mix"	,statew.methanol_mixture)
	update_liquid("diesel"		,statew.diesel)

	if statew.unlimitedAircrafs then
		for i,o in base.pairs(aircraftsList) do
			local ref 		 = get_resource_reference(i)
			ref.store_amount = 1e9
		end
	elseif 	statew.aircrafts then
		for i,o in base.pairs(statew.aircrafts) do
			local ref 		 = get_resource_reference(i)
			ref.store_amount = o.amount
		end
	end
	if statew.unlimitedMunitions then
		for i,o in base.pairs(weaponsList) do
			local ref 		 = get_resource_reference(o.wsTypeStr)
			ref.store_amount = 1e9
		end
	elseif 	statew.weapons then
		for i,o in base.pairs(statew.weapons) do
			local ref 		 = get_resource_reference(i)
			ref.store_amount = o.amount
		end
	end

	update_show_case()
end

function show(state)
	if state and not window then
	   create()
	end
	if	state  then
		update_from_warehouse_state()
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
	stopShowCargoPlacementHint()
end

local function get_row(row )
	if  not window or not rc_list then
		return
	end
	while row >= rc_list:getRowCount() do
		rc_list:insertRow()
	end

	local res_type  = rc_list:getCell(0,row)
	local res_count = rc_list:getCell(1,row)
	local res_diff  = rc_list:getCell(2,row)
	local res_store = rc_list:getCell(3,row)

	if not res_type then
		res_type = window.staticType:clone()
		res_type:setText("")
		rc_list:setCell(0,row,res_type)
	end
	if not res_count then
		res_count 				= window.editCount:clone()
		res_count:setValue(0)
		res_count.onChange = diff_update
		res_count:addChangeCallback(function(self)
			self:onChange()
		end)
		rc_list:setCell(1,row,res_count)
	end
	if not res_diff then
		res_diff = window.staticCell:clone()
		res_count.ref_diff = res_diff
		update_diff(res_count,0)
		rc_list:setCell(2,row,res_diff)
	end
	if not res_store then
		res_store = window.staticCell:clone()
		rc_list:setCell(3,row,res_store)
		res_store:setText("")
	end

	res_type:setVisible(true)
	res_count:setVisible(true)
	res_diff:setVisible(true)
	res_store:setVisible(true)

	return res_type,res_count,res_diff,res_store

end

function update_row(row,rc)
	if  not window or not rc_list then
		return
	end

	local res_type,res_count,res_diff,res_store = get_row(row)

	res_type:setText(rc.display_name or rc.resource)

	update_spin(res_count,res_store,rc)
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

function updateUnitSystem(new_system)
	imperial = new_system and new_system ~= "metric"
	updateWeight(window)
end
