-- ccHUD_definitions.lua - FIXED for F18 AVQ32 HUD
-- All functions MUST be defined before SetScale usage

dofile(LockOn_Options.common_script_path.."tools.lua") -- Dépendance ajoutée
dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.script_path.."materials.lua")

-------------------------------------------------------------------------------------------
-- CRITICAL: Define all conversion constants FIRST before SetScale
-------------------------------------------------------------------------------------------

-- Display Increment (DI) is the minimum stroke ray position increment
MeterToIn         	= 39.3701 / 1.00000054
DegToMil          	= math.rad(1) * 1000
UnitsPerSide      	= 1024
HalfUnitsPerSide  	= UnitsPerSide / 2

-- F18 AVQ32 constants
local DItoMil_ 		= 0.34
local MilToDI_ 		= 1.0 / DItoMil_
local DItoIn_  		= 0.0048
local InToDI_  		= 1.0 / DItoIn_
local DegToDI_ 		= math.rad(1) * 1000.0 * MilToDI_
local DItoDeg_ 		= 1.0 / DegToDI_
local RadToDI_ 		= 1000.0 * MilToDI_
local DItoRad_ 		= 1.0 / RadToDI_

-- Define conversion functions GLOBALLY BEFORE anything uses them
function DItoMil(param) 
	return (param or 1) * DItoMil_ 
end

function MilToDI(param) 
	return (param or 1) * MilToDI_ 
end

function DItoIn(param) 
	return (param or 1) * DItoIn_ 
end

function InToDI(param) 
	return (param or 1) * InToDI_ 
end

function DegToDI(param) 
	return (param or 1) * DegToDI_ 
end

function DItoDeg(param) 
	return (param or 1) * DItoDeg_ 
end

function RadToDI(param) 
	return (param or 1) * RadToDI_ 
end

function DItoRad(param) 
	return (param or 1) * DItoRad_ 
end

-------------------------------------------------------------------------------------------
-- NOW set the scale (after all functions are defined)
-------------------------------------------------------------------------------------------

HUD_SCALE = 1

-- F18 AVQ32 HUD SCALE CONFIGURATION
SetScale(MILLYRADIANS) -- Angular measurement in milliradians
DItoScreenUnits = 0.34 -- Display Increment to Screen Units conversion (F18 spec)
SetCustomScale(GetScale() * DItoScreenUnits) -- Apply DI scaling
use_mipfilter = true

-------------------------------------------------------------------------------------------
-- HUD MATERIALS AND COLORS
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

HUD_GREEN_COLOR = {0, 255, 100, 255}
HUD_GREEN_FOV = MakeMaterial(nil, {0, 255, 100, 200})

-------FONTS------------------------------------------------------------------------------

HUD_FONT 	= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_GREEN_COLOR)		--5 "font_arial_17"  is good 
HUD_FONT_INV= MakeFont({used_DXUnicodeFontData = "font_arial_17"},TEXT_BLACK_COLOR)

FONT_SCALE = HUD_SCALE + ( (1-HUD_SCALE) / 2)

local font_size 					= 0.008						* FONT_SCALE
local default_char_height  			= font_size or 0.004		* FONT_SCALE
local default_char_width   			= 0.3 * default_char_height	* FONT_SCALE
local default_char_vert_spaceing 	= -0.001							--must be adjustet manualy to scale (scale 0.8   	-0.001



stringdefs = {}




txt_box_stringdefs 	= 	{default_char_height		, default_char_width		,0, default_char_vert_spaceing} 
txt_head_stringdefs = 	{default_char_height * 1.3 	, default_char_width * 1.3	,0, -0.0025} 

txt_wpt_stringdefs 	= 	{default_char_height * 1.2 	, default_char_width * 1.2	,0, default_char_vert_spaceing} 

txt_hud_stringdefs 	= 	{default_char_height * 1		, default_char_width * 1		,0, default_char_vert_spaceing} 
txt_hud_s_stringdefs= 	{default_char_height * 1 * 0.5	, default_char_width * 1 * 0.5	,0, default_char_vert_spaceing} 
txt_hud_1_stringdefs= 	{default_char_height * 1		, default_char_width * 1		,-0.00051, default_char_vert_spaceing}

-------------------------------------------------------------------------------------------
-- F18 AVQ32 STROKE FONT CONFIGURATION (MDG-compatible)
-------------------------------------------------------------------------------------------

-- Helper function for rounding DI values (MUST be FIRST before any usage)
function roundDI(value)
	if value > 0 then
		return math.floor(value + 0.5)
	else
		return math.ceil(value - 0.5)
	end
end


