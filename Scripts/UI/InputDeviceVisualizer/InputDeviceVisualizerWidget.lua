local base = _G

module('InputDeviceVisualizerWidget')
mtab = { __index = _M }

local require = base.require
local pairs = base.pairs
local ipairs = base.ipairs

local i18n				= require('i18n')
local Factory           = require('Factory')
local DialogLoader		= require('DialogLoader')
local Static            = require('Static')
local Skin              = require('Skin')
local InputUtils 		= require('Input.Utils')
local UpdateManager	    = require('UpdateManager')

i18n.setup(_M)

local cdata = {
	views = _('InputDeviceVisualizerWidget.Views'),
	devices = _('InputDeviceVisualizerWidget.Devices'),
	autoSetView = _('InputDeviceVisualizerWidget.AutoSetView'),
	autoSetDevice = _('InputDeviceVisualizer.AutoSetDevice'),
}

-------------------------------------------------------------------------------
function new()
  return Factory.create(_M)
end

-------------------------------------------------------------------------------
local function resetData(self)
	self.deviceName = nil
    self.viewName = nil
    self.deviceData = nil
	self.deviceWidget = nil
	if self.reformersWidgets ~= nil then
		for reformerName, wgt in pairs(self.reformersWidgets) do
			wgt:destroy()
		end
	end
	self.reformersWidgets = {}
end

function construct(self)
	local dialog = DialogLoader.spawnDialogFromFile('./Scripts/UI/InputDeviceVisualizer/InputDeviceVisualizerWidget.dlg', cdata)
	self.visualizerWidget = dialog.root
	self.reformerStcSkin = dialog.pNoVisible.reformerStc:getSkin()
	dialog:removeWidget(dialog.root)
	dialog:kill()
	
    resetData(self)
	self.devicesData = {}
	
	local f, err = base.loadfile('./Scripts/UI/InputDeviceVisualizer/DevicesData.lua')
	if f then
		self.devicesData = f()
	end
	
	self.visualizerWidget.topPanel.viewAutoSwitchCheckbox:setState(true)
	self.visualizerWidget.topPanel.deviceAutoSwitchCheckbox:setState(true)
	
	self.visualizerWidget.topPanel.cmbViews.onChange = function(slf, item)
		if item and item.viewName then
			setView(self, item.viewName)
		end
	end
	
	self.visualizerWidget.topPanel.cmbDevices.onChange = function(slf, item)
		if item and item.deviceName then
			setDevice(self, item.deviceName)
		end
	end
	
	onDeviceChange(self)
end

function getWidget(self)
	return self.visualizerWidget
end

function setView(self, viewName)
	if not viewName or not self.deviceWidget or not self.deviceWidget[viewName] then
		return
	end
	
	self.viewName = viewName
	for name, data in pairs(self.deviceData.views) do
		self.deviceWidget[name]:setVisible(false)
		-- лучше ещё пробежаться по всем конечным виджетам и их скрыть, что бы не было ситуации когда какой то виджет остался видимым
	end
	
	self.deviceWidget[self.viewName]:setVisible(true)
	
	for i = 0, self.visualizerWidget.topPanel.cmbViews:getItemCount() - 1 do
		local item = self.visualizerWidget.topPanel.cmbViews:getItem(i)
		if item.viewName == self.viewName then
			self.visualizerWidget.topPanel.cmbViews:selectItem(item)
			break
		end
	end
end

function highlightInput(self, inputsPanelName, inputName, state)
	if not self.deviceWidget or not self.viewName then
		return
	end
	
	local inputWidget = self.deviceWidget[self.viewName][inputsPanelName][inputName]
	if not inputWidget then
		return
	end
	
	inputWidget:setVisible(state)
end

function highlightReformer(self, reformerName, state)
	if state == true then
		if self.reformersWidgets[reformerName] == nil then
			local item = Static.new()
			item:setSkin(self.reformerStcSkin )
			item:setText(reformerName)
			self.visualizerWidget.reformers:insertWidget(item)
			self.reformersWidgets[reformerName] = item
		end
	else
		if self.reformersWidgets[reformerName] ~= nil then
			self.reformersWidgets[reformerName]:destroy()
			self.reformersWidgets[reformerName] = nil
		end
	end
end

function getDevice(self)
	return self.deviceName
end

function setDevice(self, deviceName)
	if self.deviceWidget then
		self.deviceWidget:destroy()
	end
	
	for i = 0, self.visualizerWidget.topPanel.cmbDevices:getItemCount() - 1 do
		local item = self.visualizerWidget.topPanel.cmbDevices:getItem(i)
		if item.deviceName == deviceName then
			self.visualizerWidget.topPanel.cmbDevices:selectItem(item)
			break
		end
	end
	
	resetData(self)
	self.visualizerWidget.topPanel.cmbViews:clear()
	
	if not deviceName then
		self.visualizerWidget.stub:setVisible(true)
		return
	end
	
	self.deviceName = deviceName
	self.deviceData = self.devicesData[deviceName]
	
	if not self.deviceData then
		-- Тут если девайс не описан загрузим потом разметку для генерик устройства, а stub не будем показывать
		self.visualizerWidget.stub:setVisible(true)
		return
	end
	
	self.visualizerWidget.stub:setVisible(false)
	
	local dialog = DialogLoader.spawnDialogFromFile(self.deviceData.dialogPath, cdata)
	self.deviceWidget = dialog.root
	dialog:removeWidget(dialog.root)
	dialog:kill()
	self.visualizerWidget.devicePanel:insertWidget(self.deviceWidget)
	local wV, hV = self.visualizerWidget:getSize()
	local wD, hD = self.deviceWidget:getSize()
	self.deviceWidget:setPosition((wV-wD)/2,(hV-hD)/2)
	
	for name, data in pairs(self.deviceData.views) do
		local comboItem = self.visualizerWidget.topPanel.cmbViews:newItem(_(data))
		comboItem.viewName = name
	end
	
	setView(self, self.deviceData.defaultView)
end

function onInput(self, isAxis, isReformer, inputName, deviceName, state)
	if not self.devicesList[deviceName] then
		return
	end
	
	if self.visualizerWidget.topPanel.deviceAutoSwitchCheckbox:getState() == true and self.deviceName ~= deviceName and isReformer == false and state == true then
		setDevice(self, deviceName)
	elseif self.deviceName ~= deviceName and isReformer == false then
		return
	elseif self.deviceName ~= deviceName and isReformer == true then
		highlightReformer(self, inputName, state)
		return
	end
	
	if self.deviceWidget == nil then
		return
	end
	
	local inputsPanelName = isAxis and "axes" or "buttons"
	if self.visualizerWidget.topPanel.viewAutoSwitchCheckbox:getState() == true and not self.deviceWidget[self.viewName][inputsPanelName][inputName] then
		for name, data in pairs(self.deviceData.views) do
			if self.deviceWidget[name][inputsPanelName][inputName] then
				setView(self, name)
				break
			end
		end
	end
	
	highlightInput(self, inputsPanelName, inputName, state)
end

function onDeviceChange(self)
	local item = self.visualizerWidget.topPanel.cmbDevices:getSelectedItem()
	local selectedName = item and item.deviceName or nil
	local selectedDeviceDisconnected = true
	self.devicesList = {}
	self.visualizerWidget.topPanel.cmbDevices:clear()
	for i, deviceName in ipairs(InputUtils.getDevices()) do
		if deviceName ~= "Mouse" then
			local name = InputUtils.getDeviceTemplateName(deviceName)
			local comboItem = self.visualizerWidget.topPanel.cmbDevices:newItem(_(name))
			comboItem.deviceName = name
			self.devicesList[name] = true
			
			if selectedName == name then
				self.visualizerWidget.topPanel.cmbDevices:selectItem(comboItem)
				selectedDeviceDisconnected = false
			end
		end
	end
	
	if selectedDeviceDisconnected == true then
		local firstItem = self.visualizerWidget.topPanel.cmbDevices:getItem(0) or nil
		if firstItem and firstItem.deviceName then
			setDevice(self, firstItem.deviceName)
		else
			setDevice(self, nil)
		end
	end
end