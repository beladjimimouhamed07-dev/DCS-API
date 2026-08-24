-- ccHUD_init.lua - FIXED
-- F18 AVQ32 HUD-compatible initialization

dofile(LockOn_Options.common_script_path.."devices_defs.lua")
dofile(LockOn_Options.common_script_path.."ViewportHandling.lua")

try_find_assigned_viewport("avionics")

----------------------------------------------------------------------
-- INDICATOR CONFIGURATION
----------------------------------------------------------------------

indicator_type = indicator_types.COLLIMATOR
purposes       = {render_purpose.GENERAL, render_purpose.HUD_ONLY_VIEW}

----------------------------------------------------------------------
-- PAGE STRUCTURE
----------------------------------------------------------------------

init_pageID = 1

BASE    = 1
COMMON  = 2

page_subsets = {
    [BASE]   = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_base.lua",
    [COMMON] = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_common.lua",
}

pages = {
    [1] = {BASE, COMMON}
}

----------------------------------------------------------------------
-- SHADER & COLLIMATOR CONFIGURATION
----------------------------------------------------------------------

collimator_default_distance_factor = {
    auto_collimator_default_distance_factor[1], 
    auto_collimator_default_distance_factor[1] * math.rad(-4), 
    0
}

-- ccHUD_init.lua (à ajouter à la fin)
shaderLineParamsUpdatable  = true
shaderLineDefaultThickness = 2.5
shaderLineDefaultFuzziness = 0.8
shaderLineDrawAsWire       = false
shaderLineUseSpecularPass  = false

default_material  = "HUD_MATERIAL"       -- Matériau par défaut pour les lignes vectorielles
stroke_font       = "font_RAFHUD"         -- Matériau de ta font SVG stroke
collimated        = true                  -- Projection à l'infini
additive_alpha    = true                  -- Rendu lumineux HUD
DEFAULT_LEVEL     = HUD_DEFAULT_LEVEL     -- Synchronise le niveau de masque (Stencil)

