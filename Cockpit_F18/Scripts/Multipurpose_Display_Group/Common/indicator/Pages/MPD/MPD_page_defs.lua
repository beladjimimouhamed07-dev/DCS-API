-- This is page symbology definitions file, with multipurpose displays pages specifics.

dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Common_page_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/MPD_PB_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/HSI/HSI_Definitions.lua")

-------------------------------------------- LOCAL --------------------------------------------
local PB_TextDistBetweenLines = 35
local PB_TextDistBetweenColumns = 25


PB_TextFont = {fontScaleY_120, fontScaleX_120, fontIntercharDflt120 * GetScale(), 6 * GetScale()}


local id = 0
local function getUnicID()
	id = id + 1
	return "_id:"..id
end

local function selectPBSymbol(symbol, pos, parent, controllers)
	local arrow_076_offset_up = 16
	if symbol == "124-arrow-down" then
		local curSymbol = addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", "124-arrow-up"}, "FromSet", pos, parent, controllers)
		curSymbol.init_rot = {180}
	elseif symbol == "124-arrow-left" then
		local curSymbol = addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", "124-arrow-up"}, "FromSet", pos, parent, controllers)
		curSymbol.init_rot = {90}
	elseif symbol == "124-arrow-right" then
		local curSymbol = addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", "124-arrow-up"}, "FromSet", pos, parent, controllers)
		curSymbol.init_rot = {270}
	elseif symbol == "075-arrow-up" then
		pos[2] = pos[2] + arrow_076_offset_up
		addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", "075-arrow-up"}, "FromSet", pos, parent, controllers)
	elseif symbol == "075-arrow-down" then
		pos[2] = pos[2] + arrow_076_offset_up
		local curSymbol = addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", "075-arrow-up"}, "FromSet", pos, parent, controllers)
		curSymbol.init_rot = {180}
	else
		addStrokeSymbol("Symbol_"..symbol..getUnicID(), {"stroke_symbols_MDI_AMPCD", symbol}, "FromSet", pos, parent, controllers)
	end
end

local function AddLineBreaksInStr( str )
	local retStr = ""
	for i = 1, #str - 1 do
		retStr = retStr..string.sub(str, i, i).."\n"
	end
	retStr = retStr..string.sub(str, #str, #str)
	return retStr
end

function addTextFromArgTable(args_table, pos, offset)
	local offsetX = offset[1]
	local offsetY = offset[2]

	local function getAlignmentFromTextOffset(offsetX, offsetY)
		local verticalAlignment
		local horizontalAlignment
		
		if offsetX == 1 then
			horizontalAlignment = "Left"
		elseif offsetX == 0 then
			horizontalAlignment = "Center"
		else
			horizontalAlignment = "Right"
		end
		
		if offsetY == 1 then
			verticalAlignment = "Bottom"
		elseif offsetY == 0 then
			verticalAlignment = "Center"
		else
			verticalAlignment = "Top"
		end

		return horizontalAlignment .. verticalAlignment
	end
	
	local str_raw
	local str
	local result = {}
	
	for i = 1, #args_table do
		local arg = args_table[i]
		local parent = nil
		local controllers = nil
		
		if type(arg) == "string" then
			str	= arg
		elseif type(arg) == "table" then
			str = arg[1]
			parent = arg[2]
			controllers = arg[3]
		end
		
		str_raw = str or "NONAME_"..getUnicID()
		
		if offsetY == 0 then
			-- label text is written vertically
			str = AddLineBreaksInStr(str)
		end
		
		result[#result + 1] = addStrokeText(str_raw.."_"..i.."_"..getUnicID(), str, PB_TextFont, getAlignmentFromTextOffset(offsetX, offsetY),
			{pos[1] + PB_TextDistBetweenColumns * (i - 1) * offsetX, pos[2] + PB_TextDistBetweenLines * (i - 1) * offsetY},
			parent, controllers)
			
		if type(arg) == "table" then
			-- box handling
			local box_param = arg[4] -- 'true' or a table of box controllers
			if box_param ~= nil then
				local BoxOffset = -6
				local BoxAlign
				
				local sideX
				local sideY
				
				if offsetY ~= 0 then
					-- box is oriented horizontally (same as label text)
					if offsetY == -1 then
						BoxAlign = "CenterTop"
					else
						BoxAlign = "CenterBottom"
					end

					local numNewlines = select(2, str_raw:gsub("\n", ""))
					local maxLineLen = 0
					for line in (str_raw.."\n"):gmatch("([^\n]*)\n") do
						if #line > maxLineLen then
							maxLineLen = #line
						end
					end

					sideX = maxLineLen * 22
					sideY = 36 * (numNewlines + 1)
				else
					-- box is oriented vertically (same as label text)
					if offsetX == -1 then
						BoxAlign = "RightCenter"
					else
						BoxAlign = "LeftCenter"
					end
					
					sideX = 26
					sideY =	#str_raw * 32
				end
				
				result[#result + 1] = addStrokeBox(str_raw.."_"..i.."_box_"..getUnicID(), sideX, sideY, BoxAlign,
					{pos[1] + (PB_TextDistBetweenColumns * (i - 1) + BoxOffset) * offsetX,	pos[2] + (PB_TextDistBetweenLines * (i - 1) + BoxOffset) * offsetY},
					parent, box_param)
			end
		end
	end
	
	return result
end

function getOffsetFromPBnum(PBNumber)
	if PBNumber >= 1 and PBNumber <= 5 then
		-- left PBs: 1-5
		return {1, 0}
	elseif PBNumber >= 6 and PBNumber <= 10 then
		-- top PBs: 6-10
		return {0, -1}
	elseif PBNumber >= 11 and PBNumber <= 15 then
		-- right PBs: 11-15
		return {-1, 0}
	elseif PBNumber >= 16 and PBNumber <= 20 then
		-- bottom PBs: 16-20
		return {0, 1}
	else
		return {0, 0}
	end
end

-------------------------------------------- GLOBAL --------------------------------------------
--[[
add_PB_label - add menu label to buttons
---------------------------- How to use ----------------------------
add_PB_label(PB number, string or table of strings or tables ({"Text", parent, controller, inBox (true or false) or box controller}))

Calling examples:
add_PB_label(1, "1111", "2222", "3333")
add_PB_label(2, "4444")
add_PB_label(3, {"555", "Root_data", nil, true})
add_PB_label(4, {"66666", "Root_data", nil, true}, {"7777", "Root_data", nil, {{"Box_controller"}}})
]]--
function add_PB_label(PBNumber, ...)
	return addTextFromArgTable(arg, PB_positions[PBNumber], getOffsetFromPBnum(PBNumber))
end

function addMenuLabel(name, parent, controllers, isBoxed)
	local pos = {0, -446}
	if name ~= nil then
		addStrokeText(name..getUnicID(), name, STROKE_FNT_DFLT_150, "CenterCenter", pos, parent, controllers)
		
		if isBoxed == true then
			addStrokeBox(name.."_box", 110, 46, "CenterCenter", pos, parent, controllers)
		end
	end
end

--(PBNumber, symbol, parent, controllers, material)
function add_PB_symbol(PBNumber, symbol, parent, controllers)
	selectPBSymbol(symbol, PB_positions[PBNumber], parent, controllers)
end

function drawCompass( Radius, parent, controller, isClipped )
	local curSymbol = 1
	local Symbols = {"N", "E", "S", "W"}
	local str = ""

	for i = 0, 35 do
		if i % 9 == 0 then
			str = Symbols[curSymbol]
			curSymbol = curSymbol + 1
		elseif i % 3 == 0 then
			str = tostring(i)
		else
			str = "."
		end
		if isClipped then
			clippedObject = addStrokeText("HSI_Compass_"..parent..str..i, str, STROKE_FNT_DFLT_120, "CenterCenter", {math.sin(math.rad(i * 10)) * Radius, math.cos(math.rad(i * 10)) * Radius}, parent, controller)
			setClipLevel(clippedObject, 1)
		else
			addStrokeText("HSI_Compass_"..parent..str..i, str, STROKE_FNT_DFLT_120, "CenterCenter", {math.sin(math.rad(i * 10)) * Radius, math.cos(math.rad(i * 10)) * Radius}, parent, controller)
		end
	end
end

-- RDR and FLIR formats
function add_RDR_FLIR_AC_Airspeed(pos, controllers)
	local AC_AirspeedPlaceholder = addPlaceholder("AC_AirspeedPlaceholder", pos, nil, controllers)
	addStrokeText("AC_airspeed", nil, STROKE_FNT_DFLT_120, "RightCenter", {0, 0}, AC_AirspeedPlaceholder.name, {{"MPD_RDR_FLIR_AC_AirspeedNumerics"}})
end

-- RDR and FLIR formats
function add_RDR_FLIR_AC_Mach(pos, controllersNumerics, controllers_M_symbol)
	local machPlaceholder = addPlaceholder("AC_Mach_placeholder", pos)
	addStrokeText("AC_Mach_symbol", "M", STROKE_FNT_DFLT_120, "RightCenter", {-5 * (glyphNominalWidth120 + fontIntercharDflt120), 0}, machPlaceholder.name, controllers_M_symbol)
	addStrokeText("AC_Mach_numerics", nil, STROKE_FNT_DFLT_120, "RightCenter", {3, 0}, machPlaceholder.name, controllersNumerics)
end

-- RDR and FLIR formats
function add_RDR_FLIR_AC_Altitude(pos, controllers)
	local altitudePlaceholder = addPlaceholder("AC_altitude_placeholder", pos, nil, controllers)

	local alt150interchar = 9
	local customStringDef150_alt = {fontScaleY_150, fontScaleX_150, alt150interchar * GetScale(), fontInterlineDflt150 * GetScale()}
	-- altitude below 1000 ft
	addStrokeText("AC_altitude_below_1000", nil, customStringDef150_alt, "RightCenter", {-2, 0}, altitudePlaceholder.name,
		{{"MPD_RDR_FLIR_AC_AltitudeNumerics", 0}})
	-- altitude above 1000 ft
	local altitudeThousandsPosX = -glyphNominalWidth150 * 3 - alt150interchar * 2 - 4
	addStrokeText("AC_altitude_above_1000_thousands", nil, customStringDef150_alt, "RightCenter", {altitudeThousandsPosX, 0}, altitudePlaceholder.name,
		{{"MPD_RDR_FLIR_AC_AltitudeNumerics", 1}})
	addStrokeText("AC_altitude_above_1000_hund_tenths", nil, STROKE_FNT_DFLT_120, "RightCenter", {-14, 0}, altitudePlaceholder.name,
		{{"MPD_RDR_FLIR_AC_AltitudeNumerics", 2}})

	-- A/C altitude symbol (none, R, flashing B)
	addStrokeText("AC_altitude_symbol", nil, STROKE_FNT_DFLT_150, "LeftCenter", {8, 0}, altitudePlaceholder.name,
		{{"MPD_RDR_FLIR_AC_AltitudeSymbol"}}, {"B", "R"})

end

-- RDR and FLIR formats
function add_RDR_FLIR_AC_VelVector_HorizonLine(pos, controllersVelVec, controllersHorizonLine)
	-- Velocity vector (fixed)
	local velocityVector = addStrokeSymbol("velocity_vector", {"stroke_symbols_HUD", "125-velocity-vector"}, "FromSet", pos, nil, controllersVelVec, 1.5)

	-- Horizon line
	local HorizonLineHalfGap	= 60
	local HorizonLineWidth		= 140
	local HorizonLineTickLen	= 40

	local lineOrigin = addPlaceholder("Horizon_line_origin", nil, velocityVector.name, controllersHorizonLine)

	-- 0 - left side of the pitch line, 1 - right side respectively
	for i = 0, 1 do
		local side
		local side_name
		if i == 0 then
			side = -1
			side_name = "left"
		else
			side = 1
			side_name = "right"
		end
		
		addStrokeLine("Horizon_line_"..side_name, HorizonLineWidth, {HorizonLineHalfGap * side, 0}, -90 * side, lineOrigin.name)
		addStrokeLine("Horizon_line_tick"..side_name, HorizonLineTickLen, {(HorizonLineHalfGap + HorizonLineWidth) * side, 0}, 180, lineOrigin.name)
	end
	
	return velocityVector
end

-- Is used for digital map render
function AddVideoSignalRender_MPD_FullScreen(controllers)

	local sz = HalfUnitsPerSide -- DI
	local verts = {{-sz,  sz},
				   { sz,  sz},
				   { sz, -sz},
				   {-sz, -sz}}

	local videoSignal_MPD				= CreateElement "ceTexPoly"
	
	local parent						= nil
	--local controllers					= {{"MPD_HSI_DigitalMapShow"}}
	local material						= "render_target_"..string.format("%d", GetRenderTarget() + 1)
	
	setSymbolCommonProperties(videoSignal_MPD, "videoSignal_MPD", nil, parent, controllers, material)
	
	videoSignal_MPD.vertices			= verts
	videoSignal_MPD.indices				= default_box_indices
	videoSignal_MPD.tex_params			= {0.5, 0.5, 1 / UnitsPerSide, 1 / UnitsPerSide}
	videoSignal_MPD.additive_alpha		= true
	videoSignal_MPD.input_space_SRGB 	= true
	
	--videoSignal_MPD.use_mipfilter     = false

	Add(videoSignal_MPD)
end

-- Is used for A/G radar render
function AddVideoSignalRender_MPD(width, height, pos, parent, controllers)
	
	local half_width = width / 2
	local half_height = height / 2

	local verts = {{-half_width,  half_height},
				   { half_width,  half_height},
				   { half_width, -half_height},
				   {-half_width, -half_height}}

	local videoSignal_MPD				= CreateElement "ceTexPoly"
	
	local parent						= nil
	--local controllers					= {{"MPD_HSI_DigitalMapShow"}}
	local material						= "render_target_"..string.format("%d", GetRenderTarget() + 1)
	
	setSymbolCommonProperties(videoSignal_MPD, "videoSignal_MPD", pos, parent, controllers, material)
	
	videoSignal_MPD.vertices			= verts
	videoSignal_MPD.indices				= default_box_indices
	videoSignal_MPD.tex_params			= {0.5, 0.5, 1 / UnitsPerSide, 1 / UnitsPerSide}
	videoSignal_MPD.additive_alpha		= true

	Add(videoSignal_MPD)

	return videoSignal_MPD
end

------------------------------------------ SA DYNAMIC SYMBOLS ------------------------------------------
SA_DCLTR_LEVELS =
{
	OFF = 0,
	REJ1 = 1,
	REJ2 = 2,
	MREJ1 = 3,
	MREJ2 = 4
}

SA_DeclutterREJ1_Show_controller = {"MPD_SA_DeclutterLevelShow", SA_DCLTR_LEVELS.REJ1}
SA_DeclutterREJ2_Show_controller = {"MPD_SA_DeclutterLevelShow", SA_DCLTR_LEVELS.REJ2}
SA_DeclutterMREJ1_Show_controller = {"MPD_SA_DeclutterLevelShow", SA_DCLTR_LEVELS.MREJ1}
SA_DeclutterMREJ2_Show_controller = {"MPD_SA_DeclutterLevelShow", SA_DCLTR_LEVELS.MREJ2}

TRACK_FILE_TYPE = 
{
	SIMPLE = 0,
	LS = 1,
	DT2 = 2,
	RANKED = 3
}

MSI_TRACK_TYPE = 
{
	MAIN = 0,
	RANKED = 1,
	SIMPLE = 2
}

function add_L_S_Symbol( name, parent, pos, mainController, colorController)

	pos	= pos or {0, 0}

	if colorController == nil then
		colorController = mainController
	end

	local L_AND_S_Root = addStrokeSymbol(name.."_L_And_S", {"stroke_symbols_MDI_AMPCD", "SA-LS"}, "FromSet", pos, parent, mainController)
	addStrokeSymbol(name.."_L_And_S_Filler_1", {"stroke_symbols_MDI_AMPCD", "SA-LS"}, "FromSet", nil, L_AND_S_Root.name, colorController, 0.8)
	addStrokeSymbol(name.."_L_And_S_Filler_2", {"stroke_symbols_MDI_AMPCD", "SA-LS"}, "FromSet", nil, L_AND_S_Root.name, colorController, 0.6)
	addStrokeSymbol(name.."_L_And_S_Filler_3", {"stroke_symbols_MDI_AMPCD", "SA-LS"}, "FromSet", nil, L_AND_S_Root.name, colorController, 0.4)
	return L_AND_S_Root
end

HAFU_TYPE =
{
	NONE		= 0,
	UNKNOWN		= 1,
	FRIENDLY	= 2,
	HOSTILE		= 3,
	AMBIGUOUS	= 4
}

function SA_AirDefense_Symbol(parent, isOutlined)	
	addStrokeCircle(parent.."_AirDefense_Circle", 150, nil, parent, {{"MPD_SA_AirDefense_Color", isOutlined}, {"MPD_SA_AirDefense_Radius", LittleCompassInternalRadius, BigCompassInternalRadius}, SA_DeclutterREJ1_Show_controller}, nil, math.rad(10.0), math.rad(10.0), true)
	addStrokeText(parent.."_AirDefense_Code", "U", STROKE_FNT_DFLT_120, "CenterCenter", nil, parent, {{"MPD_SA_PPLI_Color", isOutlined}, {"MPD_SA_AirDefense_Code", LittleCompassInternalRadius, BigCompassInternalRadius}})
end


local function make_box(elem, half_size)
		elem.primitivetype   = "triangles"
		elem.vertices        = {{-half_size,half_size},{half_size,half_size},{half_size,-half_size},{-half_size,-half_size}}
		elem.indices         = {0,1,2,2,3,0}	
end

function WallEyeEmbeddedIndication(from_datalink)

local width   = 0.0075;
local offset  = 0.045;
local box_ind = {0,1,2,2,3,0}

local mark_control  = "MPD_SMS_WALLEYE_Gimbal_Ang" 
if  from_datalink then 
	mark_control = "MPD_SMS_DATALINK_Gimbal_Ang"
end

local   base    		 	 = CreateElement "ceMeshPoly"
		make_box(base,1)
		base.material		 = MakeMaterial(nil,{255, 255,255,255})
		base.screenspace 	 = 2
		base.level 			 = 4
		base.h_clip_relation = h_clip_relations.REWRITE_LEVEL
		base.controllers 	 = {{"MPD_SMS_DATALINK_Video_Type",1}}
		base.isvisible 		 = false
		Add(base)

local 	cross_base  			 		 = CreateElement "ceSimple"
		cross_base.screenspace 	 		 = 2
		cross_base.parent_element 		 = base.name
		Add(cross_base)

local   gap_center    		 	   		 = CreateElement "ceMeshPoly"
		make_box(gap_center,offset)
		gap_center.screenspace 	 		 = 2
		gap_center.material				 = base.material
		gap_center.level 		 		 = 4
		gap_center.h_clip_relation  	 = h_clip_relations.INCREASE_IF_LEVEL
		gap_center.isvisible 		 	 = false
		gap_center.parent_element 		 = cross_base.name
		
		Add(gap_center)
		
local   cross_line_up 			    = CreateElement "ceMeshPoly"
		
		cross_line_up.primitivetype  = "triangles"
		cross_line_up.vertices       = {{-1,offset + width},
									   { 1,offset + width},
									   { 1,offset - width},
									   {-1,offset - width}}
		cross_line_up.indices        = {0,1,2,2,3,0}
		cross_line_up.screenspace 	 = 2
		cross_line_up.material		 = base.material
		cross_line_up.parent_element = cross_base.name
		Add(cross_line_up)
	
local 	cross_line_down 			 = Copy(cross_line_up)	
		cross_line_down.init_rot	 = {180,0,0}
		cross_line_down.parent_element = cross_base.name
		Add(cross_line_down)

local 	cross_line_right 			 	= Copy(cross_line_up)	
		cross_line_right.init_rot	 	= {-90,0,0}
		cross_line_right.parent_element = cross_base.name
		Add(cross_line_right)

local 	cross_line_left 			    = Copy(cross_line_up)	
		cross_line_left.init_rot	 	= {90,0,0}
		cross_line_left.parent_element  = cross_base.name
		Add(cross_line_left)
	
local   WALLEYE_mark 	    		 	 = Copy (gap_center)
		WALLEYE_mark.isvisible 			 = true
		WALLEYE_mark.level 		 		 = 4
		WALLEYE_mark.h_clip_relation  	 = h_clip_relations.COMPARE
		WALLEYE_mark.controllers 		 = {{mark_control,1, 42, 30, 54}}
		WALLEYE_mark.parent_element		 = cross_base.name
		Add(WALLEYE_mark)	

	if use_mpd_walleye then 
	---------------------------------------------------------------------
		local openingMAPMask = openMaskArea(0, "MAPArea", {}, {}, {0, 0}, nil)
		set_box_w_h(openingMAPMask, 36, 36)
		local cross_control = nil 
		if  from_datalink then 
			cross_control = {{"MPD_SMS_DATALINK_CROSS"}}
		end
		addPlaceholder("Video_Cross", {0,0}, nil , cross_control)
		addStrokeLine("Video_Cross1", 900, {-20, -450}, 0, "Video_Cross")
		addStrokeLine("Video_Cross2", 900, {20, -450}, 0, "Video_Cross")
		addStrokeLine("Video_Cross3", 900, {450, 20}, 90, "Video_Cross")
		addStrokeLine("Video_Cross4", 900, {450, -20}, 90, "Video_Cross")

		addPlaceholder("MAP", {0,0}, "Video_Cross",	{{mark_control, 430*GetScale(), 42, 30, 54}})
		for i = 0, 20 do
			addStrokeLine("MAP1" .. i, 40, {i, -20}, 0, "MAP")
			addStrokeLine("MAP2" .. i, 40, {-i, -20}, 0, "MAP")
		end
		closeMaskArea(1, "MAPAreaClose", openingMAPMask.vertices, openingMAPMask.indices, openingMAPMask.init_pos, nil)
	----------------------------------------------------------------------		
	end
		
end

function SLAMEmbeddedIndication()

local width   = 0.003;
local offset  = 0.045;
local box_ind = {0,1,2,2,3,0}

local mark_control  = "MPD_SMS_SLAM_Gimbal_Ang" 

local   base    		 	 = CreateElement "ceMeshPoly"
		make_box(base,1)
		base.material		 = MakeMaterial(nil,{255, 255,255,255})
		base.screenspace 	 = 2
		base.level 			 = 4
		base.h_clip_relation = h_clip_relations.REWRITE_LEVEL
		base.controllers 	 = {{"MPD_SMS_DATALINK_Video_Type",2}}
		base.isvisible 		 = false
		Add(base)
		
local 	cross_base  			 		 = CreateElement "ceSimple"
		cross_base.screenspace 	 		 = 2
		cross_base.parent_element 		 = base.name
		Add(cross_base)

local   gap_center    		 	   		 = CreateElement "ceMeshPoly"
		make_box(gap_center,0.03)
		gap_center.screenspace 	 		 = 2
		gap_center.material				 = base.material
		gap_center.level 		 		 = 4
		gap_center.h_clip_relation  	 = h_clip_relations.INCREASE_IF_LEVEL
		gap_center.isvisible 		 	 = false
		gap_center.controllers 	 		 = {{"MPD_SMS_SLAM_central_gap"}}
		gap_center.parent_element 		 = cross_base.name
		
		Add(gap_center)
		
local   gap_center_big    		 	   		 = CreateElement "ceMeshPoly"
		make_box(gap_center_big,0.9)
		gap_center_big.screenspace 	 		 = 2
		gap_center_big.material				 = base.material
		gap_center_big.level 		 		 = 4
		gap_center_big.h_clip_relation  	 = h_clip_relations.INCREASE_IF_LEVEL
		gap_center_big.isvisible 		 	 = false
		gap_center_big.controllers 	 		 = {{"MPD_SMS_SLAM_frame_size"}}
		gap_center_big.parent_element 		 = cross_base.name
		
		Add(gap_center_big)
		
		local   cross_line_hor 			    = CreateElement "ceMeshPoly"
		
		cross_line_hor.primitivetype  = "triangles"
		cross_line_hor.vertices       = {{-1,width},
									   { 1, width},
									   { 1,- width},
									   {-1,- width}}
		cross_line_hor.indices        = {0,1,2,2,3,0}
		cross_line_hor.screenspace 	 = 2
		cross_line_hor.level 		 = 4
		cross_line_hor.h_clip_relation  = h_clip_relations.COMPARE
		cross_line_hor.material		 = base.material
		cross_line_hor.parent_element = cross_base.name
		cross_line_hor.controllers	 = {{"datalink_polarity_change_color",0,0,0}}
		Add(cross_line_hor)
	
local 	cross_line_vert 			 	= Copy(cross_line_hor)	
		cross_line_vert.init_rot	 	= {90,0,0}
		cross_line_vert.parent_element = cross_base.name
		Add(cross_line_vert)


local 	gimbal_cross  			 		= CreateElement "ceSimple"
		gimbal_cross.screenspace 	 	= 2
		gimbal_cross.level 		 		= 4
		gimbal_cross.h_clip_relation  	 = h_clip_relations.COMPARE
		gimbal_cross.parent_element 	= cross_base.name
		gimbal_cross.controllers 	 	= {{mark_control,1, 42, 30, 54}, {"datalink_polarity_change_color",0,0,0}}
		Add(gimbal_cross)
		
		local   gimbal_cross_hor	    = CreateElement "ceMeshPoly"
		gimbal_cross_hor.primitivetype  = "triangles"
		gimbal_cross_hor.vertices       = {{-0.16,width},
									   { 0.16, width},
									   { 0.16,- width},
									   {-0.16,- width}}
		gimbal_cross_hor.indices        = {0,1,2,2,3,0}
		gimbal_cross_hor.screenspace 	 = 2
		gimbal_cross_hor.level 		 = 4
		gimbal_cross_hor.h_clip_relation  = h_clip_relations.COMPARE
		gimbal_cross_hor.material		 = base.material
		gimbal_cross_hor.parent_element = gimbal_cross.name
		gimbal_cross_hor.controllers	 = {{"datalink_polarity_change_color",0,0,0}}
		Add(gimbal_cross_hor)
		
		local 	gimbal_cross_vert 		= Copy(gimbal_cross_hor)	
		gimbal_cross_vert.init_rot	 	= {90,0,0}
		gimbal_cross_vert.parent_element = gimbal_cross.name
		Add(gimbal_cross_vert)
		
--[[		
local 	aimpointcross  			 		= CreateElement "ceSimple"
		aimpointcross.screenspace 	 	= 2
		aimpointcross.level 		 		= 4
		aimpointcross.h_clip_relation  	 = h_clip_relations.COMPARE
		aimpointcross.parent_element 	= cross_base.name
		aimpointcross.controllers 	 	= {{"MPD_SMS_SLAM_ER_Aimpoint_Ang"}, {"datalink_polarity_change_color",0,0,0}}
		Add(aimpointcross)
		
		local   gap_aimpointcross  		 		 = CreateElement "ceMeshPoly"
		make_box(gap_aimpointcross,0.03)
		gap_aimpointcross.init_rot 		 		 = {45.0, 0.0}
		gap_aimpointcross.screenspace 	 		 = 2
		gap_aimpointcross.material				 = base.material
		gap_aimpointcross.level 		 		 = 4
		gap_aimpointcross.h_clip_relation  	 	 = h_clip_relations.INCREASE_IF_LEVEL
		gap_aimpointcross.isvisible 		 	 = false
		gap_aimpointcross.parent_element 		 = aimpointcross.name
		Add(gap_aimpointcross)
		
		local   aimpointcross_1	    = CreateElement "ceMeshPoly"
		aimpointcross_1.primitivetype  = "triangles"
		aimpointcross_1.vertices       = {{-0.16,width},
									   { 0.16, width},
									   { 0.16,- width},
									   {-0.16,- width}}
		aimpointcross_1.indices        = {0,1,2,2,3,0}
		aimpointcross_1.init_rot 		 = {45.0, 0.0}
		aimpointcross_1.screenspace 	 = 2
		aimpointcross_1.level 		 = 4
		aimpointcross_1.h_clip_relation  = h_clip_relations.COMPARE
		aimpointcross_1.material		 = base.material
		aimpointcross_1.parent_element = aimpointcross.name
		aimpointcross_1.controllers	= {{"datalink_polarity_change_color",0,0,0}}
		Add(aimpointcross_1)

		local 	aimpointcross_2 		= Copy(aimpointcross_1)	
		aimpointcross_2.init_rot	 	= {-45.0, 0.0}
		Add(aimpointcross_2)
]]
		
local 	gridLine1 		= Copy(gimbal_cross_hor)	
		gridLine1.vertices       = {{-0.1,width},
									   { 0.1, width},
									   { 0.1,- width},
									   {-0.1,- width}}
	    gridLine1.init_pos 		 = {0.0, -0.18}
		gridLine1.parent_element = base.name
		gridLine1.controllers	 = {{"datalink_polarity_change_color",0,0,0}}
		Add(gridLine1)
		
local 	gridLine2 		= Copy(gridLine1)
		gridLine2.init_pos 		 = {0.0, -0.36}
		Add(gridLine2)
		
local 	gridLine3 		= Copy(gridLine1)
		gridLine3.init_pos 		 = {0.0, -0.54}
		Add(gridLine3)


FOV_bracket = "FOV_bracket"

local 	FOV_bracket1  			 		= CreateElement "ceSimple"
		FOV_bracket1.screenspace 	 	= 2
		FOV_bracket1.level 		 		= 4
		FOV_bracket1.parent_element 	= base.name
		FOV_bracket1.init_pos 		 	= {-0.5, -0.5}
		FOV_bracket1.controllers 		= {{FOV_bracket}}
		Add(FOV_bracket1)
		
local   FOV_bracket1_hor	    = CreateElement "ceMeshPoly"
		FOV_bracket1_hor.primitivetype  = "triangles"
		FOV_bracket1_hor.vertices       = {{0.0,width},
									   { 0.05, width},
									   { 0.05,- width},
									   {0.0,- width}}
		FOV_bracket1_hor.indices        = {0,1,2,2,3,0}
		FOV_bracket1_hor.screenspace 	 = 2
		FOV_bracket1_hor.level 	 		= 4
		FOV_bracket1_hor.material		 = base.material
		FOV_bracket1_hor.parent_element = FOV_bracket1.name
		FOV_bracket1_hor.controllers	= {{"datalink_polarity_change_color",0,0,0}}
		Add(FOV_bracket1_hor)
		
local 	FOV_bracket1_vert 		= Copy(FOV_bracket1_hor)
		FOV_bracket1_vert.init_rot 		 = {90.0, 0.0}
		Add(FOV_bracket1_vert)
		
		
local 	FOV_bracket2  			 		= CreateElement "ceSimple"
		FOV_bracket2.screenspace 	 	= 2
		FOV_bracket2.level 		 		= 4
		FOV_bracket2.parent_element 	= base.name
		FOV_bracket2.init_pos 		 	= {-0.5, 0.5}
		FOV_bracket2.controllers 		= {{FOV_bracket}}
		Add(FOV_bracket2)
		
local   FOV_bracket2_hor	    = CreateElement "ceMeshPoly"
		FOV_bracket2_hor.primitivetype  = "triangles"
		FOV_bracket2_hor.vertices       = {{0.0,width},
									   { 0.05, width},
									   { 0.05,- width},
									   {0.0,- width}}
		FOV_bracket2_hor.indices        = {0,1,2,2,3,0}
		FOV_bracket2_hor.screenspace 	= 2
		FOV_bracket2_hor.level 	 		= 4
		FOV_bracket2_hor.material		 = base.material
		FOV_bracket2_hor.parent_element = FOV_bracket2.name
		FOV_bracket2_hor.controllers	= {{"datalink_polarity_change_color",0,0,0}}
		Add(FOV_bracket2_hor)
		
local 	FOV_bracket2_vert 		= Copy(FOV_bracket2_hor)
		FOV_bracket2_vert.init_rot 		 = {-90.0, 0.0}
		Add(FOV_bracket2_vert)
		
		
local 	FOV_bracket3  			 		= CreateElement "ceSimple"
		FOV_bracket3.screenspace 	 	= 2
		FOV_bracket3.level 		 		= 4
		FOV_bracket3.parent_element 	= base.name
		FOV_bracket3.init_pos 		 	= {0.5, 0.5}
		FOV_bracket3.controllers 		= {{FOV_bracket}}
		Add(FOV_bracket3)
		
local   FOV_bracket3_hor	    = CreateElement "ceMeshPoly"
		FOV_bracket3_hor.primitivetype  = "triangles"
		FOV_bracket3_hor.vertices       = {{-0.05,width},
									   { 0.0, width},
									   { 0.0,- width},
									   {-0.05,- width}}
		FOV_bracket3_hor.indices        = {0,1,2,2,3,0}
		FOV_bracket3_hor.screenspace 	= 2
		FOV_bracket3_hor.level 		 	= 4
		FOV_bracket3_hor.material		 = base.material
		FOV_bracket3_hor.parent_element = FOV_bracket3.name
		FOV_bracket3_hor.controllers	= {{"datalink_polarity_change_color",0,0,0}}
		Add(FOV_bracket3_hor)
		
local 	FOV_bracket3_vert 		= Copy(FOV_bracket3_hor)
		FOV_bracket3_vert.init_rot 		 = {90.0, 0.0}
		Add(FOV_bracket3_vert)


local 	FOV_bracket4  			 		= CreateElement "ceSimple"
		FOV_bracket4.screenspace 	 	= 2
		FOV_bracket4.level 		 		= 4
		FOV_bracket4.parent_element 	= base.name
		FOV_bracket4.init_pos 		 	= {0.5, -0.5}
		FOV_bracket4.controllers 		= {{FOV_bracket}}
		Add(FOV_bracket4)
		
local   FOV_bracket4_hor	    = CreateElement "ceMeshPoly"
		FOV_bracket4_hor.primitivetype  = "triangles"
		FOV_bracket4_hor.vertices       = {{-0.05,width},
									   { 0.0, width},
									   { 0.0,- width},
									   {-0.05,- width}}
		FOV_bracket4_hor.indices        = {0,1,2,2,3,0}
		FOV_bracket4_hor.screenspace 	= 2
		FOV_bracket4_hor.level 		 	= 4
		FOV_bracket4_hor.material		 = base.material
		FOV_bracket4_hor.parent_element = FOV_bracket4.name
		FOV_bracket4_hor.controllers	= {{"datalink_polarity_change_color",0,0,0}}
		Add(FOV_bracket4_hor)
		
local 	FOV_bracket4_vert 		= Copy(FOV_bracket4_hor)
		FOV_bracket4_vert.init_rot 		 = {-90.0, 0.0}
		Add(FOV_bracket4_vert)			
		
end

-------------------------------------------- Functions that replace line filled symbols with meshes --------------------------------------------
function addSaFfSensorAmbiguous(name, pos, parent, controller, material)
	pos = pos or {0, 0}
	addFillBox(name, 39.2, 4.7, align, {pos[1], pos[2] + 17}, parent, controller, material)
end

function addMeshOval(name, heightR, widthR, pos, parent, controllers, material)
	local segments = 32
	local delta = math.rad(360 / segments)
	
	local verts    = {}
	local inds     = {}

	verts[1] = {0, 0}
	for i = 2, segments + 1 do
		verts[i] = {widthR * math.sin(delta * (i - 2)), heightR * math.cos(delta * (i - 2))}
	end
	
	for i = 2, segments do
		inds[3 * i - 5] = 0
		inds[3 * i - 4] = i - 1
		inds[3 * i - 3] = i
	end

	inds[3 * (segments + 1) - 5] = 0
	inds[3 * (segments + 1) - 4] = segments
	inds[3 * (segments + 1) - 3] = 1

	local Oval = addMesh(name, verts, inds, pos, "triangles", parent, controllers, material)
	return Oval
end

function addMeshCircle(name, radius, pos, parent, controllers, material)
	return addMeshOval(name, radius, radius, pos, parent, controllers, material)
end