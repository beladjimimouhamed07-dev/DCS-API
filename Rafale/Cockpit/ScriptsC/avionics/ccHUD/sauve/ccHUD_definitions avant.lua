-- ============================================================================
-- RAFALE C HUD - DEFINITIONS (Réécrit pour correspondre architecture F18)
-- ============================================================================
-- Système de conversion d'unités F18 (DI = Display Increments en milliradians)
-- Toutes les positions et tailles sont maintenant basées sur DI pour précision
-- ============================================================================

dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.script_path.."MFD/MFD_units.lua")
-- ============================================================================
-- SECTION 1: SYSTÈME D'UNITÉS (F18 AVQ32_specifics.lua)
-- ============================================================================

-- MILLIRADIANS: unité de base pour le HUD
-- 1 MILLIRADIAN = 1/1000 radian
-- SetScale(MILLYRADIANS) convertit les coordonnées en milliradians
SetScale(MILLYRADIANS)

-- ============================================================================
-- SECTION 2: CONVERSION DI (Display Increments)
-- ============================================================================

-- F18 utilise un système de Display Increments (DI)
-- 1 DI ≈ 1/1000 de milliradian (dans le contexte MDG)
-- On crée les fonctions de conversion

-- Simulation de DItoMil() depuis MDG_units.lua
-- En réalité, c'est plus complexe, mais voici l'approximation
local function DItoMil()
    -- Ratio: 1 DI en pixels/screen = X milliradians
    -- Pour le HUD F18, approximativement 1 DI ≈ 1 mildot ≈ 1 milli-radian
    return 1.0  -- Simplified ratio (en vrai F18 c'est basé sur la résolution)
end

local function MilToDI(mil)
    return mil  -- Inverse de DItoMil
end

-- Fonction inverse
local function DegToDI(deg)
    -- Conversion: degrés → milliradians → DI
    return deg * (1000 / 57.29578)  -- 1 deg = 1000/57.29578 mrad
end

local function DIToDeg(di)
    return di * (57.29578 / 1000)
end

local DItoScreenUnits = DItoMil()
local ScreenUnitsToDI = 1 / DItoScreenUnits

-- ============================================================================
-- SECTION 3: MISE À L'ÉCHELLE PERSONNALISÉE (F18)
-- ============================================================================

-- F18 utilise une mise à l'échelle personnalisée basée sur DI
-- SetCustomScale applique un multiplicateur supplémentaire
-- GetScale() retourne l'échelle en milliradians
SetCustomScale(GetScale() * DItoScreenUnits)  -- IMPORTANT: Custom scale F18!

-- ============================================================================
-- SECTION 4: NIVEAUX DE RENDU ET CLIPPING (F18)
-- ============================================================================

-- F18 utilise DEFAULT_LEVEL = 19 (pas 3 comme RAFALE!)
-- Cela affecte le système de clipping et l'ordre de rendu
HUD_FOV_LEVEL = 18          -- Niveau pour le FOV clipping
HUD_DEFAULT_LEVEL = 19      -- Niveau par défaut pour tous les éléments

-- Relations de clipping (depuis elements_defs.lua)
-- h_clip_relations.COMPARE    = Afficher si level == clipping level
-- h_clip_relations.INCREASE_IF_LEVEL = Montrer de plus en plus selon level
-- h_clip_relations.DECREASE_IF_LEVEL = Montrer de moins en moins selon level

-- ============================================================================
-- SECTION 5: SYSTÈME DE POSITIONS ET PLACEHOLDERS
-- ============================================================================

-- WATERLINE: La ligne d'eau du HUD (référence horizontale principale)
-- F18 la place à 4 degrés au-dessus de la ligne d'horizon
waterlineShiftY = DegToDI(4)

-- Table des placeholders (positions de référence)
local placeholders = {}

function addPlaceholder(name, position, parent_element, controller)
    local placeholder = CreateElement "ceSimple"
    placeholder.name = name
    placeholder.init_pos = {position[1], position[2], 0}
    placeholder.collimated = true
    if parent_element and parent_element ~= "world" then
        placeholder.parent_element = parent_element
    end
    if controller then
        placeholder.controllers = {controller}
    end
    Add(placeholder)
    placeholders[name] = placeholder
    return placeholder
end

-- Créer la ligne d'eau de référence (origine)
local waterline_origin = addPlaceholder("waterline_origin", {0, waterlineShiftY})

-- Positions des boîtes de vitesse et altitude
-- F18 utilise CAS_AltBoxEdgeX pour positionner ces boîtes
local CAS_AltBoxEdgeX = 400  -- Distance horizontale depuis le centre

-- CAS = Calibrated Air Speed box (gauche)
local CAS_BoxOrigin = addPlaceholder("CAS_BoxOrigin", 
    {-CAS_AltBoxEdgeX, 0}, 
    waterline_origin.name)

-- ALT = Altitude box (droite)
local ALT_BoxOrigin = addPlaceholder("ALT_BoxOrigin", 
    {CAS_AltBoxEdgeX, 0}, 
    waterline_origin.name)

-- ============================================================================
-- SECTION 6: CONSTANTES DE DIMENSIONNEMENT
-- ============================================================================

-- Gun/Air-to-Air
AA_GunBoresight_Y = DegToDI(2)          -- 2° au-dessus de la ligne d'horizon
AA_GunCrossPos_Y = waterlineShiftY + AA_GunBoresight_Y
gunRktReticleRadius = MilToDI(25)       -- 50 mils (50 milliradians)
gunRktReticleTickLen = 18
gunRktReticleRangeTickLen = 5

-- ============================================================================
-- SECTION 7: SYSTÈME DE FONTS (F18-style avec variants)
-- ============================================================================

-- F18 utilise plusieurs variantes de fonts basées sur l'échelle DI
-- 100% = 6.8 mil
-- 120% = 8.16 mil
-- 150% = 10.2 mil
-- 200% = 13.6 mil

-- Échelles des fonts (en milliradians)
local fontScaleY_100 = 6.8 / 1000      -- 100%
local fontScaleX_100 = fontScaleY_100 * 0.6  -- Ratio aspect

local fontScaleY_120 = 8.16 / 1000     -- 120%
local fontScaleX_120 = fontScaleY_120 * 0.6

local fontScaleY_150 = 10.2 / 1000     -- 150%
local fontScaleX_150 = fontScaleY_150 * 0.6

-- Espacement inter-caractères (DI)
local fontIntercharHUD_small_120 = 3
local fontIntercharHUD_norm_120 = 6
local fontIntercharHUD_mid_120 = 8
local fontIntercharHUD_norm_150 = 6

-- Espacement inter-lignes
local fontInterlineDflt120 = 10 * GetScale()
local fontInterlineDflt150 = 12 * GetScale()

-- ============================================================================
-- SECTION 8: DÉFINITIONS DE CHAÎNES (stringdefs)
-- ============================================================================

-- Format: {hauteur caractère, largeur caractère, espacement inter-char, espacement inter-ligne}

local stringdefs_HUD_small_120 = {
    fontScaleY_120,
    fontScaleX_120,
    fontIntercharHUD_small_120 * GetScale(),
    fontInterlineDflt120 * GetScale()
}

local stringdefs_HUD_norm_120 = {
    fontScaleY_120,
    fontScaleX_120,
    fontIntercharHUD_norm_120 * GetScale(),
    fontInterlineDflt120 * GetScale()
}

local stringdefs_HUD_mid_120 = {
    fontScaleY_120,
    fontScaleX_120,
    fontIntercharHUD_mid_120 * GetScale(),
    fontInterlineDflt120 * GetScale()
}

local stringdefs_HUD_norm_150 = {
    fontScaleY_150,
    fontScaleX_150,
    fontIntercharHUD_norm_150 * GetScale(),
    fontInterlineDflt150 * GetScale()
}

-- ============================================================================
-- SECTION 9: MATÉRIAUX ET COULEURS
-- ============================================================================

-- Couleurs RGBA
HUD_COLOR = {20, 255, 50, 220}          -- Vert standard HUD (RGB + Alpha)
TEXT_GREEN_COLOR = {20, 255, 50, 220}   -- Identique
BG_BLACK_COLOR = {30, 30, 30, 255}      -- Noir
TEXT_BLACK_COLOR = BG_BLACK_COLOR

-- Matériaux (avec couleur)
HUD_MATERIAL = MakeMaterial(nil, HUD_COLOR)
HUD_DEBUG_GREEN = MakeMaterial(nil, {25, 200, 25, 120})
HUD_DEBUG_RED = MakeMaterial(nil, {200, 25, 25, 80})
HUD_DEBUG_WHITE = MakeMaterial(nil, {200, 250, 250, 80})
HUD_DEBUG_BLACK = MakeMaterial(nil, {20, 25, 25, 200})

-- ============================================================================
-- SECTION 10: FONTS (Texte)
-- ============================================================================

-- Font principal (Arial 17)
HUD_FONT = MakeFont(
    {used_DXUnicodeFontData = "font_arial_17"},
    TEXT_GREEN_COLOR
)

HUD_FONT_INV = MakeFont(
    {used_DXUnicodeFontData = "font_arial_17"},
    TEXT_BLACK_COLOR
)

-- ============================================================================
-- SECTION 11: FONCTION HELPER POUR CRÉER ÉLÉMENTS HUD
-- ============================================================================

function create_HUD_element(element_type)
    local element = CreateElement(element_type)
    element.additive_alpha = true
    element.collimated = true
    element.use_mipfilter = true
    return element
end

-- ============================================================================
-- SECTION 12: EXPORT DES STRINGDEFS POUR UTILISATION DANS LES PAGES
-- ============================================================================

-- Ces variables doivent être accessibles depuis ccHUD_page_common.lua

txt_hud_stringdefs = stringdefs_HUD_norm_120
txt_hud_s_stringdefs = stringdefs_HUD_small_120
txt_hud_1_stringdefs = stringdefs_HUD_mid_120

-- Autres stringdefs pour future utilisation
stringdefs_HUD_small = stringdefs_HUD_small_120
stringdefs_HUD_norm = stringdefs_HUD_norm_120
stringdefs_HUD_mid = stringdefs_HUD_mid_120
stringdefs_HUD_150 = stringdefs_HUD_norm_150

-- ============================================================================
-- SECTION 13: CONSTANTES DE CONVERSION
-- ============================================================================

-- Exposer les fonctions de conversion pour ccHUD_page_common.lua
DegToDI = DegToDI
DIToDeg = DIToDeg
MilToDI = MilToDI

-- Exposer les dimensions pour calculs de boîtes
CAS_AltBoxEdgeX_Const = CAS_AltBoxEdgeX
waterlineShiftY_Const = waterlineShiftY

-- ============================================================================
-- SECTION 14: PARAMÈTRES D'AFFICHAGE
-- ============================================================================

HUD_SCALE = 1
use_mipfilter = true

-- Épaisseur et fuzzyness des lignes (shader line params)
stroke_thickness = 0.8
stroke_fuzziness = 0.5

-- ============================================================================
-- FIN DES DÉFINITIONS
-- ============================================================================
-- Ces constantes et fonctions sont maintenant disponibles pour:
-- - ccHUD_page_base.lua
-- - ccHUD_page_common.lua
-- - ccHUD_sub_headingtape.lua
-- ============================================================================

