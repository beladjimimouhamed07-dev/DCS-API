


dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")
									
-----------------------------------------------------------------------



local x_size =  0.75
local y_size =	0.70
---------------------------------------------------


local x_size =  0.72
local y_size =	0.86

local 	total_field_of_view 				= CreateElement "ceMeshPoly"
		total_field_of_view.name 			= "total_field_of_view"
		total_field_of_view.primitivetype 	= "triangles"
		total_field_of_view.vertices		= {	{-x_size, 0},
												{ x_size, 0},
												{ x_size,-y_size},
												{-x_size,-y_size},
												
												{-x_size * 0.8, y_size * 0.5},	--4
												{-x_size * 0.8, 0},	
												{ x_size * 0.8, y_size * 0.5},	--6
												{ x_size * 0.8, 0},	
												
												{-x_size * 0.8, y_size * 0.5},	--8
												{0,y_size * 0.75},
												}
		total_field_of_view.init_pos	  	= {0.0, 0.645, -0.5}
		total_field_of_view.init_rot	  	= {0.0, 0.0, -30}
		total_field_of_view.indices		 	= {0, 1, 2, 	0, 2, 3,	0,4,5,	1,6,7,	4,5,6,	6,7,5,	4,8,9,	6,8,9} 
		total_field_of_view.material		= HUD_DEBUG_GREEN
		total_field_of_view.h_clip_relation = h_clip_relations.REWRITE_LEVEL
		total_field_of_view.level			= HUD_FOV_LEVEL
		
		total_field_of_view.isdraw			= true
		total_field_of_view.change_opacity	= false
		total_field_of_view.isvisible		= false
		
		total_field_of_view.collimated 		= false
		total_field_of_view.additive_alpha	= true
		total_field_of_view.use_mipfilter	= use_mipfilter
		
		total_field_of_view.element_params  = {"AV_PIT_GLASS"}
		total_field_of_view.controllers     = {{"move_up_down_using_parameter"	,0,0.0063}}--{{"move_up_down_using_parameter"	,0,0.0049}}
		
		
	Add(total_field_of_view)


---------------------------------

local init_pos_p_x =  0.585423350 /GetScale() 
local init_pos_p_y = -0.0499138832/GetScale() 

local hardware_glass_base  			  =  CreateElement "ceSimple"
      hardware_glass_base.name		  = "hardware_glass_base"
	  hardware_glass_base.init_pos	  = {0,-0.5,init_pos_p_x}
      hardware_glass_base.collimated  = false
	  hardware_glass_base.controllers = {{"set_origin_to_cockpit_shape"}}
	  Add(hardware_glass_base)


local x_size = 0.95
local y_size = 1.95

local 	glass     				= CreateElement "ceTexPoly"
		glass.primitivetype 	= "triangles"
		glass.name				="glass"
		glass.init_pos			= {0,0,0}
		glass.material      	= HUD_DEBUG_RED
		glass.vertices			= {	{-x_size, y_size},
									{ x_size, y_size},
									{ x_size,-y_size},
									{-x_size,-y_size}}
		glass.indices       	= {0, 1, 2, 0, 2, 3} 
		glass.parent_element = "hardware_glass_base"
		glass.h_clip_relation	= h_clip_relations.INCREASE_IF_LEVEL
		glass.level	  			= HUD_FOV_LEVEL
		glass.isvisible			= false
		glass.collimated		= false
		--glass.controllers = {{"set_origin_to_cockpit_shape"}}--???
	Add(glass)

-----------------------------------------------------------------------
-----------------------------------------------------------------------
	
	