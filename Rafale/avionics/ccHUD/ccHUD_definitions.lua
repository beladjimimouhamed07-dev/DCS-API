-- ccHUD_definitions.lua - FIXED for F18 AVQ32 HUD
-- All functions MUST be defined before SetScale usage
-- ✅ AJOUT: STRINGDEF 150 WIDE pour SVG stroke fonts Rafale

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

-- Helper function for rounding DI values (MUST be FIRST before any usage)
function roundDI(value)
	if value > 0 then
		return math.floor(value + 0.5)
	else
		return math.ceil(value - 0.5)
	end
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

HUD_FOV_LEVEL = 2
HUD_DEFAULT_LEVEL = HUD_FOV_LEVEL + 1

waterlineShiftY = DegToDI(4)
-- default_eye_distance = 0.58542335
-- hud_zone = default_eye_distance*math.tan(math.rad(11.2))

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
fonts = {}

-------------------------------------------------------------------------------------------
-- F18 AVQ32 STROKE FONT CONFIGURATION (MDG-compatible)
-------------------------------------------------------------------------------------------
glyphNominalHeight100 = 20
glyphNominalWidth100  = 12
glyphAspect = glyphNominalWidth100 / glyphNominalHeight100

glyphNominalHeight120 = glyphNominalHeight100 * 1.2
glyphNominalHeight150 = glyphNominalHeight100 * 1.5
glyphNominalHeight200 = glyphNominalHeight100 * 2

glyphNominalWidth120 = roundDI(glyphNominalWidth100 * 1.2)
glyphNominalWidth150 = glyphNominalWidth100 * 1.5
glyphNominalWidth200 = glyphNominalWidth100 * 2

fontScaleY_100 = glyphNominalHeight100 * GetScale()
fontScaleY_120 = glyphNominalHeight120 * GetScale()
fontScaleY_150 = glyphNominalHeight150 * GetScale()
fontScaleY_200 = glyphNominalHeight200 * GetScale()

fontScaleX_100 = glyphNominalWidth100 * GetScale()
fontScaleX_120 = glyphNominalWidth120 * GetScale()
fontScaleX_150 = glyphNominalWidth150 * GetScale()
fontScaleX_200 = glyphNominalWidth200 * GetScale()

fontIntercharDflt100 		= 4
fontIntercharDflt120 		= 6
fontIntercharDflt150 		= 6
fontIntercharDflt200 		= 12
fontIntercharDflt120_wide 	= 9
fontIntercharDflt150_wide 	= 9

fontInterlineDflt100 		= 5
fontInterlineDflt120 		= 6
fontInterlineDflt150 		= 12
fontInterlineDflt200 		= 12

STROKE_FNT_DFLT_100 		= 1
STROKE_FNT_DFLT_120 		= 2
STROKE_FNT_DFLT_150 		= 3
STROKE_FNT_DFLT_200 		= 4
STROKE_FNT_DFLT_120_WIDE 	= 5
STROKE_FNT_DFLT_150_WIDE 	= 6

fontIntercharHUD_small_120 = 3
fontIntercharHUD_norm_120 = 6
fontIntercharHUD_mid_120  = 8
fontIntercharHUD_norm_150 = 6



stringdefs = {}



STROKE_FNT_DFLT_100		= {fontScaleY_100, fontScaleX_100, fontIntercharDflt100 * GetScale(), fontInterlineDflt100 * GetScale()}
STROKE_FNT_DFLT_120		= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120 * GetScale(), fontInterlineDflt120 * GetScale()}
STROKE_FNT_DFLT_150 		= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150 * GetScale(), fontInterlineDflt150 * GetScale()}
STROKE_FNT_DFLT_200 		= {fontScaleY_200, fontScaleX_200, fontIntercharDflt200 * GetScale(), fontInterlineDflt200 * GetScale()}
STROKE_FNT_DFLT_120_WIDE 	= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120_wide * GetScale(), fontInterlineDflt150 * GetScale()}
STROKE_FNT_DFLT_150_WIDE 	= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150_wide * GetScale(), fontInterlineDflt150 * GetScale()}
stringdefs_HUD_small_120 = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_small_120 * GetScale(), fontInterlineDflt120 * GetScale()}
stringdefs_HUD_norm_120 = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_norm_120 * GetScale(), fontInterlineDflt120 * GetScale()}
stringdefs_HUD_mid_120  = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_mid_120 * GetScale(),  fontInterlineDflt120 * GetScale()}
stringdefs_HUD_norm_150 = {fontScaleY_150, fontScaleX_150, fontIntercharHUD_norm_150 * GetScale(), fontInterlineDflt150 * GetScale()}
------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------
---
----------------------------------------------------------------------------------------------
-- PONT DE COMPATIBILITÉ POUR SYMBOLOGY_DEFS.LUA
-------------------------------------------------------------------------------------------


