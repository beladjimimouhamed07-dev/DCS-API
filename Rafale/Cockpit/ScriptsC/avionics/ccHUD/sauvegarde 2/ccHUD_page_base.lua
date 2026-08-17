-- ccHUD_page_base.lua
-- HUD Base Page - 100% Autonome (0 dépendance MDG)

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")

-----------------------------------------------------------------------
-- OUTILS INTERNES INTÉGRÉS
-----------------------------------------------------------------------
-- Les fonctions de symétrie (addVertsMirroredAboutY, prepareBorderVerts) 
-- ont été retirées car nous utilisons désormais directement les vertices 
-- complets des trapèzes pour la vitre.

local function setAsInvisibleMask(element)
	element.isvisible = false
	element.color_mask = {false, false, false, false} -- Bloque le rendu des couleurs RGB
end

-----------------------------------------------------------------------
-- 1. ANCRAGE PHYSIQUE COCKPIT 3D
-----------------------------------------------------------------------

local HUD_glassScale = 1 / GetScale()


-- Coordonnées issues de la template d'origine pour l'alignement cockpit
local init_pos_p_x =  0.585423350 * HUD_glassScale 
local init_pos_p_y = -0.0499138832 * HUD_glassScale 

-- Base physique pivot accrochée au modèle 3D
local hardware_glass_base         = CreateElement "ceSimple"
hardware_glass_base.name          = "hardware_glass_base"
hardware_glass_base.init_pos      = {0, init_pos_p_y, init_pos_p_x}
hardware_glass_base.collimated    = false
hardware_glass_base.controllers   = {{"set_origin_to_cockpit_shape"}}
Add(hardware_glass_base)

-----------------------------------------------------------------------
-- 2. DÉFINITION DES VERTICES COMMUNS (GLASSE & FOV)
-----------------------------------------------------------------------
-- Définition des coordonnées en DI pour garantir la superposition exacte.

local normalTrapezoid1Verts = {
	{DegToDI(-10.95), DegToDI(4.3)},  
	{DegToDI(10.95),  DegToDI(4.3)},  
	{DegToDI(11.25),  DegToDI(-0.9)}, 
	{DegToDI(-11.25), DegToDI(-0.9)}   
}

local normalTrapezoid2Verts = {
	{DegToDI(-10.95), DegToDI(4.3)},    
	{DegToDI(10.95),  DegToDI(4.3)},  
	{DegToDI(8.3),    DegToDI(8.7)},   
	{DegToDI(-8.3),   DegToDI(8.7)}    
}

local invertedTrapezoid1Verts = {
	{DegToDI(-11.25), DegToDI(-0.9)}, 
	{DegToDI(11.25),  DegToDI(-0.9)}, 
	{DegToDI(10.3),   DegToDI(-5.4)},  
	{DegToDI(-10.3),  DegToDI(-5.4)} 
}

local invertedTrapezoid2Verts = {
	{DegToDI(-10.3),  DegToDI(-5.4)},  
	{DegToDI(10.3),   DegToDI(-5.4)},   
	{DegToDI(8.25),   DegToDI(-8)},  
	{DegToDI(-8.25),  DegToDI(-8)}  
}

-- Paramètres géométriques partagés
local common_indices = {0, 1, 2, 0, 2, 3}
local common_pos     = {0, 0, 0}
local common_rot     = {0, 0, -15}


-----------------------------------------------------------------------
-- 3. HUD FIELD OF VIEW (FOV) PROJECTIONS (Masque Optique - EN PREMIER)
-----------------------------------------------------------------------
local function Add_FOV_trapezoid(name, vertices, pos)
	local FOV_lens = CreateElement "ceMeshPoly"
	FOV_lens.name = name
	FOV_lens.primitivetype = "triangles"
	FOV_lens.vertices = vertices
	FOV_lens.indices = common_indices
	FOV_lens.init_pos = pos
	FOV_lens.parent_element = "hardware_glass_base"
	FOV_lens.h_clip_relation = h_clip_relations.REWRITE_LEVEL
	FOV_lens.level = HUD_FOV_LEVEL -- Écrit '1' dans le Stencil
	FOV_lens.isdraw = true
	FOV_lens.change_opacity = false
	FOV_lens.material = HUD_DEBUG_GREEN
	FOV_lens.collimated = false
	FOV_lens.isvisible = false
	FOV_lens.additive_alpha	= true
	FOV_lens.use_mipfilter	= use_mipfilter
	FOV_lens.element_params  = {"AV_PIT_GLASS"}
	FOV_lens.controllers     = {{"move_up_down_using_parameter"	,0,0.0063}}--{{"move_up_down_using_parameter"	,0,0.0049}}
	
	Add(FOV_lens)
end

local drawHUD_FOV_projections = true
if drawHUD_FOV_projections == true then
	Add_FOV_trapezoid("normal_trapezoid_1", normalTrapezoid1Verts, common_pos)
	Add_FOV_trapezoid("normal_trapezoid_2", normalTrapezoid2Verts, common_pos)
	Add_FOV_trapezoid("inverted_trapezoid_1", invertedTrapezoid1Verts, common_pos)
	Add_FOV_trapezoid("inverted_trapezoid_2", invertedTrapezoid2Verts, common_pos)
end



-----------------------------------------------------------------------
-- 4. CRÉATION DES COMBINER GLASS (Masque Physique - EN SECOND)
-----------------------------------------------------------------------
local function addCombinerGlass(name, verts, inds, pos, rot)
	local glass           = CreateElement "ceMeshPoly"
	glass.name            = name
	glass.primitivetype   = "triangles"
	glass.vertices	      = verts
	glass.indices		  = inds
	glass.init_pos	  	  = pos 
	glass.init_rot	  	  = rot
	glass.parent_element  = "hardware_glass_base"
	glass.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL
	glass.level			  = HUD_FOV_LEVEL -- Si c'est '1', ça augmente et devient '2'
	glass.change_opacity  = false
	glass.material	      = HUD_DEBUG_RED
	glass.isvisible 	  = false
	glass.collimated		= false
	
	Add(glass)
end

addCombinerGlass("HUD_glass_norm_1", normalTrapezoid1Verts, common_indices, common_pos, common_rot)
addCombinerGlass("HUD_glass_norm_2", normalTrapezoid2Verts, common_indices, common_pos, common_rot)
addCombinerGlass("HUD_glass_inv_1", invertedTrapezoid1Verts, common_indices, common_pos, common_rot)
addCombinerGlass("HUD_glass_inv_2", invertedTrapezoid2Verts, common_indices, common_pos, common_rot)

