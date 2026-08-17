dofile(LockOn_Options.common_script_path.."devices_defs.lua")
dofile(LockOn_Options.common_script_path.."ViewportHandling.lua")


purposes 	 	= {render_purpose.GENERAL,render_purpose.HUD_ONLY_VIEW}
indicator_type  = indicator_types.COLLIMATOR--[[HELMET--]]--[[COMMON--]]



try_find_assigned_viewport("avionics")

----------------------------------------------------------------------
init_pageID     	= 1

--subset ids
BASE    	= 1
COMMON		= 2


page_subsets  = {
					[BASE]   		= LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_base.lua",
					[COMMON]   		= LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_common.lua",
				}

pages = {}
	pages[1] = 	{
					BASE,COMMON,
				}






