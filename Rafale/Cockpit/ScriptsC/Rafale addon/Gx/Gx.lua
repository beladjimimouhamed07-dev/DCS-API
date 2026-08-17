dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.1 
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    HORIZONTAL_ACCEL = get_param_handle("HORIZONTAL_ACCEL_G"),
}

function post_initialize()

    local accel_mps2 = sensor_data:getHorizontalAcceleration()
    local accel_g = accel_mps2 / 9.80665
    local accel_rounded = math.floor(accel_g)
    if accel_g > -0.02 and accel_g < 0.02 then
    parameters.HORIZONTAL_ACCEL:set(0)
    end
    parameters.HORIZONTAL_ACCEL:set(accel_rounded)
end

function SetCommand(command,value)

end

function update()

        local accel_mps2 = sensor_data:getHorizontalAcceleration()
        

        local accel_g = (accel_mps2 / 9.80665)*10

        local accel_rounded = math.floor(accel_g * 1000 + 0.5) / 1000
        if accel_g > -0.02 and accel_g < 0.02 then
        parameters.HORIZONTAL_ACCEL:set(0)
        end

        parameters.HORIZONTAL_ACCEL:set(accel_rounded)
    end

need_to_be_closed = false

