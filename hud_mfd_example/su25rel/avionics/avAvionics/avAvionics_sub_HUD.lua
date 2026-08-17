
	--temp / debug-------
	
	---------------------

	--VARS----------------------------------------------------------
	
		glass_position 			= 0	-- 0 to -10
		glass_position_handle	= get_param_handle("AV_PIT_GLASS")
		
		
		hud_wpt_bear_handle		= get_param_handle("AV_HUD_WPT_BEAR")		--hud_wpt_bear_handle:set()
		hud_wpt_bear_txt_handle	= get_param_handle("AV_HUD_WPT_BEAR_TXT")	--hud_wpt_bear_txt_handle:set()
		
		hud_point_ud_handle		= get_param_handle("AV_HUD_POINT_UD")	--hud_point_ud_handle:set()
		hud_point_lr_handle		= get_param_handle("AV_HUD_POINT_LR")	--hud_point_lr_handle:set()
		
		
		HUD_cur_point = {
							x 	= 0,
							y 	= 0,
							alt = 0,
							typ = "",
							mem	= false,
						}	
	
	--/VARS----------------------------------------------------------

function HUD_post_initialize()

	dev:listen_command(247)		--HUD glass up/down

end
	
function HUD_SetCommand(command,value)
		
		if command == 247 then
			if value > 0 then		--moves down
				if glass_position > -10 then
					glass_position = glass_position - 1
				end
			elseif value < 0 then	--moves up
				if glass_position < 0 then
					glass_position = glass_position + 1
				end
			end	
			glass_position_handle:set(glass_position)
		end
		
end




function HUD_update()
	calc_hud_wpt()

	load_hud_point()
	
	
	
end


--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------



function load_hud_point()

	if TPH_loc[1].x:get() then

		HUD_cur_point = {
							x 	= 	TPH_loc[1].x:get(),
							y 	= 	TPH_loc[1].y:get(),
							alt =	TPH_loc[1].alt:get(),
							typ =	TPH_loc[1].typ:get(),
							mem	=   true
						}	
	end
end


-----------------


function calc_hud_wpt()
	
	if HUD_cur_point.mem then
	else
		hud_point_ud_handle:set(0)
		hud_point_lr_handle:set(0)
		hud_wpt_bear_txt_handle:set(" ")
		return
	end
	
	local f_x_bearing,f_y_curpitch,distance,m_alt,los,v_angle,m_x,m_y = calc_hud_point(	HUD_cur_point.x,
																						HUD_cur_point.y,
																						"meter")
																						
	hud_point_ud_handle:set(f_y_curpitch)
	hud_point_lr_handle:set(f_x_bearing)

		
	if f_x_bearing > 2 then
		
		hud_wpt_bear_txt_handle:set("    >")
		if f_x_bearing > 5 then
			hud_wpt_bear_txt_handle:set("      >>")
		end
		
	elseif f_x_bearing < -2 then
		
		hud_wpt_bear_txt_handle:set("<    ")
		if f_x_bearing < -5 then
			hud_wpt_bear_txt_handle:set("<<      ")
		end
		
	else
		hud_wpt_bear_txt_handle:set(" ")
	end
	
	--print_message_to_user(math.deg(Sensor_Data_Raw.getHeading()) .. "\n" .. Sensor_Data_Mod.self_head_deg .. "\n" .. f_x_bearing)
	
end
















--local f_x_bearing,f_y_curpitch,distance,m_alt,los,v_angle,m_x,m_y = calc_hud_point(mfd_hud_marker[1].x,mfd_hud_marker[1].y,mfd_hud_marker[1].coord_form)
-----------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------
function calc_hud_point(point_x,point_y,coord_form)	--coord_form -meter,seconds,decimal,mgrs


	--local own_x,own_y = get_self_points()
	local own_x = self_loc_x
	local own_y = self_loc_y
	
	if 	point_x == nil or point_y == nil or own_x == nil or own_y == nil then
		return
	end
	local route={}
		route[1]={x=own_x,y=own_y} --pos of plane
		--route[2]={y=631259.0,x=-319866.0}	--the tower debug
------------------------------------------------------------------------------------------------
	--point_x,point_y,coord_form
	local wp_lat, wp_lat_h, wp_lat_m, wp_lat_s
	local wp_long,wp_long_h,wp_long_m,wp_long_s
	
	local wp_lat_point, wp_long_point
	
	if coord_form == "decimal" or coord_form == "seconds" then
	----
		wp_lat_h = tonumber(string.sub(point_x, 1, 2) .. ".")
		wp_lat_m = (tonumber(string.sub(point_x, 3, 4)))/60 
		if coord_form == "seconds" then
			wp_lat_s = (tonumber(string.sub(point_x, 5, 6)))/3600
		elseif coord_form == "decimal" then
			--wp_lat_s = (tonumber("0." ..string.sub(point_x, 5, 6)))*60/3600
			wp_lat_s = (tonumber("0." ..string.sub(point_x, 5, 7)))*60/3600
		end
	wp_lat=wp_lat_h + wp_lat_m +wp_lat_s
		
	----	
		wp_long_h = tonumber(string.sub(point_y, 1, 2) .. ".")
		wp_long_m = (tonumber(string.sub(point_y, 3, 4)))/60 
		if coord_form == "seconds" then
			wp_long_s = (tonumber(string.sub(point_y, 5, 6)))/3600
		elseif coord_form == "decimal" then
			--wp_long_s = (tonumber("0." .. string.sub(point_y, 5, 6)))*60/3600
			wp_long_s = (tonumber("0." .. string.sub(point_y, 5, 7)))*60/3600
		end
	wp_long=wp_long_h + wp_long_m +wp_long_s
	
	----
	wp_lat_point, wp_long_point = Terrain.convertLatLonToMeters(wp_lat, wp_long)
	
	elseif coord_form == "meter" then
		
		wp_lat_point=point_x
		wp_long_point=point_y
		
	elseif coord_form == "mgrs"	then
	
	end


------------------------------------------------------------------------------------------------	
	--wp_lat_point, wp_long_point = Terrain.convertLatLonToMeters(wp_lat, wp_long)
	
	
	route[2]={x=wp_lat_point,y=wp_long_point}	
	
	--print_message_to_user(string.format("point:  [%f]  [%f]",wp_lat_point,wp_long_point))
	--print_message_to_user(string.format("mod:  [%f]  [%f]",wp_lat,wp_long))
	
	local wp_height = math.floor(Terrain.GetHeight(wp_lat_point, wp_long_point) + 0.5)
	
	
	local curheading	=	-((1.0006 * math.deg(Sensor_Data_Raw.getHeading()))-360)
	local curpitch 		=	-(math.deg(Sensor_Data_Raw.getPitch()))
	local curbank 		= 	(math.deg(Sensor_Data_Raw.getRoll()))
	local curbaroalt	= 	Sensor_Data_Mod.self_alt	--Sensor_Data_Raw.getBarometricAltitude()
		
	
		
	local bearing
	local distance
		for index = 1, #route-1, 1 do
		
			local diffX = (route[index + 1].y - route[index].y)
			local diffY = (route[index + 1].x - route[index].x)
			bearing = math.deg(math.atan(diffX / diffY))
			distance=math.sqrt(diffX*diffX + diffY *diffY)

			--bearing = (math.atan(diffX / diffY))
			
			if diffY > 0 and diffX > 0 then 	--west of object
				bearing=  bearing-curheading 
			elseif diffY < 0 and diffX > 0 then --north of object
				bearing=(bearing +180)-curheading
			elseif diffY < 0 and diffX < 0 then	--east of object
				bearing=bearing+180 -curheading													
			elseif diffY > 0 and diffX < 0 then  --south of object
				bearing=bearing +360 -curheading 
			end
		end
		
		
		
		------------------------------------------------------------
		--[[
		local los =""
		for i=0,1 do
				--los = isVisible(route[1].x,curbaroalt,route[1].y,route[2].x,wp_height+2,route[2].y)
				
				if isVisible(route[1].x,curbaroalt+(i*25),route[1].y,route[2].x,wp_height+2,route[2].y) then
					los = los .. "y"
				else
					los = los .. "x"
				end
		end
		]]--
		
		
		------------------------------------------------------------
	--	print_message_to_user(string.format("%.2f",f_viewangel))
			--curpitch,curbank,curheading,bearing
			--p1(bearing/curpitch)
			--p2(f_bearing/f_curpitch)
			
			local f_x_bearing
			local f_y_curpitch
			
			f_viewangel= -(math.deg(math.atan((curbaroalt - wp_height)/distance)))
			curpitch=curpitch+f_viewangel
			
			curbank=curbank*-1	
			--rotating the coordinate system to account for pitch and roll
			f_x_bearing= (bearing*math.cos(math.rad(curbank)))+ (curpitch*math.sin(math.rad(curbank)))
			f_y_curpitch= (-bearing*math.sin(math.rad(curbank)))+ (curpitch*math.cos(math.rad(curbank)))
			
	----
	--f_x_bearing = f_x_bearing * 1.		
	---		
			if f_x_bearing > 180 then
				f_x_bearing=f_x_bearing-360
			elseif f_x_bearing < -180 then
				f_x_bearing=f_x_bearing+360
			end
			
		---------------------------------------------------------------------------
			--hud_marker_left_right_param:set(string.format("%.2f",f_x_bearing))
			--	hud_marker_up_down_param:set(string.format("%.2f",f_y_curpitch))
			
		--	hud_marker_num_param:set(d_wp_num)
			
	
		---------------------------------------------------------------------------
--	print_message_to_user(string.format("%d",d_wp_num))

		--[[
		calc_hud_point(point_x,point_y,coord_form)	--coord_form -meter,seconds,decimal
		hud_marker_left_right_param:set(string.format("%.2f",f_x_bearing))
		hud_marker_up_down_param:set(string.format("%.2f",f_y_curpitch))
		hud_marker_num_param:set(d_wp_num)
		return f_x_bearing,f_y_curpitch
		]]--
		
		--f_viewangel=f_viewangel

	return f_x_bearing,f_y_curpitch,distance,wp_height,los,f_viewangel,wp_lat_point,wp_long_point
	--route[2]={x=wp_lat_point,y=wp_long_point}	
end






	
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

