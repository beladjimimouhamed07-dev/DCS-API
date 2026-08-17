local base = _G

module('RouteTool')
mtab = { __index = _M }

local require				= base.require
local math					= base.math
local pairs					= base.pairs
local ipairs				= base.ipairs
local table					= base.table
local tonumber				= base.tonumber
local print					= base.print
local string				= base.string

local Factory				= require('Factory')
local DialogLoader			= require("DialogLoader")
local i18n					= require('i18n')
local TableUtils			= require('TableUtils')
local U    					= require('me_utilities')
local OptionsData           = require('Options.Data')
local MsgWindow             = require('MsgWindow')
local RouteWPT              = require('route_wpt_wgt')
local Tools					= require('tools')
local lfs					= require('lfs')
local DCS					= require('DCS')
local Input					= require('Input')

local _ = i18n.ptranslate

local cdata = 
{
	waypoint 				= _('WAYPOINT'),
    of 					= _('OF'),
    name 					= _('NAME'),
    type 					= _('TYPE'),
    action 				= _('ACTION'),
	advanced 				= _('ADVANCED (WAYPOINT ACTIONS)'),
    alt 					= _('ALTITUDE'),
	depth					= _('DEPTH'),
    form_templ 			= _('TEMPLATE_route','TEMPLATE'),
    speed 				= _('SPEED'),
    start 				= _('START'),
	eta 					= _('ETA'),
    add 					= _('ADD'),
	insert 				= _('INS'),
    edit 					= _('EDIT'),
    del 					= _('DEL'),
	save					= _('SAVE'),
	delete					= _('DELETE'),
	up 					= _('UP'),
	down 					= _('DOWN'),
    time_hold 			= _('TIME HOLD'),
    land 					= _('Land'),
    pvi_nav_point 		= _('PVI NAVPOINT'),      
	speed_lock 			= '', -- Empty msgid forbidden It is reserved by GNU gettext: gettext("") returns the header entry with meta information, not the empty string.
	ETA_lock 				= '', -- Empty msgid forbidden It is reserved by GNU gettext: gettext("") returns the header entry with meta information, not the empty string.	  
	parking				= _('PRK'),	  
	auto					= _('auto'),
    GS                    = _('GS'),   -- Ground Speed -- путевая скорость
	time					= _('Time:'),
	min					= _('min'),
	Fixtime				= _('Fix time'),
	MachSpeed				= _('MACH'),
	advancedAutoFill		= _('ADVANCED WP AUTO FILL'),
	routePreset			= _('PRESET'),
	newRoute 			= _('New route'),
	enable				= _('USE THIS ROUTE ON NEXT SPAWN'),
	enter_payload_name 	= _('Enter route preset name:'),
	ok					= _('OK'),
	cancel				= _('CANCEL'),
	routePresetTooltip	= _('Choose active preset'),
	saveRouteTooltip	= _('Save current route as preset'),
	delRouteTooltip		= _('Delete currently chosen route preset'),
	enableTooltip		= _('Activate waypoints route from route tool, overriding route that was set in mission'),
	routeTool			= _('Route Tool'),
	
	--tool tips
	waypointCountToolTip  = _('Number of waypoints'),
	waypointNameToolTip	= _('Waypoint name in the Mission Editor / Mission Planner'),
	waypointTypeToolTip	= _('Waypoint type'),
	parkingRampIndexToolTip = _('Index of parking ramp on the airdrome'),
	wptAltitudeToolTip	= _('Required altitude on the way TO the waypoint'),
	wptAltTypeToolTip		= _('Required altitude type: MSL, AGL'),
	wptReqSpeedToolTip	= _('Required speed on the way TO the waypoint'),
	wptEstSpeedToolTip	= _('Estimated speed on the way TO the waypoint'),
	lockSpeedToolTip		= _('Lock the required speed on the way TO the waypoint'),
	timeOnTargetToolTip	= _('Required time of arrival TO the waypoint'),
	lockTimeOnTargetToolTip= _('Lock the required time of arrival TO the waypoint'),
	addWaypointToolTip	= _('Add waypoint after the current waypoint'),
	editWaypointToolTip	= _('Edit current waypoint'),
	deleteWaypointToolTip	= _('Delete current waypoint'),
	wapointActions		= _('Show list of waypoint actions: tasks, commands and behavior options')
}

local instances = {}
local lastDialogIndex = 0
local inputIgnored = false
local routeSubstitutionActive = false

local routes = { Unnamed = {} }
local selectedRouteName = "Unnamed"
local selectedWaypointIndex = 0

local routeToolPresetsPath = lfs.writedir() .. 'Config\\RouteToolPresets\\'

local function loadPresetsForCurrentTheatre()
	local theatre = DCS.getMissionTheatre();
	if theatre == nil then
		return
	end

    local result = Tools.safeDoFile(routeToolPresetsPath..theatre..'.lua', false).presets or {}
	result["Unnamed"] = {}
	TableUtils.copyTable(result["Unnamed"], routes["Unnamed"])
	routes = result
end

local function savePresetsForCurrentTheatre()
	local theatre = DCS.getMissionTheatre();
	if theatre == nil then
		return
	end
	
	local tempTbl = {}
	TableUtils.copyTable(tempTbl, routes)
	tempTbl["Unnamed"] = nil
    U.saveInFile(tempTbl, 'presets', routeToolPresetsPath..theatre..'.lua')
end

local function updateUnitSystem(self)
	local unitSystem = OptionsData.getUnits()
	self.altUnitSpinBox:setUnitSystem(unitSystem)
end

local function validSelectedRouteETA()
	for i, wpt in ipairs(routes[selectedRouteName]) do
		if i > 1 then
			if wpt.ETA < routes[selectedRouteName][i-1].ETA then
				return false
			end
		end
	end
	return true
end

local function setWidgetSkins(widget, invalidSkin)  
    local validSkin = widget:getSkin()
    
    function widget:setValidSkin(valid)
        if valid then
            self:setSkin(validSkin)
        else
            self:setSkin(invalidSkin)
        end
    end
end

local function setIgnoreInput(value)
	if value == true and inputIgnored == false then
		DCS.lockAllKeyboardInput()
		inputIgnored = true
		Input.ignoreUiLayer(true)
	elseif value == false and inputIgnored == true then
		DCS.unlockKeyboardInput()
		inputIgnored = false
		Input.ignoreUiLayer(false)
	end
end

local function createNewNameWindow(self)
	local result = DialogLoader.spawnDialogFromFile('MissionEditor/modules/dialogs/me_loadout_payload_name.dlg', cdata)

	local surfaceId = self.window:getSurfaceId()
    if surfaceId > 0 then
        result:setSurfaceId(surfaceId)
    end

	function result.buttonCancel:onChange()
		result:close()
	end

	result.editBoxName.onFocus = function(editBox, focused)
		setIgnoreInput(focused)
	end

	result.onReturn = function()
		result.buttonOk.onChange()
	end
	
	result:addHotKeyCallback('escape', result.buttonCancel.onChange)
	result:addHotKeyCallback('return', result.onReturn)
	
	return result
end

local function showNewNameWindow(self, name, onOkButtonFunc) --todo
	if not self.newNameWindow then
		self.newNameWindow = createNewNameWindow(self)
	end

	self.newNameWindow.buttonOk.onChange = onOkButtonFunc
	self.newNameWindow.editBoxName:setText(name)

	self.newNameWindow:centerWindow()
	local exit_dialog = require('me_exit_dialog')
	exit_dialog.setNeedHideHandler("newNameWindowRT", self.newNameWindow)
	self.newNameWindow:setVisible(true)
	exit_dialog.setNeedHideHandler("newNameWindowRT", nil)
end

local function onShow(self)
	self.c_routePreset:clear()
    
	local firstItem = self.c_routePreset:newItem("")
	self.c_routePreset:selectItem(firstItem)
    for name, route in pairs(routes) do
		if name ~= "Unnamed" then       
        	self.c_routePreset:newItem(name)
		end
	end

	self.b_delRoute:setEnabled(false)

	if self.onSelectRouteCallback then
		self.onSelectRouteCallback(self.awacsDialog, getSelectedRoute())
	end

	selectWaypoint(self, selectedWaypointIndex)

	self.b_add:setState(#routes[selectedRouteName] == 0)
	self.b_edit:setState(#routes[selectedRouteName] ~= 0)
	self.cb_enable:setState(isRouteSubstitutionActivated())

	if self.onChangeWaypointActionCallback then
		self.onChangeWaypointActionCallback(self.awacsDialog, getWaypointAction(self))
	end

	updateUnitSystem(self)
end

local function onHide(self)

end

local function onSelectWaypoint(self)
	self.sc_wpt:setEnabled(selectedWaypointIndex ~= 0)
	self.e_wptof:setEnabled(selectedWaypointIndex ~= 0)
	self.e_name:setEnabled(selectedWaypointIndex ~= 0)
	self.s_alt:setEnabled(selectedWaypointIndex ~= 0)
	self.c_alt_type:setEnabled(selectedWaypointIndex ~= 0)
	self.ETA_panel:setEnabled(selectedWaypointIndex ~= 0)

	if selectedWaypointIndex == 0 then
		self.sc_wpt:setWPT(0, 0)
		self.e_wptof:setText('')
		self.e_name:setText('')
		self.c_alt_type:selectItem(self.c_alt_type:getItem(0))
		self.altUnitSpinBox:setValue(0)
		self.ETA_panel:setTime(0)
	else
		local waypoint = routes[selectedRouteName][selectedWaypointIndex]
		self.sc_wpt:setWPT(selectedWaypointIndex + 1, #routes[selectedRouteName] + 1, waypoint.name)
		self.sc_wpt.CenterCombo:removeItem(self.sc_wpt.CenterCombo:getItem(0))
		self.e_wptof:setText(#routes[selectedRouteName])
		self.e_name:setText(waypoint.name)
		self.c_alt_type:selectItem(self.c_alt_type:getItem(self.c_alt_type.valuesTbl[waypoint.alt_type].index))
		
		if waypoint.alt_type == "BARO" then
			self.altUnitSpinBox:setRange(U.getAltitude(waypoint.x, waypoint.y), 25000)
		else
            self.altUnitSpinBox:setRange(0, 1200)
        end

		self.altUnitSpinBox:setValue(waypoint.alt)
		self.ETA_panel:setTime(waypoint.ETA)
	end

	self.ETA_panel:setValidSkin(validSelectedRouteETA())
end

local function onChange_cb_enable(self)
	local value = self.cb_enable:getState()
	if value == true then
		if validSelectedRouteETA() == true then
			routeSubstitutionActive = true
		else
			routeSubstitutionActive = false
			self.cb_enable:setState(false)
			MsgWindow.error(_('Some waypoints have incorrect ETA.'),  _('ERROR'), 'OK'):show()
		end
	else
		routeSubstitutionActive = false
	end
end

local function onChange_sc_wpt(self)
	selectWaypoint(self, self.sc_wpt:getCurIndex())
end

local function onChange_e_name(self)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		routes[selectedRouteName][selectedWaypointIndex].name = self.e_name:getText()
	end
end

local function onChange_s_alt(self)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		routes[selectedRouteName][selectedWaypointIndex].alt = tonumber(self.altUnitSpinBox:getValue())
	end
end

local function onChange_c_alt_type(self)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		local wpt = routes[selectedRouteName][selectedWaypointIndex]
		local oldAltType = wpt.alt_type
        local item = self.c_alt_type:getSelectedItem()
		
		wpt.alt_type = item.value or "BARO"

        if 	oldAltType == "RADIO" then		
            if wpt.alt_type == "BARO" then
                local Hrel = U.getAltitude(wpt.x, wpt.y)
                wpt.alt = wpt.alt + Hrel
                local maxAlt = 25000
                wpt.alt = math.max(Hrel + 30, math.min(wpt.alt, maxAlt))
                self.altUnitSpinBox:setRange(Hrel, tonumber(maxAlt))
                self.altUnitSpinBox:setValue(wpt.alt)
            end
        else
            if wpt.alt_type == "RADIO" then		
                local Hrel = U.getAltitude(wpt.x, wpt.y)
                wpt.alt = wpt.alt - Hrel
                wpt.alt = math.max(30, math.min(wpt.alt, 1200))
                self.altUnitSpinBox:setRange(0, 1200)
                self.altUnitSpinBox:setValue(wpt.alt)
            end
        end
	end
end

local function onChange_ETA_panel(self)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		routes[selectedRouteName][selectedWaypointIndex].ETA = self.ETA_panel:getTime()

		self.ETA_panel:setValidSkin(validSelectedRouteETA())
	end
end

local function onChange_c_routePreset(self)
	local item = self.c_routePreset:getSelectedItem()
	self.b_delRoute:setEnabled(item:getText() ~= "")
	selectRoute(self, item:getText())
	selectWaypoint(self, #routes[selectedRouteName] > 0 and 1 or 0)
	self.cb_enable:setState(true)
	onChange_cb_enable(self)
end

local function onChange_b_saveRoute(self)
	local function onSaveAccept()
		self.newNameWindow:setVisible(false)
		local newPresetName = self.newNameWindow.editBoxName:getText()
		routes[newPresetName] = {}
		TableUtils.copyTable(routes[newPresetName], routes[selectedRouteName])

		local selectedItem
		self.c_routePreset:clear()
		self.c_routePreset:newItem("")
    	for name, route in pairs(routes) do
			if name ~= "Unnamed" then       
    	    	local item = self.c_routePreset:newItem(name)
				if name == newPresetName then
					selectedItem = item
				end
			end
		end
		self.c_routePreset:selectItem(selectedItem)
		self.b_delRoute:setEnabled(true)

		selectRoute(self, newPresetName)
		selectWaypoint(self, #routes[selectedRouteName] > 0 and 1 or 0)

		self.cb_enable:setState(true)
		onChange_cb_enable(self)

		savePresetsForCurrentTheatre()
	end	
	
	showNewNameWindow(self, cdata.newRoute, onSaveAccept)
end

local function onChange_b_delRoute(self)
	local item = self.c_routePreset:getSelectedItem()
	local presetName = item:getText()
	if presetName ~= "" then
		routes[presetName] = nil
	end

	self.c_routePreset:clear()
	local firstItem = self.c_routePreset:newItem("")
    for name, route in pairs(routes) do
		if name ~= "Unnamed" then       
        	self.c_routePreset:newItem(name)
		end
	end
	self.c_routePreset:selectItem(firstItem)
	self.b_delRoute:setEnabled(false)

	selectRoute(self, "")
	selectWaypoint(self, 0)

	savePresetsForCurrentTheatre()
end

local function configure_c_alt_type(self)
	local types = { "BARO", "RADIO" }
	self.c_alt_type.valuesTbl = {
		["BARO"] = { index = 0, name = _('MSL       Above Mean Sea Level')},
		["RADIO"] = { index = 1, name = _('AGL       Above Ground Level')},
	}

	self.c_alt_type:clear()
    
    for i, v in ipairs(types) do
		local data = self.c_alt_type.valuesTbl[v]  
        local item = self.c_alt_type:newItem(data.name)
		item.value = v
	end
end

local function create(self)
    self.window = DialogLoader.spawnDialogFromFile("./Scripts/UI/RouteTool/RouteTool.dlg", cdata)
	self.window:setPosition(0, 34)

	self.editBoxInvalidSkin = self.window.editBoxInvalidSkinHolder:getSkin()

	self.sc_wpt = RouteWPT.new()
    
    local con_wpt = self.sc_wpt:create(self.window.scrollP.staticSpinWPTPlaceholder:getBounds())
    self.window.scrollP:insertWidget(con_wpt)
    self.sc_wpt.onChange = function()
		onChange_sc_wpt(self)        
    end

	self.e_wptof = self.window.scrollP.e_wptof

	self.e_name = self.window.scrollP.e_name
	self.e_name.onChange = function()
		onChange_e_name(self)        
    end

	self.e_name:addKeyDownCallback(function(comboBox, keyName, unicode)
		if 'return' == keyName or 'escape' == keyName then
			self.e_name:setFocused(false)
		end
	end)

	self.s_alt = self.window.scrollP.pAlt.s_alt
	self.s_alt.onChange = function()
		onChange_s_alt(self)        
    end

	self.text_alt = self.window.scrollP.pAlt.text_alt	
    self.altUnitSpinBox = U.createUnitSpinBox(self.text_alt, self.s_alt, U.altitudeUnits, self.s_alt:getRange())

	self.c_alt_type = self.window.scrollP.pAlt.c_alt_type
	self.c_alt_type.onChange = function()
		onChange_c_alt_type(self)        
    end

	self.ETA_panel = U.create_time_panel()
    self.ETA_panel:setBounds(self.window.scrollP.pDown.staticETA_PanelPlaceholder:getBounds())
    self.window.scrollP.pDown:insertWidget(self.ETA_panel)
    self.ETA_panel.onChange = function()
		onChange_ETA_panel(self)
    end

	setWidgetSkins(self.ETA_panel.dd, self.editBoxInvalidSkin)
    setWidgetSkins(self.ETA_panel.hh, self.editBoxInvalidSkin)
    setWidgetSkins(self.ETA_panel.mm, self.editBoxInvalidSkin)
    setWidgetSkins(self.ETA_panel.ss, self.editBoxInvalidSkin)

	self.ETA_panel.setValidSkin = function(valid)
        self.ETA_panel.dd:setValidSkin(valid)
        self.ETA_panel.hh:setValidSkin(valid)
        self.ETA_panel.mm:setValidSkin(valid)
        self.ETA_panel.ss:setValidSkin(valid)
    end
    
	self.b_add = self.window.scrollP.pDown.b_add
    self.b_add.onChange = function()
		if self.b_add:getState() == true then
			self.b_edit:setState(false)
		else
			self.b_edit:setState(true)
		end
		
		if self.onChangeWaypointActionCallback then
			self.onChangeWaypointActionCallback(self.awacsDialog, getWaypointAction(self))
		end
    end
    
    self.b_edit = self.window.scrollP.pDown.b_edit
    self.b_edit.onChange = function()
		if self.b_edit:getState() == true then
			self.b_add:setState(false)
		else
			self.b_add:setState(true)
		end

		if self.onChangeWaypointActionCallback then
			self.onChangeWaypointActionCallback(self.awacsDialog, getWaypointAction(self))
		end
    end
    
    self.b_del = self.window.scrollP.pDown.b_del
    self.b_del.onChange = function()
		deleteWaypoint(self)	
    end

	self.c_routePreset = self.window.scrollP.pDown.c_routePreset
	self.c_routePreset.onChange = function()
		onChange_c_routePreset(self)
    end

	self.b_saveRoute = self.window.scrollP.pDown.b_saveRoute
    self.b_saveRoute.onChange = function()
		onChange_b_saveRoute(self)
    end

	self.b_delRoute = self.window.scrollP.pDown.b_delRoute
    self.b_delRoute.onChange = function()
		onChange_b_delRoute(self)
    end

	self.cb_enable = self.window.scrollP.pDown.cb_enable
	self.cb_enable.onChange = function()
		onChange_cb_enable(self)
    end

	--configure_c_type()
	configure_c_alt_type(self)

	function self.e_name:onFocus(focused)
		setIgnoreInput(focused)
	end

	function self.e_wptof:onFocus(focused)
		setIgnoreInput(focused)
	end

	function self.s_alt:onFocus(focused)
		setIgnoreInput(focused)
	end

	function self.ETA_panel.hh:onFocus(focused)
		setIgnoreInput(focused)
	end

	function self.ETA_panel.ss:onFocus(focused)
		setIgnoreInput(focused)
	end	

	function self.ETA_panel.mm:onFocus(focused)
		setIgnoreInput(focused)
	end	

	function self.ETA_panel.dd:onFocus(focused)
		setIgnoreInput(focused)
	end	
end

function addWaypoint(self, mapX, mapY)
	if selectedRouteName and routes[selectedRouteName] then
		local newIndex = 1
		if selectedWaypointIndex then
			newIndex = selectedWaypointIndex + 1
		end
		table.insert(routes[selectedRouteName], newIndex, { x = mapX, y = mapY})

		local waypoint = routes[selectedRouteName][newIndex]
		waypoint.name = ""
		waypoint.ETA_locked = true
		waypoint.speed_locked = false
		if newIndex > 1 then
			local prevWaypoint = routes[selectedRouteName][selectedWaypointIndex]
			waypoint.action = prevWaypoint.action
			waypoint.type = prevWaypoint.type
			waypoint.alt = prevWaypoint.alt
			waypoint.alt_type = prevWaypoint.alt_type

			for i = newIndex, #routes[selectedRouteName] do
				local prevWpt = routes[selectedRouteName][i-1]
				local curWpt = routes[selectedRouteName][i]
				local timeToNextWpt = math.sqrt((prevWpt.x - curWpt.x)^2+(prevWpt.y - curWpt.y)^2) / 70 -- 250 km/h
				curWpt.ETA = prevWpt.ETA + timeToNextWpt
			end
		else
			waypoint.action = "Turning Point"
			waypoint.type = "Turning Point"
			waypoint.alt = 2000
			waypoint.alt_type = "BARO"
			waypoint.ETA = 15*60
		end
		
		if self.onSelectRouteCallback then
			self.onSelectRouteCallback(self.awacsDialog, getSelectedRoute())
		end
		selectWaypoint(self, newIndex)

		self.cb_enable:setState(true)
		onChange_cb_enable(self)
	end
end

function deleteWaypoint(self)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		table.remove(routes[selectedRouteName], selectedWaypointIndex)

		local newIndex = selectedWaypointIndex
		if U.getTableSize(routes[selectedRouteName]) < newIndex then
			newIndex = newIndex - 1
		end
		
		if self.onSelectRouteCallback then
			self.onSelectRouteCallback(self.awacsDialog, getSelectedRoute())
		end
		selectWaypoint(self, newIndex)
	end
end

function moveWaypoint(self, mapX, mapY)
	if selectedRouteName and routes[selectedRouteName] and routes[selectedRouteName][selectedWaypointIndex] then
		local wpt = routes[selectedRouteName][selectedWaypointIndex]
		wpt.x = mapX
		wpt.y = mapY

		local alt = math.max(U.getAltitude(mapX, mapY), wpt.alt)
		
		if wpt.alt_type == "BARO" then
			wpt.alt = alt
		end

		self.altUnitSpinBox:setRange(U.getAltitude(mapX, mapY), 25000)
		self.altUnitSpinBox:setValue(wpt.alt)
	end
end

function selectRoute(self, name)
	routes["Unnamed"] = {}
	if name ~= "" and routes[name] then
		TableUtils.copyTable(routes["Unnamed"], routes[name])
	end

	if self.onSelectRouteCallback then
		self.onSelectRouteCallback(self.awacsDialog, getSelectedRoute())
	end
end

function selectWaypoint(self, index)
	selectedWaypointIndex = index

	self.b_saveRoute:setEnabled(selectedWaypointIndex ~= 0)

	onSelectWaypoint(self)

	if self.onSelectWaypointCallback then
		self.onSelectWaypointCallback(self.awacsDialog, getSelectedWaypointIndex())
	end
end

function getSelectedRoute()
	return selectedRouteName and routes[selectedRouteName] or {}
end

function getSelectedWaypointIndex()
	return selectedWaypointIndex or 0
end

function getWaypointAction(self)
	if self.window == nil then
		return ""	
	end

	if self.b_add:getState() == true then
		return "add"
	elseif self.b_edit:getState() == true then
		return "edit"
	else
		return ""
	end
end

function isRouteSubstitutionActivated()
	return routeSubstitutionActive
end

function isRouteToolActivated(self)
	return self.window and self.window:getVisible() or false
end

function resetRouteToolWaypointsAndActivation()
	routeSubstitutionActive = false
	routes["Unnamed"] = {}
end

function kill(self) --TODO нужно ли?
	self.onSelectRouteCallback = nil
	self.onSelectWaypointCallback = nil
	self.onChangeWaypointActionCallback = nil

	if self.window then
		self.window:destroy()
	end

	self.window = nil

	if self.newNameWindow then
		self.newNameWindow:destroy()
	end

	self.newNameWindow = nil

	--DCS.unlockKeyboardInput(true)
	--Input.ignoreUiLayer(false)

	instances[self.id] = nil
	self = nil

	local dialogsEmpty = true
	for i, dlg in pairs(instances) do
		dialogsEmpty = true
		break
	end
	if dialogsEmpty == true then
		routes = { Unnamed = {} }
		selectedRouteName = "Unnamed"
		selectedWaypointIndex = 0
		routeSubstitutionActive = false
		setIgnoreInput(false)
	end
end

function show(self, b)
	if self.window == nil then
        create(self)
    end

	if b == true then
		onShow(self)
	else
		onHide(self)
	end

    self.window:setVisible(b)
end

function setCallbacks(self, awacsDialog, funcSelectRouteCallback, funcSelectWaypointCallback, funcChangeWaypointActionCallback)
	self.awacsDialog = awacsDialog
	self.onSelectRouteCallback = funcSelectRouteCallback
	self.onSelectWaypointCallback = funcSelectWaypointCallback
	self.onChangeWaypointActionCallback = funcChangeWaypointActionCallback
end


-------------------------------------------------------------------------------
function new()
	return Factory.create(_M)
end

function construct(self)
	self.awacsDialog = nil
	self.onSelectRouteCallback = nil
	self.onSelectWaypointCallback = nil
	self.onChangeWaypointActionCallback = nil

	create(self)
	lfs.mkdir(routeToolPresetsPath)
	loadPresetsForCurrentTheatre()

	lastDialogIndex = lastDialogIndex + 1
	self.id = lastDialogIndex
	instances[self.id] = self
	print(string.format('RouteTool.new: id = %d', self.id))
end

function getInstance(id)
	return instances[id] or nil
end

function getWindow(self)
	if self.window then
		return self.window.widget
	end
	return nil
end

-------------------------------------------------------------------------------