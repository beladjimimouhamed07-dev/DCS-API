

	
	--MFD MOD------------------------------------------------------------
	--dofile(LockOn_Options.script_path.."MFD_MOD/MFD_MOD_device_init.lua")
	--MFD MOD------------------------------------------------------------



-------DEVICE ID-------
dofile(LockOn_Options.script_path.."devices.lua")


creators[devices.MFD_MOD]    =  {
									"avLuaDevice",
									LockOn_Options.script_path.."MFD/avMFD_MOD_init.lua",
									{},
									"", 
								}



indicators[#indicators + 1] = 	{
									"ccIndicator",
									LockOn_Options.script_path.."MFD/ccMFD_MOD_init.lua",
									devices.MFD_MOD,
									{
        {"VTM-CENTER", "VTM-DOWN", "VTM-RIGHT"}, 
        {0, 0, 0}
    }
								}

