world.persistenceHandlers = {}

-- world.getPersistenceData(name) -> value

function world.setPersistenceHandler(name, handler)
	local valid = string.match(name, '[a-zA-Z0-9_ %-]+')
	if name == valid then
		world.persistenceHandlers[name] = handler
	else
		error('Invalid name for persistence: "'..name..'"')
	end
end

function world.runPersistenceHandlers(storageFunc)
	for name, handler in pairs(world.persistenceHandlers) do
		storageFunc(name, handler())
	end
end
