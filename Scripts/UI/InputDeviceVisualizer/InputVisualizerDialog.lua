local base = _G

module('InputVisualizerDialog')

local require = base.require
local pairs = base.pairs
local ipairs = base.ipairs

local i18n							= require('i18n')
local DialogLoader					= require('DialogLoader')
local Gui							= require("dxgui")
local Static						= require('Static')
local advGrid						= require('advGrid')
local Input							= require('Input')
local InputData						= require('Input.Data')
local InputLoader					= require('Input.Loader')
local InputUtils 					= require('Input.Utils')
local UpdateManager 				= require('UpdateManager')
local InputDeviceVisualizerWidget	= require('InputDeviceVisualizerWidget')
local DCS							= require('DCS')
local lfs 							= require('lfs')
local Serializer 					= require('Serializer')
local textutil						= require('textutil')
local ProfileDatabase				= require('Input.ProfileDatabase')
local AddComboDialog				= require('Input.AddComboDialog')

i18n.setup(_M)

local layerName_ = "InputVisualizerDialog"
local inputIndexOffset = 99999
local axisThreshold_ = 0.2
local onboardingFilePath = lfs.writedir() .. 'Config/Input/visualizerData.lua'

local onboardingData = { devices = {}, units = {} }
local listeningCombo
local highlightedKeys = {}

local cdata = {
	commandName = _('InputVisualizerDialog.CommandName'),
	inputName = _('InputVisualizerDialog.InputName'),
	ok = _('OK'),
	cancel = _('CANCEL'),
	addCombo = _("Add combo"),
}

-- Input tracking begin

function addInputDeviceKeys(deviceName)
	local deviceKeys	= InputUtils.getDeviceKeysNoModifiers(deviceName, {})
	local eventsToSkip	= InputUtils.getDeviceEventsToSkip(deviceName)
	local deviceId		= Input.getDeviceId(deviceName) 

	for i, deviceKey in ipairs(deviceKeys) do
		local event = deviceKey.event

		if not eventsToSkip[event] then
			local reformers	= nil
			local down		= event + inputIndexOffset
			local pressed	= nil
			local up		= -event - inputIndexOffset
			
			Input.addKeyCombo(layerName_, event, deviceId, reformers, down, pressed, up)
		end
	end
end

function addInputDeviceAxes(deviceName)
	local deviceAxes	= InputUtils.getDeviceAxes(deviceName)
	local eventsToSkip	= InputUtils.getDeviceEventsToSkip(deviceName)
	local deviceId		= Input.getDeviceId(deviceName)

	for i, deviceAxis in ipairs(deviceAxes) do
		local event = deviceAxis.event

		if not eventsToSkip[event] then
			local reformers	= nil
			local action	= event + inputIndexOffset
			local filter	= nil
			
			Input.addAxisCombo(layerName_, event, deviceId, reformers, action, filter)
		end
	end
end

function createInputLayer()
	Input.deleteLayer(layerName_)
	Input.createLayer(layerName_)
	
	for i, deviceName in ipairs(Input.getDevices()) do
		addInputDeviceKeys(deviceName)
		addInputDeviceAxes(deviceName)
	end
	
	Input.setTopLayer(layerName_)
end

function activate()
	createInputLayer()
	Input.addDeviceChangeCallback(onDeviceChange)
	UpdateManager.add(process)
end

function deactivate()
	Input.deleteLayer(layerName_)
	Input.removeDeviceChangeCallback(onDeviceChange)
	UpdateManager.delete(process)
end

function isModifier(key, deviceId)
	local modifier = modifiers[key]
			
	if modifier and modifier.deviceId == deviceId then
		return true
	end
	
	return false
end

function onAxis(actionName, deviceName, value)
	visualizer:onInput(true, actionName, deviceName, base.math.abs(value) > axisThreshold_)
end

function onButtonDown(actionName, deviceName, isReformer)
	visualizer:onInput(false, isReformer, actionName, deviceName, true)
end

function onButtonUp(actionName, deviceName, isReformer)
	visualizer:onInput(false, isReformer, actionName, deviceName, false)
end

function isReformestEqual(reformers1, reformers2)
	-- Reformers must be sorted
	if #reformers1 == #reformers2 then
		for i = 1, #reformers1 do
			if reformers1[i] ~= reformers2[i] then
				return false
			end
		end
		
		return true
	end
	
	return false
end

function findRowIndexInListeningCombo()
	local keyTable = inputInfos[listeningCombo.key]
	if keyTable then		
		local reformers = {}
		if listeningCombo.reformers then
			for actionName, v in pairs(listeningCombo.reformers) do
				if v == true then
					base.table.insert(reformers, actionName)
				end
			end
		end
		
		base.table.sort(reformers, function(name1, name2)	
			return textutil.Utf8Compare(name1, name2)
		end)
		
		for i, data in ipairs(keyTable) do
			if isReformestEqual(data.reformers or {}, reformers or {}) then
				return data.row
			end
		end
	end
	
	return nil
end

function onListeningCombo(inputAction)
	if not selectedProfileName then
		return
	end
	
	listeningCombo = listeningCombo or {}
	local actionName = InputUtils.getDeviceEventName(base.math.abs(inputAction.action) - inputIndexOffset)
	if isModifier(actionName, inputAction.deviceId) then
		listeningCombo.reformers = listeningCombo.reformers or {}
		if inputAction.action > 0 then
			listeningCombo.reformers[actionName] = true
		else
			listeningCombo.reformers[actionName] = nil
		end
	else
		if inputAction.action > 0 then
			listeningCombo.key = actionName
			local row = findRowIndexInListeningCombo()
			if row then
				gridAdv:selectRow(row)
				grid:setRowVisible(row)
			else
				gridAdv:unSelectGrid()
			end
		end
		
		listeningCombo.key = nil
	end
end

function process()
	for i, inputAction in ipairs(Input.getInputActions()) do
		local actionName = InputUtils.getDeviceEventName(base.math.abs(inputAction.action) - inputIndexOffset)
		local deviceName = InputUtils.getDeviceTemplateName(InputUtils.getDeviceNameById(inputAction.deviceId))
		
		if inputAction.hasValue then
			onAxis(actionName, deviceName, inputAction.value)
		else
			onListeningCombo(inputAction)
			
			if inputAction.action < 0 then
				onButtonUp(actionName, deviceName, isModifier(actionName, inputAction.deviceId))
			else
				onButtonDown(actionName, deviceName, isModifier(actionName, inputAction.deviceId))
			end
		end
	end
end

-- Input tracking end
-- Show check / save / load begin

function needShowForDevice(deviceFullName)
	if onboardingData.devices[deviceFullName] == true then
		return false
	else
		return true
	end
end

function needShowForUnit(unitType)
	if onboardingData.units[unitType] == true then
		return false
	else
		return true
	end
end

function loadData()
	if dataWasLoaded == true then
		return
	end
	
	local f, err = base.loadfile(onboardingFilePath)
	if f then
		onboardingData = f()
	else
		for i, deviceName in ipairs(Input.getDevices()) do
			onboardingData.devices[deviceName] = true
		end
		
		saveData()
	end
	
	dataWasLoaded = true
end

local function loadProfiles_()
	local userConfigPath = lfs.writedir() .. 'Config/Input/'
	local sysConfigPath = './Config/Input/'
	
	InputData.initialize(userConfigPath, sysConfigPath)
 
	local profileInfos = ProfileDatabase.createDefaultProfilesSet(sysConfigPath,DCS.getInputProfiles())

	for i, profileInfo in ipairs(profileInfos) do
		InputData.createProfile(profileInfo)
	end
end

function saveData()
	local file, err	= base.io.open(onboardingFilePath, 'w')
	
	if file then
		local s = Serializer.new(file)
		s:serialize_sorted('local result', onboardingData)
		file:write('return result')
		file:close()
	else
		print(string.format('Cannot save onboarding results into file[%s]! Error %s', filename, err))
	end
end

function onDeviceChange()
	if window:isVisible() == true then
		createInputLayer()
		visualizer:onDeviceChange()
		
		for i, deviceName in ipairs(Input.getDevices()) do
			onboardingData.devices[deviceName] = true
		end
		
		saveData()
	end
end

function onActivatePlane(unitType)
	if DCS.isTrackPlaying() == true then
		return
	end
	
	if window == nil then
        create()
    end
	
	if window:isVisible() == true then
		return
	end
	
	loadData()
	loadProfiles_()
	
	if needShowForUnit(unitType) then
		setProfile(InputData.getProfileNameByUnitName(DCS.getInputNameByUnitType(unitType)))
		onboardingData.units[unitType] = true
		for i, deviceName in ipairs(Input.getDevices()) do
			onboardingData.devices[deviceName] = true
		end
		saveData()
		show(true)
	else
		local newDeviceName
		for i, deviceName in ipairs(Input.getDevices()) do
			if not newDeviceName and needShowForDevice(deviceName) then
				newDeviceName = deviceName
			end
			onboardingData.devices[deviceName] = true
		end
		
		if newDeviceName then
			setProfile(InputData.getProfileNameByUnitName(DCS.getInputNameByUnitType(unitType)))
			visualizer:setDevice(InputUtils.getDeviceTemplateName(newDeviceName))
			saveData()
			show(true)
		end
	end
end

-- Show check / save / load end
-- Table filling begin

function getCommandNameIsDuplicated_(commandIndex, commands)
	local nextCommand = commands[commandIndex + 1]
	
	if nextCommand then
		if commands[commandIndex].name == nextCommand.name then
			return true
		end
	end
	
	local prevCommand = commands[commandIndex - 1]
	
	if prevCommand then
		if commands[commandIndex].name == prevCommand.name then
			return true
		end
	end
	
	return false
end

function createRowInfos(commands, isAxisCommands)
	local result = {}
	
	for i, command in ipairs(commands) do
		base.table.insert(result, createRowInfo(command, isAxisCommands, getCommandNameIsDuplicated_(i, commands)))
	end

	return result
end

function createKeyRowInfos(profileName)
	local commands = InputData.getProfileKeyCommands(profileName)
	base.table.sort(commands, function(command1, command2)	
		return textutil.Utf8Compare(command1.name, command2.name)
	end)
	
	return commands--createRowInfos(commands, false)
end

function setProfile(profileName)
	selectedProfileName = profileName
	
	grid:removeAllRows()
	
	createInputLayer()
	
	inputInfos = {}
	modifiers = {}
	if selectedProfileName then
		headerText:setText("VisualizerTest - "..selectedProfileName)
		
		modifiers = InputData.getProfileModifiers(selectedProfileName)
		local commands = createKeyRowInfos(selectedProfileName)
		for i, command in ipairs(commands) do
			grid:insertRow()
			-- Action
			local cellAction = Static.new()
			cellAction:setSkin(gridRowNormalSkin)
			
			local textAction = command.name
			
			cellAction:setText(textAction)
			cellAction:setTooltipText(textAction)
			grid:setCell(0, i - 1, cellAction)
			
			-- Input
			local cellInput = Static.new()
			cellInput:setSkin(gridRowNormalSkin)
			cellInput.command = command
			
			local textInput = command.hash
			
			cellInput:setText(textInput)
			cellInput:setTooltipText(textInput)
			grid:setCell(1, i - 1, cellInput)
			
			for deviceName, combos in pairs(command.combos) do
				for j, combo in ipairs(combos) do
					if combo.valid == true then
						
						if not InputUtils.getSkipDeviceEvent(combo.key, deviceName) then
							local deviceId	= Input.getDeviceId(deviceName)
							inputInfos[combo.key] = inputInfos[combo.key] or {}
							if combo.reformers then
								base.table.sort(combo.reformers, function(name1, name2)	
									return textutil.Utf8Compare(name1, name2)
								end)
							end
							base.table.insert(inputInfos[combo.key], { reformers = combo.reformers, row = i - 1})
						end
					end
				end
			end
		end
	else
		headerText:setText("VisualizerTest")
	end
end

-- Table filling end

function addCombo(self)
	local row = grid:getSelectedRow()
	local selectedCommand
	if row ~= -1 then
		selectedCommand = grid:getCell(1, row).command
	end
	
	if selectedCommand and not selectedCommand.disabled and not selectedCommand.noCommand then

		deactivate()
		
		if not addComboDialog then
			addComboDialog = AddComboDialog.new()
		end
		
		local combo = addComboDialog:show(selectedCommand.name, false--[[isAxisCommands--]], visualizer:getDevice(), selectedProfileName)
		if combo then
			if isAxisCommands then
				InputData.addComboToAxisCommand(profileName, selectedCommand.hash, visualizer:getDevice(), combo)
			else
				InputData.addComboToKeyCommand(profileName, selectedCommand.hash, visualizer:getDevice(), combo)
			end	
		
			setProfile(selectedProfileName)
			-- Обновить комбо данные в данных и в ячейке
			--[[local command
			
			-- комбо могло принадлежать другой команде
			local prevComboCommand
			local prevComboRow, prevComboRowInfo = findComboRow_(self, combo, deviceName)
			
			if isAxisCommands then
				InputData.addComboToAxisCommand(profileName, rowInfo.hash, deviceName, combo)
				command = InputData.getProfileAxisCommand(profileName, rowInfo.hash)
				
				if prevComboRowInfo then
					prevComboCommand = InputData.getProfileAxisCommand(profileName, prevComboRowInfo.hash)
				end
			else
				InputData.addComboToKeyCommand(profileName, rowInfo.hash, deviceName, combo)
				command = InputData.getProfileKeyCommand(profileName, rowInfo.hash)
				
				if prevComboRowInfo then
					prevComboCommand = InputData.getProfileKeyCommand(profileName, prevComboRowInfo.hash)
				end	
			end				
			
			setRowInfoCommand(rowInfo, command)
			updateActiveCell_(self)
			updateActionCell_(rowInfo)
			updateCategoryCell_(rowInfo)
			
			if prevComboCommand then
				setRowInfoCommand(prevComboRowInfo, prevComboCommand)
				
				if prevComboRow then
					updateComboCell_(self, self.activeColumn_, prevComboRow)
					updateActionCell_(prevComboRowInfo)
					updateCategoryCell_(prevComboRowInfo)
				end	
			end
			
			createInputLayer_(self, profileName)--]]
		end

		activate()
	end
end

function onShowManual(profileName, callback)
	if window == nil then
        create()
    end
	
	onOkCallback = callback

	loadData()
	setProfile(profileName)
	for i, deviceName in ipairs(Input.getDevices()) do
		onboardingData.devices[deviceName] = true
	end
	saveData()
	show(true)
end

function create()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/InputDeviceVisualizer/InputVisualizerDialog.dlg", cdata)
	visualizer = InputDeviceVisualizerWidget.new()
	window.root:insertWidget(visualizer:getWidget())
	visualizer:getWidget():setPosition(0, 20)
	
	grid = window.root.grid
	gridRowNormalSkin = window.root.pNoVisible.gridRowNormal:getSkin()
	gridRowHoverSkin = window.root.pNoVisible.gridRowHover:getSkin()
	gridRowSelectSkin = window.root.pNoVisible.gridRowSelect:getSkin()
	
	gridAdv = advGrid.new(grid)
	
	skinsForGrid =
    {
        all = {
            ['func'] = function(a_cell, a_typeSkin)  
				if a_typeSkin == 'normal' then
                    return gridRowNormalSkin
                elseif a_typeSkin == 'select' then
					return gridRowSelectSkin
                else -- hover
					return gridRowHoverSkin        
                end
            
            end
        }
    }
    
    gridAdv:setSkins(skinsForGrid)
	
	grid.onMouseDown = function(self, x, y, button)
        if 1 ~= button then
            return
        end
       
        local col, row = grid:getMouseCursorColumnRow(x, y)

        if -1 < row then			
			local widgetSelected = grid:getCell(1, row)
			
			gridAdv:selectRow(row)
			
			if widgetSelected then
				for deviceName, combos in pairs(widgetSelected.command.combos) do
					if visualizer:getDevice() == InputUtils.getDeviceTemplateName(deviceName) and #combos > 0 then
						for i = #highlightedKeys, 1, -1 do
							visualizer:onInput(false, highlightedKeys[i].isReformer, highlightedKeys[i].key, highlightedKeys[i].deviceName, false)
						end
						highlightedKeys = {}
						local timeVal = base.os.clock()
						base.table.insert(highlightedKeys, {key = combos[1].key, isReformer = false, deviceName = visualizer:getDevice(), startTime = timeVal})
						visualizer:onInput(false, false, combos[1].key, visualizer:getDevice(), true)
						
						if combos[1].reformers then
							for i, reformer in ipairs(combos[1].reformers) do
								base.table.insert(highlightedKeys, {key = reformer, isReformer = true, deviceName = "Keyboard", startTime = timeVal})
								visualizer:onInput(false, true, reformer, "Keyboard", true) -- reformers is keyboard keys
							end
						end
						
						UpdateManager.add(function()
							for i = #highlightedKeys, 1, -1 do
								if (base.os.clock() - highlightedKeys[i].startTime) > 2 then
									visualizer:onInput(false, highlightedKeys[i].isReformer, highlightedKeys[i].key, highlightedKeys[i].deviceName, false)
									base.table.remove(highlightedKeys, i)
								end
							end
							
							if #highlightedKeys < 1 then
								return true
							end
						end)
						
						break
					end
				end
			end
        end        
    end
	
	headerText = window.root.header.text
	
	function window.root.header.close:onChange()
		show(false)
	end
	
	function window.root.panelBottom.buttonBack:onChange()
		show(false)
	end
	
	function window.root.panelBottom.buttonOK:onChange()
		InputData.saveChanges()
		InputLoader.reload()
		
		if onOkCallback then
			onOkCallback()
		end
		
		onOkCallback = nil
		
		show(false)
	end
	
	function window.root.panelBottom.buttonAdd:onChange()
		addCombo()
	end
	
	local w, h = Gui.GetWindowSize()
	local wW, wH = window.root:getSize()
	window:setSize(w, h)
	window.root:setPosition((w -  wW) / 2,(h -  wH) / 2)
end

function show(b)
    if window == nil then
        create()
    end
	
	if b then
		window:centerWindow()
		guiHighSpeedUpdate_ = Gui.IsHighSpeedUpdateEnabled()
		Gui.EnableHighSpeedUpdate(true)
		DCS.lockAllMouseInput() 
		DCS.lockAllKeyboardInput()
		inputIgnoreUiLayer_ = Input.getIgnoreUiLayer()
		Input.ignoreUiLayer(true)
		inputLayerStack_ = Input.getLayerStack()
		Input.clearLayerStack()
		listeningCombo = nil
		activate()
	else
		deactivate()
		DCS.unlockKeyboardInput(true)
        DCS.unlockMouseInput()
		if guiHighSpeedUpdate_ ~= nil then
			Gui.EnableHighSpeedUpdate(guiHighSpeedUpdate_)
			guiHighSpeedUpdate_ = nil
		end
		if inputIgnoreUiLayer_ ~= nil then
			Input.ignoreUiLayer(inputIgnoreUiLayer_)
			inputIgnoreUiLayer_ = nil
		end
		selectedProfileName = nil
		if inputLayerStack_ ~= nil then
			Input.setLayerStack(inputLayerStack_)
			inputLayerStack_ = nil
		end	
    end

	window:setVisible(b) 
end
