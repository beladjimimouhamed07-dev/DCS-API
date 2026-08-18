--default_box_indices  = {0, 1, 2, 0, 2, 3}
--default_rect_indices = {0, 1, 1, 2, 2, 3, 3, 0}

local lfs = require('lfs')

modpath = LockOn_Options.script_path.."avionics/avMFD/"

dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.common_script_path.."tools.lua")


dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_draw_functions.lua")	

-------------------------------------------------------------------------------------------------------------

MFD_SIZE 	= 1
MFD_SCALE	= 1

SetCustomScale(0.1 * MFD_SCALE)
	--SetCustomScale(0.1)
	--GetScale()

MDF_FOV_LEVEL 		= 8
MDF_DEFAULT_LEVEL 	= MDF_FOV_LEVEL + 1

----Colors--------------------------------
	BG_BLACK_COLOR		= {30, 30, 30, 255}
	TEXT_GREEN_COLOR 	= {0, 255, 50, 255}
	TEXT_BLACK_COLOR 	= BG_BLACK_COLOR--{2, 2, 2, 255}
------------------------------------------


MATERIAL_BLACK   	= MakeMaterial(nil,{25,25,25,255})
MFCD_BG_BLACK		= MakeMaterial(nil,BG_BLACK_COLOR)--{20,20,20,255})			--MFG background
MFCD_SOLID_BLACK   	= MakeMaterial(nil,{0,0,0,255,255})


MFCD_GREEN			= MakeMaterial(nil,{0, 255, 5, 255})
MFCD_WHITE			= MakeMaterial(nil,{255, 255, 255, 80})
MFCD_GREEN_50		= MakeMaterial(nil,{0, 255, 5, 80})
MFCD_TEXT_GREEN		= MakeMaterial(nil,TEXT_GREEN_COLOR)
MFCD_VIOLET			= MakeMaterial(nil,{255, 0, 255, 255})
MFCD_BLUE			= MakeMaterial(nil,{0, 0, 255, 255})
MFCD_RED			= MakeMaterial(nil,{255, 50, 50, 128})

MFCD_CURSOR			= MakeMaterial(nil,{255, 255, 0, 255})
MFCD_YELLOW			= MakeMaterial(nil,{255, 255, 0, 255})

MFCD_LIGHT_GRAY		= MakeMaterial(nil,{255, 255, 255, 100})

MFCD_DEBUG	 		= MakeMaterial(nil,{150,150,150,255})--{20,20,20,255})			--MFG background




-------FONTS------------------------------------------------------------------------------

MFD_BTN_FONT 	= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_GREEN_COLOR)		--5 "font_arial_17"  is good 
MFD_BTN_FONT_INV= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_BLACK_COLOR)

MFD_FONT_SCALE = MFD_SCALE + ( (1-MFD_SCALE) / 2)

local font_size 					= 0.008						* MFD_FONT_SCALE
local default_char_height  			= font_size or 0.004		* MFD_FONT_SCALE
local default_char_width   			= 0.3 * default_char_height	* MFD_FONT_SCALE
local default_char_vert_spaceing 	= -0.001							--must be adjustet manualy to scale (scale 0.8   	-0.001

mfd_txt_box_stringdefs 	= 	{default_char_height		, default_char_width		,0, default_char_vert_spaceing} 
mfd_txt_head_stringdefs = 	{default_char_height * 1.3 	, default_char_width * 1.3	,0, -0.0025} 

mfd_txt_wpt_stringdefs 	= 	{default_char_height * 1.2 	, default_char_width * 1.2	,0, default_char_vert_spaceing} 

------------------------------------------------------------------------------------------

local vert_int = 0.05
dot_line_vert = {
									{0,vert_int * 0},
		
									{0,vert_int * 1},	--1
									{0,vert_int * 2},
									
									{0,vert_int * 3},	--2
									{0,vert_int * 4},
									
									{0,vert_int * 5},	--3
									{0,vert_int * 6},
									
									{0,vert_int * 7},	--4
									{0,vert_int * 8},
									
									{0,vert_int * 9},	--5
									{0,vert_int * 10},
									
									{0,vert_int * 11},--6
									{0,vert_int * 12},
									
									{0,vert_int * 13},--7
									{0,vert_int * 14},
									
									{0,vert_int * 15},--8
									{0,vert_int * 16},
									
									{0,-vert_int * 1},	--1
									{0,-vert_int * 2},
									
									{0,-vert_int * 3},	--2
									{0,-vert_int * 4},
									
									{0,-vert_int * 5},	--3
									{0,-vert_int * 6},
									
									{0,-vert_int * 7},	--4
									{0,-vert_int * 8},
									
									{0,-vert_int * 9},	--5
									{0,-vert_int * 10},
									
									{0,-vert_int * 11},--6
									{0,-vert_int * 12},
									
									{0,-vert_int * 13},--7
									{0,-vert_int * 14},
									
									{0,-vert_int * 15},--8
									{0,-vert_int * 16},
									
									--[[
									{0,vert_int * 17},--9
									{0,vert_int * 18},
									
									{0,vert_int * 19},--10
									{0,vert_int * 20},
									
									{0,vert_int * 21},--11
									{0,vert_int * 22},
									
									{0,vert_int * 23},--12	---------
									{0,vert_int * 24},
									
									{0,vert_int * 25},--13
									{0,vert_int * 26},
									
									{0,vert_int * 27},--14
									{0,vert_int * 28},
									
									{0,vert_int * 29},--15
									{0,vert_int * 30},
									
									{0,vert_int * 31},--16
									{0,vert_int * 32},
									
									{0,vert_int * 33},--17
									{0,vert_int * 34},
									
									{0,vert_int * 35},--18
									{0,vert_int * 36},
									]]--
						}
	dot_line_indi  		= {1,2,  3,4,  5,6,  7,8,  9,10,  11,12,  13,14, 15,16,  17,18,  19,20,  21,22,  23,24,  25,26,  27,28,  29,30,  31,32,  33,34,  35,36 }

------------------------------------------------------------------------------------------


	
	
----------------------------------------------------------------------------------
----------------------------------------------------------------------------------
----------------------------------------------------------------------------------



