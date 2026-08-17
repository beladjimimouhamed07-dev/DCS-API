dofile(LockOn_Options.common_script_path.."devices_defs.lua")
dofile(LockOn_Options.common_script_path.."ViewportHandling.lua") 
dofile(LockOn_Options.script_path.."ADI/Indicator/utils.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_pages_id.lua")

indicator_type = indicator_types.COMMON
purposes       = {render_purpose.GENERAL, render_purpose.HUD_ONLY_VIEW}
 
page_subsets  = {
	[SUB_PAGE_ID.BASE] = LockOn_Options.script_path.."ADI/Indicator/PAGES/ADI_BASE.lua",   
	[SUB_PAGE_ID.OFF]  = LockOn_Options.script_path.."ADI/Indicator/PAGES/OFF.lua",   
	[SUB_PAGE_ID.MAIN] = LockOn_Options.script_path.."ADI/Indicator/PAGES/ADI_MAIN.lua",   
}

pages = {
	[PAGE_ID] = { SUB_PAGE_ID.BASE, 
				  SUB_PAGE_ID.OFF, 
				  SUB_PAGE_ID.MAIN, 
			  }, 
}
 
init_pageID = 1
 

