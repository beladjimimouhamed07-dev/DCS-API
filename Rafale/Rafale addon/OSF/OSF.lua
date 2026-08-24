dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local update_rate = 0.0166667
make_default_activity(update_rate)
local sensor_data = get_base_data()

local parameters = {
    PITCH_DIFF = get_param_handle("PITCH_DIFF"),
    YAW_DIFF   = get_param_handle("YAW_DIFF"),
}

local DELAY_SECONDS = 1.0
local MAX_RADIANS = 2.0
local delay_frames = math.floor(DELAY_SECONDS / update_rate)

local pitch_buffer = {}
local yaw_buffer = {}
local buffer_index = 1

local function isInvertedFlight()
    local roll = sensor_data.getRoll() or 0
    
    local abs_roll = math.abs(roll)
    
    return abs_roll > math.rad(90) and abs_roll < math.rad(270)
end

local function applyInvertedCorrection(pitch_diff_rad, yaw_diff_rad)
    if isInvertedFlight() then
        pitch_diff_rad = -pitch_diff_rad
    end
    
    return pitch_diff_rad, yaw_diff_rad
end

local function limitMovement(pitch_diff_rad, yaw_diff_rad)
    local radial_distance = math.sqrt(pitch_diff_rad^2 + yaw_diff_rad^2)
    
    if radial_distance > MAX_RADIANS then
        local scale_factor = MAX_RADIANS / radial_distance
        pitch_diff_rad = pitch_diff_rad * scale_factor
        yaw_diff_rad = yaw_diff_rad * scale_factor
    end
    
    return pitch_diff_rad, yaw_diff_rad
end

function post_initialize()
    for i = 1, delay_frames do
        local current_pitch = sensor_data.getPitch() or 0
        local current_yaw = sensor_data.getHeading() or 0
        
        if current_yaw > math.pi then
            current_yaw = current_yaw - 2 * math.pi
        elseif current_yaw < -math.pi then
            current_yaw = current_yaw + 2 * math.pi
        end
        
        pitch_buffer[i] = current_pitch
        yaw_buffer[i] = current_yaw
    end
    
    buffer_index = 1
    
    parameters.PITCH_DIFF:set(0)
    parameters.YAW_DIFF:set(0)
end

function SetCommand(command, value)
end

function update()
    local current_pitch = sensor_data.getPitch() or 0
    local current_yaw = sensor_data.getHeading() or 0
    
    if current_yaw > math.pi then
        current_yaw = current_yaw - 2 * math.pi
    elseif current_yaw < -math.pi then
        current_yaw = current_yaw + 2 * math.pi
    end
    
    local past_index = buffer_index - delay_frames + 1
    if past_index <= 0 then
        past_index = past_index + delay_frames
    end
    
    local past_pitch = pitch_buffer[past_index]
    local past_yaw = yaw_buffer[past_index]
    
    local pitch_diff = current_pitch - past_pitch
    local yaw_diff = current_yaw - past_yaw
    
    local corrected_pitch_diff, corrected_yaw_diff = applyInvertedCorrection(pitch_diff, yaw_diff)
    
    local limited_pitch_diff, limited_yaw_diff = limitMovement(corrected_pitch_diff, corrected_yaw_diff)
    
    parameters.PITCH_DIFF:set(limited_pitch_diff)
    parameters.YAW_DIFF:set(limited_yaw_diff)
    
    pitch_buffer[buffer_index] = current_pitch
    yaw_buffer[buffer_index] = current_yaw
    
    buffer_index = buffer_index + 1
    if buffer_index > delay_frames then
        buffer_index = 1
    end
end

need_to_be_closed = false


