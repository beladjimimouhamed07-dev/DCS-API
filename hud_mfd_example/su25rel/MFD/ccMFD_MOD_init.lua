dofile(LockOn_Options.common_script_path.."devices_defs.lua")
--dofile(LockOn_Options.script_path.."materials.lua")
dofile(LockOn_Options.common_script_path.."ViewportHandling.lua")


local modpath = LockOn_Options.script_path.."MFD/pages/"




indicator_type      = indicator_types.COMMON
init_pageID     	= 1
purposes 	   		= {render_purpose.GENERAL}--,render_purpose.HUD_ONLY_VIEW} --SCREENSPACE_INSIDE_COCKPIT

try_find_assigned_viewport("MFD_MOD")



----------------------------------------------------------------------
--subset ids
BASE    	= 1
PAGE_BMAP 	= 2
PAGE_ENG 	= 3
PAGE_BTN	= 9



page_subsets  = {
					[BASE]   		= modpath .. "ccMFD_MOD_page_base.lua",
					[PAGE_BMAP]    	= modpath .. "ccMFD_MOD_page_bmap.lua",
					[PAGE_ENG]    	= modpath .. "ccMFD_MOD_page_eng.lua",
					
					[PAGE_BTN]    	= modpath .. "ccMFD_MOD_page_btn.lua",
				}

				
pages = {}
	pages[1] = 	{
					BASE,
					PAGE_BMAP,
					PAGE_ENG,
					PAGE_BTN,
				}


			
			



--update_screenspace_diplacement(SelfWidth/SelfHeight,false)
--dedicated_viewport_arcade = dedicated_viewport

--------------------------------------------------------------------------
--------------------------------------------------------------------------
--------------------------------------------------------------------------






