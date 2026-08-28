----------------------------------------------------------------
-- RAFALE SYSTEMS DEVICE
-- Loads Rafalesystems.dll and drives TV / FLIR via CockpitBase.
----------------------------------------------------------------

dofile(LockOn_Options.script_path .. "devices.lua")
dofile(LockOn_Options.script_path .. "command_defs.lua")

local dev = GetSelf()
make_default_activity(0.05)

local lfs = require("lfs")

local OSF_MODE      = get_param_handle("OSF_MODE")
local OSF_READY     = get_param_handle("OSF_READY")
local OSF_DLL_OK    = get_param_handle("OSF_DLL_OK")
local OSF_CLASS_OK  = get_param_handle("OSF_CLASS_OK")
local OSF_MODE_NAME = get_param_handle("OSF_MODE_NAME")

OSF_MODE:set(2)
OSF_READY:set(0)
OSF_DLL_OK:set(0)
OSF_CLASS_OK:set(0)
OSF_MODE_NAME:set(0)

local systems = nil

local function try_load_dll(path)
    if not path or path == "" then
        return nil
    end
    local opener, err = package.loadlib(path, "luaopen_Rafalesystems")
    if type(opener) ~= "function" then
        return nil, err
    end
    local ok, mod = pcall(opener)
    if ok and type(mod) == "table" then
        return mod
    end
    return nil, mod
end

local function load_systems()
    local candidates = {
        lfs.writedir() .. "Mods/aircraft/Rafale/bin/Rafalesystems.dll",
        LockOn_Options.script_path .. "../../bin/Rafalesystems.dll",
    }

    for i = 1, #candidates do
        local mod = try_load_dll(candidates[i])
        if mod then
            return mod
        end
    end

    return nil
end

local function apply_mode(mode)
    if mode ~= 1 then
        mode = 2
    end

    OSF_MODE:set(mode)
    OSF_MODE_NAME:set(mode)

    if systems then
        if mode == 1 then
            pcall(function() systems.set_flir() end)
        else
            pcall(function() systems.set_tv() end)
        end
    end
end

function post_initialize()
    systems = load_systems()

    if systems then
        OSF_DLL_OK:set(1)
        local available = false
        local class_ok = false
        pcall(function()
            available = systems.available() and true or false
            class_ok = systems.tv_class_resolved() and true or false
        end)
        OSF_READY:set(available and 1 or 0)
        OSF_CLASS_OK:set(class_ok and 1 or 0)
        apply_mode(2)
        pcall(function()
            print_message_to_user("Rafalesystems.dll loaded")
        end)
    else
        OSF_DLL_OK:set(0)
        OSF_READY:set(0)
        pcall(function()
            print_message_to_user("Rafalesystems.dll missing — build Source/Rafalesystems")
        end)
    end

    pcall(function()
        local sensor = GetDevice(devices.OSF_SENSOR)
        if sensor and sensor.set_power then
            sensor:set_power(true)
        end
    end)
end

function SetCommand(command, value)
    if value ~= 1 then
        return
    end

    if command == osf_commands.TV then
        apply_mode(2)
    elseif command == osf_commands.FLIR then
        apply_mode(1)
    elseif command == osf_commands.TOGGLE then
        if OSF_MODE:get() == 1 then
            apply_mode(2)
        else
            apply_mode(1)
        end
    elseif command == osf_commands.ZOOM_IN then
        pcall(function() dispatch_action(nil, iCommandPlaneZoomIn) end)
    elseif command == osf_commands.ZOOM_OUT then
        pcall(function() dispatch_action(nil, iCommandPlaneZoomOut) end)
    end
end

function update()
    if systems and systems.available then
        local ok = false
        pcall(function()
            ok = systems.available() and true or false
        end)
        OSF_READY:set(ok and 1 or 0)
        if ok then
            pcall(function()
                systems.set_mode(OSF_MODE:get())
            end)
        end
    end
end

need_to_be_closed = false
