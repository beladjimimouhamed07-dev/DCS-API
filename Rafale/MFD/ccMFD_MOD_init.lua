dofile(LockOn_Options.common_script_path.."devices_defs.lua")

--dofile(LockOn_Options.script_path.."materials.lua")

dofile(LockOn_Options.common_script_path.."ViewportHandling.lua")


local modpath =
    LockOn_Options.script_path.."MFD/pages/"


indicator_type = indicator_types.COLLIMATOR

init_pageID = 1

purposes = {
    render_purpose.GENERAL
}


try_find_assigned_viewport("MFD_MOD")


----------------------------------------------------------------------
-- SUBSET IDS
----------------------------------------------------------------------

BASE      = 1

PAGE_BMAP = 2
PAGE_ENG  = 3
PAGE_BTN  = 9
PAGE_RBE2 = 10
PAGE_TAC  = 11
PAGE_OSF  = 12


----------------------------------------------------------------------
-- PAGE SUBSETS
----------------------------------------------------------------------

page_subsets = {

    [BASE] =
        modpath.."ccMFD_MOD_page_base.lua",

    [PAGE_BMAP] =
        modpath.."ccMFD_MOD_page_bmap.lua",

    [PAGE_ENG] =
        modpath.."ccMFD_MOD_page_eng.lua",

    [PAGE_BTN] =
        modpath.."ccMFD_MOD_page_btn.lua",

    [PAGE_RBE2] =
        modpath.."ccMFD_MOD_page_rbe2.lua",

    [PAGE_TAC] =
        modpath.."ccMFD_MOD_page_tac.lua",

    [PAGE_OSF] =
        modpath.."ccMFD_MOD_page_osf.lua",

}


----------------------------------------------------------------------
-- MAIN PAGE
----------------------------------------------------------------------

pages = {}

pages[1] = {

    BASE,

    PAGE_BMAP,
    PAGE_ENG,
    PAGE_BTN,
    PAGE_RBE2,
    PAGE_TAC,
    PAGE_OSF,

}