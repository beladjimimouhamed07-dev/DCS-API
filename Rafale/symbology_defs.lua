-- Common symbology definitions. Used by MDG (HUD/MDI/AMPCD), and TEWS for RWR screen symbology.

dofile(LockOn_Options.common_script_path.."tools.lua")
dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.script_path.."materials.lua")

local use_mipfilter 	= true
local show_masks  		= false


-- Display Increment (DI) is the minimum stroke ray position increment
MeterToIn         	= 39.3701 / 1.00000054
DegToMil          	= math.rad(1) * 1000
UnitsPerSide      	= 1024
HalfUnitsPerSide  	= UnitsPerSide / 2

-- F18 AVQ32 constants
local DItoMil_ 		= 0.34
local MilToDI_ 		= 1.0 / DItoMil_
local DItoIn_  		= 0.0048
local InToDI_  		= 1.0 / DItoIn_
local DegToDI_ 		= math.rad(1) * 1000.0 * MilToDI_
local DItoDeg_ 		= 1.0 / DegToDI_
local RadToDI_ 		= 1000.0 * MilToDI_
local DItoRad_ 		= 1.0 / RadToDI_

-- Define conversion functions GLOBALLY BEFORE anything uses them
function DItoMil(param) 
	return (param or 1) * DItoMil_ 
end

function MilToDI(param) 
	return (param or 1) * MilToDI_ 
end

function DItoIn(param) 
	return (param or 1) * DItoIn_ 
end

function InToDI(param) 
	return (param or 1) * InToDI_ 
end

function DegToDI(param) 
	return (param or 1) * DegToDI_ 
end

function DItoDeg(param) 
	return (param or 1) * DItoDeg_ 
end

function RadToDI(param) 
	return (param or 1) * RadToDI_ 
end

function DItoRad(param) 
	return (param or 1) * DItoRad_ 
end



HUD_TFOV_mils    		= 10 * DegToMil -- HUD Total Vield of View radius in milliradians
HUD_TFOV_DI       		= DegToDI(10)   -- HUD Total Vield of View radius in DIs


-- made by four lines
line_box_indices  		= {0, 1, 1, 2, 2, 3, 3, 0}

-- overwrite this value with actual clipping level
DEFAULT_LEVEL     		= 2
-- fill this table with font parameters
stringdefs 				= {}
-- overwrite these values with actual material names
default_material 		= ""
stroke_font				= ""

function addPlaceholder(name, pos, parent, controllers)
	local placeholder       	= CreateElement "ceSimple"
	placeholder.name        	= name
	pos = pos or {0, 0}
	placeholder.init_pos    	= {pos[1], pos[2], 0}
	placeholder.collimated  	= collimated or false

	if parent ~= nil then
		placeholder.parent_element 	= parent
	end	
	
	if controllers ~= nil then
		placeholder.controllers		= controllers
	end
	
	Add(placeholder)
	return placeholder
end

function addPlaceholderParam(name, pos, parent, controllers, params)
	local placeholder       	= CreateElement "ceSimple"
	placeholder.name        	= name
	pos = pos or {0, 0}
	placeholder.init_pos    	= {pos[1], pos[2], 0}
	placeholder.collimated  	= collimated or false

	if parent ~= nil then
		placeholder.parent_element 	= parent
	end	
	
	if controllers ~= nil then
		placeholder.controllers		= controllers
	end

	if params ~= nil then
		placeholder.element_params = params
	end
	
	Add(placeholder)
	return placeholder
end

function setAsInvisibleMask(obj)
	obj.isvisible = show_masks
	obj.material  = material or default_material
	--obj.material  = "MASK_MATERIAL_PURPLE_2" -- a brighter variant
end

function setClipLevel(obj, level)
	level = level or 0
	obj.h_clip_relation = h_clip_relations.COMPARE
	--obj.h_clip_relation = h_clip_relations.NULL
	obj.level 		    = DEFAULT_LEVEL + level
end

-- Local functions

-- NOTE
-- 'pos' is passed as a two-component table - x and y coordinates
function setSymbolCommonProperties(symbol, name, pos, parent, controllers, material)
	symbol.name               = name
	symbol.isdraw             = true
	symbol.material           = material or default_material
	symbol.additive_alpha	  = additive_alpha or false
	symbol.collimated		  = collimated or false
	symbol.use_mipfilter      = use_mipfilter
	
	if parent ~= nil then
		symbol.parent_element = parent
	end
	
	if controllers ~= nil then
		if type(controllers) == "table" then
			symbol.controllers = controllers
		end
	end
	
	pos = pos or {0, 0}
	symbol.init_pos       	  = {pos[1], pos[2], 0}
	
	setClipLevel(symbol)
end

function setSymbolCommonPropsParam(symbol, name, pos, parent, controllers, params, material, formats)
	symbol.name               = name 							--Set the name of the object
	symbol.isdraw             = true 							--?? Probably determining if visible or not
	symbol.material           = material or default_material 	--Set the material (stroke_font in function call)
	symbol.additive_alpha	  = additive_alpha or false 		--?? not being passed, so set to false
	symbol.collimated		  = collimated or false 			--?? not being passed, so set to false
	symbol.use_mipfilter      = use_mipfilter 					--?? not being passed, so set to true
	symbol.formats 			  = formats 						--formatting of text received as an argument from function call
	symbol.element_params = params 								--Major change; setting passed paramaters to the obj's element paramaters
	
	--Unchanged; parent is the object used to determine the layout of the text, that's it, 
	--this has nothing to do with the paramaters or controllers, just layout
	if parent ~= nil then
		symbol.parent_element = parent
	end
	
	--Set the controllers to the passed value
	if controllers ~= nil then
		if type(controllers) == "table" then
			symbol.controllers = controllers
		else
			symbol.controllers = controllers
		end
	end
	
	--Set position of object to the value passed (or 0, 0 if none are)
	pos = pos or {0, 0}
	symbol.init_pos       	  = {pos[1], pos[2], 0}
	
	--?? Sets h_clip_relation and level - not sure what that is
	setClipLevel(symbol)
end

local function setSymbolAlignment(symbol, align)
	if align ~= nil then
		symbol.alignment = align
	else
		symbol.alignment = "CenterCenter"
	end
end

local function setStrokeSymbolProperties(symbol)

	if override_materials == true then
		-- Is used for outlined font generated by DMC
		symbol.thickness    		= override_thickness
		symbol.fuzziness    		= override_fuzziness
	else
		symbol.thickness    		= stroke_thickness
		symbol.fuzziness    		= stroke_fuzziness
	end

	symbol.draw_as_wire 		= dbg_drawStrokesAsWire
	--symbol.use_specular_pass 	= false -- ommitted for now as is set for the entire indicator
end

local function setStrokeSymbolPropertiesCircleMod(symbol)

	if override_materials == true then
		-- Is used for outlined font generated by DMC
		symbol.thickness    		= 2.5
		symbol.fuzziness    		= override_fuzziness
	else
		symbol.thickness    		= 2.5
		symbol.fuzziness    		= stroke_fuzziness
	end

	symbol.draw_as_wire 		= dbg_drawStrokesAsWire
	--symbol.use_specular_pass 	= false -- ommitted for now as is set for the entire indicator
end

local function buildStrokeLineVerts(length, dashed, stroke, gap)
	local verts = {}
	local inds = {}
	
	if dashed == true and stroke ~= nil and gap ~= nil then
		local segLength = stroke + gap
		local numOfWholePairs = math.floor(length / segLength)
		local reminder = length - numOfWholePairs * segLength
		
		local function addSeg(num)
			local shift1 = num * 2
			verts[shift1 + 1] = {0, num * segLength}
			verts[shift1 + 2] = {0, num * segLength + stroke}
			
			inds[shift1 + 1] = shift1
			inds[shift1 + 2] = shift1 + 1
		end
		
		for segNum = 0, numOfWholePairs - 1 do
			addSeg(segNum)
		end
		
		if reminder > 0 then
			if reminder >= stroke then
				addSeg(numOfWholePairs)
			else
				local shift1 = numOfWholePairs * 2
				verts[shift1 + 1] = {0, numOfWholePairs * segLength}
				verts[shift1 + 2] = {0, numOfWholePairs * segLength + reminder}
				
				inds[shift1 + 1] = shift1
				inds[shift1 + 2] = shift1 + 1
			end
		end
	else
		verts = {{0, 0}, {0, length}}
		inds  = {0, 1}
	end
	
	return verts, inds
end

-- Shared functions

-- Stroke text with glyphs described in a .svg file
function addStrokeText(name, value, stringdef, align, pos, parent, controllers, formats)
	local txt = CreateElement "ceStringSLine"
	setSymbolCommonProperties(txt, name, pos, parent, controllers, stroke_font)
	setSymbolAlignment(txt, align)
	
	-- custom size is noted in documents as in percents from the original one
	if type(stringdef) == "table" then
		txt.stringdefs = stringdef
	else
		txt.stringdefs = stringdefs[stringdef]
	end
	
	if value ~= nil then
		txt.value = value
	end
	
	txt.formats 		= formats
	
	Add(txt)
		
	return txt
end

function addStrokeTextParam(name, value, stringdef, align, pos, parent, controllers, params, formats)
	local txt = CreateElement "ceStringSLine" 		--creat a new ceStringSLine element called txt
	setSymbolCommonPropsParam(txt, name, pos, parent, controllers, params, stroke_font, formats)
	setSymbolAlignment(txt, align)					--Set the alignment
	
	-- custom size is noted in documents as in percents from the original one
	if type(stringdef) == "table" then
		txt.stringdefs = stringdef
	else
		txt.stringdefs = stringdefs[stringdef]
	end
	
	--If a value is passed ("G" for example) the text is set to that value.
	if value ~= nil then
		txt.value = value
	end
	
	--Both of these are being set in setSymbolCommonProps_Blue28E already, do I need this?
	--txt.element_params 	= params
	--txt.formats 		= formats
	
	Add(txt) --Add the text object to the HUD
		
	return txt --Not sure why this is returning, don't think it does anything
end

-- Stroke symbol with points described in a .svg file
function addStrokeSymbol(name, set, align, pos, parent, controllers, scale, material)
	local symbol       = CreateElement "ceSMultiLine"
	setSymbolCommonProperties(symbol, name, pos, parent, controllers, material)
	setSymbolAlignment(symbol, align)
	setStrokeSymbolProperties(symbol)
	symbol.points_set  = set
	symbol.scale       = scale or 1
	Add(symbol)
	return symbol
end

-- Stroke line
-- rot (CCW in degrees from up)
-- pos (position of beginning of the line)
function addStrokeLine(name, length, pos, rot, parent, controllers, dashed, stroke, gap, material)
	local line      = CreateElement "ceSMultiLine"
	setSymbolCommonProperties(line, name, pos, parent, controllers, material)
	setStrokeSymbolProperties(line)
	
	if rot ~= nil then
		line.init_rot   = {rot}
	end
		
	local verts, inds = buildStrokeLineVerts(length, dashed, stroke, gap)
	line.vertices   = verts
	line.indices    = inds
	
	Add(line)
	return line
end

-- Stroke line of variable length
function addVarLenStrokeLine(name, length, pos, rot, parent, controllers, dashed, stroke, gap, material)
	local line      = CreateElement "ceSVarLenLine"
	setSymbolCommonProperties(line, name, pos, parent, controllers, material)
	setStrokeSymbolProperties(line)
	
	if rot ~= nil then
		line.init_rot   = {rot}
	end
	
	if length ~= nil then
		line.length     = length
	end
	
	local verts, inds = buildStrokeLineVerts(HUD_TFOV_DI * 4, dashed or false, stroke, gap)
	line.vertices   = verts
	line.indices    = inds
	
	Add(line)
	return line
end

-- Box made of stroke lines. Use case - HUD TD box (non-segmented)
function addStrokeBox(name, sideX, sideY, align, pos, parent, controllers, material)
	local box      = CreateElement "ceSMultiLine"
	setSymbolCommonProperties(box, name, pos, parent, controllers, material)
	setSymbolAlignment(box, align)
	setStrokeSymbolProperties(box)
	
	local halfSideX = sideX / 2
	local halfSideY = sideY / 2
	box.vertices    = {{-halfSideX, -halfSideY}, {-halfSideX, halfSideY}, {halfSideX, halfSideY}, {halfSideX, -halfSideY}}
	box.indices     = line_box_indices
	
	Add(box)
	return box
end

-- Segmented box made of stroke lines. Use case - HUD segmented TD box
function addStrokeBoxSegmented(name, sideX, sideY, segmentX, segmentY, align, pos, parent, controllers, material)
	local box      = CreateElement "ceSMultiLine"
	setSymbolCommonProperties(box, name, pos, parent, controllers, material)
	setSymbolAlignment(box, align)
	setStrokeSymbolProperties(box)
	
	local halfSideX = sideX / 2
	local halfSideY = sideY / 2
	local lineLenX  = halfSideX - segmentX / 2
	local lineLenY  = halfSideY - segmentY / 2
	box.vertices    = {{-halfSideX, -halfSideY}, {-halfSideX, -halfSideY + lineLenY}, {-halfSideX, halfSideY - lineLenY},
					   {-halfSideX, halfSideY}, {-halfSideX + lineLenX, halfSideY}, {halfSideX - lineLenX, halfSideY},
					   {halfSideX, halfSideY}, {halfSideX, halfSideY - lineLenY}, {halfSideX, -halfSideY + lineLenY},
					   {halfSideX, -halfSideY}, {halfSideX - lineLenX, -halfSideY}, {-halfSideX + lineLenX, -halfSideY}}
	box.indices     = {0, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9, 9, 10, 11, 0}
	
	Add(box)
	return box
end

-- Dashed box made of stroke lines. Align - CenterCenter
function addStrokeBoxDashed(name, sideX, sideY, stroke, gap, pos, parent, controllers, material)

	local root = addPlaceholder(name, pos, parent, controllers)

	addStrokeLine(name.."_left", sideY, {-sideX / 2, -sideY / 2}, 0, root.name, nil, true, stroke, gap, material)
	addStrokeLine(name.."_right", sideY, {sideX / 2, -sideY / 2}, 0, root.name, nil, true, stroke, gap, material)
	addStrokeLine(name.."_top", sideX, {-sideX / 2, sideY / 2}, -90, root.name, nil, true, stroke, gap, material)
	addStrokeLine(name.."_bottom", sideX, {-sideX / 2, -sideY / 2}, -90, root.name, nil, true, stroke, gap, material)
end

-- Equilateral triangle. Center point is at the top end.
-- The element is rotated about its center point by 'rot' angle, and then 'pos_shift' is applied.
function addStrokeEquilateralTriangle(name, height, angle, pos, rot, pos_shift, parent, controllers, material)
	local triangle      = CreateElement "ceSMultiLine"
	setSymbolCommonProperties(triangle, name, pos, parent, controllers, material)
	setStrokeSymbolProperties(triangle)
	
	local rot_lcl = rot or 0
	-- The angle is limited in the range of 1 to 179 degrees
	local base_angle = 180 - math.max(1, math.min(angle, 179)) / 2
	
	local angle1 = math.rad(-base_angle + rot_lcl)
	local angle2 = math.rad(base_angle + rot_lcl)
	
	local pt2_x = height * math.sin(angle1)
	local pt2_y = height * math.cos(angle1)
	local pt3_x = height * math.sin(angle2)
	local pt3_y = height * math.cos(angle2)

	local shift_x = 0
	local shift_y = 0
	
	if pos_shift ~= nil then
		shift_x = pos_shift[1]
		shift_y = pos_shift[2]
	end
	
	triangle.vertices    = {{shift_x, shift_y}, {pt2_x + shift_x, pt2_y + shift_y}, {pt3_x + shift_x, pt3_y + shift_y}}
	triangle.indices     = {0, 1, 1, 2, 2, 0}
	
	Add(triangle)
	return triangle
end

function addStrokeEquilateralTriangleParam(name, height, angle, pos, rot, pos_shift, parent, controllers, params, material)
	local triangle = CreateElement "ceSMultiLine" 		--creat a new ceStringSLine element called txt
	--setSymbolCommonProperties(triangle, name, pos, parent, controllers, material)
	setSymbolCommonPropsParam(triangle, name, pos, parent, controllers, params, stroke_font, formats)
	setStrokeSymbolProperties(triangle)
	
	local rot_lcl = rot or 0
	-- The angle is limited in the range of 1 to 179 degrees
	local base_angle = 180 - math.max(1, math.min(angle, 179)) / 2
	
	local angle1 = math.rad(-base_angle + rot_lcl)
	local angle2 = math.rad(base_angle + rot_lcl)
	
	local pt2_x = height * math.sin(angle1)
	local pt2_y = height * math.cos(angle1)
	local pt3_x = height * math.sin(angle2)
	local pt3_y = height * math.cos(angle2)

	local shift_x = 0
	local shift_y = 0
	
	if pos_shift ~= nil then
		shift_x = pos_shift[1]
		shift_y = pos_shift[2]
	end
	
	triangle.vertices    = {{shift_x, shift_y}, {pt2_x + shift_x, pt2_y + shift_y}, {pt3_x + shift_x, pt3_y + shift_y}}
	triangle.indices     = {0, 1, 1, 2, 2, 0}
	
	Add(triangle)
	return triangle
end

--chevrons 
function addStrokeEquilateralTriangleWithoutBaseParam(name, height, angle, pos, rot, pos_shift, parent, controllers, params, material, scale)
    scale = scale or 1  -- Valeur par défaut 1 (taille originale)
    local triangle = CreateElement "ceSMultiLine"
    setSymbolCommonPropsParam(triangle, name, pos, parent, controllers, params, material or stroke_font)
    setStrokeSymbolProperties(triangle)
    
    -- Appliquer le facteur d'échelle
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
    
    triangle.vertices    = {
        {shift_x, shift_y}, 
        {pt2_x + shift_x, pt2_y + shift_y}, 
        {pt3_x + shift_x, pt3_y + shift_y}
    }
    triangle.indices     = {0, 1, 0, 2}
    
    Add(triangle)
    return triangle
end
-- Stroke circle
function addStrokeCircle(name, radius, pos, parent, controllers, arc, segment, gap, dashed, material)
	local segmentsN = 64
	
	local circle     		= CreateElement "ceSCircle"
	setSymbolCommonProperties(circle, name, pos, parent, controllers, material)
	setStrokeSymbolProperties(circle)
	circle.radius    	 	= {radius, radius}
	circle.arc       		= arc or {0, math.pi * 2}
	circle.segment      	= segment or math.pi * 4 / segmentsN
	circle.gap      		= gap or math.pi * 4 / segmentsN
	circle.segment_detail   = 4
	
	if dashed ~= nil then
		circle.dashed    	= dashed
	else
		circle.dashed    	= false
	end
	
	Add(circle)
	return circle
end

function addStrokeCircleParam(name, radius, pos, parent, controllers, params, arc, segment, gap, dashed, material)
	local segmentsN = 64
	
	local circle     		= CreateElement "ceSCircle"
	setSymbolCommonPropsParam(circle, name, pos, parent, controllers, params, material)
	setStrokeSymbolProperties(circle)
	circle.radius    	 	= {radius, radius}
	circle.arc       		= arc or {0, math.pi * 2}
	circle.segment      	= segment or math.pi * 4 / segmentsN
	circle.gap      		= gap or math.pi * 4 / segmentsN
	circle.segment_detail   = 4
	
	if dashed ~= nil then
		circle.dashed    	= dashed
	else
		circle.dashed    	= false
	end
	
	Add(circle)
	return circle
end

function addStrokeCircleParamThick(name, radius, pos, parent, controllers, params, arc, segment, gap, dashed, material)
	local segmentsN = 64
	
	local circle     		= CreateElement "ceSCircle"
	setSymbolCommonPropsParam(circle, name, pos, parent, controllers, params, material)
	setStrokeSymbolPropertiesCircleMod(circle)
	circle.radius    	 	= {radius, radius}
	circle.arc       		= arc or {0, math.pi * 2}
	circle.segment      	= segment or math.pi * 4 / segmentsN
	circle.gap      		= gap or math.pi * 4 / segmentsN
	circle.segment_detail   = 4
	
	if dashed ~= nil then
		circle.dashed    	= dashed
	else
		circle.dashed    	= false
	end
	
	Add(circle)
	return circle
end

-- Non-textured mesh, which is drawn by either triangles or by zero-width lines ('primitives' parameter)
function addMesh(name, vertices, indices, pos, primitives, parent, controllers, material)
	local mesh     			= CreateElement "ceMeshPoly"
	setSymbolCommonProperties(mesh, name, pos, parent, controllers, material)
	mesh.vertices			= vertices or {}
	mesh.indices			= indices or {}
	mesh.primitivetype		= primitives
	Add(mesh)
	return mesh
end

function buildBoxVerts(width, height, align)
	align = align or "CenterCenter"

	local w		= width
	local h		= height
	local w05	= w * 0.5
	local h05	= h * 0.5

	local verts = {}

	if align == "CenterCenter" then
		verts =	{ {-w05, -h05}, {-w05,  h05}, { w05,  h05}, { w05, -h05} }
	elseif align == "LeftCenter" then
		verts =	{ { 0, -h05}, { 0,  h05}, { w,  h05}, { w, -h05} }
	elseif align == "RightCenter" then
		verts =	{ {-w, -h05}, {-w,  h05}, { 0,  h05}, { 0, -h05} }
	elseif align == "CenterBottom" then
		verts =	{ {-w05, 0}, {-w05, h}, { w05, h}, { w05, 0} }
	elseif align == "CenterTop" then
		verts =	{ {-w05, -h}, {-w05,  0}, { w05,  0}, { w05, -h} }
	elseif align == "LeftBottom" then
		verts =	{ { 0, 0}, { 0, h}, { w, h}, { w, 0} }
	elseif align == "LeftTop" then
		verts =	{ { 0, -h}, { 0,  0}, { w,  0}, { w, -h} }
	elseif align == "RightTop" then
		verts =	{ {-w, -h}, {-w,  0}, { 0,  0}, { 0, -h} }
	elseif align == "RightBottom" then
		verts =	{ {-w, 0}, {-w, h}, { 0, h}, { 0, 0} }
	end

	return verts
end

function addFillBox(name, width, height, align, pos, parent, controllers, material)
	local box = addMesh(name, buildBoxVerts(width, height, align), default_box_indices, pos, "triangles", parent, controllers, material)
	return box
end

-- Triangulated line. The line is created as a mesh object.
-- Described by points like a stroke line.
--
-- NOTE: the parameters are the same as of the stroke line, instead that 'width' parameter added.
-- WARNING: the function is a test feature, 'width' parameter is not taken into account yet even if is set.
-- WARNING: commented until is complete
--[[
function addTriangulatedLine(name, length, width, pos, rot, parent, controllers, dashed, stroke, gap, material)
	-- TODO: to merge code common with addStrokeLine() (to add a dedicated function)
	local line      = CreateElement "ceTMultiLine"
	setSymbolCommonProperties(line, name, pos, parent, controllers, material)
	setStrokeSymbolProperties(line)
	
	if rot ~= nil then
		line.init_rot   = {rot}
	end
	
	local verts, inds = buildStrokeLineVerts(length, dashed, stroke, gap)
	-- WARNING: parameters below are not read now as parent class (ceParsedElement) does not support it
	line.vertices   = verts
	line.indices    = inds
	-- TODO: to add parameter read in cpp class
	--line.width	= width
	
	Add(line)
	return line
end
]]

-- A symbology clipping region. May be used to limit the area where an element is visible/hidden.
--  In aircraft manuals also called 'occultation area/mask'.
local function createMask(name, vertices, indices, pos, parent, controllers, material)
	local mask            = addMesh(name, vertices, indices, pos, "triangles", parent, controllers)
	setAsInvisibleMask(mask) -- changes material
	mask.additive_alpha	  = false
	mask.change_opacity   = false
	
	if material ~= nil then
		mask.material     = material
	end

	return mask
end

-- See above. Creates the region, and sets its occultation level.
-- Will increase the currently used level value, and will affect symbology 
--  according to 'h_clip_relation' field value of each element rendered after it.
function openMaskArea(level, name, vertices, indices, pos, parent, controllers, material)
	local mask            = createMask(name, vertices, indices, pos, parent, controllers, material)
	mask.h_clip_relation  = h_clip_relations.INCREASE_IF_LEVEL
	mask.level 		      = DEFAULT_LEVEL + level
	return mask
end

-- Same as above, but removes the previously created clipping region.
function closeMaskArea(level, name, vertices, indices, pos, parent, controllers, material)
	local mask            = createMask(name, vertices, indices, pos, parent, controllers, material)
	mask.h_clip_relation  = h_clip_relations.DECREASE_IF_LEVEL
	mask.level 		      = DEFAULT_LEVEL + level
	return mask
end

-- Debug reference grid. Fits for both HUD and MDI/AMPCD
function dbg_add_MDG_RefGrid(step, halfWidth, collimated, noTFOV)
	local lines_count = math.ceil(halfWidth / step)
	if noTFOV == true then
		drawIndicatorRefGrid(lines_count, step, 2 * halfWidth, collimated)
	else
		drawIndicatorRefGrid(lines_count, step, 2 * halfWidth, collimated, halfWidth)
	end
end

-- Debug indicator display center (optical center in the case of HUD)
function dbg_addIndicatorCenter()
	
	do return end -- comment if you want the debug cross to be displayed
	
	-- new way - cross
	local crossSz 		= 40
	local side 			= crossSz * 0.5
	local vertices 		= {{-side, 0}, {side, 0}, {0, side}, {0, -side}}
	local indices  		= {0, 1, 2, 3}
	addMesh("indicator_center", vertices, indices, {0, 0}, "lines", nil, nil, "DBG_RED")
	
	do return end
	
	-- old way - circle
	local dbgCenter         = CreateElement "ceMeshPoly"
	dbgCenter.name          = "indicator_center"
	dbgCenter.primitivetype = "triangles"
	set_circle(dbgCenter, 6, 3)
	dbgCenter.material      = "DBG_RED"
	dbgCenter.collimated    = collimated or false
	Add(dbgCenter)
end

function set_box(obj, left, right, up, down)
	local verts    = {
	{left,  down},
	{left,  up},
	{right, up},
	{right, down}}
	
	local inds = {0, 1, 2,
				  0, 2, 3}
	
	obj.vertices = verts              
	obj.indices  = inds
end

function set_box_w_h(obj, width, height)
	set_box(obj, -width/2, width/2, height/2, -height/2)
end

-- arc is decreased counterclockwise by controllers in the range of 360 - 0 degrees
function addStrokeVarArc(name, radius, rot, pos, parent, controllerMask, controllerMain, level)
	local maskSide = radius
	
	-- right half of the circle (arc)
	local openingMaskRight = openMaskArea(level, name.."_openingMaskRight", {}, {}, pos, parent, controllerMask)
	set_box(openingMaskRight, 0, maskSide + 5, maskSide + 5, -(maskSide + 5))
	
	rot = rot or 0
	
	openingMaskRight.init_rot = {rot - 180}
	--openingMaskRight.isvisible = true -- dbg
	
	addStrokeArc(name.."_right", radius, 180, rot, pos, parent, nil, 1)

	local closingMaskRight = closeMaskArea(level + 1, name.."_closingMaskRight",
		openingMaskRight.vertices, openingMaskRight.indices, openingMaskRight.init_pos, parent, controllerMask)
	closingMaskRight.init_rot = {rot - 180}
	--closingMaskRight.isvisible = true -- dbg
	
	-- left half of the circle (arc)
	local openingMaskLeft = openMaskArea(level, name.."_openingMaskLeft", {}, {}, pos, parent, controllerMask)
	set_box(openingMaskLeft, -(maskSide + 5), 0, maskSide + 5, -(maskSide + 5))
	openingMaskLeft.init_rot = {rot}
			
	addStrokeArc(name.."_left", radius, 180, rot + 180, pos, parent, controllerMain, 0)

	local closingMaskLeft = closeMaskArea(level + 1, name.."_closingMaskLeft",
		openingMaskLeft.vertices, openingMaskLeft.indices, openingMaskLeft.init_pos, parent, controllerMask)
	openingMaskLeft.init_rot = {rot}
end

function addStrokeArc(name, radius, arc, rot, pos, parent, controllers, level)
	local obj = CreateElement "ceSMultiLine"

	local MaxSegments = 64
	
	local arc = arc or 360
	if arc > 360 then
		arc = 360
	end
		
	local count = math.ceil(arc / 360 * MaxSegments)
	local delta = math.rad(arc/count)
	
	setSymbolCommonProperties(obj, name, pos, parent, controllers)
	
	if rot ~= nil then
		obj.init_rot   = {rot}
	end
	
	setStrokeSymbolProperties(obj)
	
	local verts    = {}
	local inds     = {}

	for i = 1, count + 1 do
		verts[i] = {radius * math.sin(delta * (i - 1)), radius * math.cos(delta * (i - 1))}
	end
	
	for i = 1, count do
		inds[2*(i-1) + 1] = i - 1
		inds[2*(i-1) + 2] = i
	end

	obj.vertices         = verts              
	obj.indices          = inds

	setClipLevel(obj, level or 0)
	
	Add(obj)
	return obj
end

function addStrokeArcIndicator(name, radius, rot, pos, parent, controller, level)
	local maskSide = radius

	-- Right half of the circle (arc)
	controller[1][#controller[1] + 1] = 0
	local openingMaskRight = openMaskArea(level, name.."_openingMaskRight", {}, {}, pos, parent, controller)
	set_box(openingMaskRight, -(maskSide + 5), 0, maskSide + 5, -(maskSide + 5)) ---(obj, left, right, up, down)

	addStrokeArc(name.."_Right", radius, 180, rot, pos, parent, nil, 0)
	

	local closingMaskRight = closeMaskArea(level + 1, name.."_closingMaskRight",
		openingMaskRight.vertices, openingMaskRight.indices, openingMaskRight.init_pos, parent, controller)
	openingMaskRight.init_rot = {rot}

	-- Left half of the circle (arc)
	controller[1][#controller[1]] = 1
	local openingMaskLeft = openMaskArea(level, name.."_openingMaskLeft", {}, {}, pos, parent, controller)
	set_box(openingMaskLeft, 0, maskSide + 5, maskSide + 5, -(maskSide + 5)) ---(obj, left, right, up, down)

	addStrokeArc(name.."_left", radius, 180, rot + 180, pos, parent, nil, 0)

	local closingMaskLeft = closeMaskArea(level + 1, name.."_closingMaskLeft",
		openingMaskLeft.vertices, openingMaskLeft.indices, openingMaskLeft.init_pos, parent, controller)
	openingMaskLeft.init_rot = {rot}
end

function addTexturedMesh(name, material, vertices, tex_params, pos, rot, parent, controllers)
	if material == nil then
		do return end
	end
	
	local texturedMexh		= CreateElement "ceTexPoly"
	setSymbolCommonProperties(texturedMexh, name, pos, parent, controllers, material)
	
	texturedMexh.indices		= default_box_indices
	texturedMexh.vertices		= vertices
	texturedMexh.tex_params 	= tex_params 
	
	if rot ~= nil then
		texturedMexh.init_rot   = {rot}
	end
	
	Add(texturedMexh)
	return texturedMexh
end

-- Shaped arrow contour. Is used for SPIN format left/right arrows, also for HUD GPWS/TAWS Recovery Cue
function addArrowContour(Name, arrLength, arrWidth, headLength, headWidth, pos, rot, parent, controllers, isBack, backDeep)
	if arrLength > headLength then
		if headWidth > arrWidth then
			local ArrName = "Arrow_"..Name

			local ArrPH = addPlaceholder(ArrName, pos, parent, controllers)
			addStrokeLine(ArrName.."_Body_Top", arrLength - headLength, {arrLength/2 , arrWidth/2}, 90, ArrName)
			addStrokeLine(ArrName.."_Body_Down", arrLength - headLength, {arrLength/2 , -arrWidth/2}, 90, ArrName)
			addStrokeLine(ArrName.."_Head_Back_Top", (headWidth - arrWidth) / 2, {-(arrLength/2 - headLength), arrWidth/2}, 0, ArrName)
			addStrokeLine(ArrName.."_Head_Back_Down", (headWidth - arrWidth) / 2, {-(arrLength/2 - headLength), -arrWidth/2}, 180, ArrName)
			local Hypotenuse = math.ceil(math.sqrt((headWidth / 2)^2 + headLength ^ 2))
			local Angle = math.ceil(math.deg(math.atan((headWidth / 2) / headLength)))

			addStrokeLine(ArrName.."_Head_Body_Top", Hypotenuse, {-arrLength/2, 0}, Angle - 90, ArrName)
			addStrokeLine(ArrName.."_Head_Body_Down", Hypotenuse, {-arrLength/2, 0}, -Angle - 90, ArrName)

			if isBack then
				local BackHypotenuse = math.ceil(math.sqrt((arrWidth / 2)^2 + backDeep ^ 2))
				local BackAngle = math.ceil(math.deg(math.atan((arrWidth / 2) / backDeep)))

				addStrokeLine(ArrName.."_Back_Body_Top", BackHypotenuse, {arrLength/2 - backDeep, 0}, BackAngle - 90, ArrName)
				addStrokeLine(ArrName.."_Back_Body_Down", BackHypotenuse, {arrLength/2 - backDeep, 0}, -BackAngle - 90, ArrName)
			else
				addStrokeLine(ArrName.."_Back", arrWidth, {arrLength/2 , -arrWidth/2}, 0, ArrName)
			end

			if rot ~= nil then
				ArrPH.init_rot = {rot}
			end
	
		end
	end
end

-- X over a display element - text, symbol, etc
function add_X_Over(name, width, height, pos, parent, controllers)
	local rootName = name.."_Root"
	local angle = math.floor(math.deg(math.atan(height / width)))
	local hypotenuse = math.floor(math.sqrt(height ^ 2 + width ^ 2))

	addPlaceholder(rootName, pos, parent, controllers)
	addStrokeLine(name.."_BottomLine", hypotenuse, {-width / 2, -height / 2}, -90 + angle, rootName)
	addStrokeLine(name.."_TopLine", hypotenuse, {-width / 2, height / 2}, -90 - angle, rootName)
end

-- The caret is pointed down by default
function addCaretByWidthHeight(name, width, height, pos, rot, parent, controllers)
	local elevCaretAngle   = math.atan((height/2)/width)
	local elevCaretLineLen = width / math.cos(elevCaretAngle)
	
	rot = rot or 0
	
	local caretPlaceholder = addPlaceholder(name.."_placeholder", pos, parent, controllers)
	addStrokeLine(name.."_line1", elevCaretLineLen, nil, rot + math.deg(elevCaretAngle), caretPlaceholder.name)
	addStrokeLine(name.."_line2", elevCaretLineLen, nil, rot - math.deg(elevCaretAngle), caretPlaceholder.name)
	
	return caretPlaceholder
end

function addCompleteEquilateralTriangle(name, height, angle, pos, rot, pos_shift, parent, controllers, params, material, scale)
    -- Créer le triangle sans la base (comme un caret)
    local triangle = addStrokeEquilateralTriangleWithoutBaseParam(
        name.."_no_base", height, angle, pos, rot, pos_shift, parent, controllers, params, material, scale
    )
    
    -- Calculer les points pour ajouter la base manquante
    scale = scale or 1
    height = height * scale
    local rot_rad = math.rad(rot or 0)
    
    local base_angle = 180 - math.max(1, math.min(angle, 179)) / 2
    local angle1 = math.rad(-base_angle + rot)
    local angle2 = math.rad(base_angle + rot)
    
    -- Coordonnées des extrémités des côtés inclinés
    local pt1_x, pt1_y = pos[1] + (pos_shift and pos_shift[1] * scale or 0), pos[2] + (pos_shift and pos_shift[2] * scale or 0)
    local pt2_x = pt1_x + height * math.sin(angle1)
    local pt2_y = pt1_y + height * math.cos(angle1)
    local pt3_x = pt1_x + height * math.sin(angle2)
    local pt3_y = pt1_y + height * math.cos(angle2)
    
    -- Ajouter la base pour fermer le triangle
    local base = CreateElement "ceSMultiLine"
    setSymbolCommonPropsParam(base, name.."_base", pos, parent, controllers, params, material or stroke_font)
    setStrokeSymbolProperties(base)
    
    base.vertices = {
        {pt2_x - pt1_x, pt2_y - pt1_y},
        {pt3_x - pt1_x, pt3_y - pt1_y}
    }
    base.indices = {0, 1}
    
    Add(base)
    
    -- Retourner les deux éléments (optionnel)
    return {triangle = triangle, base = base}
end

-- The arrow is pointed up by default
function addArrow(name, length, pointerLen, pointerAngle, posShift, pos, rot, parent, controllers)
	rot = rot or 0
	
	local posAngle = math.rad(-rot)

	local arrowPlaceholder = addPlaceholder(name.."_placeholder", pos, parent, controllers)
	
	-- main line
	local arrowPos = {posShift * math.sin(posAngle), posShift * math.cos(posAngle)}
	addStrokeLine(name.."_mainLine", length, arrowPos, rot, arrowPlaceholder.name)
	
	-- pointer lines
	local pointerPosShift = posShift + length
	local pointerPos = {pointerPosShift * math.sin(posAngle), pointerPosShift * math.cos(posAngle)}
	
	local pointerAngleHalf = pointerAngle / 2
	addStrokeLine(name.."_pointerLine1", pointerLen, pointerPos, 180 + rot + pointerAngleHalf, arrowPlaceholder.name)
	addStrokeLine(name.."_pointerLine2", pointerLen, pointerPos, 180 + rot - pointerAngleHalf, arrowPlaceholder.name)
	
	return arrowPlaceholder
end

function addDot(name, radius, pos, parent, controllers)
	return addStrokeCircle(name, radius, pos, parent, controllers, nil, math.pi * 2 / 4)
end

-- TDC priority/sensor assignment indicator
function addMPD_TDC_diamond()
	local posX = 448
	local posY = 455
	local boxSide = 18
	
	local placeholder = addPlaceholder("TDC_diamond_placeholder", {posX, posY}, nil, {{"TDC_assignedDisplay"}})
	local box = addStrokeBox("TDC_diamond_box", boxSide, boxSide, "CenterCenter", nil, placeholder.name)
	-- make the diamond from the box 
	addStrokeCircle("TDC_diamond_box_DOT", 1, nil, box.name)
	box.init_rot = {45}
end

-- Max Arc is 90 degrees
function addSegmentedArc(name, radMin, radMax, arc, rot, pos, parent, controllers, material)	
	rot = rot or 0
	local id = 0
	local function ID()
		id = id + 1
		return "_id:"..id
	end
	
	local arc = arc or 90
	arc = math.min(arc, 90)
		
	local Segments = 10
	local delta = math.rad(arc / Segments)

	local verts = {}
	verts[#verts + 1] = {0, (radMax +  radMin) * 0.5}
	for i = 0, Segments do
		local angle = math.rad(-arc) * 0.5 + delta * i
		print("SHCH angle = "..math.deg(angle))
		verts[#verts + 1] = {radMax * math.sin(angle), radMax * math.cos(angle)}
	end	
	for i = 0, Segments do
		local angle = math.rad(arc) * 0.5 - delta * i
		verts[#verts + 1] = {radMin * math.sin(angle), radMin * math.cos(angle)}
	end

	local inds = {}
	for i = 2, #verts - 1 do
		inds[3 * i - 5] = 0
		inds[3 * i - 4] = i - 1
		inds[3 * i - 3] = i
	end

	inds[#inds + 1] = 0
	inds[#inds + 1] = 1
	inds[#inds + 1] = #verts - 1

	local SegmentedArc = addMesh(name, verts, inds, pos, "triangles", parent, controllers, material)
	SegmentedArc.init_rot   = {rot}	
	return SegmentedArc
end



