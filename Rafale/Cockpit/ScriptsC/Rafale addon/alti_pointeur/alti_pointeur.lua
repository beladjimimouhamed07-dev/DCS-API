-- ============================================================================
-- ALTITUDE POINTER - SIMPLIFIED VERSION
-- Remplacement de alti_pointeur.lua
-- 
-- Le triangle fait 1 tour complet (2π radians) tous les 1000 ft d'altitude
-- ============================================================================

dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local sensor_data = get_base_data()
local update_time_step = 0.002
make_default_activity(update_time_step)

local parameters = {
    altimetre_pointeur = get_param_handle("altimetre_pointeur"),
}

function post_initialize()
    parameters.altimetre_pointeur:set(0)
end

function SetCommand(command, value)
end

function update()
    -- Récupérer l'altitude barométrique en mètres
    local alt_meters = sensor_data.getBarometricAltitude()
    
    -- Convertir en pieds (1m = 3.28084 ft)
    local alt_feet = alt_meters * 3.28084
    
    -- Calculer la rotation : 1 tour complet (2π) tous les 1000 ft
    -- Formule : rotation = (altitude % 1000) / 1000 * 2π
    local alt_remainder = alt_feet % 1000  -- reste de la division par 1000
    local rotation = (alt_remainder / 1000) * (math.pi * 2)  -- 2π radians
    
    -- Normaliser entre 0 et 1 pour DCS (certaines fonctions utilisent 0-1)
    local rotation_normalized = (alt_remainder / 1000)
    
    -- Envoyer au paramètre partagé
    -- Valeur entre 0 et 1, et le HUD controller multipliera par -2π pour obtenir la rotation
    parameters.altimetre_pointeur:set(rotation_normalized)
end

need_to_be_closed = false

-- ============================================================================
-- NOTES
-- ============================================================================
-- 
-- alt_feet % 1000 : donne le reste de la division
--   Ex: 15123 ft % 1000 = 123 ft
--   Ex: 15000 ft % 1000 = 0 ft
-- 
-- (alt_remainder / 1000) * 2π : convertit 0-1000 ft en 0-2π radians
--   Ex: 0 ft → 0 radians (0°)
--   Ex: 250 ft → π/2 radians (90°)
--   Ex: 500 ft → π radians (180°)
--   Ex: 750 ft → 3π/2 radians (270°)
--   Ex: 1000 ft → 2π radians (360° / retour à 0°)
-- 
-- Normalisation 0-1 :
--   Le controller HUD utilise "-math.pi*2" donc il multiplie le paramètre (0-1) par -2π
--   Paramètre 0.0 → rotation -0π (0°)
--   Paramètre 0.25 → rotation -π/2 (90° inverse)
--   Paramètre 0.5 → rotation -π (180°)
--   Paramètre 1.0 → rotation -2π (360°)
-- 
-- IMPORTANT : Le signe du controller est "-math.pi*2" (négatif)
-- Si tu veux que le triangle tourne dans l'autre sens, change le signe dans le HUD_common.lua :
--   {{"rotate_using_parameter", 0, math.pi*2}}  <- sans le moins
--
-- ============================================================================

