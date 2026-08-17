dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    HUD_HEADING_TWO_DIGITS = get_param_handle("HUD_HEADING_TWO_DIGITS"),
}

function post_initialize()
timer = 1
    parameters.HUD_HEADING_TWO_DIGITS:set(0)
end

function SetCommand(command,value)

end

function update()
    if (timer >= step) then 

        local heading_degrees = math.deg(sensor_data:getMagneticHeading())
        

        if heading_degrees < 0 then
            heading_degrees = heading_degrees + 360
        elseif heading_degrees >= 360 then
            heading_degrees = heading_degrees - 360
        end

        local heading_two_digits = math.floor(heading_degrees / 10)
        
        parameters.HUD_HEADING_TWO_DIGITS:set(heading_two_digits)
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

