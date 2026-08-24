-- ============================================================================
-- RAFALE C HUD - PAGE COMMUNE (Réécrit pour correspondre architecture F18)
-- ============================================================================
-- Contient tous les éléments symbologiques du HUD
-- Positions et tailles calculées en Display Increments (DI) comme F18
-- ============================================================================

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")

-- ============================================================================
-- SECTION 1: REPÈRES DE BASE (Base Reference Points)
-- ============================================================================

-- Le point ZÉRO du HUD: centre de visée et point de collision
-- C'est le point d'impact des balles du canon
local hud_zero_base = CreateElement "ceSimple"
hud_zero_base.name = "hud_zero_base"
hud_zero_base.init_pos = {0, 0, 0}
hud_zero_base.collimated = true
Add(hud_zero_base)

-- Point de base pour tous les textes (décalé depuis zero_base)
local hud_txt_base = CreateElement "ceSimple"
hud_txt_base.name = "hud_txt_base"
hud_txt_base.init_pos = {0, waterlineShiftY_Const, 0}  -- Décalé par la waterline
hud_txt_base.collimated = true
Add(hud_txt_base)

-- Base pour la ligne d'horizon (pitch tape)
-- Cet élément est piloté par le pitch et le bank de l'avion
local hud_pitch_base = CreateElement "ceSimple"
hud_pitch_base.name = "hud_pitch_base"
hud_pitch_base.init_pos = {0, 0, 0}
hud_pitch_base.parent_element = "hud_zero_base"
hud_pitch_base.collimated = true
hud_pitch_base.element_params = {"AV_AC_PITCH_RAD", "AV_AC_PITCH_DEG", "AV_AC_BANK_RAD", "AV_AC_BANK_DEG"}
hud_pitch_base.controllers = {
    {"move_up_down_using_parameter", 1, -0.0146},  -- Contrôle par le pitch
}
Add(hud_pitch_base)

-- ============================================================================
-- SECTION 2: LIGNE DE BASE DE PITCH (Horizon Line)
-- ============================================================================

-- Ligne horizontale représentant l'horizon artificiel
local x_size = DegToDI(10)   -- Largeur 10° 
local y_size = DegToDI(0.25) -- Très fine

local hud_pitch_baseline = create_HUD_element("ceMeshPoly")
hud_pitch_baseline.name = "hud_pitch_baseline"
hud_pitch_baseline.primitivetype = "triangles"
hud_pitch_baseline.vertices = {
    {-x_size, -y_size},
    {-x_size, y_size},
    {-DegToDI(2), y_size},   -- Espace au centre pour le symbole
    {-DegToDI(2), -y_size},
    {DegToDI(2), -y_size},   -- Autre côté du symbole
    {DegToDI(2), y_size},
    {x_size, y_size},
    {x_size, -y_size},
}
hud_pitch_baseline.indices = {
    0, 1, 2, 0, 2, 3,  -- Segment gauche
    4, 5, 6, 4, 6, 7,  -- Segment droit
}
hud_pitch_baseline.init_pos = {0.0, 0.0, 0.0}
hud_pitch_baseline.material = HUD_MATERIAL
hud_pitch_baseline.isdraw = true
hud_pitch_baseline.isvisible = true
hud_pitch_baseline.parent_element = "hud_pitch_base"
hud_pitch_baseline.h_clip_relation = h_clip_relations.COMPARE
hud_pitch_baseline.level = HUD_DEFAULT_LEVEL
hud_pitch_baseline.collimated = true
hud_pitch_baseline.element_params = {"AV_AC_BANK_RAD"}
hud_pitch_baseline.controllers = {
    {"rotate_using_parameter", 0, 1},  -- Rotation par le bank
}
Add(hud_pitch_baseline)

-- ============================================================================
-- SECTION 3: INDICATEUR DE VITESSE (Air Speed Indicator - Gauche)
-- ============================================================================

-- La vitesse s'affiche à GAUCHE du HUD
-- Position: CAS_BoxOrigin (depuis ccHUD_definitions)

local hud_txt_ias = create_HUD_element("ceStringPoly")
hud_txt_ias.name = "hud_txt_ias"
hud_txt_ias.material = HUD_FONT
hud_txt_ias.init_pos = {-CAS_AltBoxEdgeX_Const, 0.0, 0}
hud_txt_ias.stringdefs = txt_hud_stringdefs
hud_txt_ias.alignment = "LeftTop"
hud_txt_ias.value = "TEST"
hud_txt_ias.formats = {"%s", "%.0f"}
hud_txt_ias.UseBackground = false
hud_txt_ias.element_params = {"AV_AC_IAS"}
hud_txt_ias.controllers = {{"text_using_parameter", 0, 1}}
hud_txt_ias.parent_element = "hud_txt_base"
hud_txt_ias.use_mipfilter = true
hud_txt_ias.h_clip_relation = h_clip_relations.COMPARE
hud_txt_ias.level = HUD_DEFAULT_LEVEL
hud_txt_ias.collimated = true
Add(hud_txt_ias)

-- Unité de vitesse (Km/h)
local hud_txt_ias_kmh = Copy(hud_txt_ias)
hud_txt_ias_kmh.name = "hud_txt_ias_kmh"
hud_txt_ias_kmh.alignment = "LeftBottom"
hud_txt_ias_kmh.init_pos = {0.0, 0.0, 0}
hud_txt_ias_kmh.parent_element = "hud_txt_ias"
hud_txt_ias_kmh.element_params = {}
hud_txt_ias_kmh.controllers = {}
hud_txt_ias_kmh.value = "Km/h"
hud_txt_ias_kmh.stringdefs = txt_hud_s_stringdefs
Add(hud_txt_ias_kmh)

-- ============================================================================
-- SECTION 4: INDICATEUR D'ALTITUDE (Droite)
-- ============================================================================

-- L'altitude s'affiche à DROITE du HUD
-- Position: ALT_BoxOrigin (depuis ccHUD_definitions)

local hud_txt_alt = Copy(hud_txt_ias)
hud_txt_alt.name = "hud_txt_alt"
hud_txt_alt.alignment = "RightTop"
hud_txt_alt.init_pos = {CAS_AltBoxEdgeX_Const, 0.0, 0}
hud_txt_alt.element_params = {"AV_AC_MALT"}
Add(hud_txt_alt)

-- Source d'altitude (Radar Alt = R, Baro Alt = B)
local hud_txt_alt_source = Copy(hud_txt_ias)
hud_txt_alt_source.name = "hud_txt_alt_source"
hud_txt_alt_source.alignment = "RightBottom"
hud_txt_alt_source.init_pos = {0.0, 0.0, 0}
hud_txt_alt_source.parent_element = "hud_txt_alt"
hud_txt_alt_source.element_params = {"AV_AC_ALT_TYPE"}
hud_txt_alt_source.formats = {"%s"}
hud_txt_alt_source.controllers = {{"text_using_parameter", 0, 0}}
hud_txt_alt_source.value = "R"
hud_txt_alt_source.stringdefs = txt_hud_s_stringdefs
Add(hud_txt_alt_source)

-- ============================================================================
-- SECTION 5: INFOS AUTOPILOTE (Droite, bas du HUD)
-- ============================================================================

-- Altitude sélectionnée pour l'autopilote
local hud_txt_ap_alt = Copy(hud_txt_ias)
hud_txt_ap_alt.name = "hud_txt_ap_alt"
hud_txt_ap_alt.alignment = "RightTop"
hud_txt_ap_alt.init_pos = {CAS_AltBoxEdgeX_Const, -DegToDI(10), 0}  -- 10° sous la ligne d'horizon
hud_txt_ap_alt.element_params = {"AV_AP_HOLD_ALT", "AV_AP_HOLD_ALT_STATUS"}
hud_txt_ap_alt.controllers = {
    {"text_using_parameter", 0, 1},
    {"parameter_in_range", 1, 0.5, 1.5}  -- Afficher seulement si actif
}
Add(hud_txt_ap_alt)

-- Info BARO hold
local hud_txt_ap_alt_info = Copy(hud_txt_ias)
hud_txt_ap_alt_info.name = "hud_txt_ap_alt_info"
hud_txt_ap_alt_info.alignment = "RightBottom"
hud_txt_ap_alt_info.init_pos = {0.0, 0.0, 0}
hud_txt_ap_alt_info.parent_element = "hud_txt_ap_alt"
hud_txt_ap_alt_info.element_params = {"AV_AP_HOLD_ALT_STATUS"}
hud_txt_ap_alt_info.controllers = {{"parameter_in_range", 0, 0.5, 1.5}}
hud_txt_ap_alt_info.value = "BARO hold"
hud_txt_ap_alt_info.stringdefs = txt_hud_s_stringdefs
Add(hud_txt_ap_alt_info)

-- Info BANK hold
local hud_txt_ap_bank_info = Copy(hud_txt_ias)
hud_txt_ap_bank_info.name = "hud_txt_ap_bank_info"
hud_txt_ap_bank_info.alignment = "RightBottom"
hud_txt_ap_bank_info.init_pos = {0.0, DegToDI(2.5), 0}
hud_txt_ap_bank_info.parent_element = "hud_txt_ap_alt"
hud_txt_ap_bank_info.element_params = {"AV_AP_HOLD_BANK_STATUS"}
hud_txt_ap_bank_info.controllers = {{"parameter_in_range", 0, 0.5, 1.5}}
hud_txt_ap_bank_info.value = "BANK hold"
hud_txt_ap_bank_info.stringdefs = txt_hud_s_stringdefs
Add(hud_txt_ap_bank_info)

-- ============================================================================
-- SECTION 6: INDICATEUR DE VITESSE VERTICALE (Centre du HUD)
-- ============================================================================

-- Symbole ><  qui monte/descend avec la vitesse verticale
local hud_vv_1 = create_HUD_element("ceStringPoly")
hud_vv_1.name = "hud_vv_1"
hud_vv_1.material = HUD_FONT
hud_vv_1.init_pos = {0.0, 0.0, 0}
hud_vv_1.stringdefs = txt_hud_stringdefs
hud_vv_1.alignment = "CenterCenter"
hud_vv_1.value = ">                    <"
hud_vv_1.formats = {"%s"}
hud_vv_1.UseBackground = false
hud_vv_1.element_params = {"AV_AC_VV"}
hud_vv_1.controllers = {
    {"move_up_down_using_parameter", 0, 0.00146},  -- Sensibilité VV
}
hud_vv_1.parent_element = "hud_txt_base"
hud_vv_1.use_mipfilter = true
hud_vv_1.h_clip_relation = h_clip_relations.COMPARE
hud_vv_1.level = HUD_DEFAULT_LEVEL
hud_vv_1.collimated = true
Add(hud_vv_1)

-- Grille de références verticales
local hud_vv_2 = Copy(hud_vv_1)
hud_vv_2.name = "hud_vv_2"
hud_vv_2.alignment = "CenterCenter"
hud_vv_2.init_pos = {-0.004, 0.002, 0.0}
hud_vv_2.element_params = {}
hud_vv_2.controllers = {}
hud_vv_2.value = "-                      -\n\n-                      -\n\n---                  ---\n\n-                      -\n\n-                      -"
hud_vv_2.stringdefs = txt_hud_1_stringdefs
Add(hud_vv_2)

-- ============================================================================
-- SECTION 7: POINT DE VISÉE CENTRAL (Gunsight / Air-to-Air)
-- ============================================================================

-- Le O central: point où les balles vont impacter
-- Position: AA_GunCrossPos_Y (décalée par rapport à la ligne d'horizon)

local hud_point_0 = create_HUD_element("ceStringPoly")
hud_point_0.name = "hud_point_0"
hud_point_0.material = HUD_FONT
hud_point_0.init_pos = {0.0, 0.0, 0}
hud_point_0.stringdefs = txt_hud_stringdefs
hud_point_0.alignment = "CenterCenter"
hud_point_0.value = "O"
hud_point_0.formats = {"%s", "%.0f", "^\n%03.0f"}
hud_point_0.UseBackground = false
hud_point_0.element_params = {"AV_HUD_POINT_UD", "AV_HUD_POINT_LR"}
hud_point_0.controllers = {
    {"move_up_down_using_parameter", 0, 0.0136},
    {"move_left_right_using_parameter", 1, 0.0136},
}
hud_point_0.parent_element = "hud_zero_base"
hud_point_0.use_mipfilter = true
hud_point_0.h_clip_relation = h_clip_relations.COMPARE
hud_point_0.level = HUD_DEFAULT_LEVEL
hud_point_0.collimated = true
Add(hud_point_0)

-- Ligne verticale depuis le point de visée (vers le haut)
-- Cela aide à viser verticalement
local hud_point_0_upline = create_HUD_element("ceMeshPoly")
hud_point_0_upline.name = "hud_point_0_upline"
hud_point_0_upline.primitivetype = "triangles"
hud_point_0_upline.vertices = {
    {-DegToDI(0.25), DegToDI(0.6)},    -- Début du segment
    {-DegToDI(0.25), DegToDI(3)},      -- Fin du segment (vers le haut)
    {DegToDI(0.25), DegToDI(3)},
    {DegToDI(0.25), DegToDI(0.6)},
}
hud_point_0_upline.indices = {0, 1, 2, 0, 2, 3}
hud_point_0_upline.init_pos = {0, 0.01, 0}
hud_point_0_upline.material = HUD_MATERIAL
hud_point_0_upline.isdraw = true
hud_point_0_upline.isvisible = true
hud_point_0_upline.parent_element = "hud_point_0"
hud_point_0_upline.h_clip_relation = h_clip_relations.COMPARE
hud_point_0_upline.level = HUD_DEFAULT_LEVEL
hud_point_0_upline.collimated = true
hud_point_0_upline.element_params = {"AV_AC_BANK_RAD"}
hud_point_0_upline.controllers = {{"rotate_using_parameter", 0, 1}}
Add(hud_point_0_upline)

-- ============================================================================
-- SECTION 8: BANDE DE CAP (Heading Tape)
-- ============================================================================
-- Chargé depuis le fichier sub_headingtape.lua

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_sub_headingtape.lua")

-- ============================================================================
-- SECTION 9: DEBUG (Optionnel, commenté par défaut)
-- ============================================================================

-- dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_debug.lua")

-- ============================================================================
-- FIN DE LA PAGE COMMUNE
-- ============================================================================

