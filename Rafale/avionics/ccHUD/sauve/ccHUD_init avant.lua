-- ============================================================================
-- RAFALE C HUD - INIT (Réécrit pour correspondre architecture F18)
-- ============================================================================
-- Ce fichier initialise le HUD en utilisant la structure F18 AVQ32
-- Toutes les dépendances MDG sont simulées localement pour rester self-contained
-- ============================================================================

dofile(LockOn_Options.common_script_path.."devices_defs.lua")

-- ============================================================================
-- SECTION 1: SIMULATION DES FONCTIONS MDG (pour rester self-contained)
-- ============================================================================

-- IDs simulés pour MDG
local MDG_SELF_IDS = {
    HUD = 1,
    COMMON = 0,
}

-- Fonctions wrapper MDG simulées
local function MDG_font_name(id)
    return "hud_font_rafale"
end

local function MDG_material_name(id)
    return "hud_material_rafale"
end

-- Fonction pour écrire les paramètres globaux (simulation)
local function writeParameter(key, value)
    -- En Lua, on peut juste utiliser les variables globales
    _G[key] = value
end

-- ============================================================================
-- SECTION 2: DEVICE TIMER ET CONFIGURATION
-- ============================================================================

device_timer_dt = 0.05
selfID = MDG_SELF_IDS.HUD
need_to_be_closed = true

-- ============================================================================
-- SECTION 3: TYPE D'INDICATEUR ET PURPOSES
-- ============================================================================

indicator_type = indicator_types.COLLIMATOR

-- Système de render (identique F18)
-- IMPORTANT: Garder GENERAL et HUD_ONLY_VIEW pour la compatibilité
purposes = {render_purpose.GENERAL, render_purpose.HUD_ONLY_VIEW}

-- Matériaux sensibles à l'opacité (comme F18)
opacity_sensitive_materials = {
    MDG_font_name(MDG_SELF_IDS.HUD),
    MDG_material_name(MDG_SELF_IDS.HUD)
}

-- ============================================================================
-- SECTION 4: PARAMÈTRES DE LIGNE DE SHADER (nouveau dans F18)
-- ============================================================================

shaderLineParamsUpdatable  = true      -- Permet la mise à jour dynamique
shaderLineDefaultThickness = 0.8       -- Épaisseur des lignes
shaderLineDefaultFuzziness = 0.5       -- Flou des lignes
shaderLineDrawAsWire       = false     -- Dessiner comme wireframe (debug)
shaderLineUseSpecularPass  = false     -- Utiliser le specular pass

-- ============================================================================
-- SECTION 5: PAGES ET STRUCTURE
-- ============================================================================

-- Page de base: définit les bordures et FOV du HUD
BasePage              = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_base.lua"

-- Page spécifique au HUD (symbologie unique au HUD, pas sur repeater)
IndicatorSpecificPage = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_common.lua"

-- Flag indiquant que c'est un HUD (affecte le rendu)
isHUD = true

-- ============================================================================
-- SECTION 6: PARAMÈTRES MDG/SPECIFIQUES (F18-style)
-- ============================================================================

-- Point d'entrée pour les specs spécifiques au HUD
writeParameter("MDG_init_specifics", LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_definitions.lua")

-- NIVEAU PAR DÉFAUT: F18 utilise 19, RAFALE utilisait 3
-- IMPORTANT: Ceci affecte le clipping et l'ordre de rendu
writeParameter("MDG_init_DEFAULT_LEVEL", 19)

-- ============================================================================
-- SECTION 7: CHARGER LE SYSTÈME COMMUN (similaire F18 Common_init.lua)
-- ============================================================================

-- Ceci simule ce que ferait Common_init.lua
-- On charge les definitions qui vont populer les pages

-- Créer un simple mécanisme de page registry
page_subsets = {
    [1] = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_base.lua",
    [2] = LockOn_Options.script_path .. "avionics/ccHUD/ccHUD_page_common.lua",
}

pages = {
    [1] = {1, 2}  -- Page 1 contient les subsets 1 et 2
}

init_pageID = 1

-- ============================================================================
-- SECTION 8: PARAMÈTRES COLLIMATEUR (F18-specific)
-- ============================================================================

-- F18: "optical center is 4 degrees below the FRL (Field Reference Line)"
-- Ceci affecte la position virtuelle du centre du HUD

-- Simulation de auto_collimator_default_distance_factor (depuis Viewport Handling)
local auto_collimator_default_distance_factor = {
    0.58542335,  -- distance oculaire par défaut
    0,           -- offset Y (sera modifié)
    0            -- offset Z
}

-- OFFSET IMPORTANT: -4 degrés en dessous de la ligne de référence
collimator_default_distance_factor = {
    auto_collimator_default_distance_factor[1],
    auto_collimator_default_distance_factor[1] * math.rad(-4),  -- -4° en radians
    0
}

-- ============================================================================
-- SECTION 9: FLAGS DE BAKE (optionnel, pour texture pré-calculée)
-- ============================================================================

-- Pour les futures améliorations (baking du HUD)
-- bakeIndicators = false
-- bakeHUD = false

-- ============================================================================
-- FIN DE L'INITIALISATION
-- ============================================================================
-- Le système est maintenant prêt pour charger les pages spécifiques
-- Les fichiers page_base et page_common vont utiliser ces settings
-- ============================================================================

