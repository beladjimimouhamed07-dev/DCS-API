dofile(LockOn_Options.script_path.."devices.lua")
-- dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_pages_id.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_def.lua")

local xpos       = 0
local ypos       = 0

local TST = MakeMaterial(nil,{1, 1, 1,240})
local TST1 = MakeMaterial(nil,{0, 0, 0,255})
local TST2 = MakeMaterial(nil,{255, 255, 255,255})
local SHOW_MASKS = true		 
			 
local aspect       = GetAspect() + 0.2  -- GetHalfHeight()/GetHalfWidth()

nav_total_field_of_view 				= CreateElement "ceMeshPoly"
nav_total_field_of_view.name 			= create_guid_string()
nav_total_field_of_view.primitivetype 	= "triangles"
nav_total_field_of_view.vertices	    = { {-aspect , aspect }, { aspect,aspect}, { aspect,-aspect}, {-aspect,-aspect}, }
nav_total_field_of_view.indices			= {0, 1, 2, 0, 2, 3}
nav_total_field_of_view.init_pos		= {0, 0, 0}
nav_total_field_of_view.material		= TST
nav_total_field_of_view.h_clip_relation = h_clip_relations.REWRITE_LEVEL
nav_total_field_of_view.level			= ADI_DEFAULT_LEVEL  
nav_total_field_of_view.change_opacity	= false
nav_total_field_of_view.collimated 		= false
nav_total_field_of_view.isvisible		= true
nav_total_field_of_view.element_params  = {"ADI_BRIGHT"}
nav_total_field_of_view.controllers	    = {{"opacity_using_parameter", 0}}
Add(nav_total_field_of_view)

local init_pos_p_x =  0.585423350 /GetScale() 
local init_pos_p_y = -0.0499138832/GetScale() 

ADI_base_clip 					= CreateElement "ceMeshPoly"
ADI_base_clip.name 				=  create_guid_string()
ADI_base_clip.primitivetype 	= "triangles"
ADI_base_clip.vertices	   	 	= { {-aspect , aspect }, { aspect,aspect}, { aspect ,-aspect}, {-aspect ,-aspect}, }
ADI_base_clip.indices			= {0, 1, 2, 0, 2, 3}
ADI_base_clip.init_pos			= {0, 0, 0}
ADI_base_clip.material			= TST
ADI_base_clip.h_clip_relation   = h_clip_relations.INCREASE_IF_LEVEL 
ADI_base_clip.level  		 	= ADI_DEFAULT_LEVEL  - 1
ADI_base_clip.change_opacity	= false
ADI_base_clip.collimated 		= false
ADI_base_clip.isvisible			= SHOW_MASKS
Add(ADI_base_clip)

 

 

 

