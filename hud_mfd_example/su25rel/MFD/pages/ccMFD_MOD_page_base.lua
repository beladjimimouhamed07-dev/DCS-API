


dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_definitions.lua")


--------------------------------------------------------------------------
--------------------------------------------------------------------------
--------------------------------------------------------------------------


local x_size         = MFD_SIZE-- * MFD_SCALE
local y_size         = MFD_SIZE --* MFD_SCALE

mfd_base               	= CreateElement "ceSimple"
mfd_base.name			= "mfd_base"
mfd_base.init_pos		= {0,0,0}
Add(mfd_base)

---------------------------------------------------
local 	total_field_of_view 				= CreateElement "ceMeshPoly"
		total_field_of_view.name 			= "total_field_of_view"
		total_field_of_view.primitivetype 	= "triangles"
		total_field_of_view.vertices		= {	{-x_size, y_size},
												{ x_size, y_size},
												{ x_size,-y_size},
												{-x_size,-y_size}}
		total_field_of_view.indices		 	= {0, 1, 2, 0, 2, 3} --default_box_indices
		total_field_of_view.material		= MakeMaterial(nil,{255,1,1,255})
		total_field_of_view.h_clip_relation = h_clip_relations.REWRITE_LEVEL
		total_field_of_view.level			= MDF_FOV_LEVEL
		total_field_of_view.isdraw			= true
		total_field_of_view.collimated 		= false
		total_field_of_view.isvisible		= true --false 
		total_field_of_view.parent_element	= "mfd_base"
	Add(total_field_of_view)
---------------------------------

local 	black_background     			= CreateElement "ceTexPoly"
		black_background.primitivetype 	= "triangles"
		black_background.name			="black_background"
		black_background.init_pos		= {0,0,0}
		black_background.material      	= MFCD_BG_BLACK
		black_background.vertices		= {	{-x_size, y_size},
											{ x_size, y_size},
											{ x_size,-y_size},
											{-x_size,-y_size}}
		black_background.indices       	= {0, 1, 2, 0, 2, 3} 
		black_background.parent_element = "mfd_base"
		black_background.h_clip_relation= h_clip_relations.INCREASE_IF_LEVEL
		black_background.level	  		= MDF_FOV_LEVEL
	Add(black_background)

--------------------------------------------------------------------------
--------------------------------------------------------------------------

	x_size         = (MFD_SIZE * 0.74) --* MFD_SCALE	--0.75
	y_size         = (MFD_SIZE * 0.74) --* MFD_SCALE	--0.75

	local   green_box			   = CreateElement "ceMeshPoly"
			green_box.name		   = "green_box"
			green_box.primitivetype= "lines"
			green_box.vertices	   = {	{-x_size, y_size},
										{ x_size, y_size},
										{ x_size,-y_size},
										{-x_size,-y_size}}--{{-1.0, -1.0}, {-1.0,  1.0}, {1.0, 1.0}, {1.0, -1.0}}
			green_box.indices	   = default_rect_indices
			green_box.init_pos	   = {0.0, 0.0, 0.0}--{0.0, 0.2 - 0.5, 0}
			green_box.material     = MakeMaterial(nil,{10, 255, 10, 255})	-- MFCD_GREEN--MakeMaterial(nil,{200,200,200,255})--REGIONS_COLOR
			green_box.isdraw	   		= true
			green_box.isvisible	   		= true
			green_box.h_clip_relation 	= h_clip_relations.COMPARE
			green_box.level 		  	= MDF_DEFAULT_LEVEL
			green_box.parent_element 	= "mfd_base"
			green_box.element_params  	= {"MM_MFD_SOI"}
			green_box.controllers		= {{"opacity_using_parameter",0}}
		--Add(green_box)

--------------------------------------------------------------------------
--------------------------------------------------------------------------
--------------------------------------------------------------------------





					
	TEST_MFD			 = MakeMaterial("mfd1",{100,100,100,100}) --TEST_MFD			 = MakeMaterial("mfd0",{5,50,5,190})
	TEST_RT				 = MakeMaterial("render_target_2",{100,100,100,100})




	x_size         = MFD_SIZE * 0.75
	y_size         = MFD_SIZE * 0.75

	dbg_template_box			   = CreateElement "ceMeshPoly"
	dbg_template_box.name		   = "dbg_template_box"
	dbg_template_box.primitivetype = "triangles"
	dbg_template_box.vertices	   = {	{-x_size, y_size},
										{ x_size, y_size},
										{ x_size,-y_size},
										{-x_size,-y_size}}--{{-1.0, -1.0}, {-1.0,  1.0}, {1.0, 1.0}, {1.0, -1.0}}
	dbg_template_box.indices	   = {0, 1, 2, 0, 2, 3} --default_rect_indices
	dbg_template_box.init_pos	   = {0.0, 0.0, 0.0}--{0.0, 0.2 - 0.5, 0}
	dbg_template_box.material      =  "mfd0"--,{100,100,100,100})--TEST_MFD--MakeMaterial(nil,{200,200,200,255})--REGIONS_COLOR
	dbg_template_box.isdraw		   = true
	dbg_template_box.isvisible	   = true
	dbg_template_box.tex_params  = {0.5,0.5,1,1}
	
	dbg_template_box.h_clip_relation = h_clip_relations.COMPARE
	dbg_template_box.level 			= MDF_DEFAULT_LEVEL
	
	--Add(dbg_template_box)
	
