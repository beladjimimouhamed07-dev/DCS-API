dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local hud_vis = true

local parameters = {
    TRAIN_SORTI = get_param_handle("TRAIN_SORTI"), 
}

function post_initialize()
    timer = 1
end

function SetCommand(command,value)

end

function update()
    if (timer >= step) then
        
        local train_gauche_sorti = sensor_data:getLeftMainLandingGearDown()
        
        
        if train_gauche_sorti > 0.5 then  
            parameters.TRAIN_SORTI:set(1) 
        else
            parameters.TRAIN_SORTI:set(0)  
        end
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

