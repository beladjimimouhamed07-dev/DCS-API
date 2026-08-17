dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_pages_id.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_def.lua")
 
ADI_MAIN_PAGE 			= CreateElement "ceSimple"
ADI_MAIN_PAGE.init_pos	= {0,0}
ADI_MAIN_PAGE.name		= create_guid_string()
ADI_MAIN_PAGE.element_params = {"ADI_MODE"}
ADI_MAIN_PAGE.controllers    = {{"parameter_compare_with_number",0, SUB_PAGE_ID.MAIN}}
AddElement(ADI_MAIN_PAGE)
  
--**************** MSG Page

 local y_pos = 0
 
local ADI_BG_MASK = ellipse(0.96, 0.96, math.rad(0), -math.rad(10))
ADI_BG_MASK.init_pos	= {0,y_pos}
ADI_BG_MASK.h_clip_relation   = h_clip_relations.INCREASE_IF_LEVEL 
ADI_BG_MASK.level  			  = ADI_DEFAULT_LEVEL  - 2
ADI_BG_MASK.isvisible		    = false
ADI_BG_MASK.parent_element    = ADI_MAIN_PAGE.name
AddElement(ADI_BG_MASK)

local ADI_BORDER = AddArcCircle(0,y_pos, 0.952, 360, 26, ADI_MAIN_PAGE, false, "MWHITE")
ADI_BORDER.element_params = {"ADI_BRIGHT"}
ADI_BORDER.controllers    = {{"opacity_using_parameter" ,0} }
ADI_BORDER.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
ADI_BORDER.level  		 	 = ADI_DEFAULT_LEVEL + 1	
AddElement(ADI_BORDER)

Adi_Ladder_roll 			= CreateElement "ceSimple"
Adi_Ladder_roll.init_pos	= { 0, y_pos}
Adi_Ladder_roll.name		= create_guid_string()
Adi_Ladder_roll.parent_element    = ADI_MAIN_PAGE.name
Adi_Ladder_roll.element_params    = {"ADI_BRIGHT","ADI_ROT"}
Adi_Ladder_roll.controllers       = {{"opacity_using_parameter", 0},{"rotate_using_parameter",1, -1 }}
Adi_Ladder_roll.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder_roll.level  		 	 = ADI_DEFAULT_LEVEL + 1
AddElement(Adi_Ladder_roll)

local Adi_Ladder = create_ADI_tex1(ADI_MAIN, 0, 0, 644, 1024, 5, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { -0.02, 0}  
Adi_Ladder.parent_element  	= Adi_Ladder_roll.name
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL + 1	
Adi_Ladder.element_params 	 = {"ADI_BRIGHT",  "ADI_MOVY"}
Adi_Ladder.controllers    	 = {{"opacity_using_parameter", 0},  {"move_up_down_using_parameter",1, 0.045 },}
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(contour, 0, 0, 1024, 512, 0.05, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { -0.985 , 0}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1 
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}} 	
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(contour, 0, 0, 1024, 512, 0.05, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { 0.970 , 0}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1 
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}}  	
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(contour, 0, 0, 1024, 512, 0.04, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { 0 , -0.978}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1  
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}} 	
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(triangleB, 0, 0, 1024, 1024, -0.08, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { 0.025, -0.92}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1	
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}} 
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(aoa, 0, 0, 1024, 1024, 0.15, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { -0.40, 0}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.element_params 	 = {"ADI_BRIGHT",  "ADI_MOVY"}
Adi_Ladder.controllers    	 = {{"opacity_using_parameter", 0},  {"move_up_down_using_parameter",1, 0.0262 },}
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1  	
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(aoa, 0, 0, 1024, 1024, -0.15, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { 0.40, 0}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.element_params 	 = {"ADI_BRIGHT",  "ADI_MOVY"}
Adi_Ladder.controllers    	 = {{"opacity_using_parameter", 0},  {"move_up_down_using_parameter",1, 0.0262 },}
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 6  	
AddElement(Adi_Ladder)

local Adi_Ladder = create_ADI_tex1(curseur, 0, 0, 1024, 512, 1.8, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { -0.27 , -0.04}  
Adi_Ladder.h_clip_relation   = h_clip_relations.DECREASE_IF_LEVEL 
Adi_Ladder.level  		 	 = ADI_DEFAULT_LEVEL - 1 
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}}  	
AddElement(Adi_Ladder)

Adi_header 			= CreateElement "ceSimple"
Adi_header.init_pos	= { 0, 0}
Adi_header.name		= create_guid_string()
Adi_header.parent_element    = ADI_MAIN_PAGE.name
AddElement(Adi_header)

local rec_parent 		  = create_line(-1, 0.96, 2, 0.3, Adi_header , "BBLACK")
rec_parent.element_params = {"ADI_BRIGHT"  }
rec_parent.controllers    = {{"opacity_using_parameter" ,0} }
AddElement(rec_parent)

local rec_parent = create_line(-1, 0, 2, 0, Adi_header, "MWHITE") 
rec_parent.element_params = {"ADI_BRIGHT"} 
rec_parent.controllers = {{"opacity_using_parameter", 0}} 
AddElement(rec_parent)

--******************************************************************
--********************** Heading Tape
local heading_mask 		  = create_line(-0.45, 0.77, 0.82, 0.3, Adi_header , "RED")
heading_mask.element_params = {"ADI_BRIGHT"  }
heading_mask.controllers    = {{"opacity_using_parameter" ,0} }
heading_mask.parent_element  = ADI_MAIN_PAGE.name
heading_mask.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL 
heading_mask.level			= ADI_DEFAULT_LEVEL  - 1
heading_mask.isvisible		= false
AddElement(heading_mask)

local captype_bg 		= create_hdg_text2k_box(CAPTYPE, 2, 0, 1438, 38, 22,70.5)
captype_bg.name			= create_guid_string()
captype_bg.init_pos		= {0, 0.91}
captype_bg.element_params  = {"ADI_BRIGHT",  "MAGT_HDG",}
captype_bg.controllers	   = {{"opacity_using_parameter" ,0}, 
							  {"move_left_right_using_parameter" ,1,   -0.00113 },
							  }
captype_bg.h_clip_relation = h_clip_relations.DECREASE_IF_LEVEL  
captype_bg.level           = ADI_DEFAULT_LEVEL + 1
captype_bg.parent_element  = ADI_MAIN_PAGE.name
AddElement(captype_bg)	
--******************************************************************

local Adi_Ladder = create_ADI_tex1(triangleJ, 0, 0, 1024, 1024, 0.05, 615 / 2, 512)
Adi_Ladder.name				= create_guid_string()
Adi_Ladder.init_pos			= { 0, 0.68}  
Adi_Ladder.parent_element  = ADI_MAIN_PAGE.name
Adi_Ladder.element_params    = {"ADI_BRIGHT"}
Adi_Ladder.controllers       = {{"opacity_using_parameter",0}} 
AddElement(Adi_Ladder)

local sdef1 = {0.0098,	0.003,	0.0,	0}
local sdef2 = {0.006,	0.0015,	0.0,	0}
local sdef3 = {0.0098,	0.002,	0.0,	0}
local sdef4 = {0.007,	0.0015,	0.0,	0}
local sdef5 = {0.0035,	0.0008,	0.0,	0}
local sdef6 = {0.006,	0.0013,	0.0,	0}
local sdef7 = {0.007,	0.0015,	0.0,	0}

add_text_param(-0.76, 0.81,	"CUR_IAS" , "%03.0f", Adi_header, sdef3, "FONT_WHITE")
add_text_param(0.70, 0.81,	"ALT_BARO", "%02.0f", Adi_header, sdef3, "FONT_WHITE")

local text_1023 = add_text("1013", 0.76, -0.86, Adi_header, sdef6, "FONT_WHITE")
text_1023.element_params = {"ADI_BRIGHT" }
text_1023.controllers = {{"opacity_using_parameter", 0}  }
AddElement(text_1023)

local text_mach = add_text("-.- -", -0.76, -0.87, Adi_header, sdef7, "FONT_WHITE")
text_mach.element_params = {"ADI_BRIGHT", "ADI_MACH"}
text_mach.controllers    = {{"opacity_using_parameter", 0}, {"parameter_in_range" ,1,-1,0.02} }
AddElement(text_mach)

mach_indc_pos 			= CreateElement "ceSimple"
mach_indc_pos.init_pos	= { -0.76, -0.87}
mach_indc_pos.name		= create_guid_string()
mach_indc_pos.parent_element = ADI_MAIN_PAGE.name
mach_indc_pos.element_params = {"ADI_MACH"}
mach_indc_pos.controllers    = {{"parameter_in_range" ,0,0.02,3.0} }
AddElement(mach_indc_pos)
add_text_param(0,0, "ADI_MACH", "%01.2f", mach_indc_pos, sdef7, "FONT_WHITE")
 

