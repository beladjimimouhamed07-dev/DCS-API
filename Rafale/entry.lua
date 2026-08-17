local AFMenabled = true

bin = {}

if AFMenabled == true then
    bin = { 'Rafale_DLL' } --
end


local self_ID = "Rafale-C"
declare_plugin(self_ID,
{
    image     	 = "FC3.bmp", -- Remplace par ton icône .png de 512x512
    installed 	 = true,
    dirName	  	 = current_mod_path,
    displayName  = _("Rafale C - EFM Project"),
    developerName = _("FR3D"),
    version		 = "0.1.0",
    state		 = "installed",
    fileMenuName = _("Rafale_FR3D"),
    binaries	 = bin,
    Skins	=
	{
		{
		    name	= _("Rafale-C"),
			dir		= "Theme"
		},
	},
	Missions =
	{
		{
			name	= _("Rafale_FR3D"),
			dir		= "Missions",
  		},
	},
	InputProfiles = 
{
	["Rafale-C"]			= current_mod_path .. '/Input/Rafale-C/',
},	
})

----------------------------------------------------------------------------------------
-- MONTAGE DES CHEMINS (VFS)
----------------------------------------------------------------------------------------
mount_vfs_model_path	(current_mod_path.."/Shapes/Armements")
mount_vfs_model_path	(current_mod_path.."/Shapes/Rafale_C")
mount_vfs_model_path	(current_mod_path.."/Cockpit/Shapes/Rafale-C")
mount_vfs_model_path	(current_mod_path.."/Cockpit/Shapes")
mount_vfs_texture_path	(current_mod_path.."/Textures")
mount_vfs_texture_path	(current_mod_path.."/Textures/Rafale")
mount_vfs_texture_path	(current_mod_path.."/Textures/Rafale_C")
mount_vfs_texture_path	(current_mod_path.."/Textures/Armements")
mount_vfs_texture_path	(current_mod_path.."/Cockpit/Textures/Rafale-C")
mount_vfs_texture_path	(current_mod_path.."/Cockpit/Textures/Rafale")
mount_vfs_liveries_path (current_mod_path.."/Liveries/Rafale-C")
----------------------------------------------------------------------------------------
-- DÉCLARATION DU MODÈLE DE VOL ET DU COCKPIT
----------------------------------------------------------------------------------------
-- On définit le chemin vers la DLL et le dossier des scripts cockpit
if AFMenabled == true then
	dofile(current_mod_path.."/Entry/config.lua")
	local FM = 
	{
		[1] = self_ID,
		[2] = 'Rafale-C',
		center_of_mass = {-2.630275, -0.304166, 0.0}, --x=0.183, y=0.261
		moment_of_inertia = {28000, 75000, 85000, 2800}, --763 --xy = -5518 --xy = -1763
		--moment_of_inertia = {10968, 35116, 39500, -1763.0}, --763 --xy = -5518 --xy = -1763
		config = config
	}
	make_flyable('Rafale-C'	, current_mod_path..'/Cockpit/ScriptsC/', FM, current_mod_path..'/comm.lua')
else
	make_flyable('Rafale-C'	, current_mod_path..'/Cockpit/ScriptsC/', nil, current_mod_path..'/comm.lua')
end

----------------------------------------------------------------------------------------
-- CHARGEMENT DES DONNÉES DE L'AVION
----------------------------------------------------------------------------------------
dofile(current_mod_path..'/Rafale_C.lua')
dofile(current_mod_path..'/Input/Rafale-C/keyboard/default.lua')
dofile(current_mod_path..'/Input/Rafale-C/joystick/default.lua')
dofile(current_mod_path.."/ViewsC.lua")
make_view_settings('Rafale-C', ViewSettings, SnapViews)
plugin_done()