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

-- -- Font nominal glyph heights (in DI - Display Increments)
-- glyphNominalHeight100 = 20
-- glyphNominalHeight120 = glyphNominalHeight100 * 1.2  -- 24 DI
-- glyphNominalHeight150 = glyphNominalHeight100 * 1.5  -- 30 DI
-- glyphNominalHeight200 = glyphNominalHeight100 * 2.0  -- 40 DI

-- -- Font nominal glyph widths (in DI)
-- glyphNominalWidth100 = 12
-- glyphNominalWidth120 = roundDI(glyphNominalWidth100 * 1.2)  -- 14 DI (arrondi)
-- glyphNominalWidth150 = glyphNominalWidth100 * 1.5   -- 18 DI
-- glyphNominalWidth200 = glyphNominalWidth100 * 2.0   -- 24 DI

-- -- Character spacing (in DI)
-- fontIntercharDflt100 = 4
-- fontIntercharDflt120 = 6
-- fontIntercharDflt150 = 6
-- fontIntercharDflt200 = 12
-- fontIntercharDflt120_wide = 9     -- ÉLARGI pour 120_WIDE
-- fontIntercharDflt150_wide = 9     -- ÉLARGI pour 150_WIDE

-- -- Line spacing (in DI)
-- fontInterlineDflt100 = 5
-- fontInterlineDflt120 = 6
-- fontInterlineDflt150 = 12
-- fontInterlineDflt200 = 12

-- -- Font scale factors (multiplied by GetScale())
-- fontScaleY_100 = glyphNominalHeight100 * GetScale()
-- fontScaleY_120 = glyphNominalHeight120 * GetScale()
-- fontScaleY_150 = glyphNominalHeight150 * GetScale()
-- fontScaleY_200 = glyphNominalHeight200 * GetScale()

-- fontScaleX_100 = glyphNominalWidth100 * GetScale()
-- fontScaleX_120 = glyphNominalWidth120 * GetScale()
-- fontScaleX_150 = glyphNominalWidth150 * GetScale()
-- fontScaleX_200 = glyphNominalWidth200 * GetScale()

-- -------------------------------------------------------------------------------------------
-- -- STRINGDEFS (Stroke Font Rendering Parameters)
-- -------------------------------------------------------------------------------------------
-- -- Format: {scaleY, scaleX, interchar_spacing, interline_spacing}

-- stroke_thickness  = 0.7
-- stroke_fuzziness  = 0.5

-- stringdefs = {}

-- stringdefs["STROKE_FNT_DFLT_100"] 		= {fontScaleY_100, fontScaleX_100, fontIntercharDflt100 * GetScale(), fontInterlineDflt100 * GetScale()}
-- stringdefs["STROKE_FNT_DFLT_120"] 		= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120 * GetScale(), fontInterlineDflt120 * GetScale()}
-- stringdefs["STROKE_FNT_DFLT_150"] 		= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150 * GetScale(), fontInterlineDflt150 * GetScale()}
-- stringdefs["STROKE_FNT_DFLT_200"] 		= {fontScaleY_200, fontScaleX_200, fontIntercharDflt200 * GetScale(), fontInterlineDflt200 * GetScale()}
-- stringdefs["STROKE_FNT_DFLT_120_WIDE"] 	= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120_wide * GetScale(), fontInterlineDflt150 * GetScale()}
-- stringdefs["STROKE_FNT_DFLT_150_WIDE"] 	= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150_wide * GetScale(), fontInterlineDflt150 * GetScale()}



-- -------------------------------------------------------------------------------------------
-- -- STROKE FONT AND MATERIAL (F18 AVQ32 compatible)
-- -------------------------------------------------------------------------------------------

-- -- F18 uses stroke fonts rendered at fixed DI sizes with dedicated materials
-- -- Material: {R, G, B, Opacity} - F18 HUD uses {2, 255, 20, 385} for green


-- -------------------------------------------------------------------------------------------
-- -- STROKE RENDERING PARAMETERS (F18 AVQ32 spec)
-- -------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------
-- HUD LEVELS (Z-ordering for rendering)
-------------------------------------------------------------------------------------------
-- Correction : HUD_FOV_LEVEL aligné sur HUD_DEFAULT_LEVEL
HUD_FOV_LEVEL = 1       -- Le FOV écrit '1'
HUD_DEFAULT_LEVEL = 2   -- La vitre ajoute +1 (donc 2), et le texte requiert '2'

-------------------------------------------------------------------------------------------
-- HUD GEOMETRIC PARAMETERS
-------------------------------------------------------------------------------------------

-- Glass positioning
default_eye_distance = 0.58542335
hud_zone = default_eye_distance * math.tan(math.rad(22.0))

-- Optical center offset (4 degrees below the FRL)
collimator_default_distance_factor = {0, math.rad(-4), 0}

-------------------------------------------------------------------------------------------
-- HELPER FUNCTION FOR HUD ELEMENTS
-------------------------------------------------------------------------------------------

function create_HUD_element(element_type)
	local element = CreateElement(element_type)
	element.additive_alpha = true
	element.collimated = true
	element.use_mipfilter = use_mipfilter
	return element
end

-------------------------------------------------------------------------------------------
-- DEFAULT BOX INDICES FOR MESH POLYGONS
-------------------------------------------------------------------------------------------

default_box_indices = {0, 1, 2, 0, 2, 3}

-------------------------------------------------------------------------------------------
-- ADDSTROKETEXT FUNCTION (Enhanced for stroke fonts)
-------------------------------------------------------------------------------------------

function addStrokeText(name, value, stringdef, align, pos, parent, controllers, formats)
    local txt = create_HUD_element("ceStringPoly") 
    txt.name = name
    txt.material = HUD_FONT    -- Use stroke font material (F18 green)
    txt.init_pos = pos or {0, 0, 0}
    txt.alignment = align or "CenterCenter"
    
    -- Handle stringdef (can be numeric index, string key, or table)
    if type(stringdef) == "table" then
        txt.stringdefs = stringdef
    elseif stringdef then
        txt.stringdefs = stringdefs[stringdef] or stringdefs[2]  -- Default to 120 if not found
    else
        txt.stringdefs = stringdefs[2]  -- Default: STROKE_FNT_DFLT_120
    end
    
    if value ~= nil then
        txt.value = value
    end
    
    if parent then
        txt.parent_element = parent
    end
    
    if formats then
        txt.formats = formats
    end
    
    if controllers then
        txt.controllers = controllers
    end
    
    txt.h_clip_relation = h_clip_relations.COMPARE
    txt.level = HUD_DEFAULT_LEVEL
    txt.collimated = true
    txt.additive_alpha = true
    txt.use_mipfilter = use_mipfilter
    
    Add(txt)
    return txt
end

-------------------------------------------------------------------------------------------
-- STROKE SYMBOLOGY FUNCTIONS (F18 AVQ32 compatible)
-------------------------------------------------------------------------------------------

-- function addStrokeLine(name, length, pos, rotation, parent, controllers)
--     local line = create_HUD_element("ceMeshPoly")
--     line.name = name
--     line.primitivetype = "triangles"
    
--     local thickness = 0.5  -- Line thickness in DI
--     local half_len = length / 2
--     local half_thick = thickness / 2
    
--     -- Create a thin rectangle (line)
--     line.vertices = {
--         {-half_len, -half_thick},
--         {-half_len,  half_thick},
--         { half_len,  half_thick},
--         { half_len, -half_thick}
--     }
--     line.indices = {0, 1, 2, 0, 2, 3}
    
--     line.init_pos = pos or {0, 0, 0}
--     if rotation then
--         line.init_rot = {0, 0, rotation}
--     end
    
--     if parent then
--         line.parent_element = parent
--     end
    
--     line.material = HUD_FONT
--     line.h_clip_relation = h_clip_relations.COMPARE
--     line.level = HUD_DEFAULT_LEVEL
--     line.collimated = true
    
--     if controllers then
--         line.controllers = controllers
--     end
    
--     Add(line)
--     return line
-- end

-- function addStrokeBox(name, width, height, pos, parent, fill_material)
--     local box = create_HUD_element("ceMeshPoly")
--     box.name = name
--     box.primitivetype = "triangles"
    
--     local half_w = width / 2
--     local half_h = height / 2
    
--     box.vertices = {
--         {-half_w, -half_h},
--         {-half_w,  half_h},
--         { half_w,  half_h},
--         { half_w, -half_h}
--     }
--     box.indices = {0, 1, 2, 0, 2, 3}
    
--     box.init_pos = pos or {0, 0, 0}
--     box.material = fill_material or HUD_FONT
--     box.h_clip_relation = h_clip_relations.COMPARE
--     box.level = HUD_DEFAULT_LEVEL
--     box.collimated = true
    
--     if parent then
--         box.parent_element = parent
--     end
    
--     Add(box)
--     return box
-- end

-- function addStrokeCircle(name, radius, pos, parent, material, controllers)
--     local circle = create_HUD_element("ceMeshPoly")
--     circle.name = name
--     circle.primitivetype = "triangles"
    
--     local num_segments = 32
--     local vertices = {}
--     local indices = {}
    
--     -- Center vertex
--     table.insert(vertices, {0, 0})
    
--     -- Perimeter vertices
--     for i = 0, num_segments do
--         local angle = (i / num_segments) * math.pi * 2
--         table.insert(vertices, {radius * math.cos(angle), radius * math.sin(angle)})
--     end
    
--     -- Triangles from center to perimeter
--     for i = 1, num_segments do
--         table.insert(indices, 0)
--         table.insert(indices, i)
--         table.insert(indices, i + 1)
--     end
    
--     circle.vertices = vertices
--     circle.indices = indices
--     circle.init_pos = pos or {0, 0, 0}
--     circle.material = material or STROKE_FONT_MATERIAL
--     circle.h_clip_relation = h_clip_relations.COMPARE
--     circle.level = HUD_DEFAULT_LEVEL
--     circle.collimated = true
    
--     if parent then
--         circle.parent_element = parent
--     end
    
--     if controllers then
--         circle.controllers = controllers
--     end
    
--     Add(circle)
--     return circle
-- end

-- -- -------------------------------------------------------------------------------------------

-- F/A-18 MDG DIs (display increments)
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
STROKE_FNT_DFLT_150_X_WIDE 	= 7

stringdefs[STROKE_FNT_DFLT_100] 		= {fontScaleY_100, fontScaleX_100, fontIntercharDflt100 * GetScale(), fontInterlineDflt100 * GetScale()}
stringdefs[STROKE_FNT_DFLT_120] 		= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120 * GetScale(), fontInterlineDflt120 * GetScale()}
stringdefs[STROKE_FNT_DFLT_150] 		= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150 * GetScale(), fontInterlineDflt150 * GetScale()}
stringdefs[STROKE_FNT_DFLT_200] 		= {fontScaleY_200, fontScaleX_200, fontIntercharDflt200 * GetScale(), fontInterlineDflt200 * GetScale()}
stringdefs[STROKE_FNT_DFLT_120_WIDE] 	= {fontScaleY_120, fontScaleX_120, fontIntercharDflt120_wide * GetScale(), fontInterlineDflt150 * GetScale()}
stringdefs[STROKE_FNT_DFLT_150_WIDE] 	= {fontScaleY_150, fontScaleX_150, fontIntercharDflt150_wide * GetScale(), fontInterlineDflt150 * GetScale()}
stringdefs[STROKE_FNT_DFLT_150_X_WIDE] 	= {fontScaleY_150, fontScaleX_200, fontIntercharDflt150_wide * GetScale(), fontInterlineDflt150 * GetScale()}



waterlineShiftY = DegToDI(4)

-- Fonts sizes reference for HUD:
-- 100% - 6.8 mil
-- 120% - 8.16 mil
-- 150% - 10.2 mil
-- 200% - 13.6 mil

-- F/A-18 MDG DIs (display increments)
fontIntercharHUD_small_120 = 3
fontIntercharHUD_norm_120 = 6
fontIntercharHUD_mid_120  = 8
fontIntercharHUD_norm_150 = 6

stringdefs_HUD_small_120 = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_small_120 * GetScale(), fontInterlineDflt120 * GetScale()}
stringdefs_HUD_norm_120 = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_norm_120 * GetScale(), fontInterlineDflt120 * GetScale()}
stringdefs_HUD_mid_120  = {fontScaleY_120, fontScaleX_120, fontIntercharHUD_mid_120 * GetScale(),  fontInterlineDflt120 * GetScale()}
stringdefs_HUD_norm_150 = {fontScaleY_150, fontScaleX_150, fontIntercharHUD_norm_150 * GetScale(), fontInterlineDflt150 * GetScale()}

-- Airspeed/Altitude numerics definitions
local CAS_AltBoxGapY 	= 5
CAS_AltBoxHeight 		= glyphNominalHeight150 + CAS_AltBoxGapY * 2
--CAS_AltBoxEdgeX 		= 350 -- F18
CAS_AltBoxEdgeX 		= 400 -- Rafale
CAS_AltNumericsShiftY 	= -glyphNominalHeight150 / 2 - CAS_AltBoxGapY

CAS_BoxWidth 			= 115
Alt_BoxWidth 			= 141
gap_alt_hund_tenths 	= 15

-- placeholders
waterline_origin = addPlaceholder("waterline_origin", {0, waterlineShiftY})
CAS_BoxOrigin    = addPlaceholder("CAS_BoxOrigin", {-CAS_AltBoxEdgeX, 0}, waterline_origin.name)
ALT_BoxOrigin    = addPlaceholder("ALT_BoxOrigin", {CAS_AltBoxEdgeX, 0}, waterline_origin.name)


