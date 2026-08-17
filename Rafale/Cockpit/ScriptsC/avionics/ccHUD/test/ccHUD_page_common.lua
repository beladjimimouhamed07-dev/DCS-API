-- ccHUD_page_common.lua - MERGED ORIGINAL + F18 GEOMETRY
-- All original parameters restored, glass borders made invisible

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")


local	hud_zero_base             		= CreateElement "ceSimple"
		hud_zero_base.name				= "hud_zero_base"
		hud_zero_base.init_pos			= {0,0,0}
		hud_zero_base.collimated		= true
	Add(hud_zero_base)				--	ZERO point of the Hud, also the BoreSight of the Gun
	

local	hud_common_base             	= CreateElement "ceSimple"
		hud_common_base.name			= "hud_common_base"
		hud_common_base.init_pos		= {0,-1.44,0}
		hud_common_base.collimated		= true
		
	Add(hud_common_base)			--	DEBUG:not needed anymore?
	
	
local	hud_pitch_base             		= CreateElement "ceSimple"
		hud_pitch_base.name				= "hud_pitch_base"
		hud_pitch_base.init_pos			= {0,0,0}
		hud_pitch_base.parent_element 	= "hud_zero_base"
		hud_pitch_base.collimated		= true
		hud_pitch_base.element_params  	= {"AV_AC_PITCH_RAD","AV_AC_PITCH_DEG","AV_AC_BANK_RAD","AV_AC_BANK_DEG"}
		hud_pitch_base.controllers     	= {
											--{"rotate_using_parameter",2,1},
											{"move_up_down_using_parameter"	,1,-0.0146},
										  }
	Add(hud_pitch_base)				--	baseelement of the Horizonline
	
local	hud_txt_base             		= CreateElement "ceSimple"
		hud_txt_base.name				= "hud_txt_base"
		hud_txt_base.init_pos			= {0,-0.9,0}
		hud_txt_base.collimated			= true
	Add(hud_txt_base)				--	baseelement for the TEXT elements
	

--------------------------------------------------------------------------
--------------------------------------------------------------------------
--------------------------------------------------------------------------
	
	x_size         = 2
	y_size         = 0.005

local	hud_pitch_baseline			   		= create_HUD_element("ceMeshPoly")
		hud_pitch_baseline.name		   		= "hud_pitch_baseline"
		hud_pitch_baseline.primitivetype	= "triangles"	--"lines"--
		hud_pitch_baseline.vertices	   		= {	{-x_size,-y_size},
												{-x_size, y_size},
												{-0.3  , y_size},
												{-0.3  ,-y_size},
												
												{ 0.3  ,-y_size},
												{ 0.3  , y_size},
												{ x_size, y_size},
												{ x_size,-y_size},
												}
		hud_pitch_baseline.indices	   		= {0,1,2,	0,2,3, 
											   4,5,6,	4,6,7,
												}--{0, 1, 2, 0, 2, 3} 
		hud_pitch_baseline.init_pos	   		= {0.0, 0.0, 0.0}
		hud_pitch_baseline.material    	 	= HUD_MATERIAL
		hud_pitch_baseline.isdraw			= true
		hud_pitch_baseline.isvisible		= true
		hud_pitch_baseline.parent_element 	= "hud_pitch_base"
		hud_pitch_baseline.h_clip_relation 	= h_clip_relations.COMPARE
		hud_pitch_baseline.level 			= HUD_DEFAULT_LEVEL
		hud_pitch_baseline.collimated		= true
		hud_pitch_baseline.element_params  	= {"AV_AC_PITCH_RAD","AV_AC_PITCH_DEG","AV_AC_BANK_RAD","AV_AC_BANK_DEG"}
		hud_pitch_baseline.controllers     	= {	
												
												{"rotate_using_parameter",2,1},
												{"move_left_right_using_parameter",2,-0.012},
												}
	Add(hud_pitch_baseline)

	
--------------------------------------------------------------------------
--------------------------------------------------------------------------
--------------------------------------------------------------------------	
----LEFT SIDE-------------------------------------------------------------
	
	local 	hud_txt_ias	 					= create_HUD_element("ceStringPoly")
			hud_txt_ias.name			  	= "hud_txt_ias"
			hud_txt_ias.material        	= "font_T45HUD"
			hud_txt_ias.init_pos		  	= {-0.6,0.0,0} 
			hud_txt_ias.stringdefs      	= txt_hud_stringdefs
			hud_txt_ias.alignment       	= "LeftTop"
			hud_txt_ias.value				= "test"--"T    T\n1230g\nABCD"
			hud_txt_ias.formats		  		= {"%s","%.0f"}
			hud_txt_ias.UseBackground		= false
			hud_txt_ias.element_params  	= {"AV_AC_IAS"}
			hud_txt_ias.controllers     	= {{"text_using_parameter",0,1}} --first index is for element_params (starting with 0) , second for formats ( starting with 0)
			hud_txt_ias.parent_element 		= "hud_txt_base"
			hud_txt_ias.use_mipfilter 		= true
			hud_txt_ias.h_clip_relation 	= h_clip_relations.COMPARE
			hud_txt_ias.level 				= HUD_DEFAULT_LEVEL
			hud_txt_ias.collimated			= true
		Add(hud_txt_ias)	

		
	local 	hud_txt_ias_kmh					= Copy(hud_txt_ias)	
			hud_txt_ias_kmh.name  			= "hud_txt_ias_kmh"	
			hud_txt_ias_kmh.alignment      	= "LeftBottom"
			hud_txt_ias_kmh.init_pos		= {0.0,0.0,0} 		
			hud_txt_ias_kmh.parent_element 	= "hud_txt_ias"
			hud_txt_ias_kmh.element_params 	= {}	
			hud_txt_ias_kmh.controllers     = {}
			hud_txt_ias_kmh.value			= "Km/h"	
			hud_txt_ias_kmh.stringdefs     	= {0.008,0.008, 0, 0}		
		Add(hud_txt_ias_kmh)
	
--------------------------------------------------------------------------
--------------------------------------------------------------------------	
----RIGHT SIDE------------------------------------------------------------
	
	local 	hud_txt_alt					= Copy(hud_txt_ias)	
			hud_txt_alt.name  			= "hud_txt_alt"	
			hud_txt_alt.alignment      	= "RightTop"
			hud_txt_alt.init_pos		= {0.6,0.0,0} 		
			hud_txt_alt.element_params 	= {"AV_AC_MALT"}		
		Add(hud_txt_alt)
		
	local 	hud_txt_alt_source					= Copy(hud_txt_ias)	
			hud_txt_alt_source.name  			= "hud_txt_alt_source"	
			hud_txt_alt_source.alignment      	= "RightBottom"
			hud_txt_alt_source.init_pos			= {0.0,0.0,0} 		
			hud_txt_alt_source.parent_element 	= "hud_txt_alt"
			hud_txt_alt_source.element_params 	= {"AV_AC_ALT_TYPE"}
			hud_txt_alt_source.formats		  	= {"%s"}		
			hud_txt_alt_source.controllers     	= {{"text_using_parameter",0,0}}
			hud_txt_alt_source.value			= "R"	
			hud_txt_alt_source.stringdefs     	= {0.008,0.008, 0, 0}		
		Add(hud_txt_alt_source)

---------------------------------------------------------------------------------

	local 	hud_txt_ap_bank_info				= Copy(hud_txt_ias)	
			hud_txt_ap_bank_info.name  			= "hud_txt_ap_bank_info"	
			hud_txt_ap_bank_info.alignment      = "RightBottom"
			hud_txt_ap_bank_info.init_pos		= {0.0,0.05,0} 		
			hud_txt_ap_bank_info.parent_element = "hud_txt_ap_alt"
			hud_txt_ap_bank_info.element_params = {"AV_AP_HOLD_BANK_STATUS"}	
			hud_txt_ap_bank_info.controllers    = {{"parameter_in_range",0,0.5,1.5}}
			hud_txt_ap_bank_info.value			= "BANK hold"	
			hud_txt_ap_bank_info.stringdefs     = {0.008,0.008, 0, 0}		
		Add(hud_txt_ap_bank_info)

	local 	hud_txt_ap_alt_info					= Copy(hud_txt_ias)	
			hud_txt_ap_alt_info.name  			= "hud_txt_ap_alt_info"	
			hud_txt_ap_alt_info.alignment      	= "RightBottom"
			hud_txt_ap_alt_info.init_pos		= {0.0,0.0,0} 		
			hud_txt_ap_alt_info.parent_element 	= "hud_txt_ap_alt"
			hud_txt_ap_alt_info.element_params 	= {"AV_AP_HOLD_ALT_STATUS"}	
			hud_txt_ap_alt_info.controllers     = {{"parameter_in_range",0,0.5,1.5}}
			hud_txt_ap_alt_info.value			= "BARO hold"	
			hud_txt_ap_alt_info.stringdefs     	= {0.008,0.008, 0, 0}		
		Add(hud_txt_ap_alt_info)

	local 	hud_txt_ap_alt					= Copy(hud_txt_ias)	
			hud_txt_ap_alt.name  			= "hud_txt_ap_alt"	
			hud_txt_ap_alt.alignment      	= "RightTop"
			hud_txt_ap_alt.init_pos			= {0.6,-0.20,0} 		
			hud_txt_ap_alt.element_params 	= {"AV_AP_HOLD_ALT","AV_AP_HOLD_ALT_STATUS"}
			hud_txt_ap_alt.controllers     	= {	{"text_using_parameter",0,1},
												{"parameter_in_range",1,0.5,1.5}}		
		Add(hud_txt_ap_alt)

--------------------------------------------------------------------------
--------------------------------------------------------------------------	
----CENTER of HUD---------------------------------------------------------

	
	local 	hud_vv_1	 				= create_HUD_element("ceStringPoly")
			hud_vv_1.name			  	= "hud_vv_1"
			hud_vv_1.material        	= "font_T45HUD"
			hud_vv_1.init_pos		  	= {0.0,0.0,0} 
			hud_vv_1.stringdefs      	= {0.008,0.008, 0, 0}
			hud_vv_1.alignment       	= "CenterCenter"
			hud_vv_1.value				= ">                    <"
			hud_vv_1.formats		  	= {"%s"}
			hud_vv_1.UseBackground		= false
			hud_vv_1.element_params  	= {"AV_AC_VV"}
			hud_vv_1.controllers     	= {	{"move_up_down_using_parameter"	,0,0.00146},} 
			hud_vv_1.parent_element 	= "hud_txt_base"	
			hud_vv_1.use_mipfilter 		= true
			hud_vv_1.h_clip_relation 	= h_clip_relations.COMPARE
			hud_vv_1.level 				= HUD_DEFAULT_LEVEL
			hud_vv_1.collimated			= true
		Add(hud_vv_1)	

	local 	hud_vv_2					= Copy(hud_vv_1)	
			hud_vv_2.name  				= "hud_vv_2"	
			hud_vv_2.alignment      	= "CenterCenter"
			hud_vv_2.init_pos			= {-0.004,0.002,0.0} 		
			hud_vv_2.element_params 	= {}	
			hud_vv_2.controllers     	= {}
			hud_vv_2.value				= "-                      -\n\n-                      -\n\n---                  ---\n\n-                      -\n\n-                      -"
			hud_vv_2.stringdefs      	= {0.008,0.008, 0, 0}
		Add(hud_vv_2)	
	
--------------------------------------------------------------------------	
	
local 	hud_point_0	 					= create_HUD_element("ceStringPoly")
		hud_point_0.name			  	= "hud_point_0"
		hud_point_0.material        	= "font_T45HUD"
		hud_point_0.init_pos		  	= {0.0,0.0,0}--{0.0,-0.89,0} --{0.0,0.12,0} 
		hud_point_0.stringdefs      	= {0.008,0.008, 0, 0}
		hud_point_0.alignment       	= "CenterCenter"
		hud_point_0.value				= "O"
		hud_point_0.formats		  		= {"%s","%.0f","^\n%03.0f"}
		hud_point_0.UseBackground		= false
		hud_point_0.element_params  	= {"AV_HUD_POINT_UD","AV_HUD_POINT_LR"}
		hud_point_0.controllers     	= {
											{"move_up_down_using_parameter"		,0,0.0136},
											{"move_left_right_using_parameter"	,1,0.0136},
											} 
		hud_point_0.parent_element 		= "hud_zero_base" --"hud_htape_base"
		hud_point_0.use_mipfilter 		= true
		hud_point_0.h_clip_relation 	= h_clip_relations.COMPARE
		hud_point_0.level 				= HUD_DEFAULT_LEVEL 
		hud_point_0.collimated			= true
	Add(hud_point_0)				
	

	x_size         = 0.005
	y_size         = 0.5
	

local	hud_point_0_upline			   		= create_HUD_element("ceMeshPoly")
		hud_point_0_upline.name		   		= "hud_point_0_upline"
		hud_point_0_upline.primitivetype	= "triangles"	--"lines"--
		hud_point_0_upline.vertices	   		= {	{-x_size ,0.015},
												{-x_size , y_size},
												{ x_size , y_size},
												{ x_size ,0.015},	
												}
		hud_point_0_upline.indices	   		= { 0,1,2,	0,2,3}--{0, 1, 2, 0, 2, 3} 
		hud_point_0_upline.init_pos	   		= {0, 0.01, 0}
		hud_point_0_upline.material    	 	= HUD_MATERIAL
		hud_point_0_upline.isdraw			= true
		hud_point_0_upline.isvisible		= true
		hud_point_0_upline.parent_element 	= "hud_point_0"
		hud_point_0_upline.h_clip_relation 	= h_clip_relations.COMPARE
		hud_point_0_upline.level 			= HUD_DEFAULT_LEVEL 
		hud_point_0_upline.collimated		= true
		hud_point_0_upline.controllers     	= {{"rotate_using_parameter",0,1}}
		hud_point_0_upline.element_params  	= {"AV_AC_BANK_RAD"}	
	Add(hud_point_0_upline)

	
	
--------------------------------------------------------------------------
----SUB PAGES-------------------------------------------------------------
--------------------------------------------------------------------------
	
	dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_sub_headingtape.lua")
									   
	
--------------------------------------------------------------------------
---DEBUG------------------------------------------------------------------
--------------------------------------------------------------------------

	--dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_debug.lua")
	
--------------------------------------------------------------------------

-- local test = addStrokeText("test","ABCDEFGHIJKLMNOPQRSTUVWXYZ","STROKE_FNT_DFLT_150_WIDE","CenterCenter",{0, 0.4},"hud_txt_base",nil)

