mount_vfs_texture_archives("Bazar/Textures/AvionicsCommon")

attributes = {
	"support_for_cws",
}

creators   = {}
indicators = {}



	

	--avionics package-----------------------------------------------------
	dofile(LockOn_Options.script_path.."avionics/avionics_device_init.lua")
	--/avionics package-----------------------------------------------------
	
	--avionics package-----------------------------------------------------
	dofile(LockOn_Options.script_path.."MFD/MFD_MOD_device_init.lua")
	--/avionics package-----------------------------------------------------
	
	--TMP package-----------------------------------------------------
	--dofile(LockOn_Options.script_path.."TMP/tmp_device_init.lua")
	--/avionics package-----------------------------------------------------

	

---------------------------------------------
dofile(LockOn_Options.common_script_path.."KNEEBOARD/declare_kneeboard_device.lua")
---------------------------------------------
