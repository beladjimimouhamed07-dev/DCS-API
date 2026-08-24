-- ccHUD_tools.lua - Helper functions for Rafale HUD symbology
-- Common symbology definitions. Used by MDG (HUD/MDI/AMPCD), and TEWS for RWR screen symbology.

dofile(LockOn_Options.common_script_path.."tools.lua")
dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.script_path.."materials.lua")

--------------------------------------------------------------------------------
-- 1. STRUCTURATION ET HIÉRARCHIE
--------------------------------------------------------------------------------

--- Ajoute un point d'ancrage invisible (Placeholder)
function addHUDPlaceholder(name, pos, parent, controllers)
    local ph = CreateElement("ceSimple")
    ph.name = name
    
    if pos then ph.init_pos = {pos[1], pos[2], 0} else ph.init_pos = {0, 0, 0} end
    if parent then ph.parent_element = parent end
    if controllers then ph.controllers = controllers end
    
    ph.collimated = true
    
    Add(ph)
    return ph
end

--------------------------------------------------------------------------------
-- 2. AFFICHAGE DE TEXTES STROKE (SVG)
--------------------------------------------------------------------------------

--- Ajoute un texte vectoriel basé sur une font SVG stroke
function addHUDText(name, value, stringdef, align, pos, parent, controllers, params, formats)
    local txt = CreateElement("ceStringSLine")
    txt.name = name
    txt.isdraw = true
    txt.material = "font_RAFHUD" -- Matériau stroke défini dans materials.lua
    txt.additive_alpha = true
    txt.collimated = true
    txt.use_mipfilter = use_mipfilter
    
    txt.alignment = align or "CenterCenter"
    txt.stringdefs = stringdef or STROKE_FNT_DFLT_150_WIDE
    
    if pos then txt.init_pos = {pos[1], pos[2], 0} else txt.init_pos = {0, 0, 0} end
    if parent then txt.parent_element = parent end
    if controllers then txt.controllers = controllers end
    if params then txt.element_params = params end
    if formats then txt.formats = formats end
    if value then txt.value = value end
    
    txt.h_clip_relation = h_clip_relations.COMPARE
    txt.level = HUD_DEFAULT_LEVEL
    
    Add(txt)
    return txt
end

--------------------------------------------------------------------------------
-- 3. FORMES GÉOMÉTRIQUES VECTORIELLES ET PLEINES
--------------------------------------------------------------------------------

--- Ajoute une ligne vectorielle (stroke)
function addHUDLine(name, length, pos, rot, parent, controllers, params)
    local line = CreateElement("ceSMultiLine")
    line.name = name
    line.isdraw = true
    line.material = HUD_MATERIAL
    line.additive_alpha = true
    line.collimated = true
    line.use_mipfilter = use_mipfilter
    line.thickness = shaderLineDefaultThickness or 0.65
    line.fuzziness = shaderLineDefaultFuzziness or 0.30
    
    if pos then line.init_pos = {pos[1], pos[2], 0} else line.init_pos = {0, 0, 0} end
    if rot then line.init_rot = {rot} end
    if parent then line.parent_element = parent end
    if controllers then line.controllers = controllers end
    if params then line.element_params = params end
    
    line.vertices = {{0, 0}, {0, length}}
    line.indices = {0, 1}
    
    line.h_clip_relation = h_clip_relations.COMPARE
    line.level = HUD_DEFAULT_LEVEL
    
    Add(line)
    return line
end

--- Ajoute un rectangle ou un carré vectoriel (contour)
function addHUDBox(name, width, height, pos, parent, controllers, params)
    local box = CreateElement("ceSMultiLine")
    box.name = name
    box.isdraw = true
    box.material = HUD_MATERIAL
    box.additive_alpha = true
    box.collimated = true
    box.use_mipfilter = use_mipfilter
    box.thickness = shaderLineDefaultThickness or 0.65
    box.fuzziness = shaderLineDefaultFuzziness or 0.30
    
    if pos then box.init_pos = {pos[1], pos[2], 0} else box.init_pos = {0, 0, 0} end
    if parent then box.parent_element = parent end
    if controllers then box.controllers = controllers end
    if params then box.element_params = params end
    
    local w2, h2 = width / 2, height / 2
    box.vertices = {{-w2, -h2}, {-w2, h2}, {w2, h2}, {w2, -h2}}
    box.indices = {0, 1, 1, 2, 2, 3, 3, 0}
    
    box.h_clip_relation = h_clip_relations.COMPARE
    box.level = HUD_DEFAULT_LEVEL
    
    Add(box)
    return box
end

--- Ajoute un cercle vectoriel
function addHUDCircle(name, radius, pos, parent, controllers, params)
    local circle = CreateElement("ceSCircle")
    circle.name = name
    circle.isdraw = true
    circle.material = HUD_MATERIAL
    circle.additive_alpha = true
    circle.collimated = true
    circle.use_mipfilter = use_mipfilter
    circle.thickness = shaderLineDefaultThickness or 0.65
    circle.fuzziness = shaderLineDefaultFuzziness or 0.30
    
    circle.radius = {radius, radius}
    circle.arc = {0, math.pi * 2}
    circle.segment_detail = 4
    
    if pos then circle.init_pos = {pos[1], pos[2], 0} else circle.init_pos = {0, 0, 0} end
    if parent then circle.parent_element = parent end
    if controllers then circle.controllers = controllers end
    if params then circle.element_params = params end
    
    circle.h_clip_relation = h_clip_relations.COMPARE
    circle.level = HUD_DEFAULT_LEVEL
    
    Add(circle)
    return circle
end

--- Ajoute un polygone plein (Mesh)
function addHUDMesh(name, vertices, indices, pos, material, parent, controllers, params)
    local mesh = CreateElement("ceMeshPoly")
    mesh.name = name
    mesh.primitivetype = "triangles"
    mesh.vertices = vertices
    mesh.indices = indices
    
    if pos then mesh.init_pos = {pos[1], pos[2], 0} else mesh.init_pos = {0, 0, 0} end
    if parent then mesh.parent_element = parent end
    if controllers then mesh.controllers = controllers end
    if params then mesh.element_params = params end
    
    mesh.material = material or HUD_MATERIAL
    mesh.additive_alpha = true
    mesh.collimated = true
    mesh.use_mipfilter = use_mipfilter
    mesh.isdraw = true
    
    mesh.h_clip_relation = h_clip_relations.COMPARE
    mesh.level = HUD_DEFAULT_LEVEL
    
    Add(mesh)
    return mesh
end

--------------------------------------------------------------------------------
-- 4. GESTION DES SYMBOLES SVG COMPILÉS
--------------------------------------------------------------------------------

function addRafaleHUDSymbol(name, set, align, pos, parent, controllers, scale, material)
    local symbol = CreateElement("ceSMultiLine")
    
    -- Propriétés de base
    symbol.name           = name
    symbol.isdraw         = true
    symbol.material       = material or "HUD_GREEN"
    symbol.additive_alpha = true
    symbol.collimated     = true
    symbol.use_mipfilter  = use_mipfilter
    
    -- Positionnement et parentage
    pos = pos or {0, 0}
    symbol.init_pos       = {pos[1], pos[2], 0}
    if parent then symbol.parent_element = parent end
    if controllers and type(controllers) == "table" then symbol.controllers = controllers end
    
    -- Rendu vectoriel (Stroke)
    symbol.thickness = shaderLineDefaultThickness or 0.65
    symbol.fuzziness = shaderLineDefaultFuzziness or 0.30
    symbol.alignment = align or "CenterCenter"
    symbol.scale     = scale or 1.0
    
    -- Gestion automatique du stockage SVG {Fichier, ID}
    if type(set) == "string" then
        symbol.points_set = {"stroke_symbols_HUD", set}
    elseif type(set) == "table" and #set == 1 then
        symbol.points_set = {"stroke_symbols_HUD", set[1]}
    else
        symbol.points_set = set
    end
    
    -- Masquage / Stencil Collimateur
    symbol.h_clip_relation = h_clip_relations.COMPARE
    symbol.level           = HUD_DEFAULT_LEVEL
    
    Add(symbol)
    return symbol
end

--------------------------------------------------------------------------------
-- 5. MASQUAGE STENCIL DYNAMIQUE (MASK OPEN / CLOSE)
--------------------------------------------------------------------------------

--- Ouvre un masque dans le stencil buffer (incrémente le niveau)
function addHUDMaskOpen(name, level_diff, vertices, indices, pos, parent, controllers)
    local mask = CreateElement("ceMeshPoly")
    mask.name = name
    mask.primitivetype = "triangles"
    mask.vertices = vertices
    mask.indices = indices
    
    if pos then mask.init_pos = {pos[1], pos[2], 0} else mask.init_pos = {0, 0, 0} end
    if parent then mask.parent_element = parent end
    if controllers then mask.controllers = controllers end
    
    mask.isvisible = false
    mask.isdraw = true
    mask.collimated = true
    mask.material = HUD_MATERIAL
    
    mask.h_clip_relation = h_clip_relations.INCREASE_IF_LEVEL
    mask.level = HUD_DEFAULT_LEVEL - 1 + (level_diff or 0)
    
    Add(mask)
    return mask
end

--- Ferme un masque dans le stencil buffer (décrémente le niveau)
function addHUDMaskClose(name, level_diff, vertices, indices, pos, parent, controllers)
    local mask = CreateElement("ceMeshPoly")
    mask.name = name
    mask.primitivetype = "triangles"
    mask.vertices = vertices
    mask.indices = indices
    
    if pos then mask.init_pos = {pos[1], pos[2], 0} else mask.init_pos = {0, 0, 0} end
    if parent then mask.parent_element = parent end
    if controllers then mask.controllers = controllers end
    
    mask.isvisible = false
    mask.isdraw = true
    mask.collimated = true
    mask.material = HUD_MATERIAL
    
    mask.h_clip_relation = h_clip_relations.DECREASE_IF_LEVEL
    mask.level = HUD_DEFAULT_LEVEL + (level_diff or 0)
    
    Add(mask)
    return mask
end

--------------------------------------------------------------------------------
-- 6. CHEVRONS D'ACCÉLÉRATION
--------------------------------------------------------------------------------

function addHUDChevron(name, height, angle, pos, rot, pos_shift, parent, controllers, params, material, scale)
    scale = scale or 1
    
    local triangle = CreateElement("ceSMultiLine")
    triangle.name = name
    triangle.isdraw = true
    triangle.material = material or "HUD_GREEN"
    triangle.additive_alpha = true
    triangle.collimated = true
    triangle.use_mipfilter = use_mipfilter
    
    -- Propriétés stroke (fuzziness, thickness)
    triangle.thickness = shaderLineDefaultThickness or 0.65
    triangle.fuzziness = shaderLineDefaultFuzziness or 0.30
    
    -- Positionnement et liens
    if pos then triangle.init_pos = {pos[1], pos[2], 0} else triangle.init_pos = {0, 0, 0} end
    if parent then triangle.parent_element = parent end
    if controllers then triangle.controllers = controllers end
    if params then triangle.element_params = params end
    
    -- Calculs géométriques
    height = height * scale
    local rot_lcl = rot or 0
    local base_angle = 180 - math.max(1, math.min(angle, 179)) / 2
    
    local angle1 = math.rad(-base_angle + rot_lcl)
    local angle2 = math.rad(base_angle + rot_lcl)
    
    local pt2_x = height * math.sin(angle1) * scale
    local pt2_y = height * math.cos(angle1) * scale
    local pt3_x = height * math.sin(angle2) * scale
    local pt3_y = height * math.cos(angle2) * scale

    local shift_x = 0
    local shift_y = 0
    
    if pos_shift ~= nil then
        shift_x = pos_shift[1] * scale
        shift_y = pos_shift[2] * scale
    end
    
    triangle.vertices = {
        {shift_x, shift_y}, 
        {pt2_x + shift_x, pt2_y + shift_y}, 
        {pt3_x + shift_x, pt3_y + shift_y}
    }
    triangle.indices = {0, 1, 0, 2}
    
    -- Masquage Stencil
    triangle.h_clip_relation = h_clip_relations.COMPARE
    triangle.level = HUD_DEFAULT_LEVEL
    
    Add(triangle)
    return triangle
end

