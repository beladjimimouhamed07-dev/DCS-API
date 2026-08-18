


dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_definitions.lua")


mfd_base_bmap            	= CreateElement "ceSimple"
mfd_base_bmap.name			= "mfd_base_bmap"
mfd_base_bmap.init_pos		= {0,0,0}
mfd_base_bmap.element_params= {"MM_MFD_PAGE_BMAP"}
mfd_base_bmap.controllers 	= {{"parameter_in_range",0,0.9,1.1}}
Add(mfd_base_bmap)


local x_size         = MFD_SIZE
local y_size         = MFD_SIZE

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------




		



---------------------------------

	x_size         = 0.035	--MFD_SIZE * 0.90
	y_size         = 0.035	-- MFD_SIZE * 1.90

local	mfd_ac_icon			   		= CreateElement "ceMeshPoly"
		mfd_ac_icon.name		   	= "mfd_ac_icon"
		mfd_ac_icon.primitivetype 	= "lines"
		mfd_ac_icon.vertices	   		= {
											{0	   , y_size},
											{x_size,-y_size},
											{-x_size,-y_size},
										  }
		mfd_ac_icon.indices	   		= {0,1,1,2,2,0}
		mfd_ac_icon.init_pos	   	= {0.0, -0.5, 0.0}
		mfd_ac_icon.material      	= MFCD_GREEN
		mfd_ac_icon.isdraw		   	= true
		mfd_ac_icon.isvisible	   	= true
		mfd_ac_icon.parent_element 	= "mfd_base_bmap"
		mfd_ac_icon.h_clip_relation = h_clip_relations.COMPARE
		mfd_ac_icon.level 			= MDF_DEFAULT_LEVEL
	Add(mfd_ac_icon)

----------------------------------------

		local verts,inds = mm_make_circle_4_dot(1)		--(1.25)

local	mfd_circle_1			   	= CreateElement "ceMeshPoly"
		mfd_circle_1.name		   	= "mfd_circle_1"
		mfd_circle_1.primitivetype 	= "lines"
		mfd_circle_1.vertices	   	= verts
		mfd_circle_1.indices	   	= inds
		mfd_circle_1.init_pos	   	= {0.0, -0.5, 0.0}
		mfd_circle_1.material      	= MFCD_GREEN_50
		mfd_circle_1.isdraw		   	= true
		mfd_circle_1.isvisible	   	= true
		mfd_circle_1.parent_element = "mfd_base_bmap"
		mfd_circle_1.h_clip_relation= h_clip_relations.COMPARE
		mfd_circle_1.level 			= MDF_DEFAULT_LEVEL
	Add(mfd_circle_1)

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------	

	
-- HEADING 000
local 	mfd_bmap_txt_1         			= CreateElement "ceStringPoly"
		mfd_bmap_txt_1.name            	= "mfd_bmap_txt_1"
		mfd_bmap_txt_1.material        	= MFD_BTN_FONT
		mfd_bmap_txt_1.init_pos        	= {0.0,0.50,0.0}
		mfd_bmap_txt_1.init_rot			= {0.0,0.0,0.0}
		mfd_bmap_txt_1.alignment       	= "CenterCenter"
		mfd_bmap_txt_1.stringdefs      	= mfd_txt_box_stringdefs
		mfd_bmap_txt_1.formats         	= {"%03.0f\n ^ "} 
		mfd_bmap_txt_1.value         	= "test"  
		mfd_bmap_txt_1.element_params  	= {"MM_AC_HEAD_DEG"}
		mfd_bmap_txt_1.controllers     	= {{"text_using_parameter",0,0}}
		mfd_bmap_txt_1.h_clip_relation	= h_clip_relations.COMPARE
		mfd_bmap_txt_1.level			= MDF_DEFAULT_LEVEL
		mfd_bmap_txt_1.parent_element  	= "mfd_base_bmap"
	Add(mfd_bmap_txt_1)	
	

-- WPT DISTANCE	
local 	mfd_bmap_txt_2         			= CreateElement "ceStringPoly"
		mfd_bmap_txt_2.name            	= "mfd_bmap_txt_2"
		mfd_bmap_txt_2.material        	= MFD_BTN_FONT
		mfd_bmap_txt_2.init_pos        	= {0.72,-0.65,0.0}
		mfd_bmap_txt_2.alignment       	= "RightTop"
		mfd_bmap_txt_2.stringdefs      	= mfd_txt_box_stringdefs
		mfd_bmap_txt_2.formats         	= {"%s"}  
		mfd_bmap_txt_2.value         	= "WPT: \nDIST: "  
		mfd_bmap_txt_2.h_clip_relation	= h_clip_relations.COMPARE
		mfd_bmap_txt_2.level			= MDF_DEFAULT_LEVEL
		mfd_bmap_txt_2.parent_element  	= "mfd_base_bmap"
		mfd_bmap_txt_2.UseBackground	= true
		mfd_bmap_txt_2.BackgroundMaterial= MFCD_BG_BLACK
		mfd_bmap_txt_2.element_params  	= {"MM_MFD_ACT_WPT_DIST"}
		mfd_bmap_txt_2.controllers     	= {
											{"text_using_parameter",0,0},
										}

	Add(mfd_bmap_txt_2)	
	
	-- WPT NAME	
local 	mfd_bmap_txt_4         			= CreateElement "ceStringPoly"
		mfd_bmap_txt_4.name            	= "mfd_bmap_txt_4"
		mfd_bmap_txt_4.material        	= MFD_BTN_FONT
		mfd_bmap_txt_4.init_pos        	= {-0.72,-0.65,0.0}
		mfd_bmap_txt_4.alignment       	= "LeftTop"
		mfd_bmap_txt_4.stringdefs      	= mfd_txt_box_stringdefs
		mfd_bmap_txt_4.formats         	= {"%s"} 
		mfd_bmap_txt_4.value         	= "WPT: \nDIST: "  
		mfd_bmap_txt_4.h_clip_relation	= h_clip_relations.COMPARE
		mfd_bmap_txt_4.level			= MDF_DEFAULT_LEVEL
		mfd_bmap_txt_4.parent_element  	= "mfd_base_bmap"
		mfd_bmap_txt_4.UseBackground	= true
		mfd_bmap_txt_4.BackgroundMaterial= MFCD_BG_BLACK
		mfd_bmap_txt_4.element_params  	= {"MM_MFD_ACT_WPT_TEXT"}
		mfd_bmap_txt_4.controllers     	= {
											{"text_using_parameter",0,0},
										}

	Add(mfd_bmap_txt_4)	
	
	-- scale
local 	mfd_bmap_txt_5         			= CreateElement "ceStringPoly"
		mfd_bmap_txt_5.name            	= "mfd_bmap_txt_5"
		mfd_bmap_txt_5.material        	= MFD_BTN_FONT
		mfd_bmap_txt_5.init_pos        	= {0.72,0.72,0.0}
		mfd_bmap_txt_5.alignment       	= "RightTop"
		mfd_bmap_txt_5.stringdefs      	= mfd_txt_box_stringdefs
		mfd_bmap_txt_5.formats         	= {"1 : %s"}
		mfd_bmap_txt_5.value         	= "Scale"  
		mfd_bmap_txt_5.h_clip_relation	= h_clip_relations.COMPARE
		mfd_bmap_txt_5.level			= MDF_DEFAULT_LEVEL
		mfd_bmap_txt_5.parent_element  	= "mfd_base_bmap"
		mfd_bmap_txt_5.UseBackground	= true
		mfd_bmap_txt_5.BackgroundMaterial= MFCD_BG_BLACK
		mfd_bmap_txt_5.element_params  	= {"MM_MFD_PAGE_BMAP_SCALE"}
		mfd_bmap_txt_5.controllers     	= {
											{"text_using_parameter",0,0},
										}

	Add(mfd_bmap_txt_5)		
	
-----------------------------------------------------------------------------	
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------	


local 	mfd_base_wpt            	= CreateElement "ceSimple"
		mfd_base_wpt.name			= "mfd_base_wpt"
		mfd_base_wpt.init_pos		= {0,0,0}
		mfd_base_wpt.parent_element = "mfd_ac_icon"
		mfd_base_wpt.element_params = {"MM_AC_HEAD_WPT_RAD"}
		mfd_base_wpt.controllers 	= {{"rotate_using_parameter",0,1},}
	Add(mfd_base_wpt)


----------------------------------------------------------------------------------------------------
	x_size         = 0.05
	y_size         = 0.05

	for i = 1,9 do
		
		local verts,inds = mm_make_circle(0.035)--(0.045)--(0.05)		--(1.25)
		
		local	mfd_wpt_1			   		= CreateElement "ceMeshPoly"
				mfd_wpt_1.name		   		= "mfd_wpt_" .. i
				mfd_wpt_1.primitivetype		= "lines"
				mfd_wpt_1.vertices	   		= verts
				mfd_wpt_1.indices	   		= inds
				mfd_wpt_1.init_pos	   		= {0.0, 0.0, 0.0}
				mfd_wpt_1.material     		= MFCD_BLUE
				mfd_wpt_1.isdraw			= true
				mfd_wpt_1.isvisible	   		= true
				mfd_wpt_1.parent_element  	= "mfd_base_wpt"
				mfd_wpt_1.h_clip_relation 	= h_clip_relations.COMPARE
				mfd_wpt_1.level 		  	= MDF_DEFAULT_LEVEL
				
				mfd_wpt_1.element_params  	= {	"MM_MFD_WPT_" .. i .. "_VIS",
												"MM_MFD_WPT_" .. i .. "_LR",
												"MM_MFD_WPT_" .. i .. "_UD",
												"MM_AC_HEAD_WPT_RAD",
												"MM_MFD_WPT_" .. i .. "_COLOR"}
				mfd_wpt_1.controllers 	  	= {
												{"parameter_in_range",0,0.5,1.1},
												{"move_left_right_using_parameter"	,1,1},
												{"move_up_down_using_parameter"		,2,1},
												{"rotate_using_parameter",3,-1},
												
												{"change_color_when_parameter_equal_to_number", 4, 0, 50/255,50/255,255/255},
												{"change_color_when_parameter_equal_to_number", 4, 1, 255/255,50/255,50/255},
											  }	
				
			Add(mfd_wpt_1)
			---waypointnumber
	local 	mfd_bmap_txt_3         			= CreateElement "ceStringPoly"
			mfd_bmap_txt_3.name            	= "mfd_bmap_txt_" .. i
			mfd_bmap_txt_3.material        	= MFD_BTN_FONT
			mfd_bmap_txt_3.init_pos        	= {0.0,0.0,0.0}
			mfd_bmap_txt_3.init_rot			= {0.0,0.0,0.0}
			mfd_bmap_txt_3.alignment       	= "CenterCenter"
			mfd_bmap_txt_3.stringdefs      	=  mfd_txt_box_stringdefs
			mfd_bmap_txt_3.formats         	= {"%1.0f"} 
			mfd_bmap_txt_3.value         	= i  
			mfd_bmap_txt_3.element_params  	= {"MM_MFD_WPT_" .. i .. "_COLOR"}
			mfd_bmap_txt_3.controllers     	= {
												{"change_color_when_parameter_equal_to_number", 0, 0, 50/255,50/255,255/255},
												{"change_color_when_parameter_equal_to_number", 0, 1, 255/255,50/255,50/255},
											  }
			mfd_bmap_txt_3.h_clip_relation	= h_clip_relations.COMPARE
			mfd_bmap_txt_3.level			= MDF_DEFAULT_LEVEL
			mfd_bmap_txt_3.parent_element  	= "mfd_wpt_" .. i
		Add(mfd_bmap_txt_3)	
			
	end
	
----------------------------------------------------------------------------------------------------

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------

local   mfd_wpt_act_line_block1 				= CreateElement "ceMeshPoly"
		mfd_wpt_act_line_block1.name 			= "mfd_wpt_act_line_block1"
		mfd_wpt_act_line_block1.primitivetype 	= "triangles"
		mfd_wpt_act_line_block1.vertices 		= {	{-0.03, -0.065},
													{-0.03, 1.9},	--1.3		--{-0.017,  -0.005},
													{ 0.03, 1.9},	--1.3	--{-0.017,  -0.005},
													{ 0.03, -0.065}
													}
		mfd_wpt_act_line_block1.indices  		= default_box_indices
		mfd_wpt_act_line_block1.init_pos 		= {0,0,0}
		mfd_wpt_act_line_block1.material 		= MFCD_RED--MFCD_BG_BLACK--
		mfd_wpt_act_line_block1.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL
		mfd_wpt_act_line_block1.level			= MDF_DEFAULT_LEVEL
		mfd_wpt_act_line_block1.isdraw		 	= true
		mfd_wpt_act_line_block1.isvisible 		= false
		mfd_wpt_act_line_block1.parent_element 	= "mfd_ac_icon"
		mfd_wpt_act_line_block1.element_params  = {"MM_MFD_WPT_LINE_VIS","MM_MFD_WPT_LINE_ROT","MM_MFD_WPT_LINE_LEN"}
		mfd_wpt_act_line_block1.controllers 	= {
													{"rotate_using_parameter",1,-1},
													{"move_up_down_using_parameter",2,1},
   												  }	

	Add(mfd_wpt_act_line_block1)

---


	x_size         = 0.05
	y_size         = 0.05--0.05

local	mfd_wpt_act_line			   		= CreateElement "ceMeshPoly"
		mfd_wpt_act_line.name		   		= "mfd_wpt_act_line"
		mfd_wpt_act_line.primitivetype		= "lines"
		
		mfd_wpt_act_line.vertices	   		= {
									{0,y_size * 0},
		
									{0,y_size * 1},	--1
									{0,y_size * 2},
									
									{0,y_size * 3},	--2
									{0,y_size * 4},
									
									{0,y_size * 5},	--3
									{0,y_size * 6},
									
									{0,y_size * 7},	--4
									{0,y_size * 8},
									
									{0,y_size * 9},	--5
									{0,y_size * 10},
									
									{0,y_size * 11},--6
									{0,y_size * 12},
									
									{0,y_size * 13},--7
									{0,y_size * 14},
									
									{0,y_size * 15},--8
									{0,y_size * 16},
									
									{0,y_size * 17},--9
									{0,y_size * 18},
									
									{0,y_size * 19},--10
									{0,y_size * 20},
									
									{0,y_size * 21},--11
									{0,y_size * 22},
									
									{0,y_size * 23},--12	---------
									{0,y_size * 24},
									
									{0,y_size * 25},--13
									{0,y_size * 26},
									
									{0,y_size * 27},--14
									{0,y_size * 28},
									
									{0,y_size * 29},--15
									{0,y_size * 30},
									
									{0,y_size * 31},--16
									{0,y_size * 32},
									
									{0,y_size * 33},--17
									{0,y_size * 34},
									
									{0,y_size * 35},--18
									{0,y_size * 36},
									}
		mfd_wpt_act_line.indices	   		= {1,2,  3,4,  5,6,  7,8,  9,10,  11,12,  13,14, 15,16,  17,18,  19,20,  21,22,  23,24,  25,26,  27,28,  29,30,  31,32,  33,34,  35,36 }
		mfd_wpt_act_line.init_pos	   		= {0.0, 0.0, 0.0}
		mfd_wpt_act_line.init_rot	   		= {0.0, 0.0, 0.0}
		mfd_wpt_act_line.material     		= MFCD_RED
		mfd_wpt_act_line.isdraw				= true
		mfd_wpt_act_line.isvisible	   		= true
		mfd_wpt_act_line.parent_element  	= "mfd_ac_icon"
		mfd_wpt_act_line.h_clip_relation 	= h_clip_relations.COMPARE
		mfd_wpt_act_line.level 		  		= MDF_DEFAULT_LEVEL 
		mfd_wpt_act_line.element_params  	= {"MM_MFD_WPT_LINE_VIS","MM_MFD_WPT_LINE_ROT","MM_MFD_WPT_LINE_LEN"}
		mfd_wpt_act_line.controllers 	  	= 	{
													{"rotate_using_parameter",1,-1},
												}	
	Add(mfd_wpt_act_line)

	
	



local 	mfd_wpt_act_line_block2  					= Copy(mfd_wpt_act_line_block1)
		mfd_wpt_act_line_block2.name				= "mfd_wpt_act_line_block2"
		mfd_wpt_act_line_block2.h_clip_relation 	= h_clip_relations.DECREASE_IF_LEVEL
		mfd_wpt_act_line_block2.level 				= MDF_DEFAULT_LEVEL +1
	Add(mfd_wpt_act_line_block2)


	x_size         = 0.045--0.06
	y_size         = 0.045--0.05
	
local	mfd_wpt_act			   		= CreateElement "ceMeshPoly"
		mfd_wpt_act.name		   	= "mfd_wpt_act"
		mfd_wpt_act.primitivetype	= "lines"
		mfd_wpt_act.vertices	   	= {	--{-x_size , -y_size},
										{ 0.75 * x_size, 		y_size},	--0
										{ 		 x_size, 		y_size},	
										{ 		 x_size, 0.75 * y_size},
										
										{		 x_size, 0.75 *	-y_size},
										{		 x_size, 		-y_size},
										{ 0.75 * x_size, 		-y_size},	--5
										
										{ 0.75 * -x_size, 		y_size},	--6
										{ 		 -x_size, 		y_size},	
										{ 		 -x_size, 0.75 * y_size},
										
										{		 -x_size, 0.75 *-y_size},
										{		 -x_size, 		-y_size},
										{ 0.75 * -x_size, 		-y_size},	--11
										
										}
		mfd_wpt_act.indices	   		= {	0,1,	1,2,	
										3,4,   	4,5,  	
										6,7,   	7,8,
										9,10,  	10,11}
		mfd_wpt_act.init_pos	   	= {0.0, 0.0, 0.0}
		mfd_wpt_act.material     	= MFCD_RED
		mfd_wpt_act.isdraw			= true
		mfd_wpt_act.isvisible	   	= true
		mfd_wpt_act.parent_element 	= "mfd_wpt_act_line_block1"
		mfd_wpt_act.h_clip_relation = h_clip_relations.COMPARE
		mfd_wpt_act.level 		  	= MDF_DEFAULT_LEVEL
		
	Add(mfd_wpt_act)	
	
	
	
	
	

	y_size         = 0.05

local	mfd_wpt_airport			   		= CreateElement "ceMeshPoly"
		mfd_wpt_airport.name		   	= "mfd_wpt_airport"
		mfd_wpt_airport.primitivetype	= "lines"--
		mfd_wpt_airport.vertices	   	= dot_line_vert	--{{0,0},{0,0.5}}--
		mfd_wpt_airport.indices	   		= dot_line_indi	--{0,1}--
		mfd_wpt_airport.init_pos	   	= {0, 0, 0}
		mfd_wpt_airport.init_rot	   	= {-5, 0, 0}
		mfd_wpt_airport.material    	= MFCD_WHITE
		mfd_wpt_airport.isdraw			= true
		mfd_wpt_airport.isvisible		= true
		mfd_wpt_airport.parent_element 	= "mfd_wpt_act_line_block2"
		mfd_wpt_airport.h_clip_relation = h_clip_relations.COMPARE
		mfd_wpt_airport.level 			= MDF_DEFAULT_LEVEL 
		mfd_wpt_airport.controllers    	= {	{"parameter_in_range",0,0.9,1.1},
											{"rotate_using_parameter",1,1},
											{"rotate_using_parameter",2,1},
											{"rotate_using_parameter",3,1}	}
		mfd_wpt_airport.element_params 	= {"MM_MFD_WPT_RWDIR_VIS","MM_MFD_WPT_RWDIR_ROT","MM_AC_HEAD_WPT_RAD","MM_MFD_WPT_LINE_ROT"}
	Add(mfd_wpt_airport)
	
	
local	mfd_wpt_airport_1			=	Copy(mfd_wpt_airport)
		mfd_wpt_airport_1.name		= "mfd_wpt_airport_1"
		mfd_wpt_airport_1.init_rot	= {5, 0, 0}
	Add(mfd_wpt_airport_1)
	


	
	
	


