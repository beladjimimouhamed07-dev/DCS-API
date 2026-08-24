-- ============================================================================
-- RAFALE C HUD - SOUS-PAGE: BANDE DE CAP (Heading Tape)
-- ============================================================================
-- Affiche le cap de l'avion sous forme de bande déroulante numérique
-- Positions et tailles en Display Increments (DI) comme F18
-- ============================================================================

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")

-- ============================================================================
-- SECTION 1: BASE DE LA BANDE DE CAP
-- ============================================================================

-- Élément de base pour la heading tape (bande de cap)
-- Positionnée en bas du HUD
local hud_htape_base = CreateElement "ceSimple"
hud_htape_base.name = "hud_htape_base"
hud_htape_base.init_pos = {0, waterlineShiftY_Const - DegToDI(25), 0}  -- 25° sous la waterline
hud_htape_base.collimated = true
Add(hud_htape_base)

-- ============================================================================
-- SECTION 2: CADRE BORDER (cadre supérieur)
-- ============================================================================

-- Boîte englobante supérieure (pour clipping)
local x_size = DegToDI(12)
local y_size = DegToDI(4)

local hud_htape_border1 = create_HUD_element("ceMeshPoly")
hud_htape_border1.name = "hud_htape_border1"
hud_htape_border1.primitivetype = "triangles"
hud_htape_border1.vertices = {
    {-x_size, -y_size},
    {-x_size, y_size},
    {x_size, y_size},
    {x_size, -y_size},
}
hud_htape_border1.indices = default_box_indices
hud_htape_border1.init_pos = {0, 0, 0}
hud_htape_border1.parent_element = "hud_htape_base"
hud_htape_border1.material = HUD_MATERIAL
hud_htape_border1.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL
hud_htape_border1.level = HUD_DEFAULT_LEVEL
hud_htape_border1.isvisible = false  -- Invisible (sert juste pour le clipping)
hud_htape_border1.isdraw = true
Add(hud_htape_border1)

-- ============================================================================
-- SECTION 3: LIGNE DE BASE (Baseline - la ligne centrale)
-- ============================================================================

-- Ligne horizontale à travers laquelle défile la bande de cap
x_size = DegToDI(8)
y_size = DegToDI(0.2)

local hud_htape_baseline = create_HUD_element("ceMeshPoly")
hud_htape_baseline.name = "hud_htape_baseline"
hud_htape_baseline.primitivetype = "triangles"
hud_htape_baseline.vertices = {
    {-x_size, -y_size},
    {-x_size, y_size},
    {x_size, y_size},
    {x_size, -y_size},
}
hud_htape_baseline.indices = {0, 1, 2, 0, 2, 3}
hud_htape_baseline.init_pos = {0, 0, 0}
hud_htape_baseline.material = HUD_MATERIAL
hud_htape_baseline.isdraw = true
hud_htape_baseline.isvisible = true
hud_htape_baseline.parent_element = "hud_htape_base"
hud_htape_baseline.h_clip_relation = h_clip_relations.COMPARE
hud_htape_baseline.level = HUD_DEFAULT_LEVEL + 1
hud_htape_baseline.collimated = true
Add(hud_htape_baseline)

-- ============================================================================
-- SECTION 4: CADRE BORDER (cadre inférieur)
-- ============================================================================

-- Boîte englobante inférieure (pour clipping)
local hud_htape_border2 = Copy(hud_htape_border1)
hud_htape_border2.name = "hud_htape_border2"
hud_htape_border2.h_clip_relation = h_clip_relations.DECREASE_IF_LEVEL
hud_htape_border2.level = HUD_DEFAULT_LEVEL + 1
Add(hud_htape_border2)

-- ============================================================================
-- SECTION 5: TEXTE CAP NUMÉRIQUE (Cap en degrés)
-- ============================================================================

-- Affiche le cap de l'avion (0-359°)
local hud_txt_heading = create_HUD_element("ceStringPoly")
hud_txt_heading.name = "hud_txt_heading"
hud_txt_heading.material = HUD_FONT
hud_txt_heading.init_pos = {0.0, DegToDI(2), 0}  -- Au-dessus de la ligne de base
hud_txt_heading.stringdefs = txt_hud_stringdefs
hud_txt_heading.alignment = "CenterTop"
hud_txt_heading.value = "TEST"
hud_txt_heading.formats = {"%s", "%.0f", "^\n%03.0f"}
hud_txt_heading.UseBackground = false
hud_txt_heading.element_params = {"AV_AC_HEAD_DEG"}
hud_txt_heading.controllers = {
    {"text_using_parameter", 0, 2}  -- Index 2 du format = "\n%03.0f"
}
hud_txt_heading.parent_element = "hud_htape_base"
hud_txt_heading.use_mipfilter = true
hud_txt_heading.h_clip_relation = h_clip_relations.COMPARE
hud_txt_heading.level = HUD_DEFAULT_LEVEL
hud_txt_heading.collimated = true
Add(hud_txt_heading)

-- ============================================================================
-- SECTION 6: TEXTE CAP WAYPOINT (Bearing vers le waypoint)
-- ============================================================================

-- Affiche le cap vers un waypoint si défini
local hud_txt_bearing = Copy(hud_txt_heading)
hud_txt_bearing.name = "hud_txt_bearing"
hud_txt_bearing.element_params = {"AV_HUD_WPT_BEAR_TXT"}
hud_txt_bearing.controllers = {
    {"text_using_parameter", 0, 0}  -- Index 0 du format = "%s"
}
hud_txt_bearing.init_pos = {0.0, DegToDI(2.5), 0}  -- Légèrement plus bas
Add(hud_txt_bearing)

-- ============================================================================
-- SECTION 7: TRAITS SÉPARATEURS BAS
-- ============================================================================

-- Deux petites traits verticales en bas de la bande de cap
-- (gauche et droite du centre)

x_size = DegToDI(6)
y_size = DegToDI(0.2)

local hud_htape_baseline_bottom = create_HUD_element("ceMeshPoly")
hud_htape_baseline_bottom.name = "hud_htape_baseline_bottom"
hud_htape_baseline_bottom.primitivetype = "triangles"
hud_htape_baseline_bottom.vertices = {
    -- Trait gauche
    {-x_size, -y_size},
    {-x_size, y_size},
    {-x_size * 0.1, y_size},   -- Trait courte (10% de la largeur)
    {-x_size * 0.1, -y_size},
    -- Trait droite
    {x_size, -y_size},
    {x_size, y_size},
    {x_size * 0.1, y_size},    -- Trait courte (10% de la largeur)
    {x_size * 0.1, -y_size},
}
hud_htape_baseline_bottom.indices = {
    0, 1, 2, 0, 2, 3,  -- Segment gauche
    4, 5, 6, 4, 6, 7,  -- Segment droit
}
hud_htape_baseline_bottom.init_pos = {0, -DegToDI(3), 0}  -- En bas de la bande
hud_htape_baseline_bottom.material = HUD_MATERIAL
hud_htape_baseline_bottom.isdraw = true
hud_htape_baseline_bottom.isvisible = true
hud_htape_baseline_bottom.parent_element = "hud_htape_base"
hud_htape_baseline_bottom.h_clip_relation = h_clip_relations.COMPARE
hud_htape_baseline_bottom.level = HUD_DEFAULT_LEVEL
hud_htape_baseline_bottom.collimated = true
Add(hud_htape_baseline_bottom)

-- ============================================================================
-- FIN DE LA BANDE DE CAP
-- ============================================================================

