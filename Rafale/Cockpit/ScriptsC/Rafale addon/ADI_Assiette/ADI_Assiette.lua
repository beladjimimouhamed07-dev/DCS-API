dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.02
make_default_activity(rate)
local sensor_data = get_base_data()

local parameters = {
    HUD_ADI_VISIBILITY = get_param_handle("HUD_ADI_VISIBILITY"),
    HUD_ADI_MASK_POS = get_param_handle("HUD_ADI_MASK_POS"),
    HUD_ADI_MASK_ROT = get_param_handle("HUD_ADI_MASK_ROT"),
    HUD_ADI_ORIENTATION = get_param_handle("HUD_ADI_ORIENTATION"),
}

local timer = 0
local adi_active = false
local adi_timer = 0
local adi_timeout = 5

local pitch_threshold = 30
local roll_threshold = 45

local previous_roll_rad = sensor_data:getRoll()
local continuous_roll_rad = previous_roll_rad
local roll_offset = 0

function post_initialize()
    timer = 0
    adi_active = false
    adi_timer = 0
    roll_offset = 0
    previous_roll_rad = sensor_data:getRoll()
    continuous_roll_rad = previous_roll_rad
    
    parameters.HUD_ADI_VISIBILITY:set(0)
    parameters.HUD_ADI_MASK_POS:set(0)
    parameters.HUD_ADI_MASK_ROT:set(0)
    parameters.HUD_ADI_ORIENTATION:set(1)
end

function SetCommand(command,value)
end

function update()
    timer = timer + 1
    
    if timer >= 2 then
        local pitch_rad = sensor_data:getPitch()
        local roll_rad = sensor_data:getRoll()
        
        local pitch_deg = math.deg(pitch_rad)
        local roll_deg = math.deg(roll_rad)
        
        local roll_deg_normalized = roll_deg % 360
        if roll_deg_normalized < 0 then
            roll_deg_normalized = roll_deg_normalized + 360
        end
        
        local orientation = 1
        if roll_deg_normalized >= 180 and roll_deg_normalized < 360 then
            orientation = -1
        end
        
        parameters.HUD_ADI_ORIENTATION:set(orientation)
        
        local pitch_exceeded = math.abs(pitch_deg) > pitch_threshold
        local roll_exceeded = math.abs(roll_deg) > roll_threshold
        local should_be_active = pitch_exceeded or roll_exceeded
        
        if should_be_active then
            adi_active = true
            adi_timer = 0
        elseif adi_active then
            adi_timer = adi_timer + (2 * rate)
            
            if adi_timer >= adi_timeout then
                adi_active = false
                adi_timer = 0
            end
        end
        
        parameters.HUD_ADI_VISIBILITY:set(adi_active and 1 or 0)
        parameters.HUD_ADI_MASK_POS:set(pitch_rad)
        parameters.HUD_ADI_MASK_ROT:set(roll_rad)
        
        timer = 0
    end
end

need_to_be_closed = false

