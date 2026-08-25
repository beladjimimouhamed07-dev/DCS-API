dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/RDR/RDR_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/MDG_strokesDefs.lua")

local trackedTgt_MachAlt_ShiftX	= 27
local TUC_MachAlt_ShiftX = 40
local RawHitWidth = 18
local AA_TrackPlaceholder = addPlaceholder("RDR_tracks", nil, nil, {{"MPD_RDR_TWS_Position", tactical_display_sz_half, 0}})
local Radius_PPLI = 20
local HAFU_Scale = 1.1

-- Launch Zones
local RangeTickLen = 55
local TWS_LaunchZonesPH   = addPlaceholder("TWS_LaunchZonesPH", nil,                             AA_TrackPlaceholder.name,  {{"TDC_assignedDisplay"}, {"MPD_RDR_TWS_Position", tactical_display_sz_half, 1}})
local TWS_LaunchZones     = addPlaceholder("TWS_LS_LaunchZones", {0, -tactical_display_sz_half}, TWS_LaunchZonesPH.name,    {{"MPD_RDR_AA_TWS_RAID_PB_ShowOtherLabels"}})
addRDRTick(TWS_LaunchZones.name.."TWS_R_max",   TWS_LaunchZones.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_TWS_Rmax_Pos", tactical_display_sz}})
addRDRTick(TWS_LaunchZones.name.."TWS_RNE",     TWS_LaunchZones.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_TWS_Rne_Pos", tactical_display_sz}})
local TWS_LaunchZones_R_Min = addRDRTick(TWS_LaunchZones.name.."TWS_R_min", TWS_LaunchZones.name, RangeTickLen, {RangeTickLen / 2, 0}, 90, {{"MPD_RDR_TWS_Rmin_Pos", tactical_display_sz}})
addVarLenStrokeLine(TWS_LaunchZones.name.."TWS_SteeringLine", nil, {0, RangeTickLen / 2}, -90, TWS_LaunchZones_R_Min.name, {{"MPD_RDR_TWS_SteeringLineLen", tactical_display_sz}})

-- TUC
local TUC_Placeholder = addPlaceholder("TUC_Placeholder", nil, AA_TrackPlaceholder.name, {{"TDC_assignedDisplay"}})
addStrokeText(TUC_Placeholder.name.."TUC_Mach",           nil, STROKE_FNT_DFLT_100, "RightCenter", {-TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 0}, {"MPD_MSI_Mach"},     {"MPD_RDR_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."TUC_Altitude",       nil, STROKE_FNT_DFLT_100, "LeftCenter",  { TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 0}, {"MPD_MSI_Altitude"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 1}, {"MPD_MSI_Mach"},     {"MPD_RDR_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 1}, {"MPD_MSI_Altitude"}, {"MPD_RDR_TWS_Color"}})
local MainTrack_mach_altitude_Placeholder = addPlaceholder("MainTrack_mach_altitude_Placeholder", nil, AA_TrackPlaceholder.name, {{"TDC_notAssignedDisplay"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_Show", 2}, {"MPD_MSI_Mach"},     {"MPD_RDR_TWS_Color"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_Show", 2}, {"MPD_MSI_Altitude"}, {"MPD_RDR_TWS_Color"}})

-- L&S and DT2
local MAIN_TRACK_Placeholder = addPlaceholder("MAIN_TRACK_Placeholder", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.MAIN}})
addStrokeText("MAIN_TRACK_Jamming",         "J",    STROKE_FNT_DFLT_100, "RightCenter",    {-trackedTgt_MachAlt_ShiftX, 0},     MAIN_TRACK_Placeholder.name, {{"MPD_RDR_AA_NOT_FLOOD"}, {"MPD_MSI_Jammer", 0},    {"MPD_RDR_TWS_Color"}})
addStrokeText("MAIN_TRACK_FLIRTrack",       "F",    STROKE_FNT_DFLT_100, "LeftCenter",     {trackedTgt_MachAlt_ShiftX,  0},     MAIN_TRACK_Placeholder.name, {{"MPD_RDR_AA_NOT_FLOOD"}, {"MPD_MSI_FLIR_Tracking"},{"MPD_RDR_TWS_Color"}})
local MAIN_TRACK_Course_Line = addStrokeLine("MAIN_TRACK_Course_Line", 20, {0, 0}, 0, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Aspect", 20}, {"MPD_RDR_TWS_Color"}})
addStrokeLine("TrackedTgtAccelerationVector", 20, {0, trackedTgtAspectAngPtrLen}, 0, MAIN_TRACK_Course_Line.name, {{"MPD_MSI_LS"}, {"MPD_RDR_AA_TrackedTarget_AccelerationVec"}, {"MPD_RDR_TWS_Color"}})
local MAIN_TRACK_Symbol_OnboardPlaceholder = addPlaceholder("MAIN_TRACK_Symbol_OnboardPlaceholder", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_OnboardMemory"}})
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},	"FromSet", nil, MAIN_TRACK_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},	{"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},	"FromSet", nil, MAIN_TRACK_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},	{"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},	{"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0},   {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
add_L_S_Symbol("MAIN_TRACK_LS", MAIN_TRACK_Placeholder.name, {0, 0}, {{"MPD_MSI_LS"}, {"MPD_RDR_TWS_Color"}})
addStrokeSymbol("MAIN_TRACK_DT2", {"stroke_symbols_MDI_AMPCD", "SA-DT2"}, "FromSet", {0, 0}, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_DT2"}, {"MPD_RDR_TWS_Color"}})
addStrokeCircle("MAIN_TRACK_RadarContribution", 14,  nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_RadarMemory"}, {"MPD_RDR_TWS_Color"}})
addMeshCircle("MAIN_TRACK_DonorDot",            5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_DonorDot",   -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
addMeshCircle("MAIN_TRACK_C2Dot",               5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_C2Dot",      -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
local MAIN_TRACK_Symbol_OffboardPlaceholder = addPlaceholder("MAIN_TRACK_Symbol_OffboardPlaceholder", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_OffboardMemory"}})
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, MAIN_TRACK_Symbol_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1},   {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, MAIN_TRACK_Symbol_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1},   {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Symbol_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1},   {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Symbol_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1},   {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
addStrokeCircle("AIM7_Max_Seeker_Rng", 25,  {0, 0}, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_LS"}, {"MPD_RDR_AA_AIM7_MAX_SEEKER_RNG", tactical_display_sz_half * 2}})

-- Radar Track
local AA_BackTrackPlaceholder = addPlaceholder("RDR_backTrackPH", nil, AA_TrackPlaceholder.name, {{"MPD_RDR_SttRaidGroupLabelShow", 0}})
local RDR_track_HAFU = addPlaceholder("RDR_track_HAFU", nil, AA_BackTrackPlaceholder.name, {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.RANKED, 0}})
addStrokeLine(RDR_track_HAFU.name.."_Course_Line", 20, {0, 0}, 0, RDR_track_HAFU.name, {{"MPD_MSI_Aspect", 20}, {"MPD_RDR_TWS_Color"}})
local TRACK_HAFU_Symbol_OnboardPlaceholder = addPlaceholder("TRACK_HAFU_Symbol_OnboardPlaceholder", nil, RDR_track_HAFU.name, {{"MPD_MSI_OnboardMemory"}})
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},	"FromSet", nil, TRACK_HAFU_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},	"FromSet", nil, TRACK_HAFU_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, TRACK_HAFU_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, TRACK_HAFU_Symbol_OnboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeText(RDR_track_HAFU.name.."_Jamming",      "J", STROKE_FNT_DFLT_100, "RightCenter", {-27, 0},                          RDR_track_HAFU.name, {{"MPD_RDR_AA_NOT_FLOOD"}, {"MPD_MSI_Jammer", 0},     {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_FLIRTrack",    "F", STROKE_FNT_DFLT_100, "LeftCenter",  {27, 0},                           RDR_track_HAFU.name, {{"MPD_RDR_AA_NOT_FLOOD"}, {"MPD_MSI_FLIR_Tracking"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_Ranked", nil, STROKE_FNT_DFLT_100, "CenterCenter", {0, 0}, RDR_track_HAFU.name, {{"MPD_MSI_RankWithJammer"}, {"MPD_RDR_TWS_Color"}})
addStrokeCircle(RDR_track_HAFU.name.."RadarContribution", 14, {0, 0}, RDR_track_HAFU.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_RadarMemory"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter", {trackedTgt_MachAlt_ShiftX, 0}, RDR_track_HAFU.name, {{"MPD_RDR_AA_STT_1LOOK_RAID_TrackAltitude"}, {"MPD_RDR_TWS_Color"}})
addMeshCircle(RDR_track_HAFU.name.."_DonorDot", 5.5, nil, RDR_track_HAFU.name, {{"MPD_MSI_PPLI_DonorDot",   -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
addMeshCircle(RDR_track_HAFU.name.."_C2Dot",    5.5, nil, RDR_track_HAFU.name, {{"MPD_MSI_PPLI_C2Dot",      -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_PPLI_ID",       nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, RDR_track_HAFU.name, {{"MPD_MSI_PPLI_ID"}, {"MPD_RDR_TWS_Color"}})
local RDR_track_HAFU_OffboardPlaceholder = addPlaceholder("RDR_track_HAFU_OffboardPlaceholder", nil, RDR_track_HAFU.name, {{"MPD_MSI_OffboardMemory"}})
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, RDR_track_HAFU_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1},  {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, RDR_track_HAFU_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1},  {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_track_HAFU_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1},  {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_track_HAFU_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1},  {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
local lowPriorityPlaceholder = addPlaceholder("lowPriorityPlaceholder", nil, AA_BackTrackPlaceholder.name,   {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.RANKED, 1}})
addStrokeLine(lowPriorityPlaceholder.name.."_Horizont_Line", 20, {10,  0}, 90,  lowPriorityPlaceholder.name, {{"MPD_RDR_TWS_Color"}})
addStrokeLine(lowPriorityPlaceholder.name.."_Vertical_Line", 20, {0, -10},  0,  lowPriorityPlaceholder.name, {{"MPD_RDR_TWS_Color"}})

local RDR_GROUP_PH = addPlaceholder("RDR_GROUP", nil, AA_TrackPlaceholder.name, {{"MPD_RDR_SttRaidGroupLabelShow", 1}})
addStrokeText(RDR_GROUP_PH.name.."_Many", "M", STROKE_FNT_DFLT_100, "RightCenter", {0, 0}, RDR_GROUP_PH.name)
addStrokeText("RDR_GROUP_contactAltitude", nil, STROKE_FNT_DFLT_100, "LeftCenter", {RawHitWidth, 0}, RDR_GROUP_PH.name, {{"MPD_RDR_AA_STT_1LOOK_RAID_TrackAltitude"}})

-- FF
local RDR_FF_Element_Root = addPlaceholder("RDR_ff", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 0, SASymbolType.FIGHTER_TO_FIGHTER}})
addStrokeCircle(RDR_FF_Element_Root.name.."_FF_Circle_Center", 1,   nil, RDR_FF_Element_Root.name, {{"MPD_RDR_TWS_Color"}})
addStrokeLine(RDR_FF_Element_Root.name.."_Course_Line", 20, {0, 0}, 0, RDR_FF_Element_Root.name, {{"MPD_MSI_Aspect", 20}, {"MPD_RDR_TWS_Color"}})
addStrokeSymbol(RDR_FF_Element_Root.name.."_OnBoard_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},	"FromSet", nil, RDR_FF_Element_Root.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_Element_Root.name.."_OnBoard_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},	"FromSet", nil, RDR_FF_Element_Root.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_Element_Root.name.."_OnBoard_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, RDR_FF_Element_Root.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_Element_Root.name.."_OnBoard_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, RDR_FF_Element_Root.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
addStrokeCircle(RDR_FF_Element_Root.name.."RadarContribution", 14, {0, 0}, RDR_FF_Element_Root.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_RadarMemory"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_FF_Element_Root.name.."FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter", {trackedTgt_MachAlt_ShiftX,  0}, RDR_FF_Element_Root.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_RDR_TWS_Color"}})
local FF_OffboardPlaceholder = addPlaceholder("FF_OffboardPlaceholder", nil, RDR_FF_Element_Root.name, {{"MPD_MSI_OffboardMemory"}})
symbol = addStrokeSymbol(RDR_FF_Element_Root.name.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, FF_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_Element_Root.name.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, FF_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_Element_Root.name.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, FF_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_Element_Root.name.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, FF_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1}, {"MPD_RDR_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
addStrokeSymbol(RDR_FF_Element_Root.name.."_Angle_Only",    {"stroke_symbols_MDI_AMPCD", "SA-Angle-Only"},      "FromSet", nil,         RDR_FF_Element_Root.name, {{"MPD_MSI_Jammer", 1},   {"MPD_RDR_TWS_Color"}})
addStrokeSymbol(RDR_FF_Element_Root.name.."_FF_Surface",    {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"},  "FromSet", nil,         RDR_FF_Element_Root.name, {{"MPD_MSI_Surface"},     {"MPD_RDR_TWS_Color"}})
addStrokeSymbol(RDR_FF_Element_Root.name.."_FF_Jammer",     {"stroke_symbols_MDI_AMPCD", "SA-Jammer"},          "FromSet", {-30, 0},    RDR_FF_Element_Root.name, {{"MPD_MSI_Jammer", 0},   {"MPD_RDR_TWS_Color"}})

-- PPLI
local RDR_PPLI_Element_Root = addPlaceholder("RDR_ppli",    nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 0, SASymbolType.PPLI}})
addStrokeCircle(RDR_PPLI_Element_Root.name.."_PPLI_Circle", Radius_PPLI, nil, RDR_PPLI_Element_Root.name, {{"MPD_MSI_OffboardMemory"}, {"MPD_RDR_TWS_Color"}})
addMeshCircle(RDR_PPLI_Element_Root.name.."_DonorDot", 5.5, nil, RDR_PPLI_Element_Root.name, {{"MPD_MSI_PPLI_DonorDot",   -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
addMeshCircle(RDR_PPLI_Element_Root.name.."_C2Dot",    5.5, nil, RDR_PPLI_Element_Root.name, {{"MPD_MSI_PPLI_C2Dot",      -Radius_PPLI},    {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_PPLI_Element_Root.name.."_PPLI_ID",       nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, RDR_PPLI_Element_Root.name, {{"MPD_MSI_PPLI_ID"}, {"MPD_RDR_TWS_Color"}})
addStrokeLine(RDR_PPLI_Element_Root.name.."_Course_Line", 20, {0, 0}, 0, RDR_PPLI_Element_Root.name, {{"MPD_MSI_Aspect", 20}, {"MPD_RDR_TWS_Color"}})
addStrokeCircle(RDR_PPLI_Element_Root.name.."RadarContribution", 14, {0, 0}, RDR_PPLI_Element_Root.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_RadarMemory"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_PPLI_Element_Root.name.."FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter", {trackedTgt_MachAlt_ShiftX,  0}, RDR_PPLI_Element_Root.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_RDR_TWS_Color"}})

-- SURV
local RDR_SURVEILLANCE_Element_Root = addPlaceholder("RDR_surveillance", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 0, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 0, SASymbolType.SURVEILLANCE}})
local SURVEILLANCE_OffboardPlaceholder = addPlaceholder("SURVEILLANCE_OffboardPlaceholder", nil, RDR_SURVEILLANCE_Element_Root.name, {{"MPD_MSI_OffboardMemory"}})
addStrokeCircle(SURVEILLANCE_OffboardPlaceholder.name.."_Surveillance_Friendly", 15, nil, SURVEILLANCE_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY, 1}, {"MPD_RDR_TWS_Color"}})
addStrokeBox(SURVEILLANCE_OffboardPlaceholder.name.."_Surveillance_Unknown", 20, 40, "CenterCenter", nil, SURVEILLANCE_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN, 1}, {"MPD_RDR_TWS_Color"}})
local symbol = addStrokeBox(SURVEILLANCE_OffboardPlaceholder.name.."_Surveillance_Hostile", 20, 20, "CenterCenter", nil, SURVEILLANCE_OffboardPlaceholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE, 1}, {"MPD_RDR_TWS_Color"}})
symbol.init_rot = {45}
addStrokeSymbol(SURVEILLANCE_OffboardPlaceholder.name.."_Surveillance_Surface", {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"}, "FromSet", nil, SURVEILLANCE_OffboardPlaceholder.name, {{"MPD_MSI_Surface"}, {"MPD_RDR_TWS_Color"}}, 1.8)
addStrokeLine(RDR_SURVEILLANCE_Element_Root.name.."_Course_Line", 20, {0, 0}, 0, RDR_SURVEILLANCE_Element_Root.name, {{"MPD_MSI_Aspect", 20}, {"MPD_RDR_TWS_Color"}})
addStrokeCircle(RDR_SURVEILLANCE_Element_Root.name.."RadarContribution", 7, {0, 0}, RDR_SURVEILLANCE_Element_Root.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_RadarMemory"}, {"MPD_RDR_TWS_Color"}})
addStrokeText(RDR_SURVEILLANCE_Element_Root.name.."FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter", {trackedTgt_MachAlt_ShiftX,  0}, RDR_SURVEILLANCE_Element_Root.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_RDR_TWS_Color"}})