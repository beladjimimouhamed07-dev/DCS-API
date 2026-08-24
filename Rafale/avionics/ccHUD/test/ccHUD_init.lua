-- ccHUD_init.lua - FIXED
-- F18 AVQ32 HUD-compatible initialization

dofile(LockOn_Options.common_script_path.."devices_defs.lua")
dofile(LockOn_Options.common_script_path.."ViewportHandling.lua")

try_find_assigned_viewport("avionics")

----------------------------------------------------------------------
-- INDICATOR CONFIGURATION
----------------------------------------------------------------------

indicator_type = indicator_types.COLLIMATOR

purposes = {render_purpose.GENERAL, render_purpose.HUD_ONLY_VIEW}

-- opacity_sensitive_materials = {}

----------------------------------------------------------------------
-- SHADER CONFIGURATION
----------------------------------------------------------------------

-- shaderLineParamsUpdatable  = true
-- shaderLineDefaultThickness = 0.8
-- shaderLineDefaultFuzziness = 0.5
-- shaderLineDrawAsWire       = false
-- shaderLineUseSpecularPass  = false

----------------------------------------------------------------------
-- PAGE STRUCTURE
----------------------------------------------------------------------

init_pageID     = 1

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
-- HUD-SPECIFIC CONFIGURATION
----------------------------------------------------------------------

-- isHUD = true

----------------------------------------------------------------------
-- COLLIMATOR OPTICAL CENTER ADJUSTMENT
----------------------------------------------------------------------

-- Optical center is 4 degrees below the FRL (Field Reference Line)
collimator_default_distance_factor = {auto_collimator_default_distance_factor[1], 
                                      auto_collimator_default_distance_factor[1] * math.rad(-4), 0}

----------------------------------------------------------------------

