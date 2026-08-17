-- ccHUD_page_common.lua - CORRECTED
-- Affichage des symboles, échelles de tangage, badin et altimètre

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")
dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_tools.lua")

waterlineShiftY = DegToDI(4)
-- =======================================================================
-- BASES HUD ET DÉCALAGE OPTIQUE (WATERLINE)
-- =======================================================================
local hud_zero_base = addHUDPlaceholder("hud_zero_base", {0, 0})

-- Airspeed/Altitude numerics definitions
local CAS_AltBoxGapY 	= 5
CAS_AltBoxHeight 		= glyphNominalHeight150 + CAS_AltBoxGapY * 2
--CAS_AltBoxEdgeX 		= 350 -- F18
CAS_AltBoxEdgeX 		= 400 -- Rafale
CAS_AltNumericsShiftY 	= -glyphNominalHeight150 / 2 - CAS_AltBoxGapY
gap_alt_hund_tenths 	= 15

-- placeholders
waterline_origin = addHUDPlaceholder("waterline_origin", {0, waterlineShiftY})
CAS_BoxOrigin    = addHUDPlaceholder("CAS_BoxOrigin", {-CAS_AltBoxEdgeX, 0})
ALT_BoxOrigin    = addHUDPlaceholder("ALT_BoxOrigin", {CAS_AltBoxEdgeX, 0})
-- =======================================================================
-- VARIABLES DE RÉFÉRENCE
-- =======================================================================
local alpha_mach_g_pos_Y = 8
local alpha_mach_g_placeholder = addHUDPlaceholder("alpha_mach_g_placeholder", {-CAS_AltBoxEdgeX -200, alpha_mach_g_pos_Y-DegToDI(4)})

local mach_g_stepY           = -56
local alpha_mach_g_numericsX = 120
local mach_g_shiftX          = 7
local hdgScaleTenDegreesStep = 42.5*2
local hdgScaleLongTickLen    = 14
local hdgScaleTextShiftY     = 0
local DI_PerOneDegree        = hdgScaleTenDegreesStep / 10
local DI_PerOneDegree1        = 11

-- =======================================================================
-- 1. VITESSE & ALTITUDE
-- =======================================================================

local IAS = addHUDText("CAS_numerics", nil, STROKE_FNT_DFLT_150_WIDE, "RightCenter", {150, CAS_AltNumericsShiftY+240}, CAS_BoxOrigin.name,{{"text_using_parameter", 0}},{"RAFALE_HUD_SPEED_IAS"},{"%s"})

local shiftX_alt_thousands 	= fontIntercharDflt120_wide * 2 + glyphNominalWidth120 * 3 + gap_alt_hund_tenths * 1.75
addHUDText("HUD_altitude_above_1000_thousands", nil, STROKE_FNT_DFLT_150_WIDE, "RightCenter", {-shiftX_alt_thousands+60, CAS_AltNumericsShiftY+207.5}, ALT_BoxOrigin.name,{{"text_using_parameter", 0}},{"RAFALE_HUD_ALT_BARO_FL"},{"%s"})
addHUDText("HUD_altitude_above_1000_hund_tenths", nil, STROKE_FNT_DFLT_120_WIDE, "RightCenter", {-gap_alt_hund_tenths+40, (CAS_AltNumericsShiftY*1.15)+207.5}, ALT_BoxOrigin.name,{{"text_using_parameter", 0}},{"RAFALE_HUD_ALT_BARO_DU"},{"%s"})


local fixedCircleRadius = DegToDI(3.2) / 2  -- Rayon du cercle (convertir 3.2° en DI et diviser par 2)
local pointsCount = 10  -- Nombre de points
local angleStep = 36  -- Écart angulaire entre points (360 / 10 = 36°)
local initialRotationOffset = 90  -- Décalage initial (90° = point du haut)
 
-- Créer le nœud parent racine (tous les points enfants seront attachés ici)
local circlePointsRoot = addHUDPlaceholder("HUD_Fixed_Circle_Points_Root", {367, 395-DegToDI(4)})
 
-- Boucle : créer 10 points répartis circulairement
for i = 0, pointsCount - 1 do
    -- Calculer l'angle du point actuel (en radians)
    local angle = math.rad(i * angleStep + initialRotationOffset)
    
    -- Calculer les coordonnées X et Y relative au centre
    local x = fixedCircleRadius * math.cos(angle)
    local y = fixedCircleRadius * math.sin(angle)
    
    -- Créer le point (petit cercle de 1.5 DI de rayon)
    -- Rayon 1.5, position relative, parent = circlePointsRoot
    local dot = CreateElement("ceSCircle")
    dot.name = "HUD_Fixed_Circle_Point_"..i
    dot.isdraw = true
    dot.material = HUD_MATERIAL
    dot.additive_alpha = true
    dot.collimated = true
    dot.use_mipfilter = use_mipfilter
    
    dot.radius = {1.5, 1.5}
    dot.arc = {0, math.pi * 2}
    dot.segment = math.pi * 2 / 64  -- 64 segments pour un cercle lisse
    dot.gap = math.pi * 2 / 64
    dot.segment_detail = 4
    dot.dashed = false
    
    dot.init_pos = {x, y, 0}
    dot.parent_element = circlePointsRoot.name
    dot.h_clip_relation = h_clip_relations.COMPARE
    dot.level = HUD_DEFAULT_LEVEL
    
    Add(dot)
end


local triangle_rotator = addHUDPlaceholder("triangle_rotator", 
    {367, 395-DegToDI(4)}, 
    nil,
    {{"rotate_using_parameter", 0, -math.pi*2}}
)
triangle_rotator.element_params = {"altimetre_pointeur"}


local triangle_vertices = {
    {0, fixedCircleRadius},  
    {-8, fixedCircleRadius - 24}, 
    {8, fixedCircleRadius - 24}    
}

local triangle_indices = {0, 1, 2}  

local rotating_triangle = addHUDMesh("rotating_triangle", 
    triangle_vertices, 
    triangle_indices, 
    {0, 0},                       
    HUD_GREEN,               
    triangle_rotator.name,       
    nil,                            
    nil
)

-- =======================================================================
-- 2. MACH & G
-- =======================================================================
local Mach = addHUDText("Mach_numerics", nil, stringdefs_HUD_norm_120, "RightCenter",  {-248, CAS_AltNumericsShiftY+402-DegToDI(4)},nil,{{"text_using_parameter", 0}},{"RAFALE_HUD_SPEED_MACH"},{"%s"})

addHUDText("G_symbol", "G", stringdefs_HUD_norm_120, "LeftCenter", {mach_g_shiftX *170, mach_g_stepY *3.5}, alpha_mach_g_placeholder.name)
local g_txt = addHUDText("G_numerics", nil, stringdefs_HUD_norm_120, "RightCenter", {mach_g_shiftX *175, mach_g_stepY *4.1}, alpha_mach_g_placeholder.name, {{"text_using_parameter", 0}},nil,{"%.1f"})
g_txt.element_params = {"HUD_GZ_ACCEL_VALUE"}

-- =======================================================================
-- AOA
-- =======================================================================
addHUDText("alpha_label", "AOA", stringdefs_HUD_norm_120, "RightCenter", {0, mach_g_stepY *3.5}, alpha_mach_g_placeholder.name,nil)
local aoa_display = addHUDText("HUD_AoA_Display", nil, STROKE_FNT_DFLT_120, "RightCenter", {-CAS_AltBoxEdgeX - 85, -188-DegToDI(4)}, nil, {{"text_using_parameter", 0, 0}},nil,{"%.1f"})
aoa_display.element_params = {"AoA_param"}
-- =======================================================================
-- RELEASE STICK
-- =======================================================================

local release_stick_text = addHUDText("HUD_Release_Stick", "RELEASE STICK", STROKE_FNT_DFLT_150_WIDE, "CenterCenter", 
    {0, 0}, nil, 
    {
        {"parameter_in_range", 0, 0.9, 1.1}, 
    })
release_stick_text.element_params = {"HUD_RELEASE_STICK_FLASH"}

-- =======================================================================
-- ADI
-- =======================================================================
-- =======================================================================
-- ADI (ATTITUDE DIRECTOR INDICATOR)
-- =======================================================================

-- 1. Contour / Boîtier ADI
local ADI_contour = addRafaleHUDSymbol("ADI_contour", {"stroke_symbols_HUD", "ADI-contour"}, "RightCenter", 
    {-CAS_AltBoxEdgeX + 25, -188-DegToDI(4)}, nil, 
    {{"parameter_in_range", 0, 0.5, 1.5}}, 1.6)
ADI_contour.element_params = {"HUD_ADI_VISIBILITY"}

-- 2. Nœud parent rotatif (Inclinaison)
local ADI_parent = addHUDPlaceholder("ADI_parent", {-CAS_AltBoxEdgeX + 1, -188-DegToDI(4)}, nil, 
    {
        {"parameter_in_range", 0, 0.5, 1.5}, 
        {"rotate_using_parameter", 1, 1}
    }
)
ADI_parent.element_params = {"HUD_ADI_VISIBILITY", "HUD_ADI_MASK_ROT"}

-- 3. Géométrie du masque circulaire
local radius = 24
local segments = 36 
local ADI_mask_vertices = {{0, 0}}
local ADI_mask_indices = {}

for i = 0, segments do
    local angle = math.rad(i * (360 / segments))
    local x = radius * math.cos(angle)
    local y = radius * math.sin(angle)
    ADI_mask_vertices[i + 2] = {x, y}
end

for i = 1, segments do
    ADI_mask_indices[(i - 1) * 3 + 1] = 0  
    ADI_mask_indices[(i - 1) * 3 + 2] = i + 1
    ADI_mask_indices[(i - 1) * 3 + 3] = i + 2
end

ADI_mask_indices[segments * 3 + 1] = 0
ADI_mask_indices[segments * 3 + 2] = segments + 1
ADI_mask_indices[segments * 3 + 3] = 2

-- 4. Ouverture du masque stencil
local ADI_mask_open = addHUDMaskOpen("ADI_mask_open", 1, 
    ADI_mask_vertices, ADI_mask_indices, 
    {0, 0}, ADI_parent.name, 
    {{"parameter_in_range", 0, 0.5, 1.5}})
ADI_mask_open.element_params = {"HUD_ADI_VISIBILITY"}

-- 5. Rectangle mobile (Boule ADI / Horizon)
local ADI_rectangle_verts = {
    {-25, -100},  
    { 25, -100},   
    { 25,    0},   
    {-25,    0}   
}

local ADI_rectangle_inds = {
    0, 1, 2, 
    0, 2, 3   
}

local ADI_circle_filled = addHUDMesh("ADI_circle_filled", 
    ADI_rectangle_verts, ADI_rectangle_inds, 
    {0, 0}, HUD_MATERIAL, ADI_parent.name, 
    {
        {"move_up_down_using_parameter", 0, -0.005} 
    })
ADI_circle_filled.element_params = {"HUD_ADI_MASK_POS"}
ADI_circle_filled.level = HUD_DEFAULT_LEVEL + 1

-- 6. Fermeture du masque stencil
local ADI_mask_close = addHUDMaskClose("ADI_mask_close", 1, 
    ADI_mask_vertices, ADI_mask_indices, 
    {0, 0}, ADI_parent.name, 
    {{"parameter_in_range", 0, 0.5, 1.5}})
ADI_mask_close.element_params = {"HUD_ADI_VISIBILITY"}


-- =======================================================================
-- 3. BANK TRIANGLES
-- =======================================================================
-- local headingScaleIndexType1_Origin = addHUDPlaceholder("headingScaleIndexType1_Origin", {0, DegToDI(3.95)}, waterline_origin.name)
-- local bankTriangleVertices = { {0, 0}, {-12.5, -25}, {12.5, -25} }
-- local bankTriangleIndices  = {0, 1, 2}
-- addHUDMesh("BankTriangle", bankTriangleVertices, bankTriangleIndices, {0, -305}, HUD_MATERIAL, headingScaleIndexType1_Origin.name)

-- =======================================================================
-- 4. FLIGHT PATH / PITCH LADDER & NUMERICS (FPPL)
-- =======================================================================


local PL_origin = addHUDPlaceholder("HUD_PL_origin", {0, DegToDI(4)})
PL_origin.element_params            = {"RAFALE_HUD_PITCH", "RAFALE_HUD_ROLL"}
PL_origin.controllers 		        = {{"rotate_using_parameter",1, 1 }, {"move_up_down_using_parameter",0, -1/math.sqrt(3)}}


local FPPL_line_half_gap            = 0
local FPPL_short_horizon_line_width = 1200
local FPPL_long_horizon_line_width  = 3000
local FPPL_horizon_line_tick        = 0

local FPPL_heading_tick_length      = 20    
local FPPL_heading_tick_y_offset    = 0   
local FPPL_pitch_line_width         = 124.8
local FPPL_pitch_line_tick          = 12.5

-- Génération exacte des lignes du pitch ladder selon le code d'origine
local function add_FPPL_line(name, width, half_gap, tick, shift_y, pitch, controllers)
    local lineOrigin = addHUDPlaceholder(name.."_origin", {0, shift_y}, PL_origin.name, controllers)
    for i = 0, 1 do
        local side      = (i == 0) and -1 or 1
        local side_name = (i == 0) and "left" or "right"

        local tick_rot = (shift_y < 0) and 0 or 180
        
        local pitchLimited
        if pitch > 90 then
            pitchLimited = pitch - 180
            tick_rot = 0
        elseif pitch < -90 then
            pitchLimited = pitch + 180
            tick_rot = 180
        else
            pitchLimited = pitch
        end
        
        local length = 124.8 
        local lineRot
        
        -- Graduations de cap sur l'horizon (Pitch 0)
        if pitch == 0 then
            local tick_offset_y      = -10
            local sensitivity_factor = 4.5
            local half_degree_offset = 5  
            local headingTicksOrigin = addHUDPlaceholder(name.."_heading_ticks_origin", {0, FPPL_heading_tick_y_offset}, lineOrigin.name)
            
            for degrees = -180, 180, 10 do
                local posX = (degrees + half_degree_offset) * DI_PerOneDegree1 * sensitivity_factor
                if math.abs(posX) < 2500 then
                    addHUDLine(name.."_heading_tick_"..degrees, FPPL_heading_tick_length, {posX, tick_offset_y}, 0, headingTicksOrigin.name)
                end
            end
        end

        -- Calcul de la rotation de la ligne selon l'assiette
        if shift_y > 0 then
            lineRot = pitchLimited / 2
        else
            if pitchLimited <= -60 then
                lineRot = -60 / 1.15  
            else
                lineRot = pitchLimited / 1.15
            end
        end
        
        if math.abs(pitch) == 5 then
            lineRot = 0
            length  = 124.8 
        else
            if lineRot ~= 0 then
                length = width / math.cos(math.rad(lineRot))
            else
                length = width
            end
        end
        
        local main_line_length = length

        -- Traitement spécifique aux lignes négatives (Segments découpés et cassure)
        if shift_y < 0 then
            local half_segment = tick * 0.768  
            local L = half_segment * 2    
            local G = half_segment       

            -- Segment 1
            local seg1_start = 0
            addHUDLine(name.."_hor_inclined_"..side_name.."_seg1", half_segment, 
                {half_gap * side + seg1_start * math.cos(math.rad(lineRot)) * side, seg1_start * math.sin(math.rad(lineRot))}, 
                (lineRot - 90) * side, lineOrigin.name)
            
            -- Segment 2
            local seg2_start = half_segment + G
            addHUDLine(name.."_hor_inclined_"..side_name.."_seg2", L, 
                {half_gap * side + seg2_start * math.cos(math.rad(lineRot)) * side, seg2_start * math.sin(math.rad(lineRot))}, 
                (lineRot - 90) * side, lineOrigin.name)
            
            -- Segment 3
            local seg3_start = half_segment + G + L + G
            addHUDLine(name.."_hor_inclined_"..side_name.."_seg3", L, 
                {half_gap * side + seg3_start * math.cos(math.rad(lineRot)) * side, seg3_start * math.sin(math.rad(lineRot))}, 
                (lineRot - 90) * side, lineOrigin.name)
            
            -- Segment 4
            local seg4_start = half_segment + G + L + G + L + G
            addHUDLine(name.."_hor_inclined_"..side_name.."_seg4", half_segment, 
                {half_gap * side + seg4_start * math.cos(math.rad(lineRot)) * side, seg4_start * math.sin(math.rad(lineRot))}, 
                (lineRot - 90) * side, lineOrigin.name)
            
            local seg4_end_y = (seg4_start + half_segment) * math.sin(math.rad(lineRot))

            -- Segment 5 (Transition)
            local seg5_start = seg4_start + half_segment
            addHUDLine(name.."_hor_transition_"..side_name.."_seg5", half_segment, 
                {half_gap * side + seg5_start * math.cos(math.rad(lineRot)) * side, seg4_end_y}, 
                -90 * side, lineOrigin.name)

            -- Segment 6 (Méplat horizontal extrême)
            local seg5_end_x_inclined = seg5_start + half_segment
            local seg6_start_horizontal = seg5_end_x_inclined * math.cos(math.rad(lineRot)) + G

            addHUDLine(name.."_hor_flat_"..side_name.."_seg6", L, 
                {half_gap * side + seg6_start_horizontal * side, seg4_end_y}, 
                -90 * side, lineOrigin.name)
        else
            -- Lignes positives continues
            addHUDLine(name.."_hor_"..side_name, main_line_length, {half_gap * side, 0}, (lineRot - 90) * side, lineOrigin.name)
        end

        -- Ergot vertical en bout d'échelon
        addHUDLine(name.."_tick_"..side_name, tick * 0.768, {half_gap * side, 0}, tick_rot, lineOrigin.name)
    end
end

-- Horizons
add_FPPL_line("FPPL_horizon_short_line", FPPL_short_horizon_line_width, FPPL_line_half_gap, FPPL_horizon_line_tick, 0, 0)
add_FPPL_line("FPPL_horizon_long_line", FPPL_long_horizon_line_width, FPPL_line_half_gap, FPPL_horizon_line_tick, 0, 0)

-- Échelons (-90° à +90°)
for i = -18, 18 do
    local pitch = i * 5
    local name  = (i > 0) and ("FPPL_pitch_line_positive_"..pitch) or ("FPPL_pitch_line_negative_"..pitch)
    if i ~= 0 then
        add_FPPL_line(name, FPPL_pitch_line_width, FPPL_line_half_gap + 52.6, FPPL_pitch_line_tick, DegToDI(pitch), pitch)
    end
end

-- Numerics Positifs (Gauche et Droite)
local pos_angles = {10, 20, 30, 40, 50, 60, 70, 80, 90}
for _, p in ipairs(pos_angles) do
    local shift_factor = p * 1.025
    addHUDText("FPPL_pitch_line_pos_"..p.."_left", tostring(p), stringdefs_HUD_norm_120, "RightCenter", {-184, DegToDI(shift_factor)}, PL_origin.name)
    addHUDText("FPPL_pitch_line_pos_"..p.."_right", tostring(p), stringdefs_HUD_norm_120, "LeftCenter", {183, DegToDI(shift_factor)}, PL_origin.name)
end

-- Numerics Négatifs (Gauche et Droite)
local neg_angles = {
    {10, -184, 180, -10.25}, {20, -181, 177, -20.50}, {30, -174, 172, -30.73},
    {40, -167, 167, -40.95}, {50, -157, 157, -51.15}, {60, -147, 147, -61.33},
    {70, -147, 147, -71.33}, {80, -147, 147, -81.33}, {90, -147, 147, -91.33}
}
for _, item in ipairs(neg_angles) do
    local p, lX, rX, diY = item[1], item[2], item[3], item[4]
    addHUDText("FPPL_pitch_line_neg_"..p.."_left", tostring(p), stringdefs_HUD_norm_120, "RightCenter", {lX, DegToDI(diY)}, PL_origin.name)
    addHUDText("FPPL_pitch_line_neg_"..p.."_right", tostring(p), stringdefs_HUD_norm_120, "LeftCenter", {rX, DegToDI(diY)}, PL_origin.name)
end

-- Repères Zénith et Nadir
local zenith_nadir_radius = 28
local zenith_shift_y = DegToDI(90)
addHUDCircle("FPPL_zenith", zenith_nadir_radius, {0, zenith_shift_y}, PL_origin.name)
addHUDCircle("FPPL_nadir", zenith_nadir_radius, {0, -zenith_shift_y}, PL_origin.name)

-- =======================================================================
-- 5. ACCÉLÉRATION LATERALE / LONGITUDINALE (Gx)
-- =======================================================================

local au_sol_symbol = addRafaleHUDSymbol("au_sol_symbol", {"stroke_symbols_HUD", "au-sol"}, "FromSet", {0, -265-DegToDI(4)}, nil, 
    {{"parameter_in_range", 0, 0.5, 1.5}}, 1.6)
au_sol_symbol.element_params = {"WOW_NOSE"}


local horizontal_accel_center = addHUDText("HUD_Horizontal_Accel_Center", nil, STROKE_FNT_DFLT_120_WIDE, "CenterCenter", 
    {0, 270-DegToDI(4)}, nil,  
    {
        {"text_using_parameter", 0, 0},
        {"parameter_in_range", 0, -10, 10},  
        {"parameter_in_range", 1, 0.5, 1.5} 
    }, nil,
    {"%.2f"})
horizontal_accel_center.element_params = {"HORIZONTAL_ACCEL_G","TRAIN_SORTI"}

local horizontal_accel_box = addHUDBox("HUD_Horizontal_Accel_Box", 120, 40, {0, 270-DegToDI(4)}, nil, 
    {
        {"parameter_in_range", 0, -10, 10}, 
        {"parameter_in_range", 1, 0.5, 1.5}
    })
horizontal_accel_box.element_params = {"HORIZONTAL_ACCEL_G","TRAIN_SORTI"}



local accel_line_root = addHUDPlaceholder("HUD_Accel_Line_Root", 
    {0, -480-DegToDI(4)}, 
    CAS_BoxOrigin.name,  
    nil)

local accel_line = addHUDLine("HUD_Gx", 
    64,                     
    {83, DegToDI(4)},       
    -90,               
    accel_line_root.name,    
    {
        {"parameter_in_range", 0, 0.5, 1.5},     
    })   

accel_line.element_params = {"TRAIN_SORTI"}



local Gx_mask_vertices = {
    {-50, 327.5},  
    {50, 327.5},  
    {50, -312},  
    {-50, -312}   
}

local Gx_mask_indices = {0, 1, 2, 0, 2, 3}

local Gx_mask_open = addHUDMaskOpen("Gx_mask_open", 1, Gx_mask_vertices, Gx_mask_indices, {-285, 40-DegToDI(4)}, nil, 
    {{"move_up_down_using_parameter", 0, 0.11934}})

Gx_mask_open.element_params = {"HUD_TAS_MASK_POS"}

-- Ajouter le symbole DANS la zone masquée
local Gx = addRafaleHUDSymbol("Gx", {"stroke_symbols_HUD", "triple-line-symbol-641px"}, nil, {-285, 44-DegToDI(4)}, nil,       
    {
        {"parameter_in_range", 0, 0.5, 1.5}}, 1.6)
Gx.element_params = {"TRAIN_SORTI"}


local Gx_mask_close = addHUDMaskClose("Gx_mask_close", 3, Gx_mask_vertices, Gx_mask_indices, {-285, 36.5-DegToDI(4)}, nil, nil)


local accel1_line = addHUDLine("HUD_Gx1", 
    11,                    
    {-290.5, -274-DegToDI(4)},                  
    -90,                  
    nil,    
    {           
        {"move_left_right_using_parameter", 0, -0.11934},
        {"parameter_in_range", 1, 0.5, 1.5} 
    })  

accel1_line.element_params = {"HUD_TAS_MASK_POS","TRAIN_SORTI"}



local Gx_triangles = addRafaleHUDSymbol("Gx_triangles", {"stroke_symbols_HUD", "triangle-GX"}, nil, {-285,-271-DegToDI(4)}, nil,       
    {
        {"parameter_in_range", 0, 0.5, 1.5},            
        {"move_up_down_using_parameter", 1, 0.107},
        {"parameter_in_range", 2, 0.5, 1.5}, 
    }, 1.8)
Gx_triangles.element_params = {"HUD_GX_TRIANGLES_VIS", "HUD_GX_TRIANGLES_POS","TRAIN_SORTI"}

-- =======================================================================
-- ccHUD_FPM_CALIBRATED.lua — Flight Path Marker (FPM)
--
-- CALIBRATION CORRIGÉE (9 août 2026)
--
-- Le FPM est maintenant positionné en utilisant des MILLIRADIANS vrais,
-- calculés via atan2() dans le C++, et appliqués avec un facteur d'échelle
-- mathématiquement déterminé pour correspondre pile poil à la géométrie HUD.
--
-- REPÈRE AVION (C++) :
--   X = avant
--   Y = haut (vertical)
--   Z = droite
--
-- CONVERSION :
--   azimuth_mrad = atan2(Vbody_z, Vbody_x) * 1000
--   elevation_mrad = atan2(Vbody_y, sqrt(Vbody_x² + Vbody_z²)) * 1000
--
-- CALIBRATION HUD RAFALE :
--   FOV horizontal : ±10.95° ≈ ±191.1 mrad
--   Largeur écran : ±562 DI (d'après DegToDI et géométrie)
--   Facteur : MRAD_TO_DI = 562 / 191.1 ≈ 2.94 DI/mrad
--
-- =======================================================================


-- ───────────────────────────────────────────────────────────────────────
-- FACTEUR D'ÉCHELLE CALIBRÉ
-- ───────────────────────────────────────────────────────────────────────
-- Conversion : milliradians → Display Increments
--
-- Géométrie HUD Rafale :
--   - FOV horizontal : ±10.95° ≈ ±191.1 mrad
--   - Largeur écran à boresight : ±562 DI
--
-- Calcul :
--   1° = π/180 rad = 17.453 mrad
--   10.95° = 191.1 mrad
--   DegToDI(1°) ≈ 51.33 DI
--   DegToDI(10.95°) ≈ 562 DI
--
--   MRAD_TO_DI = 562 DI / 191.1 mrad ≈ 2.9417 DI/mrad
--
-- Note : On pourrait aussi calculer dynamiquement via :
--   MRAD_TO_DI = DegToDI(10.95) / 191.1
-- Mais avec la valeur hardcodée on a une référence stable.

local MRAD_TO_DI = 2.9417  -- DI par milliradian

-- ───────────────────────────────────────────────────────────────────────
-- VECTEUR VITESSE — ORIGINE
-- ───────────────────────────────────────────────────────────────────────
-- Le placeholder VelVec_origin se déplace selon les paramètres azimuth/elevation.
-- On l'appelle à la waterline (décalage Y = 4° = DegToDI(4))
-- et on y attache le symbole FPM.

local VelVec_origin = addHUDPlaceholder("VelVec_origin", 
    {0, DegToDI(4)}, 
    nil)

-- ───────────────────────────────────────────────────────────────────────
-- CONFIGURATION PARAMÈTRES (depuis C++ RafaleHUD_MRAD_CALIBRATED.h)
-- ───────────────────────────────────────────────────────────────────────

VelVec_origin.element_params = {
    "RAFALE_HUD_VV_AZIMUTH",    -- [0] azimuth en milliradians
    "RAFALE_HUD_VV_ELEVATION",  -- [1] elevation en milliradians
    "RAFALE_HUD_VV_VALID"       -- [2] validité (1 = afficher, 0 = masquer)
}

-- ───────────────────────────────────────────────────────────────────────
-- CONTRÔLEURS (mouvement du placeholder selon les angles)
-- ───────────────────────────────────────────────────────────────────────
--
-- Chaque contrôleur déplace le placeholder de manière proportionnelle
-- aux paramètres C++ :
--
--   move_left_right_using_parameter  → Azimuth (X screen, droite/gauche)
--   move_up_down_using_parameter     → Elevation (Y screen, haut/bas)
--   parameter_in_range               → Masque si en dehors de [0.5, 1.5]
--
-- La plage [0.5, 1.5] masque le FPM lorsque la vitesse est trop faible
-- ou nulle (VV_VALID < 0.5) ou invalide (VV_VALID > 1.5).

VelVec_origin.controllers = {
    -- Azimuth : déplacement horizontal (gauche/droite)
    -- Param 0 (azimuth_mrad) × facteur MRAD_TO_DI = position X
    {"move_left_right_using_parameter", 0, 0.5},
    
    -- Élévation : déplacement vertical (haut/bas)
    -- Param 1 (elevation_mrad) × facteur MRAD_TO_DI = position Y
    {"move_up_down_using_parameter", 1, 0.5},
    
    -- Validité : masque le FPM si VV_VALID en dehors de [0.5, 1.5]
    {"parameter_in_range", 2, -0.5, 1.5}
}

-- ───────────────────────────────────────────────────────────────────────
-- SYMBOLE FPM (Flight Path Marker)
-- ───────────────────────────────────────────────────────────────────────
--
-- Attaché au placeholder VelVec_origin.
-- Le symbole se déplace avec le placeholder (via les contrôleurs ci-dessus).
--
-- Symbole utilisé : "125-velocity-vector"
--   Ce doit être un nom de symbole existant dans ton système HUD.
--   Si tu utilises un autre symbole, replace la référence ci-dessous.
--
-- Taille (scale) : 1.6 (peut être ajusté selon préférence visuelle)

local hud_vv = addRafaleHUDSymbol(
    "hud_vv",                    -- Nom du symbole
    "125-velocity-vector",       -- Ressource/type symbolé
    "CenterCenter",              -- Alignement (centré)
    {0, 0},                      -- Position relative au placeholder (0,0)
    VelVec_origin.name,          -- Parent : VelVec_origin
    nil,                         -- Pas de paramètre supplémentaire
    1.6                          -- Échelle / taille
)


-- =======================================================================
-- CHEVRONS D'ACCÉLÉRATION (Liés au Vecteur Vitesse)
-- =======================================================================

local AccelCue_Vis = addHUDPlaceholder("AccelCue_Vis", {0, 0}, VelVec_origin.name)
addHUDChevron(
    "AccelCue", 
    15,  
    70, 
    {100, 0}, 
    270, 
    {0, 0}, 
    AccelCue_Vis.name, 
    {{"move_up_down_using_parameter", 0, 0.152}}, 
    {"ACCEL"},
    HUD_MATERIAL,  
    1.25
)

local AccelCue_Vis2 = addHUDPlaceholder("AccelCue_Vis2", {0, 0}, VelVec_origin.name)
addHUDChevron(
    "AccelCue2", 
    15, 
    70, 
    {-100, 0}, 
    -270, 
    {0, 0}, 
    AccelCue_Vis2.name, 
    {{"move_up_down_using_parameter", 0, 0.152}}, 
    {"ACCEL"},
    HUD_MATERIAL,
    1.25 
)

local AccelCuePC_Vis = addHUDPlaceholder("AccelCuePC_Vis", {0, 0}, VelVec_origin.name)
addHUDChevron(
    "AccelCuePC", 
    15,  
    70, 
    {120, 0}, 
    270, 
    {0, 0}, 
    AccelCuePC_Vis.name, 
    {{"move_up_down_using_parameter", 0, 0.152}}, 
    {"ACCEL_PC"}, 
    HUD_MATERIAL,  
    1.25  
)

local AccelCuePC_Vis2 = addHUDPlaceholder("AccelCuePC_Vis2", {0, 0}, VelVec_origin.name)
addHUDChevron(
    "AccelCuePC2", 
    15, 
    70, 
    {-120, 0}, 
    -270, 
    {0, 0}, 
    AccelCuePC_Vis2.name, 
    {{"move_up_down_using_parameter", 0, 0.152}}, 
    {"ACCEL_PC"},  
    HUD_MATERIAL,  
    1.25  
)
-- ═══════════════════════════════════════════════════════════════════════
-- NOTES D'INTÉGRATION
-- ═══════════════════════════════════════════════════════════════════════
--
-- 1. EMPLACEMENT DANS LE FICHIER HUD :
--    Ajoute ce bloc à ton ccHUD_page_common.lua, section "VECTEUR VITESSE",
--    APRÈS que les placeholders principaux (hud_zero_base, waterline_origin)
--    aient été créés.
--
-- 2. DÉPENDANCES :
--    - dofile(ccHUD_definitions.lua) — pour DegToDI() et addHUDPlaceholder()
--    - addRafaleHUDSymbol() — fonction helper (voir ccHUD_symbology_defs.lua)
--
-- 3. PARAMÈTRES C++ REQUIS :
--    - RAFALE_HUD_VV_AZIMUTH (float, mrad)
--    - RAFALE_HUD_VV_ELEVATION (float, mrad)
--    - RAFALE_HUD_VV_VALID (float, 0.0 ou 1.0)
--
--    À envoyer depuis RafaleHUD_MRAD_CALIBRATED.h::Update()
--
-- 4. TEST :
--    - Palier pur (Pitch=0°) : FPM centré
--    - Montée 10° : FPM remonte de ~173 mrad × 2.94 ≈ 510 DI
--    - Virage banqué : FPM se déplace horizontalement
--
-- 5. RÉGLAGE VISUEL :
--    Si le FPM n'est pas au bon endroit :
--    - Ajuste MRAD_TO_DI (la calibration) si c'est systématique
--    - Ajuste la taille (1.6) si le symbole est trop petit/gros
--    - Vérifie la position du placeholder {0, DegToDI(4)} (waterline)
--
-- ═══════════════════════════════════════════════════════════════════════

