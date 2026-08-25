dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/RDR/RDR_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/MDG_strokesDefs.lua")

local trackedTgt_MachAlt_ShiftX		= 27
local TUC_MachAlt_ShiftX = 40
local Radius_PPLI = 20
local HAFU_Scale = 1.1

local AA_TrackPlaceholder = addPlaceholder("AZ_EL_tracks", nil, nil, {{"MPD_RDR_AZ_EL_TWS_Position", tactical_display_sz_half}})

-- TUC
local TUC_Placeholder = addPlaceholder("TUC_Placeholder", nil, AA_TrackPlaceholder.name, {{"TDC_assignedDisplay"}})
addStrokeText(TUC_Placeholder.name.."TUC_Mach",           nil, STROKE_FNT_DFLT_100, "RightCenter", {-TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 0}, {"MPD_MSI_Mach"},     {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."TUC_Altitude",       nil, STROKE_FNT_DFLT_100, "LeftCenter",  { TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 0}, {"MPD_MSI_Altitude"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 1}, {"MPD_MSI_Mach"},     {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_Show", 1}, {"MPD_MSI_Altitude"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
local MainTrack_mach_altitude_Placeholder = addPlaceholder("MainTrack_mach_altitude_Placeholder", nil, AA_TrackPlaceholder.name, {{"TDC_notAssignedDisplay"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_Show", 2}, {"MPD_MSI_Mach"},     {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_Show", 2}, {"MPD_MSI_Altitude"}, {"MPD_RDR_AZ_EL_TWS_Color"}})

-- L&S and DT2
local MAIN_TRACK_Placeholder = addPlaceholder("MAIN_TRACK_Placeholder", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.MAIN}})
addStrokeText("MAIN_TRACK_Jamming",           "J",    STROKE_FNT_DFLT_100, "RightCenter",    {-trackedTgt_MachAlt_ShiftX, 0},     MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Jammer", 0},    {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText("MAIN_TRACK_FLIRTrack",         "F",    STROKE_FNT_DFLT_100, "LeftCenter",     {trackedTgt_MachAlt_ShiftX,  0},     MAIN_TRACK_Placeholder.name, {{"MPD_MSI_FLIR_Tracking"},{"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText("MAIN_TRACK_TrackedTgt_Symbol", "A",    STROKE_FNT_DFLT_100, "CenterCenter",   {0, 0}, 						      MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Jammer", 1}, 	  {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0}, {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
add_L_S_Symbol("MAIN_TRACK_LS", MAIN_TRACK_Placeholder.name, {0, 0}, {{"MPD_MSI_LS"}, {"MPD_RDR_TWS_Color"}})
addStrokeSymbol("MAIN_TRACK_DT2", {"stroke_symbols_MDI_AMPCD", "SA-DT2"}, "FromSet", {0, 0}, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_DT2"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeCircle("MAIN_TRACK_RadarContribution", 14,  nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_RadarContribution"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
addMeshCircle("MAIN_TRACK_DonorDot",            5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_DonorDot",   -Radius_PPLI},    {"MPD_RDR_AZ_EL_TWS_Color"}})
addMeshCircle("MAIN_TRACK_C2Dot",               5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_C2Dot",      -Radius_PPLI},    {"MPD_RDR_AZ_EL_TWS_Color"}})
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1},   {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1},   {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1},   {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1},   {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}

-- Track
local RDR_track_HAFU = addPlaceholder("RDR_track_HAFU", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.RANKED, 0}})
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},			"FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},			"FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},			"FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeSymbol(RDR_track_HAFU.name.."_OnBoard_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},			"FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0},	{"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
addStrokeText(RDR_track_HAFU.name.."_Jamming", 	 "J", STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, 	RDR_track_HAFU.name, {{"MPD_MSI_Jammer", 0}, 		{"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter",  {trackedTgt_MachAlt_ShiftX,  0}, 	RDR_track_HAFU.name, {{"MPD_MSI_FLIR_Tracking"}, 	{"MPD_RDR_AZ_EL_TWS_Color"}})
local RDR_track_Ranked = addStrokeText(RDR_track_HAFU.name.."_Ranked", nil, STROKE_FNT_DFLT_100, "CenterCenter",   {0, 0}, 	RDR_track_HAFU.name, {{"MPD_MSI_RankWithJammer"}, 	{"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeCircle(RDR_track_Ranked.name.."RadarContribution", 14, nil, RDR_track_Ranked.name, {{"MPD_MSI_RadarContribution"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
addMeshCircle(RDR_track_HAFU.name.."_DonorDot", 5.5, nil, 			 RDR_track_HAFU.name,   {{"MPD_MSI_PPLI_DonorDot", -Radius_PPLI},    {"MPD_RDR_AZ_EL_TWS_Color"}})
addMeshCircle(RDR_track_HAFU.name.."_C2Dot",    5.5, nil, 			 RDR_track_HAFU.name,   {{"MPD_MSI_PPLI_C2Dot",    -Radius_PPLI},    {"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeText(RDR_track_HAFU.name.."_PPLI_ID",       nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, RDR_track_HAFU.name, {{"MPD_MSI_PPLI_ID"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
local symbol
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1}, {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1}, {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1}, {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_track_HAFU.name.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1}, {"MPD_RDR_AZ_EL_TWS_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
local lowPriorityPlaceholder = addPlaceholder("lowPriorityPlaceholder", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.RANKED, 1}})
addStrokeLine(lowPriorityPlaceholder.name.."_Horizont_Line", 20, {10,  0}, 90,  lowPriorityPlaceholder.name, {{"MPD_RDR_AZ_EL_TWS_Color"}})
addStrokeLine(lowPriorityPlaceholder.name.."_Vertical_Line", 20, {0, -10},  0,  lowPriorityPlaceholder.name, {{"MPD_RDR_AZ_EL_TWS_Color"}})

----- FF
local RDR_FF_HAFU = addPlaceholder("RDR_FF_HAFU", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 1, SASymbolType.FIGHTER_TO_FIGHTER}})
local isOutlined = 0
addStrokeCircle(RDR_FF_HAFU.name.."_FF_Circle_Center", 1, nil, RDR_FF_HAFU.name, {{"MPD_MSI_FF_Color", isOutlined}})
addStrokeSymbol(RDR_FF_HAFU.name.."_OnBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_HAFU.name.."_OnBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_HAFU.name.."_OnBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
addStrokeSymbol(RDR_FF_HAFU.name.."_OnBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
addStrokeCircle(RDR_FF_HAFU.name.."RadarContribution", 14, {0, 0}, RDR_FF_HAFU.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_FF_Color"}})
addStrokeText(RDR_FF_HAFU.name.."_FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter",  {trackedTgt_MachAlt_ShiftX,  0}, RDR_FF_HAFU.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_FF_Color", isOutlined}})
local symbol
symbol = addStrokeSymbol(RDR_FF_HAFU.name.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_HAFU.name.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_HAFU.name.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(RDR_FF_HAFU.name.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, RDR_FF_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
symbol.init_rot = {180}
addStrokeSymbol(RDR_FF_HAFU.name.."_Angle_Only", {"stroke_symbols_MDI_AMPCD", "SA-Angle-Only"}, 	"FromSet", nil, 	 RDR_FF_HAFU.name, {{"MPD_MSI_Jammer", 1},   {"MPD_MSI_FF_Color", isOutlined}})
addStrokeSymbol(RDR_FF_HAFU.name.."_FF_Surface", {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"}, "FromSet", nil, 	 RDR_FF_HAFU.name, {{"MPD_MSI_Surface"}, 	 {"MPD_MSI_FF_Color", isOutlined}})
addStrokeSymbol(RDR_FF_HAFU.name.."_FF_Jammer",  {"stroke_symbols_MDI_AMPCD", "SA-Jammer"}, 		"FromSet", {-30, 0}, RDR_FF_HAFU.name, {{"MPD_MSI_Jammer", 0},   {"MPD_MSI_FF_Color", isOutlined}})

----- SURV
local RDR_SURV_HAFU = addPlaceholder("RDR_SURV_HAFU", nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 1, SASymbolType.SURVEILLANCE}})
addStrokeCircle(RDR_SURV_HAFU.name.."_Surveillance_Friendly", 15, nil, 									RDR_SURV_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY, 1}, {"MPD_MSI_Surv_Color", isOutlined}})
addStrokeBox(RDR_SURV_HAFU.name.."_Surveillance_Unknown", 				 20, 40, "CenterCenter", nil,  	RDR_SURV_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,  1}, {"MPD_MSI_Surv_Color", isOutlined}})
local symbol = addStrokeBox(RDR_SURV_HAFU.name.."_Surveillance_Hostile", 20, 20, "CenterCenter", nil, 	RDR_SURV_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,  1}, {"MPD_MSI_Surv_Color", isOutlined}})
symbol.init_rot = {45}
addStrokeSymbol(RDR_SURV_HAFU.name.."_Surveillance_Surface", {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"}, "FromSet", nil, RDR_SURV_HAFU.name, {{"MPD_MSI_Surface"}, {"MPD_MSI_Surv_Color", isOutlined}}, 1.8)
addStrokeCircle(RDR_SURV_HAFU.name.."RadarContribution", 7, {0, 0}, RDR_SURV_HAFU.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_Surv_Color", isOutlined}})
addStrokeText(RDR_SURV_HAFU.name.."_FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter",  {trackedTgt_MachAlt_ShiftX,  0}, RDR_SURV_HAFU.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_Surv_Color", isOutlined}})

----- PPLI
local PPLI_Element_Root = addPlaceholder("PPLI_Element_Root",    nil, AA_TrackPlaceholder.name, {{"MPD_MSI_Type", 1, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 1, SASymbolType.PPLI}})
addStrokeCircle(PPLI_Element_Root.name.."_PPLI_Circle", Radius_PPLI, nil, 							   PPLI_Element_Root.name, {{"MPD_MSI_PPLI_Color",    isOutlined}})
addMeshCircle(PPLI_Element_Root.name.."_DonorDot", 5.5, nil, 										   PPLI_Element_Root.name, {{"MPD_MSI_PPLI_DonorDot", -Radius_PPLI},    {"MPD_MSI_PPLI_Color", isOutlined}})
addMeshCircle(PPLI_Element_Root.name.."_C2Dot",    5.5, nil, 										   PPLI_Element_Root.name, {{"MPD_MSI_PPLI_C2Dot",    -Radius_PPLI},    {"MPD_MSI_PPLI_Color", isOutlined}})
addStrokeText(PPLI_Element_Root.name.."_PPLI_ID",       nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, PPLI_Element_Root.name, {{"MPD_MSI_PPLI_ID"}, 						{"MPD_MSI_PPLI_Color", isOutlined}})
addStrokeCircle(PPLI_Element_Root.name.."RadarContribution", 14, {0, 0}, PPLI_Element_Root.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_PPLI_Color", isOutlined}})
addStrokeText(PPLI_Element_Root.name.."_FLIRTrack", "F", STROKE_FNT_DFLT_100, "LeftCenter",  {trackedTgt_MachAlt_ShiftX,  0}, PPLI_Element_Root.name, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_Surv_Color", isOutlined}})