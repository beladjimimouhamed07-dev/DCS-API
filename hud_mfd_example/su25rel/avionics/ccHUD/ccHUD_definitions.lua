dofile(LockOn_Options.common_script_path.."elements_defs.lua")

-------------------------------------------------------------------------------------------

HUD_SCALE = 1

SetScale(FOV) -- MILLIRADIANS
use_mipfilter = true

HUD_FOV_LEVEL = 2
HUD_DEFAULT_LEVEL = HUD_FOV_LEVEL + 1

default_eye_distance = 0.58542335
hud_zone = default_eye_distance*math.tan(math.rad(11.2))

--pitch_co = 0.1062		


-------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------

function create_HUD_element(element_type)
	local element			= CreateElement(element_type)
	element.additive_alpha	= true
	element.collimated		= true
	element.use_mipfilter	= use_mipfilter
	
	return element
end


-------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------

----Colors---------------{RED,GREEN,BLUE,OPACITY}--------------
	HUD_COLOR			= {20, 255, 50, 220}
	TEXT_GREEN_COLOR 	= {20, 255, 50, 220}	--255
	
	
	BG_BLACK_COLOR		= {30, 30, 30, 255}
	
	TEXT_BLACK_COLOR 	= BG_BLACK_COLOR--{2, 2, 2, 255}
---------------------------------------------------------------
	
	HUD_MATERIAL	= MakeMaterial(nil,HUD_COLOR)
	
	HUD_DEBUG_GREEN	= MakeMaterial(nil,{25,200,25,120})
	HUD_DEBUG_RED	= MakeMaterial(nil,{200,25,25,80})
	HUD_DEBUG_WHITE	= MakeMaterial(nil,{200,250,250,80})
	HUD_DEBUG_BLACK	= MakeMaterial(nil,{20,25,25,200})

----------------------------------------------------------------

	
-------FONTS------------------------------------------------------------------------------

HUD_FONT 	= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_GREEN_COLOR)		--5 "font_arial_17"  is good 
HUD_FONT_INV= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_BLACK_COLOR)

FONT_SCALE = HUD_SCALE + ( (1-HUD_SCALE) / 2)

local font_size 					= 0.008						* FONT_SCALE
local default_char_height  			= font_size or 0.004		* FONT_SCALE
local default_char_width   			= 0.3 * default_char_height	* FONT_SCALE
local default_char_vert_spaceing 	= -0.001							--must be adjustet manualy to scale (scale 0.8   	-0.001

txt_box_stringdefs 	= 	{default_char_height		, default_char_width		,0, default_char_vert_spaceing} 
txt_head_stringdefs = 	{default_char_height * 1.3 	, default_char_width * 1.3	,0, -0.0025} 

txt_wpt_stringdefs 	= 	{default_char_height * 1.2 	, default_char_width * 1.2	,0, default_char_vert_spaceing} 

txt_hud_stringdefs 	= 	{default_char_height * 1		, default_char_width * 1		,0, default_char_vert_spaceing} 
txt_hud_s_stringdefs= 	{default_char_height * 1 * 0.5	, default_char_width * 1 * 0.5	,0, default_char_vert_spaceing} 
txt_hud_1_stringdefs= 	{default_char_height * 1		, default_char_width * 1		,-0.00051, default_char_vert_spaceing}
-----------------------------------------------------------------------------------------


