local script_path = LockOn_Options.script_path

dofile(script_path .. "devices.lua")
dofile(LockOn_Options.common_script_path .. "tools.lua")
dofile(script_path .. "config.lua")
dofile(script_path .. "materials.lua")

MainPanel = {
    "ccMainPanel",
    script_path .. "mainpanel_init.lua"
}

show_param_handles_list(enable)


attributes = {
    "support_for_cws",
}

creators = {}
indicators = {}


----------------------------------------------------------------
-- AVIONICS
----------------------------------------------------------------

dofile(
    script_path .. "avionics/avionics_device_init.lua"
)


----------------------------------------------------------------
-- MFD / VTM
----------------------------------------------------------------

dofile(
    script_path .. "MFD/MFD_MOD_device_init.lua"
)


----------------------------------------------------------------
-- ADI
----------------------------------------------------------------

indicators[#indicators + 1] = {
    "ccIndicator",

    script_path .. "ADI/indicator/ADI_init.lua",

    nil,

    {
        {
            "IPSH-CENTER",
            "IPSH-DOWN",
            "IPSH-RIGHT"
        },

        {
            sx_l = 0,
            sy_l = 0,
            sz_l = 0,
            sh   = 0,
            sw   = 0,
            rz_l = 0,
            rx_l = 0,
            ry_l = 0,
        }
    }
}


----------------------------------------------------------------
-- VTL RIGHT
----------------------------------------------------------------

indicators[#indicators + 1] = {
    "ccIndicator",

    script_path .. "VTL_R_indicator/VTL_R_init.lua",

    devices.VTL_R_INTERFACE,

    {
        {
            "VTLR-CENTER",
            "VTLR-DOWN",
            "VTLR-RIGHT"
        },

        {
            0,
            0,
            0
        }
    }
}


----------------------------------------------------------------
-- KNEEBOARD
----------------------------------------------------------------

dofile(
    LockOn_Options.common_script_path ..
    "KNEEBOARD/declare_kneeboard_device.lua"
)


----------------------------------------------------------------
-- RAFALE ADDONS
----------------------------------------------------------------

creators[devices.ADI] = {
    "avLuaDevice",
    script_path .. "ADI/Device/device_init.lua"
}


creators[devices.chevrons] = {
    "avLuaDevice",
    script_path .. "Rafale addon/chevrons/chevrons.lua"
}

creators[devices.RadioAltimetre] = {
    "avLuaDevice",
    script_path .. "Rafale addon/RadioAltimetre/AltimetreRadar.lua"
}

creators[devices.Train] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Train/Train.lua"
}

creators[devices.Fuel] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Fuel/Fuel.lua"
}

creators[devices.WOW] = {
    "avLuaDevice",
    script_path .. "Rafale addon/WOW/WOW.lua"
}

creators[devices.Gx] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Gx/Gx.lua"
}

creators[devices.Flaps] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Flaps/Flaps.lua"
}

creators[devices.Gx_Scale] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Gx_Scale/Gx_Scale.lua"
}

creators[devices.AoA] = {
    "avLuaDevice",
    script_path .. "Rafale addon/AoA/AoA.lua"
}

creators[devices.Gy] = {
    "avLuaDevice",
    script_path .. "Rafale addon/Gy/Gy.lua"
}

creators[devices.ADI_Assiette] = {
    "avLuaDevice",
    script_path .. "Rafale addon/ADI_Assiette/ADI_Assiette.lua"
}

creators[devices.HDG_MGT] = {
    "avLuaDevice",
    script_path .. "Rafale addon/HDG_MGT/HDG_MGT.lua"
}

creators[devices.voiRadio] = {
    "avLuaDevice",
    script_path .. "Rafale addon/voiRadio/voiRadio.lua"
}

creators[devices.alti_pointeur] = {
    "avLuaDevice",
    script_path .. "Rafale addon/alti_pointeur/alti_pointeur.lua"
}

creators[devices.GCAS] = {
    "avLuaDevice",
    script_path .. "Rafale addon/GCAS/GCAS.lua"
}

creators[devices.OSF] = {
    "avLuaDevice",
    script_path .. "Rafale addon/OSF/OSF.lua"
}


----------------------------------------------------------------
-- RBE2
----------------------------------------------------------------

creators[devices.RBE2_ELECTRIC] = {
    "avSimpleElectricSystem",
    script_path .. "RBE2/rbe2_electric.lua"
}

creators[devices.RBE2] = {
    "avSimpleRadar",
    script_path .. "RBE2/rbe2_radar.lua"
}