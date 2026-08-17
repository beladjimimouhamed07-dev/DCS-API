




function mm_move_cursor()
	local tmp_lit_up = 0
	local cursor_max_dist = (1 - 0.055 ) * MFD_SCALE
	
	local cursor_md_btn_75 	= 0.78 * MFD_SCALE	--0.75 * MFD_SCALE
	local cursor_md_btn_15 	= 0.15 * MFD_SCALE
	local cursor_md_btn_45 	= 0.45 * MFD_SCALE
	
	
	
	mm_cursor.pos_lr = mm_cursor.pos_lr + mm_cursor.rate_lr
	mm_cursor.pos_ud = mm_cursor.pos_ud + mm_cursor.rate_ud
	
	
	if mm_cursor.pos_ud > cursor_max_dist then
		mm_cursor.pos_ud = cursor_max_dist
	elseif mm_cursor.pos_ud < -cursor_max_dist then
		mm_cursor.pos_ud = -cursor_max_dist
	end
	
	if mm_cursor.pos_lr > cursor_max_dist then
		mm_cursor.pos_lr = cursor_max_dist
	elseif mm_cursor.pos_lr < -cursor_max_dist then
		mm_cursor.pos_lr = -cursor_max_dist
	end
	
	mm_cursor.h_lr:set(mm_cursor.pos_lr)
	mm_cursor.h_ud:set(mm_cursor.pos_ud)
	
	if mm_cursor.rate_lr ~= 0 then
		mm_cursor.rate_lr = mm_cursor.rate_lr * 1.02 --+ (mm_cursor.steps * 0.1)
	end
	if mm_cursor.rate_ud ~= 0 then
		mm_cursor.rate_ud = mm_cursor.rate_ud * 1.02--+ (mm_cursor.steps * 0.1)
	end
	-------------------------------------------------------------------------------------
		if mm_cursor.pos_lr > cursor_md_btn_75 then		--RIGHT COLUM
							
				if mm_cursor.pos_ud < cursor_md_btn_75 and mm_cursor.pos_ud > cursor_md_btn_45  then
					tmp_lit_up = 6
			elseif mm_cursor.pos_ud < cursor_md_btn_45 and mm_cursor.pos_ud > cursor_md_btn_15  then
					tmp_lit_up = 7					
			elseif mm_cursor.pos_ud < cursor_md_btn_15 and mm_cursor.pos_ud > -cursor_md_btn_15  then
					tmp_lit_up = 8
			elseif mm_cursor.pos_ud > -cursor_md_btn_45 and mm_cursor.pos_ud < -cursor_md_btn_15  then
					tmp_lit_up = 9
			elseif mm_cursor.pos_ud > -cursor_md_btn_75 and mm_cursor.pos_ud < -cursor_md_btn_45  then
					tmp_lit_up = 10
			end
			
	elseif mm_cursor.pos_lr < -cursor_md_btn_75 then	--LEFT COLUM
	
				if mm_cursor.pos_ud < cursor_md_btn_75 and mm_cursor.pos_ud > cursor_md_btn_45  then
					tmp_lit_up = 20
			elseif mm_cursor.pos_ud < cursor_md_btn_45 and mm_cursor.pos_ud > cursor_md_btn_15  then
					tmp_lit_up = 19					
			elseif mm_cursor.pos_ud < cursor_md_btn_15 and mm_cursor.pos_ud > -cursor_md_btn_15  then
					tmp_lit_up = 18
			elseif mm_cursor.pos_ud > -cursor_md_btn_45 and mm_cursor.pos_ud < -cursor_md_btn_15  then
					tmp_lit_up = 17
			elseif mm_cursor.pos_ud > -cursor_md_btn_75 and mm_cursor.pos_ud < -cursor_md_btn_45  then
					tmp_lit_up = 16
			end
			
	elseif mm_cursor.pos_ud > cursor_md_btn_75 then		--top row
	
				if mm_cursor.pos_lr < cursor_md_btn_75 and mm_cursor.pos_lr > cursor_md_btn_45  then
					tmp_lit_up = 5
			elseif mm_cursor.pos_lr < cursor_md_btn_45 and mm_cursor.pos_lr > cursor_md_btn_15  then
					tmp_lit_up = 4					
			elseif mm_cursor.pos_lr < cursor_md_btn_15 and mm_cursor.pos_lr > -cursor_md_btn_15  then
					tmp_lit_up = 3
			elseif mm_cursor.pos_lr > -cursor_md_btn_45 and mm_cursor.pos_lr < -cursor_md_btn_15  then
					tmp_lit_up = 2
			elseif mm_cursor.pos_lr > -cursor_md_btn_75 and mm_cursor.pos_lr < -cursor_md_btn_45  then
					tmp_lit_up = 1
			end
	
	elseif mm_cursor.pos_ud < -cursor_md_btn_75 then	--bottom row
	
				if mm_cursor.pos_lr < cursor_md_btn_75 and mm_cursor.pos_lr > cursor_md_btn_45  then
					tmp_lit_up = 11
			elseif mm_cursor.pos_lr < cursor_md_btn_45 and mm_cursor.pos_lr > cursor_md_btn_15  then
					tmp_lit_up = 12					
			elseif mm_cursor.pos_lr < cursor_md_btn_15 and mm_cursor.pos_lr > -cursor_md_btn_15  then
					tmp_lit_up = 13
			elseif mm_cursor.pos_lr > -cursor_md_btn_45 and mm_cursor.pos_lr < -cursor_md_btn_15  then
					tmp_lit_up = 14
			elseif mm_cursor.pos_lr > -cursor_md_btn_75 and mm_cursor.pos_lr < -cursor_md_btn_45  then
					tmp_lit_up = 15
			end
	end
	
	
	
	mm_cursor.active_btn = tmp_lit_up
	
	
		if 	mm_mfd_btn_key_clicked == 0 and mm_mfd_btn_cursor_clicked == 0 and mm_mfd_btn_enter == 1 and mm_cursor.active_btn ~= 0 and  mm_mfd_btn[mm_cursor.active_btn].text.text ~= "" then
			
			-----------------------------------------------------------------------
			mm_mfd_btn_cursor_clicked = mm_cursor.active_btn
			mm_mfd_btn[mm_mfd_btn_cursor_clicked].func_short()
			-----------------------------------------------------------------------
			
	elseif 	mm_mfd_btn_key_clicked == 0 and mm_mfd_btn_cursor_clicked ~= 0 and mm_mfd_btn_enter == 0 then
			mm_mfd_btn_cursor_clicked = 0
	end

	
	
		for i=1,20 do
			
			if 	mm_mfd_btn_key_clicked == 0 and mm_mfd_btn_cursor_clicked == 0 then
			
				if mm_cursor.active_btn == i and mm_mfd_btn_enter == 0 and mm_mfd_btn[i].text.text ~= "" then
					mm_mfd_btn[i].mark.color = 1
					mm_mfd_btn[i].mark.status = 2
					mm_mfd_btn[i].mark.h_color:set(mm_mfd_btn[i].mark.color)
					mm_mfd_btn[i].mark.h_status:set(mm_mfd_btn[i].mark.status)
				
				else
					mm_mfd_btn[i].mark.color = 0
					mm_mfd_btn[i].mark.h_color:set(mm_mfd_btn[i].mark.color)
								
					mm_mfd_btn[i].mark.status = 0
					mm_mfd_btn[i].mark.h_status:set(mm_mfd_btn[i].mark.status)
				
				end
				
			elseif mm_mfd_btn_key_clicked ~= 0 or mm_mfd_btn_cursor_clicked ~= 0 then
			
				if mm_mfd_btn_key_clicked ~= 0 then
					mm_mfd_btn[mm_mfd_btn_key_clicked].mark.color = 0
					mm_mfd_btn[mm_mfd_btn_key_clicked].mark.h_color:set(mm_mfd_btn[mm_mfd_btn_key_clicked].mark.color)
								
					mm_mfd_btn[mm_mfd_btn_key_clicked].mark.status = 1
					mm_mfd_btn[mm_mfd_btn_key_clicked].mark.h_status:set(mm_mfd_btn[mm_mfd_btn_key_clicked].mark.status)
				
				elseif mm_mfd_btn_cursor_clicked ~= 0 then
					mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.color = 0
					mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.h_color:set(mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.color)
								
					mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.status = 1
					mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.h_status:set(mm_mfd_btn[mm_mfd_btn_cursor_clicked].mark.status)
				end
			
			else
			
				mm_mfd_btn[i].mark.color = 0
				mm_mfd_btn[i].mark.h_color:set(mm_mfd_btn[i].mark.color)
								
				mm_mfd_btn[i].mark.status = 0
				mm_mfd_btn[i].mark.h_status:set(mm_mfd_btn[i].mark.status)
			
			end
		
		end	

		
		
end		



function mm_move_list(button)
	
	local tmp_indi_text = 0
	
		if button == "up" then
			if LIST_items_sel > 2 then
				LIST_items_sel = LIST_items_sel - 1
			end
			
	elseif button == "down" then
			if LIST_items_sel < 22 and LIST_items_sel < LIST_items_max then
				LIST_items_sel = LIST_items_sel + 1 
			end
	
	elseif button == "enter" then
		----------------------------------	
			
			if LIST_items_dir == "root" then
				mm_build_list(nav_obj_list,LIST_items[LIST_items_sel].text)
			
			else
				mm_click_list()
				
				mm_mfd_cursor_mode 			= "normal"
				LIST_h_vis:set(0)
				LIST_h_indi:set(0)
			end
	
	elseif button == "cancel" then
		mm_mfd_cursor_mode 			= "normal"
		
		LIST_h_vis:set(0)
		LIST_h_indi:set(0)
	
	end

	
	LIST_h_indi:set((LIST_items_sel - 1) * -0.070)
	
	mm_cursor.pos_lr = -0.67 -- -0.66
	mm_cursor.pos_ud = 0.703 + ((LIST_items_sel - 1) * -0.070)
	mm_cursor.h_lr:set(mm_cursor.pos_lr)
	mm_cursor.h_ud:set(mm_cursor.pos_ud)
	
end

function mm_click_list()

	
	
		WPT_act.x_m = LIST_items[LIST_items_sel].full_data.m_x
		WPT_act.y_m = LIST_items[LIST_items_sel].full_data.m_y
		WPT_act.number = -1
		WPT_act.text = LIST_items[LIST_items_sel].full_data.name
		
		WPT_act.rw_dir = LIST_items[LIST_items_sel].full_data.dir
		
		WPT_act.h_text:set(WPT_act.text)
		
	--[[
	nav_obj_list.Airports[20]	= {			--"              "
									name		= "Vaziani",		-- max 14 chars!!
									m_x			= -319069,		--	-318227,
									m_y			=  903150,		-- 634214,
									mem 		= true,
									text 		= "",
									dir			= 123,
								  }	
	]]--
	

end

function mm_build_list(list_table,directory)

	if mm_mfd_cursor_mode == "normal" then
		mm_mfd_cursor_mode 			= "list_prep"	--"normal"	--"list"
	end
	
	LIST_table_full=list_table
	LIST_items_sel = 2
	LIST_items_max = 1
	LIST_items_dir = directory
	
	
	
	LIST_h_indi:set((LIST_items_sel - 1) * -0.070)
	
	
	for i=1,22 do
		LIST_items[i].text 		= ""
		LIST_items[i].h_text:set(LIST_items[i].text)
		LIST_items[i].full_data	= {}
		
	end
	
	LIST_h_vis:set(1)
	LIST_items[1].h_text:set(LIST_items_dir)
	
	local i=1
	if LIST_items_dir == "root" then
		for key,value in pairs(list_table) do 
			LIST_items[i+1].text = key
			LIST_items[i+1].h_text:set(key)
			i = i +1
		end
	else 
		for key,value in pairs(list_table[LIST_items_dir]) do 
			LIST_items[i+1].text 		= list_table[LIST_items_dir][key].name
			LIST_items[i+1].full_data	= list_table[LIST_items_dir][key]
			LIST_items[i+1].h_text:set(LIST_items[i+1].text)
			i = i +1
			
		end
	end
	
	LIST_items_max = i
	
	mm_cursor.pos_lr = -0.67 -- -0.66
	mm_cursor.pos_ud = 0.703 + ((LIST_items_sel - 1) * -0.070)
	mm_cursor.h_lr:set(mm_cursor.pos_lr)
	mm_cursor.h_ud:set(mm_cursor.pos_ud)
	

end

			


