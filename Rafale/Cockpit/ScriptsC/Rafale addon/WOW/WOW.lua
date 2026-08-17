dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    WOW_NOSE = get_param_handle("WOW_NOSE"),  
}


local wow_nose_state = 1
local wow_nose_timer = 0
local wow_nose_delay = 30 
function post_initialize()
    timer = 1
end

function SetCommand(command,value)
 
end

function update()
    if (timer >= step) then
      
        local wow_nez = sensor_data:getWOW_NoseLandingGear()
        
      
        if wow_nez > 0.5 then 
            if wow_nose_state == 0 then
                wow_nose_timer = wow_nose_timer + 1
                if wow_nose_timer >= wow_nose_delay then
                    wow_nose_state = 1
                    parameters.WOW_NOSE:set(1)
                    wow_nose_timer = 0
                end
            else
                wow_nose_timer = 0  
                parameters.WOW_NOSE:set(1)
            end
        else 
            if wow_nose_state == 1 then
                wow_nose_timer = wow_nose_timer + 1
                if wow_nose_timer >= wow_nose_delay then
                    wow_nose_state = 0
                    parameters.WOW_NOSE:set(0)
                    wow_nose_timer = 0
                end
            else
                wow_nose_timer = 0  
                parameters.WOW_NOSE:set(0)
            end
        end
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

