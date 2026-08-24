dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()

local parameters = {
    HUD_TAS_MASK_POS = get_param_handle("HUD_TAS_MASK_POS"),
    HUD_GX_TRIANGLES_VIS = get_param_handle("HUD_GX_TRIANGLES_VIS"),
    HUD_GX_TRIANGLES_POS = get_param_handle("HUD_GX_TRIANGLES_POS"),
}

local timer = 1
local min_tas_appear = 60 
local min_tas_move = 120    
local max_tas_move = 250 

function post_initialize()
    -- Initialisation
    timer = 1
    parameters.HUD_TAS_MASK_POS:set(0)
    parameters.HUD_GX_TRIANGLES_VIS:set(0)
    parameters.HUD_GX_TRIANGLES_POS:set(0)
end

function SetCommand(command,value)
    -- Pas de commandes spécifiques pour ce device
end

function update()
    if (timer >= step) then

        local tas_kts = sensor_data:getIndicatedAirSpeed() * 1.943844

        local tas_param = math.max(0, math.min(1, tas_kts / 232))
        parameters.HUD_TAS_MASK_POS:set(tas_param)

        local triangles_vis = (tas_kts >= min_tas_appear) and 1 or 0
        parameters.HUD_GX_TRIANGLES_VIS:set(triangles_vis)

        local triangles_pos = 0
        if tas_kts >= min_tas_move then
            triangles_pos = math.max(0, math.min(1, (tas_kts - min_tas_move) / (max_tas_move - min_tas_move)))
        end
        parameters.HUD_GX_TRIANGLES_POS:set(triangles_pos)
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

