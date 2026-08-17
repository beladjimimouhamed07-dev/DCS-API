-- dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_pages_id.lua")

function round_to(value, roundto)
    value = value + roundto/2
    return value - value % roundto
end

ADIdev = GetSelf()
 
update_time_step = 0.02 --update will be called 50 times per second
make_default_activity(update_time_step)

sensor_data = get_base_data()

local ADI_BRIGHT  = get_param_handle("ADI_BRIGHT")
local ADI_MODE  = get_param_handle("ADI_MODE")
 
local adi_rot = get_param_handle("ADI_ROT")
local adi_pitch = get_param_handle("ADI_MOVY")

local CUR_IAS = get_param_handle("CUR_IAS")
local CUR_TAS = get_param_handle("CUR_TAS")

local real_HDG = get_param_handle("REAL_HDG")
local MAGT_HDG = get_param_handle("MAGT_HDG")
 
local ALT_BARO = get_param_handle("ALT_BARO")
local ALT_RDR = get_param_handle("ALT_RDR")

local ADI_MACH = get_param_handle("ADI_MACH")

-- ADIdev:listen_command(adi_commands.BrtKnob) 

local ADI_BRIGHT_val = 1
 
function post_initialize()
 ADI_BRIGHT:set(0)
 ADI_MODE:set(SUB_PAGE_ID.MAIN)
 
	local birth = LockOn_Options.init_conditions.birth_place
	if birth=="GROUND_HOT" or birth=="AIR_HOT" then
		ADI_BRIGHT_val = 1
		ADI_BRIGHT:set(ADI_BRIGHT_val)
	end
 
end

function SetCommand(command, value)
  if track_is_reading() then
        return
    end
--   if command == adi_commands.BrtKnob then
-- 	ADI_BRIGHT_val = value
--  end
end

function update()
	
	--***********
	ADI_BRIGHT:set(ADI_BRIGHT_val)
	--***********
 	adi_rot:set(-sensor_data.getRoll())
    adi_pitch:set(-sensor_data.getPitch())

	local ias_kmh = sensor_data.getIndicatedAirSpeed() -- Vitesse indiquée en km/h
	local ias_kts = ias_kmh * 1.93996 -- Conversion en nœuds
	CUR_IAS:set(ias_kts) -- Définir la vitesse indiquée en nœuds
	
	local tSpeed_kmh = sensor_data.getTrueAirSpeed() -- Vitesse vraie en km/h
	local tSpeed_kts = tSpeed_kmh * 0.53996 -- Conversion en nœuds
	CUR_TAS:set(tSpeed_kts) -- Définir la vitesse vraie en nœuds
	
	local mach_val = sensor_data.getMachNumber() -- Vitesse Mach
	if mach_val >= 0.2 then 
		mach_val = sensor_data.getMachNumber()
	end	
	ADI_MACH:set(mach_val) -- Définir la vitesse vraie en nœuds
	
	-- ***********************
	
	local altitude_m = sensor_data.getBarometricAltitude() -- Altitude barométrique en mètres
	local altitude_ft = altitude_m * 3.048 -- Conversion en pieds
	ALT_BARO:set(altitude_ft)
	
	local radar_altitude_m = sensor_data.getRadarAltitude() -- Altitude radar en mètres
	local radar_altitude_ft = radar_altitude_m * 3.048 -- Conversion en pieds
	ALT_RDR:set(radar_altitude_ft) -- Définir l'altitude radar en pieds
	
	-- ***********************
 	local hdg = math.deg(-sensor_data.getHeading())
    if hdg < 0 then hdg = 360 + hdg end
    hdg = hdg % 360
	real_HDG:set( hdg )
	
	local hdg_m = math.deg(sensor_data.getMagneticHeading())
    if hdg_m < 0 then hdg = 360 + hdg end
    hdg_m = hdg_m % 360
	MAGT_HDG:set( hdg_m )
	
end
 
need_to_be_closed = false -- close lua state after initialization




