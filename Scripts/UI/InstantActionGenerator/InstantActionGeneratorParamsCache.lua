local base = _G

module('InstantActionGeneratorParamsCache')

local require = base.require

local lfs			= require('lfs')
local U				= require('me_utilities')
local Tools			= require('tools')

local cachedGenerationParams = nil
function getCachedGenerationParams()
	return cachedGenerationParams
end

function loadCachedParams()
	if cachedGenerationParams ~= nil then
		return
	end
	
    local result = Tools.safeDoFile(lfs.writedir() .. 'Config/InstantActionGeneratorParams.lua', false) or {}
	cachedGenerationParams = result.cachedGenerationParams or {}
end

function saveCachedParams()
    U.saveInFile(cachedGenerationParams, 'cachedGenerationParams', lfs.writedir() .. 'Config/InstantActionGeneratorParams.lua')	
end

function deleteCachedParams()
	base.os.remove(lfs.writedir() .. 'Config/InstantActionGeneratorParams.lua')
end

loadCachedParams()