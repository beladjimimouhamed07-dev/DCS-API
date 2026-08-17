-- ccHUD_test_alphabet.lua
-- TEST: Affichage de l'alphabet complet sur le HUD
-- Utilise le stroke font SVG et les matériaux définis

dofile(LockOn_Options.script_path.."avionics/ccHUD/ccHUD_definitions.lua")

------------------------------------------------------------------------
-- DÉFINITIONS DE TEST
------------------------------------------------------------------------

-- Base de test
local test_base = CreateElement "ceSimple"
test_base.name = "test_base"
test_base.init_pos = {0, 0, 0}
test_base.collimated = true
Add(test_base)

------------------------------------------------------------------------
-- TEST 1: ALPHABET COMPLET EN UNE LIGNE
------------------------------------------------------------------------

local test_alphabet_line = CreateElement "ceStringPoly"
test_alphabet_line.name = "test_alphabet_line"
test_alphabet_line.material = HUD_FONT
test_alphabet_line.init_pos = {0.0, 0.3, 0}
test_alphabet_line.stringdefs = stringdefs_HUD_norm_120  -- Police 120%
test_alphabet_line.alignment = "CenterCenter"
test_alphabet_line.value = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
test_alphabet_line.formats = {"%s"}
test_alphabet_line.UseBackground = false
test_alphabet_line.parent_element = "test_base"
test_alphabet_line.use_mipfilter = true
test_alphabet_line.h_clip_relation = h_clip_relations.COMPARE
test_alphabet_line.level = HUD_DEFAULT_LEVEL
test_alphabet_line.collimated = true
test_alphabet_line.isvisible = true
Add(test_alphabet_line)

------------------------------------------------------------------------
-- TEST 2: CHIFFRES
------------------------------------------------------------------------

local test_numbers = CreateElement "ceStringPoly"
test_numbers.name = "test_numbers"
test_numbers.material = HUD_FONT
test_numbers.init_pos = {0.0, 0.15, 0}
test_numbers.stringdefs = stringdefs_HUD_norm_120
test_numbers.alignment = "CenterCenter"
test_numbers.value = "0123456789"
test_numbers.formats = {"%s"}
test_numbers.UseBackground = false
test_numbers.parent_element = "test_base"
test_numbers.use_mipfilter = true
test_numbers.h_clip_relation = h_clip_relations.COMPARE
test_numbers.level = HUD_DEFAULT_LEVEL
test_numbers.collimated = true
test_numbers.isvisible = true
Add(test_numbers)

------------------------------------------------------------------------
-- TEST 3: CARACTÈRES SPÉCIAUX
------------------------------------------------------------------------

local test_special_chars = CreateElement "ceStringPoly"
test_special_chars.name = "test_special_chars"
test_special_chars.material = HUD_FONT
test_special_chars.init_pos = {0.0, 0.0, 0}
test_special_chars.stringdefs = stringdefs_HUD_norm_120
test_special_chars.alignment = "CenterCenter"
test_special_chars.value = "- + ' ( ) * % , ° . / \\"
test_special_chars.formats = {"%s"}
test_special_chars.UseBackground = false
test_special_chars.parent_element = "test_base"
test_special_chars.use_mipfilter = true
test_special_chars.h_clip_relation = h_clip_relations.COMPARE
test_special_chars.level = HUD_DEFAULT_LEVEL
test_special_chars.collimated = true
test_special_chars.isvisible = true
Add(test_special_chars)

------------------------------------------------------------------------
-- TEST 4: PLUS DE CARACTÈRES SPÉCIAUX
------------------------------------------------------------------------

local test_more_special = CreateElement "ceStringPoly"
test_more_special.name = "test_more_special"
test_more_special.material = HUD_FONT
test_more_special.init_pos = {0.0, -0.15, 0}
test_more_special.stringdefs = stringdefs_HUD_norm_120
test_more_special.alignment = "CenterCenter"
test_more_special.value = "\" ? : # = _ ^"
test_more_special.formats = {"%s"}
test_more_special.UseBackground = false
test_more_special.parent_element = "test_base"
test_more_special.use_mipfilter = true
test_more_special.h_clip_relation = h_clip_relations.COMPARE
test_more_special.level = HUD_DEFAULT_LEVEL
test_more_special.collimated = true
test_more_special.isvisible = true
Add(test_more_special)

------------------------------------------------------------------------
-- TEST 5: ALPHABET EN TAILLES DIFFÉRENTES (150%)
------------------------------------------------------------------------

local test_alphabet_150 = CreateElement "ceStringPoly"
test_alphabet_150.name = "test_alphabet_150"
test_alphabet_150.material = HUD_FONT
test_alphabet_150.init_pos = {0.0, -0.35, 0}
test_alphabet_150.stringdefs = stringdefs_HUD_norm_150  -- Police 150%
test_alphabet_150.alignment = "CenterCenter"
test_alphabet_150.value = "ABCDEFGHIJ"
test_alphabet_150.formats = {"%s"}
test_alphabet_150.UseBackground = false
test_alphabet_150.parent_element = "test_base"
test_alphabet_150.use_mipfilter = true
test_alphabet_150.h_clip_relation = h_clip_relations.COMPARE
test_alphabet_150.level = HUD_DEFAULT_LEVEL
test_alphabet_150.collimated = true
test_alphabet_150.isvisible = true
Add(test_alphabet_150)

------------------------------------------------------------------------
-- INFORMATIONS DE DEBUG EN BAS DE L'ÉCRAN
------------------------------------------------------------------------

local test_info = CreateElement "ceStringPoly"
test_info.name = "test_info"
test_info.material = HUD_FONT
test_info.init_pos = {0.0, -0.55, 0}
test_info.stringdefs = stringdefs_HUD_small_120  -- Police petite
test_info.alignment = "CenterCenter"
test_info.value = "TEST STROKE FONT - Alphabet Complet"
test_info.formats = {"%s"}
test_info.UseBackground = false
test_info.parent_element = "test_base"
test_info.use_mipfilter = true
test_info.h_clip_relation = h_clip_relations.COMPARE
test_info.level = HUD_DEFAULT_LEVEL
test_info.collimated = true
test_info.isvisible = true
Add(test_info)

------------------------------------------------------------------------


