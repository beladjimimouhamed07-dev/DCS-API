





function load_wpts_from_mission()

local tmp_mission_route = get_mission_route()


	for i = 2, #tmp_mission_route do
		
		WPT_data[i-1].m_x	= tmp_mission_route[i]["x"]
		WPT_data[i-1].m_y	= tmp_mission_route[i]["y"]
		WPT_data[i-1].alt	= tmp_mission_route[i]["alt"]
		WPT_data[i-1].mem = true
		--[[
		WPT_data[i] = 	{
						m_x	= tmp_mission_route[i]["x"],			
						m_y	= tmp_mission_route[i]["y"],			
						mem = true,			
					}
					]]--

	end

end




------------------------------------------------------------------------------------------------------


	
function calc_bearing(mrk_loc_x,mrk_loc_y,self_loc_x,self_loc_y)
--local curheading=-((math.deg(sensor_data.getHeading()))-360)
			local diffX = mrk_loc_y - self_loc_y
			local diffY = mrk_loc_x - self_loc_x
			local bearing = math.deg(math.atan(diffX / diffY))
			local distance=math.sqrt(diffX*diffX + diffY *diffY)

			--bearing = (math.atan(diffX / diffY))
			
			if diffY > 0 and diffX > 0 then 	--west of object
				bearing=  bearing - Sensor_Data_Mod.self_head_deg
			elseif diffY < 0 and diffX > 0 then --north of object
				bearing=(bearing +180) - Sensor_Data_Mod.self_head_deg
			elseif diffY < 0 and diffX < 0 then	--east of object
				bearing=bearing+180 - Sensor_Data_Mod.self_head_deg													
			elseif diffY > 0 and diffX < 0 then  --south of object
				bearing=bearing +360 - Sensor_Data_Mod.self_head_deg
			end

			return bearing

end




------------------------------------------------------------------------------------------------------




--[[

mp_data[2] = {}

tmp_data[2]["y"] = 640508.57142859
tmp_data[2]["x"] = -317135.71428572

tmp_data[2]["alt"] = 609.6





WPT_data 	= 	{}			
	for i = 1,9 do
		WPT_data[i] = 	{
						m_x	= 0,			
						m_y	= 0,			
						mem = false,
						text = "",
						
						h_m_x	= get_param_handle("MM_MFD_WPT_" .. i .. "_UD"),
						h_m_y	= get_param_handle("MM_MFD_WPT_" .. i .. "_LR"),
						h_vis	= get_param_handle("MM_MFD_WPT_" .. i .. "_VIS"),
						h_rot	= get_param_handle("MM_MFD_WPT_" .. i .. "_ROT"),
						h_color	= get_param_handle("MM_MFD_WPT_" .. i .. "_COLOR"),
					}	
					
		WPT_data[i].h_m_x:set(0)
		WPT_data[i].h_m_y:set(0)
		WPT_data[i].h_vis:set(0)
		WPT_data[i].h_rot:set(0)
		WPT_data[i].h_color:set(0)
	
	
	end




]]--