dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate)
local sensor_data = get_base_data()

local parameters = {
    HUD_GZ_ACCEL_VALUE = get_param_handle("HUD_GZ_ACCEL_VALUE"),
    HUD_RELEASE_STICK_FLASH = get_param_handle("HUD_RELEASE_STICK_FLASH"),
}

local smoothing_factor = 0.2
local high_g_threshold = 8.0
local low_g_threshold = -1.5
local flash_on_time = 0.1
local flash_off_time = 0.1

local current_gz = 0
local timer = 1
local flash_timer = 0
local flash_on = false
local in_danger_zone = false
local last_danger_zone = false
local flash_active = false

function post_initialize()
    timer = 1
    parameters.HUD_GZ_ACCEL_VALUE:set(0)
    parameters.HUD_RELEASE_STICK_FLASH:set(0)
    current_gz = 0
    flash_timer = 0
    flash_on = true
    flash_active = false
    in_danger_zone = false
    last_danger_zone = false
end

function SetCommand(command,value)
end

function update()
    if (timer >= step) then
        local raw_gz = sensor_data:getVerticalAcceleration()
        
        current_gz = current_gz + (raw_gz - current_gz) * smoothing_factor
        
        local new_in_danger_zone = (current_gz > high_g_threshold) or (current_gz < low_g_threshold)
        
        if new_in_danger_zone then
            flash_timer = flash_timer + rate
            
            if flash_on then
                if flash_timer >= flash_on_time then
                    flash_timer = 0
                    flash_on = false
                    flash_active = false
                    parameters.HUD_RELEASE_STICK_FLASH:set(0)
                else
                    flash_active = true
                    parameters.HUD_RELEASE_STICK_FLASH:set(1)
                end
            else
                if flash_timer >= flash_off_time then
                    flash_timer = 0
                    flash_on = true
                    flash_active = true
                    parameters.HUD_RELEASE_STICK_FLASH:set(1)
                else
                    flash_active = false
                    parameters.HUD_RELEASE_STICK_FLASH:set(0)
                end
            end
        else
            if in_danger_zone then
                parameters.HUD_RELEASE_STICK_FLASH:set(0)
                flash_timer = 0
                flash_on = true
                flash_active = false
            end
        end
        
        if last_danger_zone ~= new_in_danger_zone then
            last_danger_zone = new_in_danger_zone
        end
        
        in_danger_zone = new_in_danger_zone
        
        parameters.HUD_GZ_ACCEL_VALUE:set(current_gz)
        
        timer = 1
    else
        timer = timer + 1
    end
end

need_to_be_closed = false

