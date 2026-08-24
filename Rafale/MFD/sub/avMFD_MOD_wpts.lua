

------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------
WPT_data 	= 	{}			
	for i = 1,9 do
		WPT_data[i] = 	{
						m_x	= 0,			
						m_y	= 0,			
						alt	= 0,
						mem = false,
						text = "",
						
						h_m_x	= get_param_handle("MM_MFD_WPT_" .. i .. "_UD"),
						h_m_y	= get_param_handle("MM_MFD_WPT_" .. i .. "_LR"),
						h_alt	= get_param_handle("MM_MFD_WPT_" .. i .. "_ALT"),
						h_vis	= get_param_handle("MM_MFD_WPT_" .. i .. "_VIS"),
						h_rot	= get_param_handle("MM_MFD_WPT_" .. i .. "_ROT"),
						h_color	= get_param_handle("MM_MFD_WPT_" .. i .. "_COLOR"),
					}	
					
		WPT_data[i].h_m_x:set(0)
		WPT_data[i].h_m_y:set(0)
		WPT_data[i].h_alt:set(0)
		WPT_data[i].h_vis:set(0)
		WPT_data[i].h_rot:set(0)
		WPT_data[i].h_color:set(0)
	
	
	end

	
	
------------------------------------------------------------------------------------------	
------------------------------------------------------------------------------------------	
------------------------------------------------------------------------------------------	
	
	
WPT_act = {}					
	WPT_act = {
					text	= "",
					number	= 1,
					x_m		= 0,
					y_m		= 0,
					rw_dir	= -999,
					
					h_rot 	= get_param_handle("MM_MFD_WPT_LINE_ROT"),
					h_len   = get_param_handle("MM_MFD_WPT_LINE_LEN"),
					h_vis	= get_param_handle("MM_MFD_WPT_LINE_VIS"),
					
					h_dist	= get_param_handle("MM_MFD_ACT_WPT_DIST"),
					h_text	= get_param_handle("MM_MFD_ACT_WPT_TEXT"),
					
					h_rwdir_rot 	= get_param_handle("MM_MFD_WPT_RWDIR_ROT"),
					h_rwdir_vis 	= get_param_handle("MM_MFD_WPT_RWDIR_VIS"),
				 }
	
	
	--	WPT_act.x_m =
	--	WPT_act.y_m =
	--	WPT_act.number =
	--	WPT_act.h_dist:()
	--	WPT_act.h_text:set()
	
	--	WPT_act.h_rot:set()
	--	WPT_act.h_len:set()
	--	WPT_act.h_vis:set()
	--{"MM_MFD_WPT_LINE_VIS","MM_MFD_WPT_LINE_ROT","MM_MFD_WPT_LINE_LEN"}	
	
------------------------------------------------------------------------------------------	
------------------------------------------------------------------------------------------	
------------------------------------------------------------------------------------------
--[[	
	WPT_data[1] = 	{
						m_x	= -318224,			--	-318227,
						m_y	=  634829,			-- 634214,
						mem = true,
						text = "",
						
						h_m_x	= get_param_handle("MM_MFD_WPT_1_UD"),
						h_m_y	= get_param_handle("MM_MFD_WPT_1_LR"),
						h_vis	= get_param_handle("MM_MFD_WPT_1_VIS"),
						h_rot	= get_param_handle("MM_MFD_WPT_1_ROT"),
						h_color	= get_param_handle("MM_MFD_WPT_1_COLOR"),
					}	
					
	WPT_data[2] = 	{
						m_x	= -318231,			--	-318227,
						m_y	=  634215,			-- 634214,
						mem = true,
						text = "",
						
						h_m_x	= get_param_handle("MM_MFD_WPT_2_UD"),
						h_m_y	= get_param_handle("MM_MFD_WPT_2_LR"),
						h_vis	= get_param_handle("MM_MFD_WPT_2_VIS"),
						h_rot	= get_param_handle("MM_MFD_WPT_2_ROT"),
						h_color	= get_param_handle("MM_MFD_WPT_2_COLOR"),
					}
					
	WPT_data[3] = 	{
						m_x	= -319231,			--	-318227,
						m_y	=  634215,			-- 634214,
						mem = true,
						text = "",
						
						h_m_x	= get_param_handle("MM_MFD_WPT_3_UD"),
						h_m_y	= get_param_handle("MM_MFD_WPT_3_LR"),
						h_vis	= get_param_handle("MM_MFD_WPT_3_VIS"),
						h_rot	= get_param_handle("MM_MFD_WPT_3_ROT"),
						h_color	= get_param_handle("MM_MFD_WPT_3_COLOR"),
					}	
]]--					
-----------------------------------------------------------------------------




