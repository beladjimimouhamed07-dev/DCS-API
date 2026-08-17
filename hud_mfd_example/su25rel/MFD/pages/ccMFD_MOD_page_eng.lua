



dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_definitions.lua")



--------------------------------------------------------------------------------------

mfd_base_eng             	= CreateElement "ceSimple"
mfd_base_eng.name			= "mfd_base_eng"
mfd_base_eng.init_pos		= {0,0,0}
mfd_base_eng.element_params = {"MM_MFD_PAGE_ENG"}
mfd_base_eng.controllers 	= {{"parameter_in_range",0,0.9,1.1}}
Add(mfd_base_eng)

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------


local big_radius = 0.5
local small_radius = 0.2
local verts,inds = mm_make_circle_r2(big_radius)		--(1.25)

local	mfd_eng_circle_r1			   	= CreateElement "ceMeshPoly"
		mfd_eng_circle_r1.name		   	= "mfd_eng_circle_r1"
		mfd_eng_circle_r1.primitivetype	= "lines"
		mfd_eng_circle_r1.vertices	   	= verts
		mfd_eng_circle_r1.indices	   	= inds
		mfd_eng_circle_r1.init_pos	   	= {0.7, 0.2, 0.0}
		mfd_eng_circle_r1.material     	= MFCD_LIGHT_GRAY--MFCD_GREEN
		mfd_eng_circle_r1.isdraw		= true
		mfd_eng_circle_r1.isvisible	   	= true
		mfd_eng_circle_r1.parent_element= "mfd_base_eng"
		mfd_eng_circle_r1.h_clip_relation= h_clip_relations.COMPARE
		mfd_eng_circle_r1.level 		= MDF_DEFAULT_LEVEL
	Add(mfd_eng_circle_r1)

local 	mfd_eng_circle_l1             		= Copy(mfd_eng_circle_r1)
		mfd_eng_circle_l1.name			  	= "mfd_eng_circle_l1"
		mfd_eng_circle_l1.init_pos			= {-0.7, 0.2, 0.0}
		mfd_eng_circle_l1.init_rot			= {180,0,0}
		Add(mfd_eng_circle_l1)	
	
local verts,inds = mm_make_circle_r2(small_radius)		--(1.25)	
local 	mfd_eng_circle_r2             		= Copy(mfd_eng_circle_r1)
		mfd_eng_circle_r2.name			  	= "mfd_eng_circle_r2"
		mfd_eng_circle_r2.vertices	   		= verts
		mfd_eng_circle_r2.indices	   		= inds
		mfd_eng_circle_r2.init_pos			= {0.7, 0.2, 0.0}
		mfd_eng_circle_r2.init_rot			= {0,0,0}
		Add(mfd_eng_circle_r2)		

local 	mfd_eng_circle_l2             		= Copy(mfd_eng_circle_r2)
		mfd_eng_circle_l2.name			  	= "mfd_eng_circle_l2"
	--	mfd_eng_circle_l2.vertices	   		= verts
	--	mfd_eng_circle_l2.indices	   		= inds
		mfd_eng_circle_l2.init_pos			= {-0.7, 0.2, 0.0}
		mfd_eng_circle_l2.init_rot			= {180,0,0}
		Add(mfd_eng_circle_l2)		
	

	
	
	
-------------------------------------------------	
	x_size         = MFD_SIZE * 0.75
	y_size         = MFD_SIZE * 0.75

local   mfd_eng_line_r1			   		= CreateElement "ceMeshPoly"
		mfd_eng_line_r1.name		   	= "mfd_eng_line_r1"
		mfd_eng_line_r1.primitivetype 	= "lines"
		mfd_eng_line_r1.vertices	   	= {	{0, big_radius},{0, big_radius + 0.05},}
		mfd_eng_line_r1.indices	   		= {0,1}
		mfd_eng_line_r1.init_pos	   	= {0.0, 0.0, 0.0}--{0.0, 0.2 - 0.5, 0}
		mfd_eng_line_r1.init_rot	   	= {0.0, 0.0, 0.0}
		mfd_eng_line_r1.material      	= MFCD_LIGHT_GRAY-- MFCD_GREEN
		mfd_eng_line_r1.isdraw		   	= true
		mfd_eng_line_r1.isvisible	   	= true
		mfd_eng_line_r1.parent_element	= "mfd_eng_circle_r1"-- "mfd_base_eng"
		mfd_eng_line_r1.h_clip_relation = h_clip_relations.COMPARE
		mfd_eng_line_r1.level 			= MDF_DEFAULT_LEVEL
	Add(mfd_eng_line_r1)
	
local 	mfd_eng_line_r2            		= Copy(mfd_eng_line_r1)	
		mfd_eng_line_r2.name		   	= "mfd_eng_line_r2"
		mfd_eng_line_r2.init_rot	   	= {180.0, 0.0, 0.0}
	Add(mfd_eng_line_r2)
-------------------	
local 	mfd_eng_line_rs1            	= Copy(mfd_eng_line_r1)	
		mfd_eng_line_rs1.name		   	= "mfd_eng_line_rs1"
		mfd_eng_line_rs1.vertices	   	= {	{0, small_radius},{0, small_radius + 0.05},}
		mfd_eng_line_rs1.init_rot	   	= {0.0, 0.0, 0.0}
	Add(mfd_eng_line_rs1)
	
local 	mfd_eng_line_rs2            	= Copy(mfd_eng_line_rs1)	
		mfd_eng_line_rs2.name		   	= "mfd_eng_line_rs2"
		mfd_eng_line_rs2.vertices	   	= {	{0, small_radius},{0, small_radius + 0.05},}
		mfd_eng_line_rs2.init_rot	   	= {180.0, 0.0, 0.0}
	Add(mfd_eng_line_rs2)	

	--------------------------------------------
	--------------------------------------------
local 	mfd_eng_line_l1            		= Copy(mfd_eng_line_r1)	
		mfd_eng_line_l1.name		   	= "mfd_eng_line_l1"
		mfd_eng_line_l1.init_rot	   	= {0.0, 0.0, 0.0}
		mfd_eng_line_l1.parent_element	= "mfd_eng_circle_l1"
	Add(mfd_eng_line_l1)

local 	mfd_eng_line_l2            		= Copy(mfd_eng_line_l1)	
		mfd_eng_line_l2.name		   	= "mfd_eng_line_l2"
		mfd_eng_line_l2.init_rot	   	= {180.0, 0.0, 0.0}
	Add(mfd_eng_line_l2)
------
local 	mfd_eng_line_ls1            	= Copy(mfd_eng_line_l1)	
		mfd_eng_line_ls1.name		   	= "mfd_eng_line_ls1"
		mfd_eng_line_ls1.vertices	   	= {	{0, small_radius},{0, small_radius + 0.05},}
		mfd_eng_line_ls1.init_rot	   	= {0.0, 0.0, 0.0}
	Add(mfd_eng_line_ls1)	
	
local 	mfd_eng_line_ls2            	= Copy(mfd_eng_line_ls1)	
		mfd_eng_line_ls2.name		   	= "mfd_eng_line_ls2"
		mfd_eng_line_ls2.init_rot	   	= {180.0, 0.0, 0.0}
	Add(mfd_eng_line_ls2)	

-----------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------
-- --[[
local   mfd_eng_line_r_block1 					= CreateElement "ceMeshPoly"
		mfd_eng_line_r_block1.name 				= "mfd_eng_line_r_block1"
		mfd_eng_line_r_block1.primitivetype 	= "triangles"
		mfd_eng_line_r_block1.vertices 			= {	{0.70, -1},
													{0.70,  1},	--1.3		--{-0.017,  -0.005},
													{   1, 1},	--1.3	--{-0.017,  -0.005},
													{   1,-1}
													}
		mfd_eng_line_r_block1.indices  			= default_box_indices
		mfd_eng_line_r_block1.init_pos 			= {0,0,0}
		mfd_eng_line_r_block1.material 			= MFCD_GREEN--MFCD_BG_BLACK--
		mfd_eng_line_r_block1.h_clip_relation	= h_clip_relations.INCREASE_IF_LEVEL
		mfd_eng_line_r_block1.level				= MDF_DEFAULT_LEVEL
		mfd_eng_line_r_block1.isdraw		 	= true
		mfd_eng_line_r_block1.isvisible 		= false
		mfd_eng_line_r_block1.parent_element 	= "mfd_base_eng"
		--mfd_eng_line_r_block1.element_params  = {"MM_MFD_WPT_LINE_VIS","MM_MFD_WPT_LINE_ROT","MM_MFD_WPT_LINE_LEN"}
		--mfd_eng_line_r_block1.controllers 	= {{"rotate_using_parameter",1,-1},	{"move_up_down_using_parameter",2,1},}	
	Add(mfd_eng_line_r_block1)




-- ]]--
--------------------------------------------------------
--------------------------------------------------------

local big_radius = 0.57
local small_radius = 0.49
local verts,inds = mm_make_circle_r2_filled(big_radius)		--(1.25)

local	mfd_eng_circle_r_rpm			   	= CreateElement "ceMeshPoly"
		mfd_eng_circle_r_rpm.name		   	= "mfd_eng_circle_r_rpm"
		mfd_eng_circle_r_rpm.primitivetype	= "triangles"--"lines"
		--mfd_eng_circle_r_rpm.vertices	   	= verts
		--mfd_eng_circle_r_rpm.indices	   	= inds
		set_circle(mfd_eng_circle_r_rpm,0.52,0.49,180, 32)
		mfd_eng_circle_r_rpm.init_pos	   	= {0.70, 0.2, 0.0}
		mfd_eng_circle_r_rpm.init_rot	   	= {0.0, 0.0, 0.0}
		mfd_eng_circle_r_rpm.material     	= MFCD_TEXT_GREEN--MFCD_GREEN
		mfd_eng_circle_r_rpm.isdraw			= true
		mfd_eng_circle_r_rpm.isvisible	   	= true
		mfd_eng_circle_r_rpm.parent_element	= "mfd_base_eng"--"mfd_eng_circle_r1"
		mfd_eng_circle_r_rpm.h_clip_relation= h_clip_relations.COMPARE
		mfd_eng_circle_r_rpm.level 			= MDF_DEFAULT_LEVEL
		
		mfd_eng_circle_r_rpm.element_params	= {"MM_AC_ENG_R_RPM_ROT"}
		mfd_eng_circle_r_rpm.controllers 	= {{"rotate_using_parameter",0,-1},}
		
	Add(mfd_eng_circle_r_rpm)


	
--------------------------	

-- --[[	
local 	mfd_eng_line_r_block2  					= Copy(mfd_eng_line_r_block1)
		mfd_eng_line_r_block2.name				= "mfd_eng_line_r_block2"
		mfd_eng_line_r_block2.h_clip_relation 	= h_clip_relations.DECREASE_IF_LEVEL
		mfd_eng_line_r_block2.level 			= MDF_DEFAULT_LEVEL +1
	Add(mfd_eng_line_r_block2)

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
local 	mfd_eng_line_l_block1  					= Copy(mfd_eng_line_r_block1)
		mfd_eng_line_l_block1.name				= "mfd_eng_line_l_block1"
		mfd_eng_line_l_block1.vertices 			= {	{-0.70, -1},
													{-0.70,  1},	
													{   -1, 1},	
													{   -1,-1}
													}
		mfd_eng_line_l_block1.h_clip_relation 	= h_clip_relations.INCREASE_IF_LEVEL
		mfd_eng_line_l_block1.level 			= MDF_DEFAULT_LEVEL 
	Add(mfd_eng_line_l_block1)


local	mfd_eng_circle_l_rpm			   	= CreateElement "ceMeshPoly"
		mfd_eng_circle_l_rpm.name		   	= "mfd_eng_circle_L_rpm"
		mfd_eng_circle_l_rpm.primitivetype	= "triangles"--"lines"
			set_circle(mfd_eng_circle_l_rpm,0.52,0.49,180, 32)
		mfd_eng_circle_l_rpm.init_pos	   	= {-0.70, 0.2, 0.0}
		mfd_eng_circle_l_rpm.init_rot	   	= {180.0, 0.0, 0.0}
		mfd_eng_circle_l_rpm.material     	= MFCD_TEXT_GREEN--MFCD_GREEN
		mfd_eng_circle_l_rpm.isdraw			= true
		mfd_eng_circle_l_rpm.isvisible	   	= true
		mfd_eng_circle_l_rpm.parent_element	= "mfd_base_eng"--"mfd_eng_circle_r1"
		mfd_eng_circle_l_rpm.h_clip_relation= h_clip_relations.COMPARE
		mfd_eng_circle_l_rpm.level 			= MDF_DEFAULT_LEVEL
		
		mfd_eng_circle_l_rpm.element_params	= {"MM_AC_ENG_L_RPM_ROT"}
		mfd_eng_circle_l_rpm.controllers 	= {{"rotate_using_parameter",0,1},}
		
	Add(mfd_eng_circle_l_rpm)

---------

local 	mfd_eng_line_l_block2  					= Copy(mfd_eng_line_l_block1)
		mfd_eng_line_l_block2.name				= "mfd_eng_line_l_block2"
		mfd_eng_line_l_block2.h_clip_relation 	= h_clip_relations.DECREASE_IF_LEVEL
		mfd_eng_line_l_block2.level 			= MDF_DEFAULT_LEVEL +1
	Add(mfd_eng_line_l_block2)

--------------------------------------------------------------------------------------	
--------------------------------------------------------------------------------------

local   mfd_eng_line_r_rpm			   		= CreateElement "ceMeshPoly"
		mfd_eng_line_r_rpm.name		   		= "mfd_eng_line_r_rpm"
		mfd_eng_line_r_rpm.primitivetype 	= "lines"
		mfd_eng_line_r_rpm.vertices	   		= {	{0, small_radius },{0, small_radius + 0.06},}
		mfd_eng_line_r_rpm.indices	   		= {0,1}
		mfd_eng_line_r_rpm.init_pos	   		= {0.7, 0.2, 0.0}--{0.0, 0.2 - 0.5, 0}
		mfd_eng_line_r_rpm.init_rot	   		= {180.0, 0.0, 0.0}
		mfd_eng_line_r_rpm.material      	= MFCD_TEXT_GREEN--MFCD_GREEN
		mfd_eng_line_r_rpm.isdraw		   	= true
		mfd_eng_line_r_rpm.isvisible	   	= true
		mfd_eng_line_r_rpm.parent_element	= "mfd_base_eng"--"mfd_eng_circle_r1"-- "mfd_base_eng"
		mfd_eng_line_r_rpm.h_clip_relation 	= h_clip_relations.COMPARE
		mfd_eng_line_r_rpm.level 			= MDF_DEFAULT_LEVEL
		mfd_eng_line_r_rpm.element_params	= {"MM_AC_ENG_R_RPM_ROT"}
		mfd_eng_line_r_rpm.controllers 	= {{"rotate_using_parameter",0,-1},}
	Add(mfd_eng_line_r_rpm)	
	
local   mfd_eng_line_l_rpm			   		= CreateElement "ceMeshPoly"
		mfd_eng_line_l_rpm.name		   		= "mfd_eng_line_l_rpm"
		mfd_eng_line_l_rpm.primitivetype 	= "lines"
		mfd_eng_line_l_rpm.vertices	   		= {	{0, small_radius },{0, small_radius + 0.06},}
		mfd_eng_line_l_rpm.indices	   		= {0,1}
		mfd_eng_line_l_rpm.init_pos	   		= {-0.7, 0.2, 0.0}--{0.0, 0.2 - 0.5, 0}
		mfd_eng_line_l_rpm.init_rot	   		= {180.0, 0.0, 0.0}
		mfd_eng_line_l_rpm.material      	= MFCD_TEXT_GREEN--MFCD_GREEN
		mfd_eng_line_l_rpm.isdraw		   	= true
		mfd_eng_line_l_rpm.isvisible	   	= true
		mfd_eng_line_l_rpm.parent_element	= "mfd_base_eng"--"mfd_eng_circle_r1"-- "mfd_base_eng"
		mfd_eng_line_l_rpm.h_clip_relation 	= h_clip_relations.COMPARE
		mfd_eng_line_l_rpm.level 			= MDF_DEFAULT_LEVEL
		mfd_eng_line_l_rpm.element_params	= {"MM_AC_ENG_L_RPM_ROT"}
		mfd_eng_line_l_rpm.controllers 		= {{"rotate_using_parameter",0,1},}
	Add(mfd_eng_line_l_rpm)	
-----------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------
	
	
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------






local 	mfd_eng_line_r_rpm_text         			= CreateElement "ceStringPoly"
		mfd_eng_line_r_rpm_text.name            	= "mfd_eng_line_r_rpm_text"
		mfd_eng_line_r_rpm_text.material        	= MFD_BTN_FONT
		mfd_eng_line_r_rpm_text.init_pos        	= {0.15,0.73,0.0}
		mfd_eng_line_r_rpm_text.alignment       	= "LeftTop"
		mfd_eng_line_r_rpm_text.stringdefs      	= mfd_txt_head_stringdefs--mfd_txt_box_stringdefs
		mfd_eng_line_r_rpm_text.formats         	= {"%.0f%%"} -- .. "\n" .. GetScale()}  
		mfd_eng_line_r_rpm_text.value         		= "WPT: \nDIST: "  
		mfd_eng_line_r_rpm_text.h_clip_relation		= h_clip_relations.COMPARE
		mfd_eng_line_r_rpm_text.level				= MDF_DEFAULT_LEVEL
		mfd_eng_line_r_rpm_text.parent_element  	= "mfd_base_eng"
		mfd_eng_line_r_rpm_text.UseBackground		= true
		mfd_eng_line_r_rpm_text.BackgroundMaterial	= MFCD_BG_BLACK--MFCD_DEBUG
		mfd_eng_line_r_rpm_text.element_params  	= {"MM_AC_ENG_R_RPM_TEXT"}
		mfd_eng_line_r_rpm_text.controllers     	= {
														{"text_using_parameter",0,0},
														}
	Add(mfd_eng_line_r_rpm_text)	
	
	
local 	mfd_eng_line_l_rpm_text  				= Copy(mfd_eng_line_r_rpm_text)
		mfd_eng_line_l_rpm_text.name			= "mfd_eng_line_l_rpm_text"
		mfd_eng_line_l_rpm_text.init_pos        = {-0.15,0.73,0.0}
		mfd_eng_line_l_rpm_text.alignment       = "RightTop"
		mfd_eng_line_l_rpm_text.element_params  = {"MM_AC_ENG_L_RPM_TEXT"}
	Add(mfd_eng_line_l_rpm_text)	
	
	
	
	

---------------------------------------------------------------------------------
---------------------------------------------------------------------------------

local 	obj_name_1		= add_gauge("test",						--just a name to reference object
									MDF_DEFAULT_LEVEL,
									0.25,						--radius of the gauge
									MFCD_LIGHT_GRAY,			--gauge color back
									MFCD_TEXT_GREEN,			--gauge color rotation index
									{0,-0.5,0},					--initial position	-- {0.0,+0.01,0.0} because its actualy has party below INITpos
									{"MM_AC_ENG_L_RPM_ROT"},	--Handle of the rotation in RAD (1-180 degrees)
									"RPM %",					-- Descriptiv text
									MFD_BTN_FONT,				--font of descriptiv text	
									mfd_txt_box_stringdefs,
									{"MM_AC_ENG_L_RPM_ROT"},	--param handl of the text value for the gauge value, expects a float %.0f
									"mfd_base_eng",
									0
									)