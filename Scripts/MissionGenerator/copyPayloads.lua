local base = _G
local ConfigHelper = require('ConfigHelper')
--local TableUtils	= require('TableUtils')
local loadfile = base.loadfile
local lfs = require('lfs')
local DB = require('me_db_api')

local defaultUnitsPayloads
--local unitPayloadsFilenames


local function recursiveCopyTable(dest, source)
    local _tablesList = {}
    
    function copy(dest, source, tablesList)
        
        for sourceKey, sourceValue in pairs(source) do
            if type(sourceValue) == 'table' then
                if tablesList[sourceValue] == nil then
                    dest[sourceKey] = dest[sourceKey] or {}
                    tablesList[sourceValue] = dest[sourceKey]                    
                    copy(dest[sourceKey], sourceValue, tablesList)
                else
                    dest[sourceKey] = tablesList[sourceValue]
                end
            else
                dest[sourceKey] = sourceValue
            end
        end
    end
    
    copy(dest, source, _tablesList)

end


local function loadUnitPayloads(a_filenames,a_dir)
    if lfs.attributes(a_dir) then
        for filename in lfs.dir(a_dir) do
            if filename ~= '.' and filename ~= '..' then
                a_filenames[filename] = filename
                unitPayloadsPaths[filename] = a_dir..'/'..filename
                --base.print("----unitPayloadsPaths]",filename,unitPayloadsPaths[filename] )  
            end
        end
    end
end

function getUnitPayloadFileNames()
	local filenames = {}
	local unitPayloadsSysFolder = ConfigHelper.getUnitPayloadsSysPath()
    unitPayloadsPaths= {}
      
	--print("----unitPayloadsSysFolder=",unitPayloadsSysFolder,	writeDirUnitPayloads)
    loadUnitPayloads(filenames, unitPayloadsSysFolder) 
    
    for i,plugin in ipairs(base.plugins) do
		if plugin.applied then
            local dir = plugin.dirName.."/UnitPayloads"
            --print("---dir----",dir)
            loadUnitPayloads(filenames,dir) 
        end
    end    
   
	return filenames
end

local function mergeUserPayloads(unitsPayloadsOut)
    local filenames = {}
    local usersUnitsPayload ={}
    local dir = ConfigHelper.getWriteDirUnitPayloads()

    if lfs.attributes(dir) then
        for filename in lfs.dir(dir) do
            if filename ~= '.' and filename ~= '..' then
                local path = dir..'/'..filename
                local f, err = loadfile(path)
                
                if f then
					local ok, res = base.pcall(f)
					if ok then
						local unitPayloads = res
						for k, payload in base.pairs(unitPayloads.payloads) do
							payload.isDefault = false
						end
						local unitType = unitPayloads.unitType or unitPayloads.name
						usersUnitsPayload[unitType] = unitPayloads  
						
						-- fixPayloads
						local unitDef = DB.unit_by_type[unitType]
						if unitDef then
							for k, payload in base.pairs(unitPayloads.payloads) do
								for i = #payload.pylons, 1, -1 do
									local pylon = payload.pylons[i]
									if pylon then										
										if unitDef.Pylons[pylon.num] == nil then 
											base.table.remove(payload.pylons, i)
										end
									end	
								end	
							end
						end
					else
						print('ERROR: mergeUserPayloads() failed to pcall "'..filename..'": '..res)
					end	                               
                else
                    print('Cannot load user payload!',path, err)
                end                
            end
        end
    end
    
    for unitType,userPayload in base.pairs(usersUnitsPayload) do
        local unitPayload = unitsPayloadsOut[unitType]     
        local enableInDB = (DB.unit_by_type[unitType] ~= nil)  
        if unitPayload == nil then
            if enableInDB == true then
                unitPayload = {}
                unitPayload.unitType = unitType
                unitPayload.name = unitType
                unitPayload.tasks = {}
                unitPayload.payloads = {}
                unitsPayloadsOut[unitType] = unitPayload
                local copyPayload = {}
                recursiveCopyTable(copyPayload, unitsPayloadsOut[unitType])
                defaultUnitsPayloads[unitType] = copyPayload
            end
        end
        if enableInDB == true then
            for kk,payloadU in base.pairs(userPayload.payloads) do
                local enable = false
                for k,payloadD in base.pairs(unitPayload.payloads) do
                    if payloadD.name == payloadU.name then
                        unitPayload.payloads[k] = {}
                        recursiveCopyTable(unitPayload.payloads[k], userPayload.payloads[kk])
                        enable = true
                    end
                end
                if enable == false then 
                    local copyPayload ={}
                    recursiveCopyTable(copyPayload, userPayload.payloads[kk])
                    base.table.insert(unitPayload.payloads, copyPayload)
                end
            end 
        end    
    end
end

local function loadPayloads()
	-- загрузка базы данных	
	local filenames = getUnitPayloadFileNames()
	
	defaultUnitsPayloads = {}
    local unitsPayloadsOut = {}
	--unitPayloadsFilenames = {}
    
	for i, filename in pairs(filenames) do

		local path = unitPayloadsPaths[filename]
		local f, err = loadfile(path)
		
		if f then
			local ok, res = base.pcall(f)
			if ok then
				local unitPayloads = res
				for k, payload in base.pairs(unitPayloads.payloads) do
					payload.isDefault = true
				end
				local unitType = unitPayloads.unitType or unitPayloads.name
				defaultUnitsPayloads[unitType] = unitPayloads
				--unitPayloadsFilenames[unitType] = filename
			else
				log.error('ERROR: loadPayloads_() failed to pcall "'..filename..'": '..res)
			end				              
		else
			print('Cannot load payloads!',filename,path, err)
		end
	end
    
    recursiveCopyTable(unitsPayloadsOut, defaultUnitsPayloads)
	
	mergeUserPayloads(unitsPayloadsOut)

	return unitsPayloadsOut
end

unitsPayloads = loadPayloads()