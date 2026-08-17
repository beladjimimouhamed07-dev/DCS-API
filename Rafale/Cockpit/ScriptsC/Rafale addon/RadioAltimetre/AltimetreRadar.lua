dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local rate = 0.006
local step = rate * 1000
make_default_activity(rate) 
local sensor_data = get_base_data()
local antenna_limits = {
    pitch_min = math.rad(-80.0),
    pitch_max = math.rad(80.0),
    roll_min = math.rad(-90.0),
    roll_max = math.rad(90.0)
}

local parameters = {
	RADAR_ALT = get_param_handle("RADAR_ALT"), 
    RADAR_ALTGCAS = get_param_handle("RADAR_ALT2")
}

local hud_vis = true

function post_initialize()

end

function SetCommand(command,value)

end

function update()

    local pitch_rad = sensor_data:getPitch()
    local roll_rad = sensor_data:getRoll()

    local pitch_deg = math.deg(pitch_rad)
    local roll_deg = math.deg(roll_rad)

    if pitch_deg >= -30 and pitch_deg <= 30 and 
       roll_deg >= -45 and roll_deg <= 45 then

        local radar_alt_meters = sensor_data:getRadarAltitude()
        local radar_alt_feet = radar_alt_meters * 3.28084
        
        if radar_alt_feet > 4950 then
            parameters.RADAR_ALT:set(-1) 
            parameters.RADAR_ALTGCAS:set(radar_alt_feet)
        else
            local radar_alt_rounded = math.floor(radar_alt_feet / 10 + 0.5) * 10
            parameters.RADAR_ALT:set(radar_alt_rounded)
            parameters.RADAR_ALTGCAS:set(radar_alt_feet)
        end
    else

        parameters.RADAR_ALT:set(-1)
    end
    
end

need_to_be_closed = false

