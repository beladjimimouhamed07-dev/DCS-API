




local 	hud_debug_1	 					= create_HUD_element("ceStringPoly")
		hud_debug_1.name			  	= "hud_debug_1"
		hud_debug_1.material        	= HUD_FONT
		hud_debug_1.init_pos		  	= {-0.6,-0.20,0} 
		--hud_debug_1.init_pos		  	= {0,0,0}
		hud_debug_1.stringdefs      	= txt_hud_stringdefs
		hud_debug_1.alignment       	= "LeftTop" --"CenterCenter"--
		hud_debug_1.value				= "-0-"--"T    T\n1230g\nABCD"
		hud_debug_1.formats		  		= {"%s","ALT: %.0f\n"  ,"HV: %.4f\n","VV: %.4f\n","LV: %.4f\n"}
		hud_debug_1.UseBackground		= false
		hud_debug_1.element_params  	= 	{
												--"AV_AC_ALT",
												--"AV_AC_HA",
												--"AV_AC_VA",
												--"AV_AC_LA",
												"AV_TRANS_A1",
											}
		hud_debug_1.controllers     	= 	{
												--{"move_up_down_using_parameter"	,1,-0.05},
												--{"move_left_right_using_parameter"	,2,0.05},
												-- --[[
												{"text_using_parameter",0,2},
												{"text_using_parameter",1,3},
												{"text_using_parameter",2,4},
												-- ]]--
											} --first index is for element_params (starting with 0) , second for formats ( starting with 0)
		hud_debug_1.parent_element 		= "hud_txt_base"
		hud_debug_1.use_mipfilter 		= true
		hud_debug_1.h_clip_relation 	= h_clip_relations.COMPARE
		hud_debug_1.level 				= HUD_DEFAULT_LEVEL
		hud_debug_1.collimated			= true
	Add(hud_debug_1)	
	
	
	
	
	
	x_size         = 0.004--0.005
	y_size         = 1.35
	
local	hud_temp_line			   		= create_HUD_element("ceMeshPoly")
		hud_temp_line.name		   		= "hud_temp_line"
		hud_temp_line.primitivetype		= "triangles"	
		--hud_temp_line.primitivetype		= "lines"
		hud_temp_line.vertices	   		= {	{-x_size  ,-y_size},
											{-x_size  ,-y_size/1.640},--1.644},
											{ x_size  ,-y_size/1.640},--1.644},
											{ x_size  ,-y_size},	
												}
		hud_temp_line.indices	   		= { 0,1,2,	0,2,3,}
		hud_temp_line.init_pos	   		= {0.0, -0.5, 0.0}
		hud_temp_line.material    	 	= HUD_MATERIAL
		hud_temp_line.isdraw			= true
		hud_temp_line.isvisible			= true
		hud_temp_line.parent_element 	= "hud_zero_base"
		hud_temp_line.h_clip_relation 	= h_clip_relations.COMPARE
		hud_temp_line.level 			= HUD_DEFAULT_LEVEL
		hud_temp_line.collimated		= true
		
		hud_temp_line.controllers     	= {{"rotate_using_parameter",2,1}}
		hud_temp_line.element_params  	= {"AV_AC_PITCH_RAD","AV_AC_PITCH_DEG","AV_AC_BANK_RAD","AV_AC_BANK_DEG"}

		
		--[[
		hud_temp_line.element_params  	= {"AV_AC_PITCH_RAD","AV_AC_PITCH_DEG","AV_AC_BANK_RAD","AV_AC_BANK_DEG"}
		hud_temp_line.controllers     	= {	
												
												{"rotate_using_parameter",2,1},
												--{"move_up_down_using_parameter"	,1,-0.0146},--,1,-0.0144},
												{"move_left_right_using_parameter"		,2,-0.012},
													--{"rotate_using_parameter",2,1},
													--{"move_up_down_using_parameter"		,1,-0.012},
													--{"move_up_down_using_parameter"		,1,-0.012},
													--{"parameter_in_range",1,-0.1,0.1},
												}
		]]--
	--Add(hud_temp_line)
	
	
	
	-------------------
	
	x_size         = 0.235
	y_size         = 0.005
--[[
local	hud_htape_baseline_bottom			   	= create_HUD_element("ceMeshPoly")
		hud_htape_baseline_bottom.name		   	= "hud_htape_baseline_bottom"
		hud_htape_baseline_bottom.primitivetype	= "triangles"	--"lines"--
		hud_htape_baseline_bottom.vertices	   	= {	{-x_size	  ,-y_size},
													{-x_size	  , y_size},
													{-x_size * 0.05, y_size},
													{-x_size * 0.05,-y_size},	
													
													{ x_size      ,-y_size},
													{ x_size      , y_size},
													{ x_size * 0.05, y_size},
													{ x_size * 0.05,-y_size},	
													
													}
		hud_htape_baseline_bottom.indices	   		= { 0,1,2,	0,2,3, 
														4,5,6,	4,6,7, }--{0, 1, 2, 0, 2, 3} 
		hud_htape_baseline_bottom.init_pos	   		= {0, -0.85, 0}
		hud_htape_baseline_bottom.material    	 	= HUD_MATERIAL
		hud_htape_baseline_bottom.isdraw			= true
		hud_htape_baseline_bottom.isvisible			= true
		hud_htape_baseline_bottom.parent_element 	= "hud_htape_base"
		hud_htape_baseline_bottom.h_clip_relation 	= h_clip_relations.COMPARE
		hud_htape_baseline_bottom.level 			= HUD_DEFAULT_LEVEL 
		hud_htape_baseline_bottom.collimated		= true
	Add(hud_htape_baseline_bottom)
	
	]]--
	---------------------
	
	
	
	
	
	
	
	
	
	
	
	
	x_size         = 0.2
y_size         = 0.2

local 	hud_test_mfd     				= CreateElement "ceTexPoly"
		hud_test_mfd.primitivetype 		= "triangles"
		hud_test_mfd.name				= "hud_test_mfd"
		hud_test_mfd.init_pos			= {-0.2,-0.2,0}
		--hud_test_mfd.material 	     	= HUD_DEBUG_RED	--MakeMaterial(nil,{25,200,25,120})
		--hud_test_mfd.material 	     	= MakeMaterial(nil,{200,20,25,120})
		hud_test_mfd.material 	     	= MakeMaterial("mfd3",{200,200,250,120}) --< works and is in color
		--hud_test_mfd.material 	     	= "render_target_4"	--< works! but is Black white
		hud_test_mfd.vertices			= {	{-x_size, y_size},
											{ x_size, y_size},
											{ x_size,-y_size},
											{-x_size,-y_size}}
		hud_test_mfd.indices       		= {0, 1, 2, 0, 2, 3} 
		hud_test_mfd.parent_element 	= "hud_txt_base"
		hud_test_mfd.h_clip_relation	= h_clip_relations.COMPARE
		hud_test_mfd.level	  			= HUD_DEFAULT_LEVEL
		hud_test_mfd.isvisible			= true
		hud_test_mfd.collimated			= false
		hud_test_mfd.tex_params  	= {0.5, 0.5, 0.6, 0.6}
		
	--Add(hud_test_mfd)

