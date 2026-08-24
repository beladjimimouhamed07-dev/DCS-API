-- ============================================================================
-- RAFALE C HUD - PAGE DE BASE (Réécrit pour correspondre architecture F18)
-- ============================================================================
-- Définit les bordures, le champ de vision (FOV) et la géométrie du HUD
-- Positions et tailles en Display Increments (DI) comme F18
-- ============================================================================

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")

-- ============================================================================
-- SECTION 1: GÉOMÉTRIE DU CHAMP DE VISION (Field Of View)
-- ============================================================================

-- Le champ de vision défini la zone visible du HUD
-- C'est essentiellement une "fenêtre" à travers laquelle on voit la symbologie

-- Dimensions en degrés (converties en DI dans les calculs)
local fov_width = DegToDI(20)   -- ±10° horizontalement
local fov_height = DegToDI(15)  -- ±7.5° verticalement

-- Géométrie du FOV clipping
local x_size = DegToDI(8)
local y_size = DegToDI(10)


local total_field_of_view = CreateElement "ceMeshPoly"
total_field_of_view.name = "total_field_of_view"
total_field_of_view.primitivetype = "triangles"

-- Vertices définissant la forme du FOV
-- Centre: rectangle principal
-- Haut: zone supplémentaire pour le pitch up
total_field_of_view.vertices = {
    -- Coin bas-gauche
    {-x_size, 0},
    {-x_size, 0},
    -- Coin bas-droit
    {x_size, 0},
    {x_size, 0},
    -- Coin haut droit (rectangle)
    {x_size, -y_size},
    {x_size, -y_size},
    -- Coin haut gauche (rectangle)
    {-x_size, -y_size},
    {-x_size, -y_size},
    -- Zone pitch up (trapézium)
    {-x_size * 0.5, y_size * 0.3},
    {x_size * 0.5, y_size * 0.3},
}

total_field_of_view.indices = {
    0, 1, 2,      -- Bas droit
    0, 2, 3,      -- Bas entier
    4, 5, 6,      -- Haut droit
    4, 6, 7,      -- Haut entier
    0, 8, 9,      -- Zone pitch up
    0, 9, 2,      -- Fermer pitch up
}

total_field_of_view.init_pos = {
    0.0,
    waterlineShiftY_Const,  -- Décalé par la waterline
    -0.5  -- Profondeur (z)
}

total_field_of_view.init_rot = {0.0, 0.0, -30}  -- Rotation pour perspective

total_field_of_view.material = HUD_DEBUG_GREEN
total_field_of_view.h_clip_relation = h_clip_relations.REWRITE_LEVEL
total_field_of_view.level = HUD_FOV_LEVEL

total_field_of_view.isdraw = true
total_field_of_view.change_opacity = false
total_field_of_view.isvisible = true  -- Invisible (sert juste pour clipping)

total_field_of_view.collimated = false  -- N'EST PAS collimé (physiquement)
total_field_of_view.additive_alpha = true
total_field_of_view.use_mipfilter = use_mipfilter

-- PIT_GLASS: paramètre qui contrôle la position du verre HUD (glass)
-- Utilisé pour simuler le mouvement du verre lors du pitch
total_field_of_view.element_params = {"AV_PIT_GLASS"}
total_field_of_view.controllers = {
    {"move_up_down_using_parameter", 0, 0.0063}  -- Sensibilité au pitch du verre
}

Add(total_field_of_view)

-- ============================================================================
-- SECTION 2: HARDWARE GLASS BASE (Verre matériel du HUD)
-- ============================================================================

-- Position du verre combineur physique
-- C'est la vraie géométrie du verre HUD dans le cockpit

local init_pos_p_x = 0.585423350 / GetScale()
local init_pos_p_y = -0.0499138832 / GetScale()

local hardware_glass_base = CreateElement "ceSimple"
hardware_glass_base.name = "hardware_glass_base"
hardware_glass_base.init_pos = {0, -0.5, init_pos_p_x}
hardware_glass_base.collimated = false  -- Position dans l'espace cockpit (pas collimé)
hardware_glass_base.controllers = {
    {"set_origin_to_cockpit_shape"}  -- Attacher au verre physique du cockpit
}
Add(hardware_glass_base)

-- ============================================================================
-- SECTION 3: GLASS ELEMENT (Verre du HUD pour clipping)
-- ============================================================================

-- C'est le verre combineur du HUD
-- Défini une zone de clipping supplémentaire pour les éléments qui devraient
-- apparaître SEULEMENT sur le verre HUD

local x_size = DegToDI(6)
local y_size = DegToDI(8)

local glass = CreateElement "ceTexPoly"
glass.primitivetype = "triangles"
glass.name = "glass"
glass.init_pos = {0, 0, 0}
glass.material = HUD_DEBUG_RED
glass.vertices = {
    {-x_size, y_size},
    {x_size, y_size},
    {x_size, -y_size},
    {-x_size, -y_size}
}
glass.indices = {0, 1, 2, 0, 2, 3}
glass.parent_element = "hardware_glass_base"
glass.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL
glass.level = HUD_FOV_LEVEL
glass.isvisible = true  -- Invisible (sert juste pour clipping)
glass.collimated = false
glass.additive_alpha = true
Add(glass)

-- ============================================================================
-- SECTION 4: PARAMÈTRES ADDITIONNELS (Optional tuning)
-- ============================================================================

-- Ces paramètres peuvent être ajustés pour affiner l'apparence du HUD

-- Offset optique du collimateur: 4° en dessous (depuis AVQ32_init.lua)
-- Cela affecte le rendu virtuel du HUD
collimator_optical_center_offset = math.rad(-4) * GetScale()

-- ============================================================================
-- FIN DE LA PAGE DE BASE
-- ============================================================================
-- Les éléments symbologiques sont définis dans page_common.lua
-- et ses sous-fichiers (sub_headingtape.lua, debug.lua)
-- ============================================================================

