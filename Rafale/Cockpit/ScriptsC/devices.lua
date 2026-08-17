local count = 0
local function counter()
	count = count + 1
	return count
end
-------DEVICE ID-------
devices = {}

devices["SYSTEM"]					= counter()--73
devices["ADI"]    					= counter()--74    --basic package
devices["HUD"]						= counter()
devices["VTL_R_INTERFACE"] 			= counter()
devices["avionics"] 	=	counter()
devices["MFD_MOD"]	 	= counter()


--------------------------------------------------RAFALE ADDON --------------------------------------------------
devices["chevrons"]					= counter()
devices["RadioAltimetre"]			= counter()
devices["Train"]					= counter()
devices["Fuel"]						= counter()
devices["WOW"]						= counter()
devices["Gx"]						= counter()
devices["Flaps"]					= counter()
devices["Gx_Scale"]					= counter()
devices["AoA"]					 	= counter()
devices["Gy"]						= counter()
devices["ADI_Assiette"]  			= counter()	
devices["HDG_MGT"]  				= counter()	
devices["voiRadio"]					= counter()
devices["alti_pointeur"]			= counter()
devices["GCAS"] 					= counter()
devices["OSF"] 						= counter()


-- RBE2 V1 DROP-IN
devices["RBE2_ELECTRIC"] = counter()
devices["RBE2"] = counter()
