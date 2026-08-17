dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    ACCEL_PC = get_param_handle("ACCEL_PC"),
}

local hud_vis = true

function post_initialize()


    timer = 1
    old_AS = 0
    accel = 0
    afterburner_threshold = 0.85
    throttle_threshold = 0.80 
end

function SetCommand(command,value)

end

function update()
    if (timer >= step) then 

        local throttle_left = sensor_data:getThrottleLeftPosition()
        local throttle_right = sensor_data:getThrottleRightPosition()
        

        local throttles_above_threshold = (throttle_left > throttle_threshold) or (throttle_right > throttle_threshold)

        accel = (sensor_data:getTrueAirSpeed() * 1.943844) - old_AS
        if(accel < 0) then
            newaccel = accel * 1.7
            if(newaccel <= -1.0) then
                newaccel = -1.0
            end
        else
            newaccel = accel / 1.3
            if(newaccel >= 1.0) then
                newaccel = 1.0
            end
        end
        
        old_AS = (sensor_data:getTrueAirSpeed() * 1.943844)

        if throttles_above_threshold then
        parameters.ACCEL_PC:set(newaccel) 
        else
        parameters.ACCEL_PC:set(1500000)  
        end
        
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

