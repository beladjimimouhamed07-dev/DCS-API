dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")
dofile(LockOn_Options.common_script_path..'Radio.lua')
local Dev = GetSelf()
local rate = 0.1 
make_default_activity(rate) 
local gettext = require("i_18n")
_ = gettext.translate

local parameters = {
    COMM1_arg = get_param_handle("COMM1_ANIM"),
    COMM2_arg = get_param_handle("COMM2_ANIM"),
    arc210_1 = get_param_handle("preset1"),
    arc210_2 = get_param_handle("preset2")
}


function post_initialize()
    parameters.arc210_1:set(0)
    parameters.arc210_2:set(0)
    parameters.COMM1_arg:set(0)
    parameters.COMM2_arg:set(0)
end

function SetCommand(command,value)

end


function update()

    local comm1_val = get_cockpit_draw_argument_value(486) 
    local comm2_val = get_cockpit_draw_argument_value(486) 

    parameters.COMM1_arg:set(comm1_val)
    parameters.COMM2_arg:set(comm2_val)
    local arc210_1 = get_aircraft_mission_data("Radio")[1].channels
    parameters.preset1:set(arc210_1)
    local arc210_2 = get_aircraft_mission_data("Radio")[2].channels
    parameters.preset2:set(arc210_2)
end

need_to_be_closed = false

