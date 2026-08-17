

----VARS-----------------------------

Sensor_Data_Raw = get_base_data()	


----FUNCTIONS------------------------

function func_update_sensordata()
	local self_loc_x , own_alt, self_loc_y = Sensor_Data_Raw.getSelfCoordinates()
	Sensor_Data_Mod = 	{
							AoS 			= math.deg(Sensor_Data_Raw.getAngleOfSlide()),		--is in rad
							AoA 			= math.deg(Sensor_Data_Raw.getAngleOfAttack()),		--is in rad?
							
							self_m_x 		= self_loc_x,
							self_m_y 		= self_loc_y,
							self_alt 		= own_alt,
							
							self_balt		= Sensor_Data_Raw.getBarometricAltitude(),
							self_ralt		= Sensor_Data_Raw.getRadarAltitude(),
							
							self_pitch		= math.deg(Sensor_Data_Raw.getPitch()),
							self_bank		= math.deg(Sensor_Data_Raw.getRoll()),
							
							self_head			= math.rad(360)-Sensor_Data_Raw.getHeading(),
							self_head_rad		= math.rad(360)-Sensor_Data_Raw.getHeading(),
							self_head_deg		= -((math.deg(Sensor_Data_Raw.getHeading()))-360),
							
							self_head_wpt_rad	= math.rad((360-(math.deg(Sensor_Data_Raw.getHeading()))) - 0),
							
							self_ias 			= 		   Sensor_Data_Raw.getIndicatedAirSpeed(),
							
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
						}	
	
	Sensor_Data_Param.AoS:set(Sensor_Data_Mod.AoS)
	Sensor_Data_Param.AoA:set(Sensor_Data_Mod.AoA)
	
	Sensor_Data_Param.self_m_x:set(Sensor_Data_Mod.self_m_x)
	Sensor_Data_Param.self_m_y:set(Sensor_Data_Mod.self_m_y)
	Sensor_Data_Param.self_alt:set(Sensor_Data_Mod.self_alt)
	
	Sensor_Data_Param.self_balt:set(Sensor_Data_Mod.self_balt)
	Sensor_Data_Param.self_ralt:set(Sensor_Data_Mod.self_ralt)
	
	Sensor_Data_Param.self_pitch:set(Sensor_Data_Mod.self_pitch)
	Sensor_Data_Param.self_bank:set(Sensor_Data_Mod.self_bank)
	
	--
	
	Sensor_Data_Param.self_head:set(Sensor_Data_Mod.self_head)											
	
	Sensor_Data_Param.self_head_rad:set(Sensor_Data_Mod.self_head_rad)											
	Sensor_Data_Param.self_head_deg:set(Sensor_Data_Mod.self_head_deg)	
	
	Sensor_Data_Param.self_head_wpt_rad:set(Sensor_Data_Mod.self_head_wpt_rad)
		
	Sensor_Data_Param.self_ias:set(Sensor_Data_Mod.self_ias)
	

	--ENGINE STUFF-------------------
	Sensor_Data_Param.eng_r_rpm_rot:set(Sensor_Data_Mod.eng_r_rpm_rot)
	Sensor_Data_Param.eng_r_rpm_text:set(string.format("%.0f",100 * Sensor_Data_Mod.eng_r_rpm_text))

	Sensor_Data_Param.eng_l_rpm_rot:set(Sensor_Data_Mod.eng_l_rpm_rot)
	Sensor_Data_Param.eng_l_rpm_text:set(string.format("%.0f",100 * Sensor_Data_Mod.eng_l_rpm_text))
end
--------

---MORE VARS----------------------------------------------------------------

	
	Sensor_Data_Param =	{
							AoS 		= get_param_handle("MM_AC_AOS"),
							AoA			= get_param_handle("MM_AC_AOA"),
								
							self_m_x 	= get_param_handle("MM_AC_MX"),
							self_m_y 	= get_param_handle("MM_AC_MY"),
							self_alt 	= get_param_handle("MM_AC_ALT"),

							self_balt	= get_param_handle("MM_AC_BALT"),
							self_ralt	= get_param_handle("MM_AC_RALT"),
							
							self_pitch	= get_param_handle("MM_AC_PITCH"),
							self_bank	= get_param_handle("MM_AC_BANK"),
							
							self_head			= get_param_handle("MM_AC_HEAD"),
							self_head_deg		= get_param_handle("MM_AC_HEAD_DEG"),
							self_head_rad		= get_param_handle("MM_AC_HEAD_RAD"),
							self_head_wpt_rad	= get_param_handle("MM_AC_HEAD_WPT_RAD"),
							self_ias 			= get_param_handle("MM_AC_IAS"),
							
							eng_l_fuel_usage	=	get_param_handle("MM_AC_ENG_L_FUEL_USAGE"),
							eng_l_rpm_text		=	get_param_handle("MM_AC_ENG_L_RPM_TEXT"),
							eng_l_temp_text		=	get_param_handle("MM_AC_ENG_L_TEMP_TEXT"),
							
							eng_l_rpm_rot		=	get_param_handle("MM_AC_ENG_L_RPM_ROT"),
							eng_l_temp_rot		=	get_param_handle("MM_AC_ENG_L_TEMP_ROT"),
													
							eng_r_fuel_usage	=	get_param_handle("MM_AC_ENG_R_FUEL_USAGE"),
							eng_r_rpm_text		=	get_param_handle("MM_AC_ENG_R_RPM_TEXT"),
							eng_r_temp_text		=	get_param_handle("MM_AC_ENG_R_TEMP_TEXT"),
							
							eng_r_rpm_rot		=	get_param_handle("MM_AC_ENG_R_RPM_ROT"),
							eng_r_temp_rot		=	get_param_handle("MM_AC_ENG_R_TEMP_ROT"),
						}
-----						
func_update_sensordata()
-----					

------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------

-----------------------
----LIST---------------
LIST_items_sel = 2
LIST_items_dir = "root"
LIST_items_max = 1

LIST_h_vis 			=	get_param_handle("MM_MFD_LIST_VIS")
LIST_h_indi			=	get_param_handle("MM_MFD_LIST_INDI")
LIST_first_item_id	= 0

LIST_items = {}
		for i = 1,22 do
			LIST_items[i] = { 
								text		= "",
								h_text 		= get_param_handle("MM_MFD_LIST_ITEM_" .. i .. "_TEXT"),	--"MM_MFD_LIST_ITEM_1_TEXT"
								--h_stuf		= get_param_handle("MM_MFD_LIST_ITEM_" .. i .. "_stuff"),
								
								full_data = {},
								item_ref	= 	{ 	"",
													"",
													"",
													"",
												},	
							}
			LIST_items[i].h_text:set("")
		end

-----------------------



nav_obj_list = {}


	nav_obj_list = 	{	
						Airports={},
						Farps	={},
					}
	

	---------------------------------------------------------------------------------------------
	

					









------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------

	
	
	
	
	
	