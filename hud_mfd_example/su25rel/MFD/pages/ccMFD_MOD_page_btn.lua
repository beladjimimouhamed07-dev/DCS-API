


dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_definitions.lua")



local mfd_btn_marker_size 		= ( 0.149 )
local mfd_btn_marker_offset 	= ( MFD_SIZE - 0.15 - 0.002 )
local mfd_btn_marker_spaceing 	= ( 2 * 0.15 )



--------------------------------------------------------------------------------------

mfd_base_btn             	= CreateElement "ceSimple"
mfd_base_btn.name			= "mfd_base_btn"
mfd_base_btn.init_pos		= {0,0,0}
Add(mfd_base_btn)

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

local 	mfd_btn_marker_base          		= CreateElement "ceTexPoly"  
		mfd_btn_marker_base.init_pos		= {0,0,0}
		mfd_btn_marker_base.init_rot		= {0.0, 0.0, 0.0}
		mfd_btn_marker_base.name 			= "mfd_btn_marker_base"
		mfd_btn_marker_base.primitivetype 	= "lines"
		mfd_btn_marker_base.vertices		= {	{-mfd_btn_marker_size, mfd_btn_marker_size},
												{ mfd_btn_marker_size, mfd_btn_marker_size},
												{ mfd_btn_marker_size,-mfd_btn_marker_size},
												{-mfd_btn_marker_size,-mfd_btn_marker_size}}
		mfd_btn_marker_base.indices      	= {0,1,1,2,2,3,3,0}
		mfd_btn_marker_base.material      	= MFCD_VIOLET
		mfd_btn_marker_base.tex_coords 		= {{0,0},{1,0},{1,1},{0,1}}
		mfd_btn_marker_base.parent_element 	= "mfd_base_btn"
		mfd_btn_marker_base.element_params 	= {"MM_MFD_B_0","MM_MFD_BC_0"}
		mfd_btn_marker_base.controllers 	= {	{"parameter_in_range",0,0.9,2.1},
												{"change_color_when_parameter_equal_to_number", 1, 0, 1.0,0.0,1.0},
												{"change_color_when_parameter_equal_to_number", 1, 1, 1.0,1.0,0.0},
												}
		mfd_btn_marker_base.h_clip_relation = h_clip_relations.COMPARE
		mfd_btn_marker_base.level 			= MDF_DEFAULT_LEVEL
	Add(mfd_btn_marker_base)

local btn_counter = 0

for i=-2,2 do	--top row
	btn_counter = btn_counter + 1
	local 	mfd_btn_marker             		= Copy(mfd_btn_marker_base)
			mfd_btn_marker.name			  	= "mfd_btn_marker_" .. btn_counter
			mfd_btn_marker.init_pos			= {i * mfd_btn_marker_spaceing,mfd_btn_marker_offset,0}
			mfd_btn_marker.element_params  	= {"MM_MFD_B_" .. btn_counter,"MM_MFD_BC_" .. btn_counter }
		Add(mfd_btn_marker)
end

for i=-2,2 do	--right colum
	btn_counter = btn_counter + 1
	local 	mfd_btn_marker             		= Copy(mfd_btn_marker_base)
			mfd_btn_marker.name			  	= "mfd_btn_marker_" .. btn_counter
			mfd_btn_marker.init_pos			= {mfd_btn_marker_offset,-i * mfd_btn_marker_spaceing,0}--{-i * mfd_btn_marker_spaceing,mfd_btn_marker_offset,0}
			mfd_btn_marker.element_params  	= {"MM_MFD_B_" .. btn_counter,"MM_MFD_BC_" .. btn_counter }
		Add(mfd_btn_marker)
end

for i=-2,2 do	--bottom row
	btn_counter = btn_counter + 1
	local 	mfd_btn_marker             		= Copy(mfd_btn_marker_base)
			mfd_btn_marker.name			  	= "mfd_btn_marker_" .. btn_counter
			mfd_btn_marker.init_pos			= {-i * mfd_btn_marker_spaceing,-mfd_btn_marker_offset,0}
			mfd_btn_marker.element_params  	= {"MM_MFD_B_" .. btn_counter,"MM_MFD_BC_" .. btn_counter }
		Add(mfd_btn_marker)
end

for i=-2,2 do	--left colum
	btn_counter = btn_counter + 1
	local 	mfd_btn_marker             		= Copy(mfd_btn_marker_base)
			mfd_btn_marker.name			  	= "mfd_btn_marker_" .. btn_counter
			mfd_btn_marker.init_pos			= {-mfd_btn_marker_offset,i * mfd_btn_marker_spaceing,0}
			mfd_btn_marker.element_params  	= {"MM_MFD_B_" .. btn_counter,"MM_MFD_BC_" .. btn_counter }--{"MM_MFD_B_" .. btn_counter }
		Add(mfd_btn_marker)
end

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

--local txt_offset = (MFD_SIZE-0.01) * MFD_SCALE
  local txt_offset = MFD_SIZE 
  local txt_off_border = 0.009--0.005


local 	mfd_txt_box_base	 				= CreateElement "ceStringPoly"
		mfd_txt_box_base.name			  	= "mfd_txt_box_base"
		mfd_txt_box_base.material        	= MFD_BTN_FONT
		mfd_txt_box_base.init_pos		  	= {0,0,0} 
		mfd_txt_box_base.stringdefs      	= mfd_txt_box_stringdefs
		mfd_txt_box_base.alignment       	= "CenterCenter"
		mfd_txt_box_base.value				= "TEXT"--"T    T\n1230g\nABCD"
		mfd_txt_box_base.formats		  	= {"%s"}
		mfd_txt_box_base.UseBackground		= true
		mfd_txt_box_base.BackgroundMaterial	= MFCD_BG_BLACK
		mfd_txt_box_base.element_params  	= {"MM_MFD_BT_0","MM_MFD_BTS_0"}
		mfd_txt_box_base.controllers     	= {{"text_using_parameter",0,0},{"parameter_in_range",1,-0.1,0.1}} --first index is for element_params (starting with 0) , second for formats ( starting with 0)
		mfd_txt_box_base.parent_element 	= "mfd_base_btn"
		mfd_txt_box_base.use_mipfilter 		= true
		mfd_txt_box_base.h_clip_relation 	= h_clip_relations.COMPARE
		mfd_txt_box_base.level 				= MDF_DEFAULT_LEVEL
	Add(mfd_txt_box_base)


btn_counter = 0
for i=-2,2 do	--top row
	btn_counter = btn_counter + 1
	local 	mfd_txt_box             		= Copy(mfd_txt_box_base)
			mfd_txt_box.name			  	= "mfd_txt_box_" .. btn_counter
			mfd_txt_box.alignment       	= "CenterTop"
			mfd_txt_box.init_pos			= {i * mfd_btn_marker_spaceing,txt_offset-txt_off_border,0}
			mfd_txt_box.element_params  	= {"MM_MFD_BT_" .. btn_counter,"MM_MFD_BTS_" .. btn_counter }
		Add(mfd_txt_box)
		
	local 	mfd_txt_box_inv            			= Copy(mfd_txt_box)
			mfd_txt_box_inv.name		  		= "mfd_txt_box_inv_" .. btn_counter
			mfd_txt_box_inv.controllers    		= {{"text_using_parameter",0,0},{"parameter_in_range",1,0.5,1.5}}
			mfd_txt_box_inv.BackgroundMaterial	= MFCD_GREEN
			mfd_txt_box_inv.material        	= MFD_BTN_FONT_INV
		Add(mfd_txt_box_inv)
end

for i=-2,2 do	--right collum
	btn_counter = btn_counter + 1
	local 	mfd_txt_box             		= Copy(mfd_txt_box_base)
			mfd_txt_box.name			  	= "mfd_txt_box_" .. btn_counter
			mfd_txt_box.alignment       	= "RightCenter"
			mfd_txt_box.init_pos			= {txt_offset-txt_off_border,-i * mfd_btn_marker_spaceing,0}--{i * mfd_btn_marker_spaceing,txt_offset,0}
			mfd_txt_box.element_params  	= {"MM_MFD_BT_" .. btn_counter,"MM_MFD_BTS_" .. btn_counter }
		Add(mfd_txt_box)
		
	local 	mfd_txt_box_inv            			= Copy(mfd_txt_box)
			mfd_txt_box_inv.name		  		= "mfd_txt_box_inv_" .. btn_counter
			mfd_txt_box_inv.controllers    		= {{"text_using_parameter",0,0},{"parameter_in_range",1,0.9,1.1}}
			mfd_txt_box_inv.BackgroundMaterial	= MFCD_GREEN
			mfd_txt_box_inv.material        	= MFD_BTN_FONT_INV
		Add(mfd_txt_box_inv)
end

for i=-2,2 do	--bottom row
	btn_counter = btn_counter + 1
	local 	mfd_txt_box             		= Copy(mfd_txt_box_base)
			mfd_txt_box.name			  	= "mfd_txt_box_" .. btn_counter
			mfd_txt_box.alignment       	= "CenterBottom"
			mfd_txt_box.init_pos			= {-i * mfd_btn_marker_spaceing,-txt_offset+txt_off_border,0}
			mfd_txt_box.element_params  	= {"MM_MFD_BT_" .. btn_counter,"MM_MFD_BTS_" .. btn_counter }
		Add(mfd_txt_box)
		
	local 	mfd_txt_box_inv            			= Copy(mfd_txt_box)
			mfd_txt_box_inv.name		  		= "mfd_txt_box_inv_" .. btn_counter
			mfd_txt_box_inv.controllers    		= {{"text_using_parameter",0,0},{"parameter_in_range",1,0.9,1.1}}
			mfd_txt_box_inv.BackgroundMaterial	= MFCD_GREEN
			mfd_txt_box_inv.material        	= MFD_BTN_FONT_INV
		Add(mfd_txt_box_inv)
end

for i=-2,2 do	--left colum
	btn_counter = btn_counter + 1
	local 	mfd_txt_box             		= Copy(mfd_txt_box_base)
			mfd_txt_box.name			  	= "mfd_txt_box_" .. btn_counter
			mfd_txt_box.alignment       	= "LeftCenter"
			mfd_txt_box.init_pos			= {-txt_offset+txt_off_border,i * mfd_btn_marker_spaceing,0}--{i * mfd_btn_marker_spaceing,txt_offset,0}
			mfd_txt_box.element_params  	= {"MM_MFD_BT_" .. btn_counter,"MM_MFD_BTS_" .. btn_counter }
		Add(mfd_txt_box)
		
	local 	mfd_txt_box_inv            			= Copy(mfd_txt_box)
			mfd_txt_box_inv.name		  		= "mfd_txt_box_inv_" .. btn_counter
			mfd_txt_box_inv.controllers    		= {{"text_using_parameter",0,0},{"parameter_in_range",1,0.9,1.1}}
			mfd_txt_box_inv.BackgroundMaterial	= MFCD_GREEN
			mfd_txt_box_inv.material        	= MFD_BTN_FONT_INV
		Add(mfd_txt_box_inv)
end


--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

	

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

--[[
local 	mfd_btn_txtbox_1         			= CreateElement "ceStringPoly"
		mfd_btn_txtbox_1.name            	= "mfd_btn_txtbox_1"
		mfd_btn_txtbox_1.material        	= MFD_BTN_FONT
		mfd_btn_txtbox_1.init_pos        	= {0.0,0.0,0.0}
		mfd_btn_txtbox_1.init_rot			= {0.0,0.0,0.0}
		mfd_btn_txtbox_1.alignment       	= "CenterCenter"
		mfd_btn_txtbox_1.stringdefs      	= mfd_txt_box_stringdefs
		mfd_btn_txtbox_1.formats         	= {"%s"} -- .. "\n" .. GetScale()}  
		mfd_btn_txtbox_1.value         		= "1 ABCDEFGHIJ14\n2 ABCDEFGHIJ14\n2 ABCDEFGHIJ14\n4 ABCDEFGHIJ14\n"  
		mfd_btn_txtbox_1.h_clip_relation	= h_clip_relations.COMPARE
		mfd_btn_txtbox_1.level				= MDF_DEFAULT_LEVEL
		mfd_btn_txtbox_1.parent_element  	= "mfd_base_btn"
		mfd_btn_txtbox_1.UseBackground		= true
		mfd_btn_txtbox_1.BackgroundMaterial	= MFCD_DEBUG
		
		--mfd_btn_txtbox_1.element_params  	= {}--{"MM_AC_HEAD"}
		--mfd_btn_txtbox_1.controllers     	= {
		--										{"parameter_in_range",0,0.5,1.1},
		--										{"move_left_right_using_parameter"	,0,0.1},
		--										{"move_up_down_using_parameter"		,1,0.1},
		--										{"text_using_parameter",0,0},
		--									}
		
--	Add(mfd_btn_txtbox_1)	
]]--



--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
local 	mfd_btn_listindi         			= CreateElement "ceStringPoly"
		mfd_btn_listindi.name            	= "mfd_btn_listindi"
		mfd_btn_listindi.material        	= MFD_BTN_FONT
		mfd_btn_listindi.init_pos			= {-0.62,0.74,0.0}
		mfd_btn_listindi.alignment       	= "RightTop"
		mfd_btn_listindi.stringdefs      	= mfd_txt_box_stringdefs
		mfd_btn_listindi.formats         	= {"%s"}  
		mfd_btn_listindi.value         		= ">>"  
		mfd_btn_listindi.h_clip_relation	= h_clip_relations.COMPARE
		mfd_btn_listindi.level				= MDF_DEFAULT_LEVEL
		mfd_btn_listindi.parent_element  	= "mfd_base_btn"
		mfd_btn_listindi.UseBackground		= true
		mfd_btn_listindi.BackgroundMaterial	= MFCD_BG_BLACK	
		mfd_btn_listindi.element_params  	= 	{"MM_MFD_LIST_VIS","MM_MFD_LIST_INDI"	}
		mfd_btn_listindi.controllers     	= {
												{"parameter_in_range",0,0.5,1.1},
												{"move_up_down_using_parameter"		,1,0.1},
												{"change_color_when_parameter_equal_to_number", 0, 1, 1.0,1.0,0.0},
											  }
		
	Add(mfd_btn_listindi)	
		

		
		
local 	mfd_btn_listbox         			= CreateElement "ceStringPoly"
		mfd_btn_listbox.name            	= "mfd_btn_listbox"
		mfd_btn_listbox.material        	= MFD_BTN_FONT
		mfd_btn_listbox.init_pos			= {-0.60,0.74,0.0}
		mfd_btn_listbox.alignment       	= "LeftTop"
		mfd_btn_listbox.stringdefs      	= mfd_txt_box_stringdefs
		mfd_btn_listbox.formats         	= {". . /%s\n","%s\n","%s\n","  %s\n"} -- .. "\n" .. GetScale()}  
		mfd_btn_listbox.value         		= "0 ABCDEFGHIJ14\n  1 ABCDEFGHIJ14\n  2 ABCDEFGHIJ14\n  3 ABCDEFGHIJ14\n  4 ABCDEFGHIJ14\n  5 ABCDEFGHIJ14\n  6 ABCDEFGHIJ14\n  7 ABCDEFGHIJ14\n  8 ABCDEFGHIJ14\n  9 ABCDEFGHIJ14\n"  
		mfd_btn_listbox.h_clip_relation		= h_clip_relations.COMPARE
		mfd_btn_listbox.level				= MDF_DEFAULT_LEVEL
		mfd_btn_listbox.parent_element  	= "mfd_base_btn"
		mfd_btn_listbox.UseBackground		= true
		mfd_btn_listbox.BackgroundMaterial	= MFCD_BG_BLACK	
		-- --[[
		mfd_btn_listbox.element_params  	= 	{	"MM_MFD_LIST_VIS",			--0
																										
													"MM_MFD_LIST_ITEM_1_TEXT",	--1
													"MM_MFD_LIST_ITEM_2_TEXT",
													"MM_MFD_LIST_ITEM_3_TEXT",
													"MM_MFD_LIST_ITEM_4_TEXT",
													"MM_MFD_LIST_ITEM_5_TEXT",	--5
													
													"MM_MFD_LIST_ITEM_6_TEXT",
													"MM_MFD_LIST_ITEM_7_TEXT",
													"MM_MFD_LIST_ITEM_8_TEXT",
													"MM_MFD_LIST_ITEM_9_TEXT",
													"MM_MFD_LIST_ITEM_10_TEXT",	--10
													
													"MM_MFD_LIST_ITEM_11_TEXT",	--11
													"MM_MFD_LIST_ITEM_12_TEXT",
													"MM_MFD_LIST_ITEM_13_TEXT",
													"MM_MFD_LIST_ITEM_14_TEXT",
													"MM_MFD_LIST_ITEM_15_TEXT",
													
													"MM_MFD_LIST_ITEM_16_TEXT",
													"MM_MFD_LIST_ITEM_17_TEXT",
													"MM_MFD_LIST_ITEM_18_TEXT",
													"MM_MFD_LIST_ITEM_19_TEXT",
													"MM_MFD_LIST_ITEM_20_TEXT",
													
													"MM_MFD_LIST_ITEM_21_TEXT",
													"MM_MFD_LIST_ITEM_22_TEXT",
													
												}
		mfd_btn_listbox.controllers     	= {
												
												{"parameter_in_range",0,0.5,1.1},
												
												{"text_using_parameter",1,0},	--1
												{"text_using_parameter",2,1},
												{"text_using_parameter",3,1},
												{"text_using_parameter",4,1},
												{"text_using_parameter",5,1},	--5
												
												{"text_using_parameter",6,1},
												{"text_using_parameter",7,1},
												{"text_using_parameter",8,1},
												{"text_using_parameter",9,1},
												{"text_using_parameter",10,1},	--10
												
												{"text_using_parameter",11,1},
												{"text_using_parameter",12,1},
												{"text_using_parameter",13,1},
												{"text_using_parameter",14,1},
												{"text_using_parameter",15,1},	--10
												
												{"text_using_parameter",16,1},
												{"text_using_parameter",17,1},
												{"text_using_parameter",18,1},
												{"text_using_parameter",19,1},
												{"text_using_parameter",20,1},	--10
												
												{"text_using_parameter",21,1},
												{"text_using_parameter",22,1},	--10
											}
	Add(mfd_btn_listbox)	





--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------


--[[
	x_size         = MFD_SIZE * 0.90
	y_size         = MFD_SIZE * 1.90

	dbg_template_box			   = CreateElement "ceMeshPoly"
	dbg_template_box.name		   = "dbg_template_box"
	dbg_template_box.primitivetype = "lines"
	dbg_template_box.vertices	   = {{-x_size, y_size},
									{x_size, y_size},
									{x_size,-y_size},
								   {-x_size,-y_size}}--{{-1.0, -1.0}, {-1.0,  1.0}, {1.0, 1.0}, {1.0, -1.0}}
	dbg_template_box.indices	   = default_rect_indices
	dbg_template_box.init_pos	   = {0.0, 0.0, 0.0}--{0.0, 0.2 - 0.5, 0}
	dbg_template_box.material      =  MakeMaterial(nil,{255,1,1,255})--REGIONS_COLOR
	dbg_template_box.isdraw		   = true
	dbg_template_box.isvisible	   = true
	dbg_template_box.parent_element 	= "mfd_base_btn"
		dbg_template_box.h_clip_relation = h_clip_relations.COMPARE
	dbg_template_box.level 			= MDF_DEFAULT_LEVEL
	--Add(dbg_template_box)
	]]--
	
	
	
	--------------------------------------------------------------------------------------
---make a coursor base
	x_size         = 0.05	--MFD_SIZE * 0.90
	y_size         = 0.05	-- MFD_SIZE * 1.90

local	mfd_cursor			   		= CreateElement "ceMeshPoly"
		mfd_cursor.name		   		= "mfd_cursor"
		mfd_cursor.primitivetype 	= "lines"
		mfd_cursor.vertices	   		= {
										{-x_size * 0.5	,-y_size		},
										{-x_size 		,-y_size   		},
										{-x_size 		,-y_size * 0.5	},
										
										{-x_size 		,y_size	* 0.5	},
										{-x_size 		,y_size   		},
										{-x_size * 0.5	,y_size 		},
										
										{x_size * 0.5	,y_size			},
										{x_size 		,y_size   		},
										{x_size 		,y_size * 0.5	},
										
										{x_size 		,-y_size* 0.5	},
										{x_size 		,-y_size   		},
										{x_size * 0.5	,-y_size 		},
									  }
		mfd_cursor.indices	   		= 	{
										0, 1, 1, 2,
										3, 4, 4, 5,
										6, 7, 7, 8,
										9, 10,10,11
										}	
		mfd_cursor.init_pos	   		= {0.0, 0.0, 0.0}
		mfd_cursor.material      	= MFCD_CURSOR
		mfd_cursor.isdraw		   	= true
		mfd_cursor.isvisible	   	= true
		mfd_cursor.parent_element 	= "mfd_base_btn"
		mfd_cursor.h_clip_relation 	= h_clip_relations.COMPARE
		mfd_cursor.level 			= MDF_DEFAULT_LEVEL
		mfd_cursor.element_params  	= {"MM_CURSOR_LR","MM_CURSOR_UD"}
		mfd_cursor.controllers 		= {
										{"move_left_right_using_parameter"	,0,0.1},
										{"move_up_down_using_parameter"		,1,0.1},
									  }	
	Add(mfd_cursor)
--------------------------------------------------------------------------------------	