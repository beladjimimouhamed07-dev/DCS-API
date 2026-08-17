









Sensor_Data_Raw = get_base_data()	


----FUNCTIONS------------------------

function func_update_sensordata()
	
	
	self_loc_x , own_alt, self_loc_y = Sensor_Data_Raw.getSelfCoordinates()
	
		Sensor_Data_Mod = 	{
							
					AoS 			= math.deg(Sensor_Data_Raw.getAngleOfSlide()),		--is in rad
					AoA 			= math.deg(Sensor_Data_Raw.getAngleOfAttack()),		--is in rad
				-----------------	
					self_m_x 		= self_loc_x,
					self_m_y 		= self_loc_y,
					self_alt 		= own_alt,
					self_speed		= Sensor_Data_Raw.getSelfAirspeed(),
				-----------------						
					self_balt		= Sensor_Data_Raw.getBarometricAltitude(),
					self_ralt		= Sensor_Data_Raw.getRadarAltitude(),
				-----------------	
					self_pitch_deg		= (math.deg(Sensor_Data_Raw.getPitch())),
					self_bank_deg		= (math.deg(Sensor_Data_Raw.getRoll())),
					
					self_pitch_rad		= -math.rad(10) + Sensor_Data_Raw.getPitch(),
					self_bank_rad		= Sensor_Data_Raw.getRoll(),
				-----------------	
					self_head			= math.rad(360)-Sensor_Data_Raw.getHeading(),
					self_head_rad		= math.rad(360)-Sensor_Data_Raw.getHeading(),
					self_head_deg		= -((math.deg(Sensor_Data_Raw.getHeading()))-360),
					
					self_head_wpt_rad	= math.rad((360-(math.deg(Sensor_Data_Raw.getHeading()))) - 0),
				-----------------	
					self_ias 			= (3600 * (Sensor_Data_Raw.getIndicatedAirSpeed())) / 1000,
					true_speed			= Sensor_Data_Raw.getTrueAirSpeed(),
				-----------------	
					vert_acc			=	(Sensor_Data_Raw.getVerticalAcceleration())-1,
					vert_vel			=	Sensor_Data_Raw.getVerticalVelocity(),
					
					hor_acc				=	Sensor_Data_Raw.getHorizontalAcceleration(),
					lat_acc				=	Sensor_Data_Raw.getLateralAcceleration(),
					
					
				--ENGINE STUFF-----------
					eng_l_fuel_usage	=	Sensor_Data_Raw.getEngineLeftFuelConsumption(),
					eng_l_rpm_text		=	Sensor_Data_Raw.getEngineLeftRPM(),
					eng_l_temp_text		=	Sensor_Data_Raw.getEngineLeftTemperatureBeforeTurbine(),
					eng_l_rpm_rot		=	math.rad(180) * (Sensor_Data_Raw.getEngineLeftRPM()),
					eng_l_temp_rot		=	(Sensor_Data_Raw.getEngineLeftTemperatureBeforeTurbine()),
											
					eng_r_fuel_usage	=	Sensor_Data_Raw.getEngineRightFuelConsumption(),
					eng_r_rpm_text		=	Sensor_Data_Raw.getEngineRightRPM(),
					eng_r_temp_text		=	Sensor_Data_Raw.getEngineRightTemperatureBeforeTurbine(),
					eng_r_rpm_rot		=	math.rad(180) * (Sensor_Data_Raw.getEngineRightRPM()),
					eng_r_temp_rot		=	(Sensor_Data_Raw.getEngineRightTemperatureBeforeTurbine()),

					fuel_weight			= 	Sensor_Data_Raw.getTotalFuelWeight(),
					
				--CONTROLLS--------------
					ctrl_stick_pitch_pos= 	Sensor_Data_Raw.getStickPitchPosition(),
					ctrl_stick_bank_pos = 	Sensor_Data_Raw.getStickRollPosition(),
						
		}	
		
	---------------------------------------------------------------------------------------------------			
	--  UPDATE INDICATOR PARAMETERS  ------------------------------------------------------------------
	---------------------------------------------------------------------------------------------------			
		Sensor_Data_Param.AoS:set(Sensor_Data_Mod.AoS)
		Sensor_Data_Param.AoA:set(Sensor_Data_Mod.AoA)
	-----------------	
		Sensor_Data_Param.self_m_x:set(Sensor_Data_Mod.self_m_x)
		Sensor_Data_Param.self_m_y:set(Sensor_Data_Mod.self_m_y)
		Sensor_Data_Param.self_alt:set(Sensor_Data_Mod.self_alt)
		Sensor_Data_Param.self_speed:set(Sensor_Data_Mod.self_speed)
	-----------------	
		Sensor_Data_Param.self_balt:set(Sensor_Data_Mod.self_balt)
		Sensor_Data_Param.self_ralt:set(Sensor_Data_Mod.self_ralt)
	-----------------	
		Sensor_Data_Param.self_pitch_deg:set(Sensor_Data_Mod.self_pitch_deg)
		Sensor_Data_Param.self_bank_deg:set(Sensor_Data_Mod.self_bank_deg)
		
		Sensor_Data_Param.self_pitch_rad:set(Sensor_Data_Mod.self_pitch_rad)
		Sensor_Data_Param.self_bank_rad:set(Sensor_Data_Mod.self_bank_rad)
	-----------------	
		Sensor_Data_Param.self_head:set(Sensor_Data_Mod.self_head)											
		Sensor_Data_Param.self_head_rad:set(Sensor_Data_Mod.self_head_rad)											
		Sensor_Data_Param.self_head_deg:set(Sensor_Data_Mod.self_head_deg)	
		
		Sensor_Data_Param.self_head_wpt_rad:set(Sensor_Data_Mod.self_head_wpt_rad)
	-----------------	
		Sensor_Data_Param.self_ias:set(Sensor_Data_Mod.self_ias)
		Sensor_Data_Param.true_speed:set(Sensor_Data_Mod.true_speed)
	-----------------	
		Sensor_Data_Param.vert_vel:set(Sensor_Data_Mod.vert_vel)
		Sensor_Data_Param.vert_acc:set(Sensor_Data_Mod.vert_acc)
		
		Sensor_Data_Param.hor_acc:set(Sensor_Data_Mod.hor_acc)
		Sensor_Data_Param.lat_acc:set(Sensor_Data_Mod.lat_acc)
		
	-----------------	

	--ENGINE STUFF-------------------
		Sensor_Data_Param.eng_r_rpm_rot:set(Sensor_Data_Mod.eng_r_rpm_rot)
		Sensor_Data_Param.eng_r_rpm_text:set(string.format("%.0f",100 * Sensor_Data_Mod.eng_r_rpm_text))

		Sensor_Data_Param.eng_l_rpm_rot:set(Sensor_Data_Mod.eng_l_rpm_rot)
		Sensor_Data_Param.eng_l_rpm_text:set(string.format("%.0f",100 * Sensor_Data_Mod.eng_l_rpm_text))
	
	--CONTROLLS-------------------
	
	
	--MIXED ALT---------------------
		if Sensor_Data_Mod.self_ralt > 1500 then	--baro
			Sensor_Data_Param.self_malt:set(Sensor_Data_Mod.self_balt)		
			Sensor_Data_Param.self_alt_type:set("B")		
		elseif Sensor_Data_Mod.self_ralt <= 1500 then	--baro	
			Sensor_Data_Param.self_malt:set(Sensor_Data_Mod.self_ralt)		
			Sensor_Data_Param.self_alt_type:set("R")		
		end
	---------------------
	
	end
--------





---PARAMTERS FOR THE HUD/INDICATORS----------------------------------------------------------------
	
	

	
	Sensor_Data_Param =	{
							AoS 		= get_param_handle("AV_AC_AOS"),
							AoA			= get_param_handle("AV_AC_AOA"),
						-----------------		
							self_m_x 	= get_param_handle("AV_AC_MX"),
							self_m_y 	= get_param_handle("AV_AC_MY"),
							self_alt 	= get_param_handle("AV_AC_ALT"),
							self_speed	= get_param_handle("AV_AC_SPEED"),
						-----------------
							self_balt	 = get_param_handle("AV_AC_BALT"),
							self_ralt	 = get_param_handle("AV_AC_RALT"),
						-----------------	
							self_malt	 = get_param_handle("AV_AC_MALT"),		--mixed alt (B or R)
							self_alt_type= get_param_handle("AV_AC_ALT_TYPE"),	--B or R
						-----------------	
							self_pitch_deg	= get_param_handle("AV_AC_PITCH_DEG"),
							self_bank_deg	= get_param_handle("AV_AC_BANK_DEG"),
							
							self_pitch_rad	= get_param_handle("AV_AC_PITCH_RAD"),
							self_bank_rad	= get_param_handle("AV_AC_BANK_RAD"),
						-----------------	
							self_head			= get_param_handle("AV_AC_HEAD"),
							self_head_deg		= get_param_handle("AV_AC_HEAD_DEG"),
							self_head_rad		= get_param_handle("AV_AC_HEAD_RAD"),
							self_head_wpt_rad	= get_param_handle("AV_AC_HEAD_WPT_RAD"),
						-----------------	
							self_ias 			= get_param_handle("AV_AC_IAS"),
							true_speed 			= get_param_handle("AV_AC_TRUESPEED"),
						-----------------
							vert_acc 			= get_param_handle("AV_AC_VA"),
							vert_vel			= get_param_handle("AV_AC_VV"),
							
							hor_acc 			= get_param_handle("AV_AC_HA"),
							lat_acc 			= get_param_handle("AV_AC_LA"),
						-----------------
							eng_l_fuel_usage	=	get_param_handle("AV_AC_ENG_L_FUEL_USAGE"),
							eng_l_rpm_text		=	get_param_handle("AV_AC_ENG_L_RPM_TEXT"),
							eng_l_temp_text		=	get_param_handle("AV_AC_ENG_L_TEMP_TEXT"),
							
							eng_l_rpm_rot		=	get_param_handle("AV_AC_ENG_L_RPM_ROT"),
							eng_l_temp_rot		=	get_param_handle("AV_AC_ENG_L_TEMP_ROT"),
													
							eng_r_fuel_usage	=	get_param_handle("AV_AC_ENG_R_FUEL_USAGE"),
							eng_r_rpm_text		=	get_param_handle("AV_AC_ENG_R_RPM_TEXT"),
							eng_r_temp_text		=	get_param_handle("AV_AC_ENG_R_TEMP_TEXT"),
							
							eng_r_rpm_rot		=	get_param_handle("AV_AC_ENG_R_RPM_ROT"),
							eng_r_temp_rot		=	get_param_handle("AV_AC_ENG_R_TEMP_ROT"),
						-----------------	
							
						}
-----						
