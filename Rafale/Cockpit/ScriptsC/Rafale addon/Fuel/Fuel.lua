dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    HUD_TOTAL_FUEL_KG = get_param_handle("HUD_TOTAL_FUEL_KG"),
}

local hud_vis = true
local timer = 0

function post_initialize()
    parameters.HUD_TOTAL_FUEL_KG:set(0)
end

function SetCommand(command,value)

end

function update()
    if (timer >= step) then
        local fuel_weight_kg = sensor_data:getTotalFuelWeight()
        local fuel_rounded = math.floor(fuel_weight_kg / 10) * 10
        
        parameters.HUD_TOTAL_FUEL_KG:set(fuel_rounded)
        timer = 0
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

