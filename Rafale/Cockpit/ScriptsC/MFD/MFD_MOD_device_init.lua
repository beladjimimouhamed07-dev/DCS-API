----------------------------------------------------------------
-- RAFALE MFD / VTM DEVICE INITIALIZATION
----------------------------------------------------------------

dofile(LockOn_Options.script_path .. "devices.lua")


----------------------------------------------------------------
-- MFD DEVICE
----------------------------------------------------------------

creators[devices.MFD_MOD] = {
    "avLuaDevice",
    LockOn_Options.script_path .. "MFD/avMFD_MOD_init.lua",
    {},
    ""
}


----------------------------------------------------------------
-- VTM INDICATOR
----------------------------------------------------------------

indicators[#indicators + 1] = {
    "ccIndicator",

    LockOn_Options.script_path .. "MFD/ccMFD_MOD_init.lua",

    devices.MFD_MOD,

    {
        {
            "VTM-CENTER",
            "VTM-DOWN",
            "VTM-RIGHT"
        },

        {
            0,
            0,
            0
        }
    }
}