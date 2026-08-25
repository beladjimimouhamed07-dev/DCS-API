dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/RDR/RDR_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/MDG_strokesDefs.lua")

------------------------------------------------------------------------------
-- AA, non-backup, currently - RWS mode

local CAS_alt_large_placeholder = addPlaceholder("CAS_alt_large_placeholder", {0, 195}, nil, {{"MPD_RDR_ACM_AC_AirspeedAlt_Show"}})
local CAS_large_placeholder 	= addPlaceholder("CAS_large_placeholder", {-146, 0}, CAS_alt_large_placeholder.name)
local alt_large_placeholder 	= addPlaceholder("alt_large_placeholder", {277, 0}, CAS_alt_large_placeholder.name)

-- ACM A/C airspeed in the display center
addStrokeText("ACM_AC_airspeed", nil, STROKE_FNT_DFLT_150_WIDE, "RightBottom", {0, 0}, CAS_large_placeholder.name, {{"MPD_RDR_FLIR_AC_AirspeedNumerics"}})

-- TODO:
--  - different flash rate when altitude warning exists (reference - a SH vid), should be much slower than HUD symbols

-- ACM A/C altitude in the display center
-- altitude below 1000 ft
addStrokeText("ACM_AC_altitude_below_1000", nil, STROKE_FNT_DFLT_150_WIDE, "RightBottom", {-5, 0}, alt_large_placeholder.name, {{"MPD_RDR_FLIR_AC_AltitudeNumerics", 0}})
-- altitude above 1000 ft
local gap_alt_hund_tenths_large = 15
local shiftX_alt_thousands 	= fontIntercharDflt120_wide * 2 + glyphNominalWidth120 * 3 + gap_alt_hund_tenths_large * 1.75
addStrokeText("ACM_AC_altitude_above_1000_thousands", nil, STROKE_FNT_DFLT_150_WIDE, "RightBottom", {-shiftX_alt_thousands, 0}, alt_large_placeholder.name,
	{{"MPD_RDR_FLIR_AC_AltitudeNumerics", 1}})
addStrokeText("ACM_AC_altitude_above_1000_hund_tenths", nil, STROKE_FNT_DFLT_120_WIDE, "RightBottom", {-gap_alt_hund_tenths_large, 0}, alt_large_placeholder.name,
	{{"MPD_RDR_FLIR_AC_AltitudeNumerics", 2}})

-- altitude symbol (none, R, flashing B)
-- COMMENTED after videos review
--addStrokeText("ACM_AC_altitude_symbol", nil, STROKE_FNT_DFLT_150_WIDE, "LeftBottom", {5, 0}, alt_large_placeholder.name, {{"MPD_RDR_FLIR_AC_AltitudeSymbol"}}, {"B", "R"})

local AOT_zone_posY = tactical_display_sz_half - RDR_AOT_zoneSizeDI -- defined in RadarDefs.lua
addStrokeLine("AOT_zone_line", tactical_display_sz, {tactical_display_sz_half, AOT_zone_posY}, 90, nil, {{"MPD_RDR_AA_AOT_ZoneShow", 1}})

-- Azimuth reference lines
local az_ref_lines_placeholder_cmn = addPlaceholder("az_ref_lines_placeholder_cmn", nil, nil, {{"MPD_RDR_AA_AzimuthRefLinesShow"}})
local az_ref_lines_placeholder_rng = addPlaceholder("az_ref_lines_placeholder_rng", nil, az_ref_lines_placeholder_cmn.name, {{"MPD_RDR_AA_AOT_ZoneShow", 1}})
local az_ref_lines_placeholder_vel = addPlaceholder("az_ref_lines_placeholder_vel", nil, az_ref_lines_placeholder_cmn.name, {{"MPD_RDR_AA_AOT_ZoneShow", 0}})
-- upper lines
add_azimuth_ref_lines("with_AOT", AOT_zone_posY, az_ref_lines_placeholder_rng.name)
add_azimuth_ref_lines("no_AOT", tactical_display_sz_half, az_ref_lines_placeholder_vel.name)
-- lower lines
add_azimuth_ref_lines("lower", -tactical_display_sz_half, az_ref_lines_placeholder_cmn.name)

-- Range/Speed reference lines
local rng_speed_ref_lines_placeholder_4_gaps = addPlaceholder("rng_speed_ref_lines_placeholder_4_gaps", nil, nil, {{"MPD_RDR_AA_RngSpeedRefLinesKind", 0}})
local rng_speed_ref_lines_placeholder_5_gaps = addPlaceholder("rng_speed_ref_lines_placeholder_5_gaps", nil, nil, {{"MPD_RDR_AA_RngSpeedRefLinesKind", 1}})
-- right lines
add_range_speed_ref_lines("4_gaps", tactical_display_sz_half, true, rng_speed_ref_lines_placeholder_4_gaps.name)
add_range_speed_ref_lines("5_gaps", tactical_display_sz_half, false, rng_speed_ref_lines_placeholder_5_gaps.name)
-- left lines
add_range_speed_ref_lines("4_gaps", -tactical_display_sz_half, true, rng_speed_ref_lines_placeholder_4_gaps.name)
add_range_speed_ref_lines("5_gaps", -tactical_display_sz_half, false, rng_speed_ref_lines_placeholder_5_gaps.name)

-- Auto acquisition legend - AACQ/WACQ
addStrokeText("AutoAcquisitionLegend", nil, STROKE_FNT_DFLT_120, "LeftBottom", {-tactical_display_sz_half + 25, upper_data_block_posY}, nil, {{"MPD_RDR_AA_AutoAcquisitionLegend"}},
	{"", "AACQ", "WACQ"})
	
-- RF channel
addStrokeText("RF_channel", "C11", STROKE_FNT_DFLT_120, "RightBottom", {-tactical_display_sz_half - 2, tactical_display_sz_half + RF_channel_shiftY})
	
-- Sensitivity Indicator
addStrokeText("Radar_sensitivity", nil, STROKE_FNT_DFLT_150, "RightBottom", {-tactical_display_sz_half - 10, -tactical_display_sz_half}, nil, {{"MPD_RDR_AA_SensitivityIndicator"}})

local AcquisitionCursorPlaceholder = addAcqusitionCursor()

-- TDC scan altitude limits
local scanAltLimPosX = glyphNominalWidth100 + fontIntercharDflt100 / 2
addStrokeText("ScanAltitudeLimitUpper", nil, STROKE_FNT_DFLT_100, "RightBottom", {scanAltLimPosX, RDR_TDC_HeightDI / 2 + 5}, AcquisitionCursorPlaceholder.name, {{"MPD_RDR_AA_ScanAltitudeLimit", 0}, {"MPD_RDR_EADI_SetYellowColor"}})
addStrokeText("ScanAltitudeLimitLower", nil, STROKE_FNT_DFLT_100, "RightTop", {scanAltLimPosX, -RDR_TDC_HeightDI / 2 - 9}, AcquisitionCursorPlaceholder.name, {{"MPD_RDR_AA_ScanAltitudeLimit", 1}, {"MPD_RDR_EADI_SetYellowColor"}})

-- TDC SPOT X symbol
local TDS_SpotlightModeXSymbolPlaceholder = addPlaceholder("TDS_SpotlightModeXSymbolPlaceholder", nil, AcquisitionCursorPlaceholder.name, {{"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol"}})
addStrokeLine("TDC_XLeft", 76, {-RDR_TDC_WidthDI / 2, -RDR_TDC_HeightDI / 2}, -45, TDS_SpotlightModeXSymbolPlaceholder.name, {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})
addStrokeLine("TDC_XLeft_1", 76, {-1, 0}, nil, "TDC_XLeft", {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})
addStrokeLine("TDC_XLeft_2", 76, {1,  0}, nil, "TDC_XLeft", {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})
addStrokeLine("TDC_XRight", 76, {RDR_TDC_WidthDI / 2, -RDR_TDC_HeightDI / 2}, 45, TDS_SpotlightModeXSymbolPlaceholder.name, {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})
addStrokeLine("TDC_XRight_1", 76, {-1, 0}, nil, "TDC_XRight", {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})
addStrokeLine("TDC_XRight_2", 76, {1,  0}, nil, "TDC_XRight", {{"MPD_RDR_EADI_SetYellowColor"}, {"MPD_RDR_AA_TDC_SPOT_MODE_X_Symbol_Intensity"}})

-- TUC for contact
local TUC_MachAlt_ShiftX = 40
local TUC_Placeholder = addPlaceholder("TUC_Placeholder", nil, AcquisitionCursorPlaceholder.name, {{"MPD_RDR_RawRadarContactTUC"}})
addStrokeText(TUC_Placeholder.name.."TUC_ClosingVelocity",nil, STROKE_FNT_DFLT_100, "RightCenter", {-TUC_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_RDR_RawRadarContactClosingVelocity"},  {"MPD_RDR_EADI_SetYellowColor"}})
addStrokeText(TUC_Placeholder.name.."TUC_Altitude",       nil, STROKE_FNT_DFLT_100, "LeftCenter",  { TUC_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_RDR_RawRadarContactAltitude"}, 		 {"MPD_RDR_EADI_SetYellowColor"}})

local RangeTickLen = 55 --60

--------------------------------------------------- EW DATA ---------------------------------------------------
local ewRootName = "RDR_AA_EW_Root"
addPlaceholder(ewRootName, {0, AOT_zone_posY - 25}, nil, {{"MPD_RDR_AA_EW_Show"}})
local EW_Symbol_Scale = 1.65

local function AddEwSymbol(num, level)
	local EW_Symbol_Root = "EW_Symbol_Root"..num
	local clippedObject
	addPlaceholder(EW_Symbol_Root, {0, 0}, ewRootName, {{"MPD_RDR_AA_EW_Symbol_Pos", num, tactical_display_sz_half}})
	clippedObject = addStrokeSymbol("RDR_AA_EW_Symbol_Main"..num, {"stroke_symbols_MDI_AMPCD", "SA-EW-Symbol"}, "FromSet", nil, EW_Symbol_Root, {{"MPD_RDR_AA_EW_Color", num}}, EW_Symbol_Scale)
	setClipLevel(clippedObject, level)
	clippedObject = addStrokeText("RDR_AA_EW_ThreatSymbol"..num, "", STROKE_FNT_DFLT_100, "CenterCenter", nil, EW_Symbol_Root, {{"MPD_RDR_AA_EW_ThreatSymbol", num}, {"MPD_RDR_AA_EW_Color", num}})
	setClipLevel(clippedObject, level)
	clippedObject = addStrokeSymbol("RDR_AA_EW_Symbol_SecondLine"..num, {"stroke_symbols_MDI_AMPCD", "SA-EW-Symbol-Second-Line"}, "FromSet", nil, "RDR_AA_EW_Symbol_Main"..num, {{"MPD_RDR_AA_EW_PriorityLine", num, 2}, {"MPD_RDR_AA_EW_Color", num}}, EW_Symbol_Scale)
	setClipLevel(clippedObject, level)
	clippedObject = addStrokeSymbol("RDR_AA_EW_Symbol_ThirdLine"..num, {"stroke_symbols_MDI_AMPCD", "SA-EW-Symbol-Third-Line"}, "FromSet", nil, "RDR_AA_EW_Symbol_Main"..num, {{"MPD_RDR_AA_EW_PriorityLine", num, 1}, {"MPD_RDR_AA_EW_Color", num}}, EW_Symbol_Scale)
	setClipLevel(clippedObject, level)
end


local EW_Indices = {0, 1, 2}
local EW_SymWidth = 48 * EW_Symbol_Scale
local EW_SymHeight = 42 * EW_Symbol_Scale
local EW_Vertices = 
{
	{-EW_SymWidth / 2, EW_SymHeight / 2},
	{ EW_SymWidth / 2, EW_SymHeight / 2},
	{ 0, -EW_SymHeight / 2}	
}

local openingMaskEW = openMaskArea(0, "EW_Mask", EW_Vertices, EW_Indices, {0, -5 * EW_Symbol_Scale }, ewRootName, {{"MPD_RDR_AA_EW_Symbol_Pos", 0, tactical_display_sz_half}})
for i = 1, 4 do
	local num = i-1
	local level = 0
	if i == 1 then
		level = 1
	end

	AddEwSymbol(num, level)
end
closeMaskArea(1, "EW_Mask_Close", openingMaskEW.vertices, openingMaskEW.indices, openingMaskEW.init_pos)

------------------------------------------------------------------------- LTWS -----------------------------------------------------------------------------------------------------------------
local AA_MSL_Symb_Mode = {
"",
"TTG",
"ACT",
"SL",
"LOST",
"A",
"TTA",
}

for i = 1,8 do
	addPlaceholder("MissileSymbol"..i, {0, -tactical_display_sz_half}, nil, {{"MPD_RDR_AA_MissilePos", tactical_display_sz, i}})
	addRDRTick("MissileSymbol_HorLine"..i, "MissileSymbol"..i, RangeTickLen, {RangeTickLen / 2, 0}, 90)
	addRDRTick("MissileSymbol_Line1"..i, "MissileSymbol"..i, RangeTickLen, {RangeTickLen / 2, 0}, 30)
	addRDRTick("MissileSymbol_Line2"..i, "MissileSymbol"..i, RangeTickLen, {-RangeTickLen / 2, 0}, -30)

	addStrokeText("MissileTTG"..i, nil, STROKE_FNT_DFLT_100, "RightCenter", {5, -20}, "MissileSymbol"..i, {{"TOF_TTG_Val", 2, i}})

	addStrokeText("AA_MSL_Symb_Mode"..i, nil, STROKE_FNT_DFLT_100, "LeftCenter", {0, 0}, "MissileTTG"..i, {{"AA_MSL_MODE", 2, i}}, AA_MSL_Symb_Mode)
end

-- ACQ point cue
local ACQ_Point_cue_Placeholder = addPlaceholder("ACQ_Point_cue_Placeholder", {0, 0}, nil, {{"MPD_RDR_ACQ_PointCue_IndicationShow", tactical_display_sz_half}})
addStrokeSymbol("ACQ_Point_cue_Symbol", {"stroke_symbols_MDI_AMPCD", "135-ACQ-Point-Cue"}, "FromSet", nil, ACQ_Point_cue_Placeholder.name)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-- tracked target shape
local targetPosScale = InToDI(4) / 2

-- tracked target, differential altitude
-- elevation caret position is used for differential altitude
local diffAltitudeShiftX = 130
addStrokeText("TrackedTgtDifferentialAltitude", nil, STROKE_FNT_DFLT_100, "LeftCenter", {-tactical_display_sz_half + 30, 0}, nil, {{"MPD_RDR_ElevationCaret", tactical_display_sz_half}, {"MPD_RDR_AA_TrackedTarget_DiffAltitude"}})

-- tracked target, range and closing rate
local trackedTgtRangeCaret = add_RDR_caret("Range_caret", {tactical_display_sz_half, 0}, 90, nil, {{"MPD_RDR_AA_TrackedTarget_RangeCaret", targetPosScale}})
local rangeRateShiftX = -30
addStrokeText("TrackedTgtRangeRate", nil, STROKE_FNT_DFLT_100, "RightCenter", {rangeRateShiftX, 0}, trackedTgtRangeCaret.name, {{"MPD_RDR_AA_TrackedTarget_RangeRate"}})

local STT_LAR_PH = addPlaceholder("STT LAR PH", {0, -tactical_display_sz_half}, nil, {{"MPD_RDR_AA_LAR_Show"}, {"MPD_RDR_AA_B_SweepPos", tactical_display_sz_half}})
addRDRTick("R_min", STT_LAR_PH.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_AA_Rmin_Pos", tactical_display_sz_half * 2}})
addRDRTick("R_max", STT_LAR_PH.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_AA_Rmax_Pos", tactical_display_sz_half * 2}})
addRDRTick("RNE", STT_LAR_PH.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_AA_RNE_Pos", tactical_display_sz_half * 2}})

local AseCircleRadius = DegToDI(3.0)
local ASE_circle = addStrokeCircle("Ase_Circle_DDI", AseCircleRadius, {0, 0}, nil, {{"Ase_Circle", 2}, {"ASE_Circle_Raduis"}})

-- Break X
add_X_Over("breakX_placeholder", 352, 352,  nil, nil, {{"HUD_Break_X"}})

-- TODO: to remove this offset, and to split MDG controllers for HUD and RDR Steering Dots
-- Steering Dot
addSteeringDot("SteeringDot", nil, ASE_circle, {{"Steering_Dot_Pos", 1}})

addStrokeText("SHOOT_DDI", "SHOOT", STROKE_FNT_DFLT_150, "CenterCenter", {-24, -tactical_display_sz_half + 75}, nil, {{"HUD_RDR_SHOOT_IN_LAR_cue", 1, 0}})
addStrokeText("IN_LAR_DDI", "IN LAR", STROKE_FNT_DFLT_150, "CenterCenter", {-24, -tactical_display_sz_half + 75}, nil, {{"HUD_RDR_SHOOT_IN_LAR_cue", 1, 1}})
addStrokeText("ASPECT_DDI", nil, STROKE_FNT_DFLT_100, "CenterCenter", {-170, -tactical_display_sz_half - 15}, nil, {{"MPD_RDR_AA_TARGET_ASPECT_cue", 1}})
addStrokeText("TOF_DDI", nil, STROKE_FNT_DFLT_100, "CenterCenter", {90, -tactical_display_sz_half - 15}, nil, {{"MPD_RDR_AA_TOF_ACT_Val"}})

-- Name of the priority weapon and the quantity of the weapon remaining
addStrokeText("Current_AA_Weapon", " ", STROKE_FNT_DFLT_120, "CenterCenter", {370, 435}, nil, {{"MPD_RDR_AA_SelectedWeaponInfo"}})
add_X_Over("Current_AA_Weapon_X", 70, 25,  {0, 0}, "Current_AA_Weapon", {{"MPD_RDR_AA_X_OverSelectedWeaponShow"}})

-- Flood
addStrokeText("FLOOD_cue", "FLOOD", STROKE_FNT_DFLT_150, "CenterCenter", {0, 300}, nil, {{"MPD_RDR_AA_FLOOD_Cue"}})
addStrokeLine("FLOOD_antenna_Pos", tactical_display_sz + 5, {0, -tactical_display_sz_half - 300}, 0, "FLOOD_cue")

-- MEM/RMEM JAM/RJAM label
addStrokeText("MEM_RMEM_JAM_RJAM_Label", "", STROKE_FNT_DFLT_150, "CenterCenter", {0, -tactical_display_sz_half + 30}, nil, {{"MPD_RDR_AA_MemoryTrack"}})

-- NO RDR label
addStrokeText("NoRdrLabel", "NO RDR", STROKE_FNT_DFLT_150, "LeftCenter", {-365, -tactical_display_sz_half + 30}, nil, {{"MPD_RDR_AA_NoRdr"}})

-- Bullseye
local BullseyeDataPH = addPlaceholder("BullseyeDataPH", nil, nil, {{"MPD_RDR_ShowBullseyeData"}})
addStrokeText("BullseyeTopLeftData", "", STROKE_FNT_DFLT_120, "LeftCenter", {-280, 440}, BullseyeDataPH.name, {{"MPD_RDR_BullseyeData"}}, {"%3d°/%.1f"})
addStrokeText("BullseyeBRAData", "", STROKE_FNT_DFLT_120, "LeftCenter", {-365, -340}, BullseyeDataPH.name, {{"MPD_RDR_BRAData"}}, {"BRA %3d°/%.1f"})
addStrokeText("BullseyeOwnshipData", "", STROKE_FNT_DFLT_120, "CenterCenter", {0, -445}, BullseyeDataPH.name, {{"MPD_RDR_OwnshipData"}}, {"%3d°/%.1f"})
local BullseyeCursor = addPlaceholder("BullseyeCursor_Root", {0, -tactical_display_sz_half}, BullseyeDataPH.name, {{"MPD_RDR_BullseyeSymbolPosition", tactical_display_sz}})
addStrokeCircle("BullseyeData_DOT", 1, nil, BullseyeCursor.name, {{"TDC_assignedDisplay"}})
addStrokeSymbol("BullseyeSymbol_undesignated", {"stroke_symbols_MDI_AMPCD", "Bullseye-symbol"}, "FromSet", nil, BullseyeCursor.name, {{"MPD_RDR_BullseyeSymbolType", 0}})
addStrokeSymbol("BullseyeSymbol_designated", {"stroke_symbols_MDI_AMPCD", "Bullseye-symbol-designate"}, "FromSet", nil, BullseyeCursor.name, {{"MPD_RDR_BullseyeSymbolType", 1}})

local BullseyeCursorOutOfRange = addPlaceholder("BullseyeCursorOutOfRange_Root", {-300, 440}, BullseyeDataPH.name, {{"MPD_RDR_BullseyeSymbolOutOfRange"}})
addStrokeCircle("BullseyeDataOutOfRange_DOT", 1, nil, BullseyeCursorOutOfRange.name, {{"TDC_assignedDisplay"}})
addStrokeSymbol("BullseyeSymbolOutOfRange_undesignated", {"stroke_symbols_MDI_AMPCD", "Bullseye-symbol"}, "FromSet", nil, BullseyeCursorOutOfRange.name, {{"MPD_RDR_BullseyeSymbolType", 0}})
addStrokeSymbol("BullseyeSymbolOutOfRange_designated", {"stroke_symbols_MDI_AMPCD", "Bullseye-symbol-designate"}, "FromSet", nil, BullseyeCursorOutOfRange.name, {{"MPD_RDR_BullseyeSymbolType", 1}})

addStrokeText("TargetHeading", "", STROKE_FNT_DFLT_120, "LeftCenter", {-305, 335}, nil, {{"MPD_RDR_AA_TrackedTargetHeading"}}, {"%3d°"})

addStrokeText("STT_RAID_TargetMuchNumber", "", STROKE_FNT_DFLT_120, "LeftCenter", {-210, 335}, nil, {{"MPD_RDR_AA_STT_RAID_TargetMuchNumber"}})
addStrokeText("STT_RAID_TargetDifferentialAltitude", "", STROKE_FNT_DFLT_120, "LeftCenter", {-tactical_display_sz_half + 50, 0}, nil, {{"MPD_RDR_AA_STT_RAID_TargetDifferentialAltitude"}})
addStrokeText("STT_RAID_TargetRangeRate", "", STROKE_FNT_DFLT_120, "RightCenter", {tactical_display_sz_half - 50, 0}, nil, {{"MPD_RDR_AA_STT_RAID_TargetRangeRate"}})

local TWS_PH = addPlaceholder("TWS_PH", nil, nil, {{"MPD_RDR_TWS_LabelsRoot"}})
addStrokeText("SCAN RAID", "SCAN RAID", STROKE_FNT_DFLT_120, "CenterCenter", {0, -395}, TWS_PH.name, {{"MPD_RDR_AA_RDR_RAID_BoxShow"}})

local RDR_STT_RAID_PH = addPlaceholder("RDR_STT_RAID_PH", nil, nil, {{"MPD_RDR_STT_RAID_LabelsRoot"}})
addStrokeText("RAID", "RAID", STROKE_FNT_DFLT_120, "CenterCenter", {0, -395}, RDR_STT_RAID_PH.name)

local RDR_AOT_PH = addPlaceholder("RDR_AOT_PH", nil, nil, {{"MPD_RDR_RDR_AOT_LabelRootShow", 1}})
addStrokeText("RDR_AOT", "RDR AOT", STROKE_FNT_DFLT_120, "CenterCenter", {0, -355}, RDR_AOT_PH.name)

local RDR_SPOT_PH = addPlaceholder("RDR_SPOT_PH", nil, nil, {{"MPD_RDR_SPOT_LabelRootShow"}})
addStrokeText("RDR_SPOT", "SPOT", STROKE_FNT_DFLT_120, "CenterCenter", {0, -355}, RDR_SPOT_PH.name)
