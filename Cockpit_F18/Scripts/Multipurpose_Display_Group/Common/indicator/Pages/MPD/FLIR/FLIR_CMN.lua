dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/MPD_page_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/FLIR/FLIR_tools.lua")

---------------------------------------------------
-- On/Off placeholder
local flirRoot			= addPlaceholder("MPD_FLIR_Root", {0,0})
local flirRoot_L		= addPlaceholder("MPD_FLIR_Root_L", {0,0}, flirRoot.name, {{"MPD_FLIR_TgpType", LITENING}})
local flirRoot_A		= addPlaceholder("MPD_FLIR_Root_A", {0,0}, flirRoot.name, {{"MPD_FLIR_TgpType", ATFLIR}})
local operRoot			= addPlaceholder("MPD_FLIR_OnOff", {0,0}, flirRoot.name, {{"MPD_FLIR_OperPlaceholder", 1}})
local operRoot_L		= addPlaceholder("MPD_FLIR_OnOff_L", {0,0}, flirRoot_L.name, {{"MPD_FLIR_OperPlaceholder", 1}})
local operRoot_A		= addPlaceholder("MPD_FLIR_OnOff_A", {0,0}, flirRoot_A.name, {{"MPD_FLIR_OperPlaceholder", 1}})
local videoOnRoot		= addPlaceholder("MPD_FLIR_VideoOn", {0,0}, operRoot.name, {{"MPD_FLIR_VideoOn"}})
local videoOnRoot_L		= addPlaceholder("MPD_FLIR_VideoOn_L", {0,0}, operRoot_L.name, {{"MPD_FLIR_VideoOn"}})
local videoOnRoot_A		= addPlaceholder("MPD_FLIR_VideoOn_A", {0,0}, operRoot_A.name, {{"MPD_FLIR_VideoOn"}})

---------------------------------------------------
-- VIDEO and other
AddRenderFLIR()
---------------------------------------------------

-- Aircraft Overlay
addMPD_TDC_diamond()

local RDR_tacDisplay_half = roundDI(InToDI(4)) / 2

-- Velocity vector (fixed) and horizon line
local VV_HorLine_refSz = RDR_tacDisplay_half / 2
local VV_y = VV_HorLine_refSz - VV_HorLine_refSz / 3
local vvRoot = add_RDR_FLIR_AC_VelVector_HorizonLine({0, VV_y}, {{"MPD_FLIR_TgpType", ATFLIR}, {"MPD_FLIR_VelocityVectorShow", -VV_y}},
	{{"MPD_FLIR_TgpType", ATFLIR}, {"MPD_FLIR_HorizonLine", 1.5}})

-- A/C airspeed
local airspeedBlockPosX = -323
local airspeedBlockPosY = -RDR_tacDisplay_half + 3 - glyphNominalHeight120 / 2
add_RDR_FLIR_AC_Airspeed({airspeedBlockPosX, airspeedBlockPosY}, {{"MPD_FLIR_AC_AirspeedNumerics_Show"}})

-- A/C Mach
local MachBlockPosX = airspeedBlockPosX - 5
local MachBlockPosY = airspeedBlockPosY - 26
add_RDR_FLIR_AC_Mach({MachBlockPosX, MachBlockPosY}, {{"MPD_FLIR_AC_MachNumerics"}}, {{"MPD_FLIR_AC_MachSymbolShow"}})

-- A/C altitude
add_RDR_FLIR_AC_Altitude({RDR_tacDisplay_half, airspeedBlockPosY - 3}, {{"MPD_FLIR_AC_AirspeedNumerics_Show"}})

-- Attitude indicator
local attRadius = 140
local Att_Ind_Root	= addPlaceholder("Att_Ind_Root", {-280, -250}, flirRoot_L.name, {{"MPD_FLIR_Att_Ind"}})
local FPA_Bank_Root = addPlaceholder("MPD_FLIR_FPA_Bank_Root", {0, 0}, Att_Ind_Root.name, {{"MPD_FLIR_Bank"}})
addStrokeArcIndicator("MPD_FLIR_FPA_Bank", attRadius, 0, nil, FPA_Bank_Root.name, {{"MPD_FLIR_FPA"}}, 0)
-- Angle of Attack
addStrokeSymbol("MPD_FLIR_VV", {"stroke_symbols_HUD", "125-velocity-vector"}, "FromSet", {0,0}, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 1}})
local flirAoaL = 38
addVarLenStrokeLine("MPD_FLIR_AoA_1", flirAoaL, {-37, 0}, 0, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 2, 0}})
addVarLenStrokeLine("MPD_FLIR_AoA_2", flirAoaL, { 37, 0}, 0, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 2, 1}})
addStrokeLine("MPD_FLIR_AoA_Vel_1", 27, {-37, 0}, 270, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 3}})
addStrokeLine("MPD_FLIR_AoA_Vel_2", 27, { 37, 0}, 90, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 3}})
addStrokeLine("MPD_FLIR_AoA", 15, { 0, 0}, 0, Att_Ind_Root.name, {{"MPD_FLIR_AoA", 3, 1}})

for i = 1, 12 do
	local angle = 30 * (i-1)
	addStrokeLine("MPD_FLIR_Att_Ticks_"..i, 25, {attRadius * math.sin(math.rad(angle)), attRadius * math.cos(math.rad(angle))}, -angle, Att_Ind_Root.name)
end

-- ASL and Steering Cue
local ASL_length = 90
local MPD_FLIR_ASL_Root_L = addPlaceholder("MPD_FLIR_ASL_Root_L", {0, 0}, Att_Ind_Root.name, {{"MPD_FLIR_ASL", attRadius}})
addStrokeLine("MPD_FLIR_ASL_Up_L", ASL_length, {0, 0}, 0, MPD_FLIR_ASL_Root_L.name)
addStrokeLine("MPD_FLIR_ASL_Down_L", ASL_length, {0, 0}, 180, MPD_FLIR_ASL_Root_L.name)
local ReleaseCueLen = 40
addStrokeLine("MPD_FLIR_ReleaseCue_L", ReleaseCueLen, {-ReleaseCueLen / 2, 0}, -90, "MPD_FLIR_ASL_Up_L", {{"MPD_FLIR_ReleaseCue", ASL_length}})

local MPD_FLIR_ASL_Root_A = addPlaceholder("MPD_FLIR_ASL_Root_A", {0, 0}, vvRoot.name, {{"MPD_FLIR_ASL", attRadius}})
addStrokeLine("MPD_FLIR_ASL_Up_A", ASL_length, {0, 0}, 0, MPD_FLIR_ASL_Root_A.name)
addStrokeLine("MPD_FLIR_ASL_Down_A", ASL_length, {0, 0}, 180, MPD_FLIR_ASL_Root_A.name)
addStrokeLine("MPD_FLIR_ReleaseCue_A", ReleaseCueLen, {-ReleaseCueLen / 2, 0}, -90, "MPD_FLIR_ASL_Up_A", {{"MPD_FLIR_ReleaseCue", ASL_length}})

-- LOS position
-- situational awareness cue should be clipped in the center area of TGP cross
local rtclCenter = 30
local maskVerts = {{-rtclCenter/2,  rtclCenter/2},
			 { rtclCenter/2,  rtclCenter/2}, 
			 { rtclCenter/2, -rtclCenter/2},
			 {-rtclCenter/2, -rtclCenter/2}}

openMaskArea(0, "MPD_FLIR_LosPosCenter_Open", maskVerts, box_ind, {0,0}, nil)

local losPosYmax = 450
local losPosPlaceholder = addPlaceholder("MPD_FLIR_LosPosPlaceholder", {0,0}, videoOnRoot.name,
					{{"MPD_FLIR_Azimuth", 0, -1},
					 {"move", 0, losPosYmax * GetScale(), 0},
					 {"MPD_FLIR_Elevation", 0, losPosYmax / math.rad(90)}})
local boxSide = 10
local losPosBox 	= addStrokeBox("MPD_FLIR_LosPosition", boxSide, boxSide, "CenterCenter", {0,0}, losPosPlaceholder.name)
losPosBox.init_rot	= {45}

closeMaskArea(1, "MPD_FLIR_LosPosCenter_Close", maskVerts, box_ind, {0,0}, nil)

-- NOT TIMED OUT
addStrokeText("MPD_FLIR_NotTimedOut_label", "NOT TIMED OUT", STROKE_FNT_DFLT_120, "CenterCenter", {0, 400}, flirRoot.name, {{"MPD_FLIR_NotTimedOut_Label"}})
-- Operating Status
local operStatusLabel = addStrokeText("MPD_FLIR_OperStatus_Label", "", STROKE_FNT_DFLT_120, "LeftCenter", {-470, 460}, flirRoot.name, {{"MPD_FLIR_OperStatus_Label"}},
		{"", "RDY", "STBY", "TEST", "OPR", "INS", "HOT"})
addStrokeLine("MPD_FLIR_OperStatus_Line", 60, {0, 0}, -90, operStatusLabel.name, {{"MPD_FLIR_OperStatus_Label", 1}})

addStrokeText("MPD_FLIR_TrackMode_L", "", STROKE_FNT_DFLT_120, "CenterCenter", {-440, 430}, videoOnRoot_L.name, {{"MPD_FLIR_TrackMode_Label"}},
		{"", "ATRK", "PTRK"})
addStrokeText("MPD_FLIR_MemoryMode", "MEM", STROKE_FNT_DFLT_120, "CenterCenter", {0, -400}, videoOnRoot_L.name, {{"MPD_FLIR_MemoryMode_Label"}})
addStrokeText("MPD_FLIR_TrackMode_A", "", STROKE_FNT_DFLT_120, "RightCenter", {-100, -400}, videoOnRoot_A.name, {{"MPD_FLIR_TrackMode_Label"}},
		{"", "SCENE", "AUTO", "INR", "INR SCENE", "INR AUTO", "INR"})

-- Elevation and Azimuth
addStrokeText("MPD_FLIR_AzimuthReadout", "", STROKE_FNT_DFLT_120, "CenterCenter", {0, 450}, operRoot.name, {{"MPD_FLIR_Azimuth", 1}}, {"%d° L", "%d° R"})
addStrokeText("MPD_FLIR_ElevationReadout", "", STROKE_FNT_DFLT_120, "CenterCenter", {-400, 0}, operRoot.name, {{"MPD_FLIR_Elevation", 1}}, {"%d°"})

---------------------------------------------------
-- LITENING
-- ZOOM value
addStrokeText("MPD_FLIR_ZoomValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {-460, 190}, operRoot_L.name, {{"MPD_FLIR_ZoomValue"}}, {"Z%d"})
-- LEVEL value
addStrokeText("MPD_FLIR_LevelValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {-460, 120}, operRoot_L.name, {{"MPD_FLIR_LevelValue"}}, {"L%d"})
-- GAIN value
addStrokeText("MPD_FLIR_GainValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {-460, 85}, operRoot_L.name, {{"MPD_FLIR_GainValue"}}, {"G%d"})
---------------------------------------------------
--ATFLIR
-- ZOOM value
addStrokeText("MPD_AFLIR_ZoomValue_Z", "", STROKE_FNT_DFLT_120, "LeftCenter", {-370, 440}, operRoot_A.name, {{"MPD_FLIR_ZoomValue_f"}}, {"Z%3.1f"})
addStrokeText("MPD_AFLIR_ZoomLabel", "Z\nO\nO\nM", STROKE_FNT_DFLT_120, "CenterCenter", {-500, 240}, operRoot_A.name, {{"MPD_AFLIR_ZoomLabel"}})
addStrokeText("MPD_AFLIR_ZoomValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {20, 0}, "MPD_AFLIR_ZoomLabel", {{"MPD_FLIR_ZoomValue_f"}}, {"%3.1f"})
-- FOCUS value
addStrokeText("MPD_AFLIR_FocusLabel", "F\nO\nC\nS", STROKE_FNT_DFLT_120, "CenterCenter", {-500, -95}, operRoot_A.name, {{"MPD_AFLIR_FocusLabel"}})
addStrokeText("MPD_AFLIR_FocusValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {20, 0}, "MPD_AFLIR_FocusLabel", {{"MPD_FLIR_FocusValue"}}, {"%d"})
-- LEVEL value
addStrokeText("MPD_AFLIR_LevelLabel", "L\nV\nL", STROKE_FNT_DFLT_120, "CenterCenter", {-500, 240}, operRoot_A.name, {{"MPD_AFLIR_LevelLabel"}})
addStrokeText("MPD_AFLIR_LevelValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {20, 0}, "MPD_AFLIR_LevelLabel", {{"MPD_FLIR_LevelValue"}}, {"%d"})
-- GAIN value
addStrokeText("MPD_AFLIR_GainLabel", "G\nN", STROKE_FNT_DFLT_120, "CenterCenter", {-500, -95}, operRoot_A.name, {{"MPD_AFLIR_GainLabel"}})
addStrokeText("MPD_AFLIR_GainValue", "", STROKE_FNT_DFLT_120, "LeftCenter", {20, 0}, "MPD_AFLIR_GainLabel", {{"MPD_FLIR_GainValue"}}, {"%d"})

-- BIT lines
addStrokeText("MPD_FLIR_BIT_line", "", STROKE_FNT_DFLT_120, "LeftCenter", {280, -250}, operRoot_L.name, {{"MPD_FLIR_GRAY_Opt"}, {"MPD_FLIR_BIT_line"}})

addStrokeText("MPD_AFLIR_SETUP_num", "01", STROKE_FNT_DFLT_120, "RightCenter", {470, -360}, operRoot_A.name)

-- Mask
addStrokeText("MPD_AFLIR_MaskLabel", "", STROKE_FNT_DFLT_120, "LeftCenter", {100, -400}, operRoot_A.name, {{"MPD_AFLIR_MaskLabel"}}, {"", "M WARN", "MASK"})

-- Laser Codes
addStrokeText("MPD_FLIR_LSTC_label_A",	"LST",	STROKE_FNT_DFLT_120, "LeftCenter", {380, -149}, operRoot_A.name, {{"MPD_FLIR_LSTC_label", 0}})
addStrokeText("MPD_FLIR_LSTC_code_A",	"",		STROKE_FNT_DFLT_120, "LeftCenter", {380, -189}, operRoot_A.name, {{"MPD_FLIR_LSTC_label", 1}}, {"%4d"})
addStrokeText("MPD_FLIR_LTDC_code_A",	"",		STROKE_FNT_DFLT_120, "LeftCenter", {380, -229}, operRoot_A.name, {{"MPD_FLIR_LTDC_label", 1}}, {"%4d"})
addStrokeText("MPD_FLIR_LTDC_label_A",	"LTD/R",STROKE_FNT_DFLT_120, "LeftCenter", {380, -269}, operRoot_A.name, {{"MPD_FLIR_LTDC_label", 0}})

-- Pushbuttons
---------------------------------------------------
-- Only Litening PBs
local pb1_L = add_PB_label(1, {"", videoOnRoot_L.name, {{"MPD_FLIR_Sensor_PB"}}})[1]
pb1_L.formats = {"C\nC\nD", "F\nL\nI\nR"}
local pb2_L = add_PB_label(2, {"", videoOnRoot_L.name, {{"MPD_FLIR_Sensor_PB"}}})[1]
pb2_L.formats = {"", "A\nU\nT\nF"}
add_PB_symbol(3, "124-arrow-down", videoOnRoot_L.name)
local pb4_L = add_PB_label(4, {"", videoOnRoot_L.name, {{"MPD_FLIR_Zoom_PB"}}})[1]
pb4_L.formats = {"Z\nO\nO\nM", "L\nE\nV\nE\nL", "G\nA\nI\nN"}
add_PB_symbol(5, "124-arrow-up", videoOnRoot_L.name)

local pb6_L = add_PB_label(6, {"", videoOnRoot_L.name, {{"MPD_FLIR_FOV_Label"}}})[1]
pb6_L.formats = {"WIDE", "NAR"}
add_PB_label(8, {"FRZ", operRoot_L.name, nil, {{"MPD_FLIR_FRZ_Box"}}})

add_PB_label(12, {"RTCL", operRoot_L.name, nil, {{"MPD_FLIR_RTCL_Box"}}})
add_PB_label(15, {"GRAY", videoOnRoot_L.name, nil, {{"MPD_FLIR_GRAY_Opt"}}})

---------------------------------------------------
-- Only ATFLIR PBs
local pb1_A	= add_PB_label(1, {"", videoOnRoot_A.name, {{"MPD_AFLIR_ZF_LG_Label"}}})[1]
pb1_A.formats = {"Z %3.1f\nF %d", "L %d\nG %d", ""}
add_PB_symbol(2, "075-arrow-down", videoOnRoot_A.name)
add_PB_symbol(3, "075-arrow-up", videoOnRoot_A.name)
add_PB_symbol(4, "075-arrow-down", videoOnRoot_A.name)
add_PB_symbol(5, "075-arrow-up", videoOnRoot_A.name)

local pb6_A = add_PB_label(6, {"", videoOnRoot_A.name, {{"MPD_FLIR_FOV_Label"}}})[1]
pb6_A.formats = {"WFOV", "MFOV", "NAR"}
local pb8_L = add_PB_label(8, {"", videoOnRoot_A.name, {{"MPD_FLIR_Sensor_PB"}}})[1]
pb8_L.formats = {"TV", "IR"}
add_PB_label(9, {"RTCL", operRoot_A.name, nil, {{"MPD_FLIR_RTCL_Box"}}})

add_PB_label(14, {"UFC", operRoot_A.name, {{"MPD_FLIR_SETUP_Label", 0}, {"MPD_FLIR_UFC_PB", 0}}, {{"MPD_FLIR_SETUP_Label", 0}, {"MPD_FLIR_UFC_PB", 1}}})
add_PB_label(15, {"SETUP", flirRoot_A.name, nil, {{"MPD_FLIR_SETUP_Label", 1}}})
-- ATFLIR SETUP PBs
local pb10_A_setup = add_PB_label(10, {"COORD", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}}, {"", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}, {"MPD_FLIR_SETUP_COORD"}}})[2]
pb10_A_setup.formats = {"ALL", "LAT/LON", "GRID", "OFF"}
add_PB_label(11, {"SAFE", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}}, {"EYE", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}})
add_PB_label(12, {"ALN", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}, {{"MPD_FLIR_SETUP_Label", 1}}})
add_PB_label(13, {"ALN", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}}, {"INIT", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}})
add_PB_label(14, {"CAL", flirRoot_A.name, {{"MPD_FLIR_SETUP_Label", 1}}})

---------------------------------------------------
-- Both PBs
add_PB_label(16, {"DCLTR", flirRoot.name, nil, {{"MPD_FLIR_DCLTR_Box"}}})							-- Both
add_PB_label(19, {"ALG", flirRoot.name, {{"MPD_FLIR_ALG_PB", 0}}, {{"MPD_FLIR_ALG_PB", 1}}})		-- Both
local pb20 = add_PB_label(20, {"", flirRoot.name, {{"MPD_FLIR_Polarity_PB"}}})[1]
pb20.formats = {"", "WHT", "BLK"}
