local base = _G

module('ManagerDemoScene')

local DemoSceneWidget 	    = base.require('DemoSceneWidget')
local lfs 					= base.require('lfs') 

local dsWidgetByScriptName = {}
local curDirSkins = 'Scripts/DemoScenes'

function newDemoScene(a_scriptName)
	local DSWidget = DemoSceneWidget.new()
	local path = curDirSkins..'/DemoScenes/'..a_scriptName
	
	if lfs.attributes(path) then
		DSWidget:loadScript(path)
	else
		DSWidget:loadScript('Scripts/DemoScenes/'..a_scriptName)
	end
	
	dsWidgetByScriptName[a_scriptName] = dsWidgetByScriptName[a_scriptName] or {}
	base.table.insert(dsWidgetByScriptName[a_scriptName], DSWidget)
	
	return DSWidget
end

function removeWidget(a_DSWidget)
	for k,v in base.pairs(dsWidgetByScriptName) do
		for kk,vv in base.pairs(v) do		
			if vv == a_DSWidget then
				--base.print("--removeWidget--", k, v, kk)
				base.table.remove(dsWidgetByScriptName[k],kk)
				return
			end
		end
	end
end

function setSkin(a_dirSkins)
	curDirSkins = a_dirSkins

--[[  на будующее	 
	-- уведомляем активную демосцену о смене темы
	for scriptName,v in base.pairs(dsWidgetByScriptName) do
		for kk,DSWidget in base.pairs(v) do				
			-- предположительный путь до скрипта в текущей теме
			local path = curDirSkins..'/DemoScenes/'..scriptName
			
			-- проверяем наличие скрипта в теме
			if lfs.attributes(path) then
-- загружаем скрипт из темы модуля
				--DSWidget:loadScript(path)
			else
-- загружаем дефолтный скрипт
				--DSWidget:loadScript('Scripts/DemoScenes/'..scriptName)	
			end			
		end
	end]]
	
	local path_to_script = curDirSkins..'/DemoScenes/sceneVR.lua'
	if lfs.attributes(path_to_script) == nil then
		path_to_script = 'Scripts/DemoScenes/sceneVR.lua'
	end
	base.setMainVRSceneTheme(path_to_script)
end

