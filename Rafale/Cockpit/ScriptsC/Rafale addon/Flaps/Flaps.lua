-- FlapsPosition.lua
dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local step = 0.05
make_default_activity(0.05) 
local sensor_data = get_base_data()
local frame_timer = 0
local FRAME_DELAY = 40  

local parameters = {
    FLAPS_POS = get_param_handle("FLAPS_POS"),
}


local current_flaps_pos = 0  
local target_flaps_pos = 0  
local last_argument_value = 0     
local delay_timer = 0               
local is_delayed = false           


local FLAPS_DELAY = 2.0              

function get_flaps_position_from_argument(arg_value)

    if arg_value <= -0.9 then
        return 2
    elseif arg_value >= -0.1 and arg_value <= 0.1 then
        return 1  
    else
        return 0
    end
end

function post_initialize()

    local flaps_arg_value = get_cockpit_draw_argument_value(234)
    last_argument_value = flaps_arg_value
    

    current_flaps_pos = get_flaps_position_from_argument(flaps_arg_value)
    target_flaps_pos = current_flaps_pos
    

    parameters.FLAPS_POS:set(current_flaps_pos)
end

function SetCommand(command,value)

end

function update()

    local flaps_arg_value = get_cockpit_draw_argument_value(234)
    
    local arg_delta = math.abs(flaps_arg_value - last_argument_value)
    
    if arg_delta > 0.2 then

        local new_target = get_flaps_position_from_argument(flaps_arg_value)
        
        if new_target ~= target_flaps_pos then
    
            target_flaps_pos = new_target
            delay_timer = 0
            is_delayed = true
            last_argument_value = flaps_arg_value

        end
    elseif arg_delta < 0.05 then

        last_argument_value = flaps_arg_value
    end
    
 
        if is_delayed then
        frame_timer = frame_timer + 1
        
        if frame_timer >= FRAME_DELAY then

            current_flaps_pos = target_flaps_pos
            parameters.FLAPS_POS:set(current_flaps_pos)
            is_delayed = false
            frame_timer = 0
        else
            parameters.FLAPS_POS:set(current_flaps_pos)
        end
    else
        if current_flaps_pos ~= target_flaps_pos then
            current_flaps_pos = target_flaps_pos
            parameters.FLAPS_POS:set(current_flaps_pos)
        end
    end
end

need_to_be_closed = false

