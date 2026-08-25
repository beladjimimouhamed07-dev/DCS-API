dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/MPD_page_defs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/MDG_strokesDefs.lua")
dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/RDR/RDR_defs.lua")

local trackedTgt_MachAlt_ShiftX	= 27
local TUC_MachAlt_ShiftX = 40
local PPLI_Radius = 20
local HAFU_Scale = 1.1

local TXDSG_LINE_TYPE =
{
	SOLID	= 1,
	DASHED	= 2,
}

function SA_PPLI_Symbol(parent, isOutlined)
	addStrokeCircle(parent.."_PPLI_Circle",         PPLI_Radius, nil,        parent, {{"MPD_MSI_PPLI_Color", isOutlined}})
	addStrokeLine(parent.."_PPLI_Course_Line",      PPLI_Radius, {0, 0}, 0,  parent, {{"MPD_MSI_Course", 20},            	 	{"MPD_MSI_PPLI_Color", isOutlined}})
	addMeshCircle(parent.."_DonorDot",              5.5,    	 nil,        parent, {{"MPD_MSI_PPLI_DonorDot", -PPLI_Radius}, 	{"MPD_MSI_PPLI_Color", isOutlined}})
	addMeshCircle(parent.."_C2Dot",                 5.5,    	 nil,        parent, {{"MPD_MSI_PPLI_C2Dot"},             		{"MPD_MSI_PPLI_Color", isOutlined}})
	addStrokeText(parent.."_PPLI_ID", nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, parent, {{"MPD_MSI_PPLI_ID"},   {"MPD_MSI_PPLI_Color", isOutlined}})
	addVarLenStrokeLine(parent.."_Member_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.SOLID,  PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, false, 7, 7)
	addVarLenStrokeLine(parent.."_Donor_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.DASHED, PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, true,  7, 7)
	addStrokeCircle(parent.."RadarContribution", 14, nil, parent, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_PPLI_Color", isOutlined}})
	addStrokeText(parent.."_JammerFlirTracking", "F", STROKE_FNT_DFLT_100, "LeftCenter", {30, 0}, parent, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_PPLI_Color", isOutlined}})
end

function SA_FF_Symbol(parent, isOutlined)
	addStrokeCircle(parent.."_FF_Circle_Center",    1,  nil,        parent, {{"MPD_MSI_FF_Color", isOutlined}})
	addStrokeLine(parent.."_FF_Course_Line",        20, {0, 0}, 0,  parent, {{"MPD_MSI_Course", 20}, {"MPD_MSI_FF_Color", isOutlined}})
	addStrokeSymbol(parent.."_OnBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},  {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	addStrokeSymbol(parent.."_OnBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},  {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	addStrokeSymbol(parent.."_OnBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},  {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	addStrokeSymbol(parent.."_OnBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0},  {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	addStrokeCircle(parent.."RadarContribution", 14, nil, parent, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_FF_Color", isOutlined}})
	addVarLenStrokeLine(parent.."_Member_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.SOLID,  PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, false, 7, 7)
	addVarLenStrokeLine(parent.."_Donor_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.DASHED, PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, true,  7, 7)
	local symbol
	symbol = addStrokeSymbol(parent.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	symbol.init_rot = {180}
	symbol = addStrokeSymbol(parent.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	symbol.init_rot = {180}
	symbol = addStrokeSymbol(parent.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	symbol.init_rot = {180}
	symbol = addStrokeSymbol(parent.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1}, {"MPD_MSI_FF_Color", isOutlined}}, HAFU_Scale)
	symbol.init_rot = {180}
	addStrokeSymbol(parent.."_Angle_Only", {"stroke_symbols_MDI_AMPCD", "SA-Angle-Only"},           "FromSet",      nil,      parent, {{"MPD_MSI_Jammer", 1},     {"MPD_MSI_FF_Color", isOutlined}})
	addStrokeSymbol(parent.."_FF_Surface", {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"},       "FromSet",      nil,      parent, {{"MPD_MSI_Surface"},       {"MPD_MSI_FF_Color", isOutlined}})
	addStrokeSymbol(parent.."_FF_Jammer",  {"stroke_symbols_MDI_AMPCD", "SA-Jammer"},               "FromSet",      {-30, 0}, parent, {{"MPD_MSI_Jammer", 0},     {"MPD_MSI_FF_Color", isOutlined}})
	addStrokeText(parent.."_FF_JammerFlirTracking", "F", STROKE_FNT_DFLT_100,                       "LeftCenter",   {30, 0},  parent, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_FF_Color", isOutlined}})
end

function SA_Surveillance_Symbol(parent, isOutlined)
	addStrokeLine(parent.."_Surveillance_Course_Line", 20, {0, 0}, 0,          parent, {{"MPD_MSI_Course", 15},                  {"MPD_MSI_Surv_Color", isOutlined}})
	addStrokeCircle(parent.."_Surveillance_Friendly",  15, nil,                parent, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY, 1}, {"MPD_MSI_Surv_Color", isOutlined}})
	addStrokeBox(parent.."_Surveillance_Unknown", 20, 40, "CenterCenter", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,  1}, {"MPD_MSI_Surv_Color", isOutlined}})
	local symbol = addStrokeBox(parent.."_Surveillance_Hostile", 20, 20, "CenterCenter", nil, parent, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE, 1}, {"MPD_MSI_Surv_Color", isOutlined}})
	symbol.init_rot = {45}
	addStrokeSymbol(parent.."_Surveillance_Surface", {"stroke_symbols_MDI_AMPCD", "SA-Surface-Symbol"}, "FromSet", nil, parent, {{"MPD_MSI_Surface", SASymbolType.SURVEILLANCE}, {"MPD_MSI_Surv_Color", isOutlined}}, 1.8)
	addStrokeCircle(parent.."RadarContribution", 7, nil, parent, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_Surv_Color", isOutlined}})
	addStrokeText(parent.."_JammerFlirTracking", "F", STROKE_FNT_DFLT_100, "LeftCenter", {30, 0}, parent, {{"MPD_MSI_FLIR_Tracking"}, {"MPD_MSI_Surv_Color", isOutlined}})
	addVarLenStrokeLine(parent.."_Member_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.SOLID,  PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, false, 7, 7)
	addVarLenStrokeLine(parent.."_Donor_LineToTarget",	200, nil, nil, parent, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.DASHED, PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, true,  7, 7)
end

local SA_Element_Root = addPlaceholder("SA_tracks", nil, nil, {{"MPD_SA_MSI_SymbolPosition"}})

-- TUC
local TUC_Placeholder = addPlaceholder("TUC_Placeholder", nil, SA_Element_Root.name, {{"TDC_assignedDisplay"}})
addStrokeText(TUC_Placeholder.name.."TUC_Mach",           nil, STROKE_FNT_DFLT_100, "RightCenter", {-TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 0}, {"MPD_MSI_Mach"},     {"MPD_MSI_FF_Color"}})
addStrokeText(TUC_Placeholder.name.."TUC_Altitude",       nil, STROKE_FNT_DFLT_100, "LeftCenter",  { TUC_MachAlt_ShiftX, 0},        TUC_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 0}, {"MPD_MSI_Altitude"}, {"MPD_MSI_FF_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 1}, {"MPD_MSI_Mach"},     {"MPD_MSI_FF_Color"}})
addStrokeText(TUC_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, TUC_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 1}, {"MPD_MSI_Altitude"}, {"MPD_MSI_FF_Color"}})
local MainTrack_mach_altitude_Placeholder = addPlaceholder("MainTrack_mach_altitude_Placeholder", nil, SA_Element_Root.name, {{"TDC_notAssignedDisplay"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Mach",     nil, STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 2}, {"MPD_MSI_Mach"},     {"MPD_MSI_FF_Color"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."MainTrack_Altitude", nil, STROKE_FNT_DFLT_100, "LeftCenter",  { trackedTgt_MachAlt_ShiftX, 0}, MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 2}, {"MPD_MSI_Altitude"}, {"MPD_MSI_FF_Color"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."Step_Mach",          nil, STROKE_FNT_DFLT_100, "RightCenter", {-TUC_MachAlt_ShiftX, 0},        MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 3}, {"MPD_MSI_Mach"},     {"MPD_MSI_FF_Color"}})
addStrokeText(MainTrack_mach_altitude_Placeholder.name.."Step_Altitude",      nil, STROKE_FNT_DFLT_100, "LeftCenter",  { TUC_MachAlt_ShiftX, 0},        MainTrack_mach_altitude_Placeholder.name, {{"MPD_MSI_TUC_STEP_Show", 3}, {"MPD_MSI_Altitude"}, {"MPD_MSI_FF_Color"}})

-- L&S and DT2
local MAIN_TRACK_Placeholder = addPlaceholder("MAIN_TRACK_Placeholder", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.MAIN}})
addStrokeText("MAIN_TRACK_Jamming",           "J",    STROKE_FNT_DFLT_100, "RightCenter",    {-trackedTgt_MachAlt_ShiftX, 0},     MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Jammer", 0},    {"MPD_MSI_FF_Color"}})
addStrokeText("MAIN_TRACK_FLIRTrack",         "F",    STROKE_FNT_DFLT_100, "LeftCenter",     {trackedTgt_MachAlt_ShiftX,  0},     MAIN_TRACK_Placeholder.name, {{"MPD_MSI_FLIR_Tracking"},{"MPD_MSI_FF_Color"}})
addStrokeText("MAIN_TRACK_TrackedTgt_Symbol", "A",    STROKE_FNT_DFLT_100, "CenterCenter",   {0, 0}, 						      MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Jammer", 1}, 	  {"MPD_MSI_FF_Color"}})
addStrokeLine("MAIN_TRACK_Course_Line", 20, {0, 0}, 0, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_Course", 20}, {"MPD_MSI_FF_Color"}})
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol("MAIN_TRACK_HAFU_Symbol_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},	"FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0}, {"MPD_MSI_FF_Color"}}, HAFU_Scale)
add_L_S_Symbol("MAIN_TRACK_LS", MAIN_TRACK_Placeholder.name, {0, 0}, {{"MPD_MSI_LS"}, {"MPD_MSI_FF_Color"}})
addStrokeSymbol("MAIN_TRACK_DT2", {"stroke_symbols_MDI_AMPCD", "SA-DT2"}, "FromSet", {0, 0}, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_DT2"}, {"MPD_MSI_FF_Color"}})
addStrokeCircle("MAIN_TRACK_RadarContribution", 14,  nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_FF_Color"}})
addMeshCircle("MAIN_TRACK_DonorDot",            5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_DonorDot",   -PPLI_Radius},    {"MPD_MSI_FF_Color"}})
addMeshCircle("MAIN_TRACK_C2Dot",               5.5, nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_PPLI_C2Dot",      -PPLI_Radius},    {"MPD_MSI_FF_Color"}})
addVarLenStrokeLine("MAIN_TRACK_Member_LineToTarget",	200, nil, nil, MAIN_TRACK_Placeholder.name, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.SOLID,  PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, false, 7, 7)
addVarLenStrokeLine("MAIN_TRACK_Donor_LineToTarget",	200, nil, nil, MAIN_TRACK_Placeholder.name, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.DASHED, PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, true,  7, 7)
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1},   {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1},   {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1},   {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol("MAIN_TRACK_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, MAIN_TRACK_Placeholder.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1},   {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}

-- Track
local Track_HAFU = addPlaceholder("Track_HAFU", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.RANKED, 0}})
addStrokeSymbol(Track_HAFU.name.."_OnBoard_Friendly",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"},			"FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol(Track_HAFU.name.."_OnBoard_Hostile",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},			"FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol(Track_HAFU.name.."_OnBoard_Unknown",		{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},			"FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeSymbol(Track_HAFU.name.."_OnBoard_Ambiguous_sqr",	{"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},			"FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 0},	{"MPD_MSI_FF_Color"}}, HAFU_Scale)
addStrokeLine(Track_HAFU.name.."_Course_Line", 20, {0, 0}, 0, Track_HAFU.name, {{"MPD_MSI_Course", 20}, {"MPD_MSI_FF_Color"}})
addStrokeText(Track_HAFU.name.."_Jamming",      "J", STROKE_FNT_DFLT_100, "RightCenter", {-trackedTgt_MachAlt_ShiftX, 0}, Track_HAFU.name, {{"MPD_MSI_Jammer", 0}, 		{"MPD_MSI_FF_Color"}})
addStrokeText(Track_HAFU.name.."_FLIRTrack",    "F", STROKE_FNT_DFLT_100, "LeftCenter",  {trackedTgt_MachAlt_ShiftX,  0}, Track_HAFU.name, {{"MPD_MSI_FLIR_Tracking"}, 	{"MPD_MSI_FF_Color"}})
addMeshCircle(Track_HAFU.name.."_DonorDot", 5.5, nil, Track_HAFU.name, {{"MPD_MSI_PPLI_DonorDot", -PPLI_Radius}, 	{"MPD_MSI_PPLI_Color", isOutlined}})
addMeshCircle(Track_HAFU.name.."_C2Dot",    5.5, nil, Track_HAFU.name, {{"MPD_MSI_PPLI_C2Dot"},             		{"MPD_MSI_PPLI_Color", isOutlined}})
addStrokeText(Track_HAFU.name.."_PPLI_ID",       nil, STROKE_FNT_DFLT_120, "CenterCenter", nil, Track_HAFU.name, {{"MPD_MSI_PPLI_ID"}, {"MPD_RDR_AZ_EL_TWS_Color"}})
addVarLenStrokeLine(Track_HAFU.name.."_Member_LineToTarget",	200, nil, nil, Track_HAFU.name, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.SOLID,  PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, false, 7, 7)
addVarLenStrokeLine(Track_HAFU.name.."_Donor_LineToTarget",		200, nil, nil, Track_HAFU.name, {{"MPD_SA_MSI_LineToTarget", TXDSG_LINE_TYPE.DASHED, PPLI_Radius + 1}, {"MPD_SA_TXDSG_Color", isOutlined}}, true,  7, 7)
local RDR_track_Ranked = addStrokeText(Track_HAFU.name.."_Ranked", nil, STROKE_FNT_DFLT_100, "CenterCenter", {0, 0},      Track_HAFU.name, {{"MPD_MSI_RankWithJammer"}, {"MPD_MSI_FF_Color"}})
addStrokeCircle(RDR_track_Ranked.name.."RadarContribution", 14, nil, RDR_track_Ranked.name, {{"MPD_MSI_RadarContribution"}, {"MPD_MSI_FF_Color"}})
local symbol
symbol = addStrokeSymbol(Track_HAFU.name.."_OffBoard_Friendly",  {"stroke_symbols_MDI_AMPCD", "SA-FF-Friendly"}, "FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.FRIENDLY,  1}, {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(Track_HAFU.name.."_OffBoard_Hostile",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Hostile"},  "FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.HOSTILE,   1}, {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(Track_HAFU.name.."_OffBoard_Unknown",   {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.UNKNOWN,   1}, {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
symbol = addStrokeSymbol(Track_HAFU.name.."_OffBoard_Ambiguous", {"stroke_symbols_MDI_AMPCD", "SA-FF-Unknown"},  "FromSet", nil, Track_HAFU.name, {{"MPD_MSI_HAFU", HAFU_TYPE.AMBIGUOUS, 1}, {"MPD_MSI_FF_Color"}}, HAFU_Scale)
symbol.init_rot = {180}
local lowPriorityPlaceholder = addPlaceholder("lowPriorityPlaceholder", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.RANKED, 1}})
addStrokeLine(lowPriorityPlaceholder.name.."_Horizont_Line", 20, {10,  0}, 90,  lowPriorityPlaceholder.name, {{"MPD_MSI_FF_Color"}})
addStrokeLine(lowPriorityPlaceholder.name.."_Vertical_Line", 20, {0, -10},  0,  lowPriorityPlaceholder.name, {{"MPD_MSI_FF_Color"}})

----- PPLI
local SA_PPLI_Element_Root = addPlaceholder("SA_PPLI_Element_Root", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 2, SASymbolType.PPLI}})
local SA_PPLI_Element_Outlined = addPlaceholder(SA_PPLI_Element_Root.name.."_Outlined", nil, SA_PPLI_Element_Root.name, {{"MPD_SA_DisableDrawOutlinedOnDDI"}})
stroke_thickness = DMC_outline_thickness
stroke_fuzziness = DMC_outline_fuzziness
stroke_font = "font_MPD_DMC_outline"
SA_PPLI_Symbol(SA_PPLI_Element_Outlined.name, 1)

local SA_PPLI_Element_DMC = addPlaceholder(SA_PPLI_Element_Root.name.."_DMC", nil, SA_PPLI_Element_Root.name)
stroke_thickness = DMC_stroke_thickness
stroke_fuzziness = DMC_stroke_fuzziness
stroke_font = "font_MPD_DMC_main"
SA_PPLI_Symbol(SA_PPLI_Element_DMC.name, 0)

----- FF
local SA_FF_Element_Root = addPlaceholder("SA_ff", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 2, SASymbolType.FIGHTER_TO_FIGHTER}})

local SA_FF_Element_Outlined = addPlaceholder(SA_FF_Element_Root.name.."_Outlined", nil, SA_FF_Element_Root.name, {{"MPD_SA_DisableDrawOutlinedOnDDI"}})
stroke_thickness = DMC_outline_thickness
stroke_fuzziness = DMC_outline_fuzziness
stroke_font = "font_MPD_DMC_outline"
SA_FF_Symbol(SA_FF_Element_Outlined.name, 1)

local SA_FF_Element_DMC = addPlaceholder(SA_FF_Element_Root.name.."_DMC", nil, SA_FF_Element_Root.name)
stroke_thickness = DMC_stroke_thickness
stroke_fuzziness = DMC_stroke_fuzziness
stroke_font = "font_MPD_DMC_main"
SA_FF_Symbol(SA_FF_Element_DMC.name, 0)

----- SURV
local SA_SURVEILLANCE_Element_Root = addPlaceholder("SA_surveillance", nil, SA_Element_Root.name, {{"MPD_MSI_Type", 2, MSI_TRACK_TYPE.SIMPLE}, {"MPD_MSI_OFFBOARD_SHOW", 2, SASymbolType.SURVEILLANCE}})

local SA_SURVEILLANCE_Element_Outlined = addPlaceholder(SA_SURVEILLANCE_Element_Root.name.."_Outlined", nil, SA_SURVEILLANCE_Element_Root.name, {{"MPD_SA_DisableDrawOutlinedOnDDI"}})
stroke_thickness = DMC_outline_thickness
stroke_fuzziness = DMC_outline_fuzziness
stroke_font = "font_MPD_DMC_outline"
SA_Surveillance_Symbol(SA_SURVEILLANCE_Element_Outlined.name, 1)

local SA_SURVEILLANCE_Element_DMC = addPlaceholder(SA_SURVEILLANCE_Element_Root.name.."_DMC", nil, SA_SURVEILLANCE_Element_Root.name)
stroke_thickness = DMC_stroke_thickness
stroke_fuzziness = DMC_stroke_fuzziness
stroke_font = "font_MPD_DMC_main"
SA_Surveillance_Symbol(SA_SURVEILLANCE_Element_DMC.name, 0)