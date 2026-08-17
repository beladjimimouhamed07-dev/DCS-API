local Input				= require('Input')
local InputData			= require('Input.Data')
local InputLoader		= require('Input.Loader')
local ProfileDatabase	= require('Input.ProfileDatabase')
local InputUtils		= require('Input.Utils')
local lfs				= require('lfs')  -- Lua File System
local UpdateManager		= require('UpdateManager')

local profileName_
local inputLayerName_		= 'InputOptionsViewMAC'
local inputInfos_
local inputLayerStack_
local callbackKeys_
local callbackAxes_
local deviceChangeCallback_
local keyUpValueOffset_		= 10000

-- возвращает массив строк с именами устройств
local function getDeviceNames()
	return InputUtils.getDevices()
end

local function getDeviceKeys(deviceName)
	return InputUtils.getDeviceKeys(deviceName)
end

local function getDeviceAxes(deviceName)
	return InputUtils.getDeviceAxes(deviceName)
end

local function  getForceFeedbackAvailable(deviceName)
	local  res = Input.getForceFeedback(deviceName)
	return res ~= nil 
end

local function createInputLayer()
	Input.deleteLayer(inputLayerName_)
	Input.createLayer(inputLayerName_)

	Input.clearReformers(inputLayerName_)

	inputInfos_ = {}

	for i, deviceName in ipairs(InputUtils.getDevices()) do
		local deviceId	= Input.getDeviceId(deviceName)

		for j, keyInfo in ipairs(InputUtils.getDeviceKeys(deviceName)) do
			table.insert(inputInfos_, {name			= keyInfo.name,
										localizedName	= keyInfo.localizedName,
										deviceName		= deviceName,})

			-- для того, чтобы индексы не смешивались с командами симулятора
			-- и с командами слоя для устройств VR сделаем их отрицательными
			local inputInfoIndex	= #inputInfos_
			local down				= -inputInfoIndex
			local pressed			= nil
			local up				= -inputInfoIndex - keyUpValueOffset_

			Input.addKeyCombo(inputLayerName_, keyInfo.event, deviceId, nil, down, pressed, up)
		end

		-- оси мыши передавать не нужно
		if Input.getMouseDeviceTypeName() ~= Input.getDeviceTypeName(deviceName) then
			for j, axisInfo in ipairs(InputUtils.getDeviceAxes(deviceName)) do
				table.insert(inputInfos_, {	name			= axisInfo.name,
											localizedName	= axisInfo.localizedName,
											deviceName		= deviceName,})

				-- для того, чтобы индексы не смешивались с командами симулятора
				-- и с командами слоя для устройств VR сделаем их отрицательными
				local inputInfoIndex	= #inputInfos_
				local action			= -inputInfoIndex

				Input.addAxisCombo(inputLayerName_, axisInfo.event, deviceId, nil, action, nil)
			end
		end
	end
end

local function init()
	if not profileName_ then
		local userConfigPath 	= lfs.writedir() .. 'Config/Input/'
		local sysConfigPath 	= './Config/Input/'

		InputData.initialize(userConfigPath, sysConfigPath)

		local profileInfo = ProfileDatabase.createMacAircraftProfileInfo(sysConfigPath)

		InputData.createProfile(profileInfo)

		profileName_ = profileInfo.name
	end
end

local function filterFromDisabledDevice(commands)
	local dev = InputUtils.getDevices()

	local dev_by_name = {}
	for j,c in pairs(dev) do
		dev_by_name[c]	= true;
	end
	
	for i,o in ipairs(commands) do
		if o.combos then 
			local  combos_change = {}
			for j,c in pairs(o.combos) do
				if dev_by_name[j] then
					combos_change[j] = c
				end
			end
			o.combos = combos_change
		end
	end
	return commands
end

local function getKeyCommands()
	-- возвращает массив команд для кнопок
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'L', reformers = {'LCtrl'}},
		-- {key = 'M', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'Z'},
	-- }
	return filterFromDisabledDevice(InputData.getProfileKeyCommands(profileName_))
end

local function getDefaultKeyCommands()
	-- возвращает массив дефолтных команд для кнопок
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'L', reformers = {'LCtrl'}},
		-- {key = 'M', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'Z'},
	-- }
	return InputData.getDefaultKeyCommands(profileName_)
end

local function getDefaultKeyCommand(commandHash)
	-- возвращает дефолтную команду для кнопок
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'L', reformers = {'LCtrl'}},
		-- {key = 'M', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'Z'},
	-- }
	return InputData.getDefaultKeyCommand(profileName_, commandHash)
end

local function getAxisCommands()
	-- возвращает массив команд для осей
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'JOY_X', reformers = {'LCtrl'}},
		-- {key = 'MOUSE_X', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'JOY_LEFT_TRIGGER'},
	-- }
	-- настройки кривых для осей
	-- command.filters[deviceName] = {
		-- deadzone
		-- saturationX
		-- saturationY
		-- singleCurvature
		-- slider
		-- invert
		-- userCurve
		-- userCurvature
	-- }
	return filterFromDisabledDevice(InputData.getProfileAxisCommands(profileName_))
end

local function getDefaultAxisCommands()
	-- возвращает массив дефолтных команд для осей
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'JOY_X', reformers = {'LCtrl'}},
		-- {key = 'MOUSE_X', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'JOY_LEFT_TRIGGER'},
	-- }
	-- настройки кривых для осей
	-- command.filters[deviceName] = {
		-- deadzone
		-- saturationX
		-- saturationY
		-- singleCurvature
		-- slider
		-- invert
		-- userCurve
		-- userCurvature
	-- }
	return InputData.getDefaultAxisCommands(profileName_)
end

local function getDefaultAxisCommand(commandHash)
	-- возвращает массив команд для осей
	-- формат команды
	-- command.name					= имя
	-- command.hash					= уникальный строковый идентификатор команды
	-- command.valid				= false если команда конфликтует с другими командами
	-- одна команда может содержать несколько комбинаций
	-- command.combos[deviceName] = {
		-- {key = 'JOY_X', reformers = {'LCtrl'}},
		-- {key = 'MOUSE_X', reformers = {'LCtrl', 'LAlt'},
		-- {key = 'JOY_LEFT_TRIGGER'},
	-- }
	-- настройки кривых для осей
	-- command.filters[deviceName] = {
		-- deadzone
		-- saturationX
		-- saturationY
		-- singleCurvature
		-- slider
		-- invert
		-- userCurve
		-- userCurvature
	-- }
	return InputData.getDefaultAxisCommand(profileName_, commandHash)
end

local function onProcessInput()
	-- у нас есть еще все время включенный слой инпута для VR устройств
	-- сюда могут попадать команды от него
	local inputActions = Input.getInputActions()

	for i, inputAction in ipairs(inputActions) do
		local inputInfoIndex	= inputAction.action

		if inputInfoIndex < 0 then
			local keyDown = true

			if inputInfoIndex < -keyUpValueOffset_ then
				keyDown = false
				inputInfoIndex = inputInfoIndex + keyUpValueOffset_
			end

			local inputInfo = inputInfos_[-inputInfoIndex]

			-- эта проверка нужна поскольку при переключении самолета
			-- сюда могут попадать команды джойстика от предыдущего самолета
			if inputInfo then
				if inputAction.hasValue then
					if callbackAxes_ then
						callbackAxes_(inputInfo.name, inputInfo.deviceName, inputAction.value)
					end
				else
					if callbackKeys_ then
						callbackKeys_(inputInfo.name, inputInfo.deviceName, keyDown)
					end
				end
			end
		end
	end

	Input.clearInputActions()
end

local function onDeviceChangeCallback(deviceName, plugged)
	deviceChangeCallback_(deviceName, plugged)
end

local function finishListening()
	if not callbackKeys_ and not callbackAxes_ then
		Gui.EnableHighSpeedUpdate(false)

		Input.ignoreUiLayer(false)

		if inputLayerStack_ then
			Input.setLayerStack(inputLayerStack_)
			inputLayerStack_ = nil
		end

		Input.removeLayerFromStack(inputLayerName_)
		UpdateManager.delete(onProcessInput)
	end
end

local function startListeningKeys(callback)
	callbackKeys_ = callback
	Gui.EnableHighSpeedUpdate(true)

	Input.ignoreUiLayer(true)
	Input.process()

	if not inputLayerStack_ then
		inputLayerStack_ = Input.getLayerStack()
		Input.clearLayerStack()

		Input.setTopLayer(inputLayerName_)
		UpdateManager.add(onProcessInput)
	end
end

local function finishListeningKeys()
	callbackKeys_ = nil
	finishListening()
end

local function startListeningAxes(callback)
	callbackAxes_ = callback
	Gui.EnableHighSpeedUpdate(true)

	Input.ignoreUiLayer(true)
	Input.process()

	if not inputLayerStack_ then
		inputLayerStack_ = Input.getLayerStack()
		Input.clearLayerStack()

		Input.setTopLayer(inputLayerName_)
		UpdateManager.add(onProcessInput)
	end
end

local function finishListeningAxes()
	callbackAxes_ = nil
	finishListening()
end

local function startListeningDevice(callback)
	deviceChangeCallback_ = callback
	Input.addDeviceChangeCallback(callback)
end

local function finishListeningDevice()
	Input.removeDeviceChangeCallback(deviceChangeCallback_)
	deviceChangeCallback_ = nil
end

-- получить настройки ForceFeedback для джойстика deviceName
-- возвращает таблицу
-- {
	-- trimmer	[0; 1]
	-- shake	[0; 1]
	-- swapAxes	bool
	-- invertX	bool
	-- invertY	bool
-- }
local function getForceFeedbackSettings(deviceName)
	local settings = InputData.getProfileForceFeedbackSettings(profileName_, deviceName)

	return settings
end

-- установить настройки ForceFeedback для джойстика deviceName
local function setForceFeedbackSettings(deviceName, settings)
	InputData.setProfileForceFeedbackSettings(profileName_, deviceName, settings)
end

local function applyKeyCommandChanges(commands)
	for i, command in ipairs(commands) do
		local commandHash = command.hash
		for deviceName, combos in pairs(command.combos) do
			InputData.removeKeyCommandCombos(profileName_, commandHash, deviceName)
			for j, combo in ipairs(combos) do
				InputData.addComboToKeyCommand(profileName_, commandHash, deviceName, combo)
			end
		end
	end
end

local function applyAxisCommandChanges(commands)
	-- В МАС команде может быть назначена только 1 комбинация осей
	for i, command in ipairs(commands) do
		local commandHash = command.hash
		for deviceName, combos in pairs(command.combos) do
			InputData.removeAxisCommandCombos(profileName_, commandHash, deviceName)
			for j, combo in ipairs(combos) do
				InputData.addComboToAxisCommand(profileName_, commandHash, deviceName, combo)
			end
		end
	end
end

local function saveChanges(keyCommands, axisCommands)
	if keyCommands then
		applyKeyCommandChanges(keyCommands)
	end

	if axisCommands then
		applyAxisCommandChanges(axisCommands)
	end

	InputData.saveChanges()
end

return {
	init							= init,
	createInputLayer				= createInputLayer,
	getDeviceNames					= getDeviceNames,
	getDeviceKeys 					= getDeviceKeys,
	getDeviceAxes					= getDeviceAxes,
	getKeyCommands					= getKeyCommands,
	getDefaultKeyCommands			= getDefaultKeyCommands,
	getDefaultKeyCommand			= getDefaultKeyCommand,
	getAxisCommands					= getAxisCommands,
	getDefaultAxisCommands			= getDefaultAxisCommands,
	getDefaultAxisCommand			= getDefaultAxisCommand,
	startListeningKeys				= startListeningKeys,
	finishListeningKeys				= finishListeningKeys,
	startListeningAxes				= startListeningAxes,
	finishListeningAxes				= finishListeningAxes,
	startListeningDevice			= startListeningDevice,
	finishListeningDevice			= finishListeningDevice,
	getForceFeedbackSettings		= getForceFeedbackSettings,
	setForceFeedbackSettings		= setForceFeedbackSettings,
	saveChanges						= saveChanges,
	reload							= InputLoader.reloadMac,
	addDeviceChangeCallback			= Input.addDeviceChangeCallback,
	
	getForceFeedbackAvailable 		= getForceFeedbackAvailable,
}
