--print_message_to_user()


function bmap_open_directory()

			clean_directory()
			
		--------------------------------------
			mm_mfd_btn[6].text.text 	= "+   \nSCL"
			mm_mfd_btn[6].func_short 	= bmap_change_range_up
			mm_mfd_btn[6].func_long		= nothing
			
			mm_mfd_btn[7].text.text 	= "-   \nSCL"
			mm_mfd_btn[7].func_short 	= bmap_change_range_down
			mm_mfd_btn[7].func_long		= nothing
			
			mm_mfd_btn[8].text.text 	= ""
			mm_mfd_btn[8].func_short 	= nothing
			mm_mfd_btn[8].func_long		= nothing
			
			mm_mfd_btn[9].text.text 	= "NEXT\nWPT"
			mm_mfd_btn[9].func_short 	= bmap_change_wpt_next
			mm_mfd_btn[9].func_long		= nothing
			
			mm_mfd_btn[10].text.text 	= "PREV\nWPT"
			mm_mfd_btn[10].func_short 	= bmap_change_wpt_prev
			mm_mfd_btn[10].func_long	= nothing
		
		--------------------------------------
			
		--------------------------------------
		
			mm_mfd_btn[20].text.text 	= "NAVP\nLIST"
			mm_mfd_btn[20].func_short 	= bmap_open_nav_list
			mm_mfd_btn[20].func_long	= nothing
		
		--------------------------------------
		
		
		----------------------------------------------------------------------------
		----------------------------------------------------------------------------
		mm_mfd_btn[12].text.text 	= "BMAP"
		mm_mfd_btn[12].func_short 	= nothing
		mm_mfd_btn[12].func_long	= nothing
		
		mm_mfd_btn[12].text.status 	= 1
		------------------------------------------------------------------
		manage_directorys()
		mm_mfd_cur_page = "BMAP"
		mm_mfd_pagedata.bmap_page_handle:set(1)
		mm_mfd_pagedata.bmap_page_scale_handle:set(mm_bmap_range_text)

end

debug_param			= get_param_handle("DEBUG")
debug_param_1		= get_param_handle("DEBUG_1")
debug_param_2		= get_param_handle("DEBUG_2")


------------------------------------------------------------------

function mm_update_wpt()

		for i=1,9 do
			if WPT_data[i].mem == true then
				local tmp_x = (WPT_data[i].m_x - Sensor_Data_Mod.self_m_x )
				local tmp_y = (WPT_data[i].m_y - Sensor_Data_Mod.self_m_y)

				tmp_x_r = (tmp_x / mm_bmap_scale) / mm_bmap_range
				tmp_y_r = (tmp_y / mm_bmap_scale) / mm_bmap_range
				
				WPT_data[i].h_m_x:set(tmp_x_r)
				WPT_data[i].h_m_y:set(tmp_y_r)
				WPT_data[i].h_vis:set(1)
				WPT_data[i].h_color:set(0)
				
				
				
				if WPT_act.number == i then
				
					update_wpt_line(WPT_data[i].m_x,WPT_data[i].m_y)
					
					WPT_act.text= "Waypoint " .. i
					WPT_act.h_text:set(WPT_act.text)
				
				end
				
				
				
			else

				WPT_data[i].h_vis:set(0)
				
			end
		end
	
	
	
	if WPT_act.number < 0 then		--object
	
		update_wpt_line(WPT_act.x_m,WPT_act.y_m)
		WPT_act.h_text:set(WPT_act.text)
		
		if WPT_act.rw_dir > -999 then
			 WPT_act.h_rwdir_rot:set(-(math.rad((WPT_act.rw_dir))))
			 WPT_act.h_rwdir_vis:set(1)
		else
			 WPT_act.h_rwdir_vis:set(0)
		end
		
	end
	
	if WPT_act.number == 0 then		--none selected
	
		WPT_act.h_vis:set(0)

		WPT_act.h_dist:set("DIST nowpt")
		WPT_act.h_text:set("no wpt")
	
	end
	
end


function update_wpt_line(wpt_x,wpt_y)

		if not wpt_x then 
			wpt_x = WPT_act.x_m
		end
		
		if not wpt_y then 
			wpt_y = WPT_act.y_m
		end
		
		local tmp_bearing = calc_bearing(wpt_x,wpt_y,Sensor_Data_Mod.self_m_x,Sensor_Data_Mod.self_m_y)
		
			local tmp_x = (wpt_x - Sensor_Data_Mod.self_m_x )
			local tmp_y = (wpt_y - Sensor_Data_Mod.self_m_y)
		
		local tmp_dist = (tmp_x)^2 + (tmp_y)^2
			  tmp_dist = math.sqrt(tmp_dist)
		local tmp_dist_mfd = (tmp_dist / 10000) / mm_bmap_range
		
		WPT_act.h_len:set(tmp_dist_mfd)
		WPT_act.h_rot:set(math.rad(tmp_bearing))
		WPT_act.h_vis:set(1)

		WPT_act.h_dist:set(string.format("DIST  %.1f km",tmp_dist/1000)  )
		
		
		TPH_loc[1].x:set(wpt_x)
		TPH_loc[1].y:set(wpt_y)
		TPH_loc[1].alt:set(0)
		TPH_loc[1].typ:set("")
		
		
		
end



function bmap_change_range_up()
	bmap_change_range("up")
end

function bmap_change_range_down()
	bmap_change_range("down")
end

function bmap_change_range(updown)


	if mm_bmap_range == 5 then		
			
			if updown == "up" then
				mm_bmap_range = 10
			elseif updown == "down" then
				mm_bmap_range = 5
			end
	elseif mm_bmap_range == 10 then		
			
			if updown == "up" then
				mm_bmap_range = 25
			elseif updown == "down" then
				mm_bmap_range = 5
			end
	
	elseif mm_bmap_range == 25 then		
			
			if updown == "up" then
				mm_bmap_range = 50
			elseif updown == "down" then
				mm_bmap_range = 10
			end
	elseif mm_bmap_range == 50 then		
			
			if updown == "up" then
				mm_bmap_range = 100
			elseif updown == "down" then
				mm_bmap_range = 25
			end
	elseif mm_bmap_range == 100 then		
			
			if updown == "up" then
				mm_bmap_range = 100
			elseif updown == "down" then
				mm_bmap_range = 50
			end
	end
	
		
		if mm_bmap_range < 1 then
			mm_bmap_range_text 	= string.format("%d m" ,mm_bmap_range*1000)
		else
			mm_bmap_range_text 	= mm_bmap_range .. " km"
		end
	
		mm_mfd_pagedata.bmap_page_scale_handle:set(mm_bmap_range_text)

end


function bmap_change_wpt_next()
	bmap_change_wpt("next")
end


function bmap_change_wpt_prev()
	bmap_change_wpt("prev")
end


function bmap_change_wpt(nextprev)
	
	if WPT_act.number < 0 then
		WPT_act.number = 0
	end

	if nextprev == "next" then
	
		if WPT_data[WPT_act.number + 1].mem == true and WPT_act.number < 9 then
			WPT_act.number = WPT_act.number  + 1
	
		else 
			
		end
	
	elseif nextprev == "prev" then
	
		if WPT_data[WPT_act.number - 1].mem == true and WPT_act.number > 1 then
			WPT_act.number = WPT_act.number  - 1
		
		else 
	
		end
		
	end
	
	mm_mfd_btn[6].text.h_text:set(mm_mfd_btn[6].text.text)

end




function bmap_open_nav_list()
	
	mm_build_list(nav_obj_list,"root")
	
end




