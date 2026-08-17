dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local sensor_data = get_base_data()
local update_time_step = 0.0002
make_default_activity(update_time_step)

local parameters = {
    AoA_param = get_param_handle("AoA_param")
}

function post_initialize()

    parameters.AoA_param:set(0)
end

function SetCommand(command,value)

end

function update()

    local aoa_degrees = math.deg(sensor_data:getAngleOfAttack())
    

    aoa_degrees = math.max(-100, math.min(100, aoa_degrees))
    aoa_degrees = math.floor(aoa_degrees * 10 + 0.5) / 10
    

    parameters.AoA_param:set(aoa_degrees)
end

need_to_be_closed = false

