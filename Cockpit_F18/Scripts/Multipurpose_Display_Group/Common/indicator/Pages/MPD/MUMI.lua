dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/MPD_page_defs.lua")

local MenuPageSublevel = 
{
	MUMI_MAIN_MENU_PAGE		= 0,
	MUMI_MORE_MENU_PAGE		= 1,
}

local MUMI_BaseName = "MUMI_PAGE_"

local rootName = "MUMI_root"
addPlaceholder(rootName, {0, 0})

local MUMI_Menu_Main = "MUMI_Main_Menu_Root_PB"
addPlaceholder(MUMI_Menu_Main, {0, 0}, rootName, {{"MPD_MUMI_PB_Label_Main", MenuPageSublevel.MUMI_MAIN_MENU_PAGE}})

add_PB_label(1,  {"RECCE", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_RECCE_Box"}}})
add_PB_label(2,  {"HARM", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_HARM_Box"}}})
add_PB_label(3,  {"RDR", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_RDR_Box"}}})
add_PB_label(4,  {"TCN", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_TCN_Box"}}})
add_PB_label(5,  {"WYPT", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_WYPT_Box"}}})

add_PB_label(6,  {"BIT", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_BIT_Box"}}})
add_PB_label(7,  {"MI", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_MI_Box"}}})
add_PB_label(8,  {"IFF", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_IFF_Box"}}})
add_PB_label(9,  {"DL 13", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_DL13_Box"}}})
add_PB_label(10,  {"MORE", 		MUMI_Menu_Main})

add_PB_label(11,  {"ID", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_ID_Box"}}})
add_PB_label(12,  {"MON", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_MON_Box"}}},	{"FATG", 	MUMI_Menu_Main})
add_PB_label(13,  {"COMM", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_COMM_Box"}}})
add_PB_label(14,  {"HOLD", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_HOLD_Box"}}})
add_PB_label(15,  {"ERASE", 	MUMI_Menu_Main, nil, {{"MPD_MUMI_ERASE_Box"}}})

add_PB_label(16,  {"ALR67", 	MUMI_Menu_Main, nil, {{"MPD_MUMI_ALR67_Box"}}})
add_PB_label(17,  {"D/L", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_DL_Box"}}})
add_PB_label(19,  {"ALM", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_ALM_Box"}}}, {"GPS", 		MUMI_Menu_Main})
add_PB_label(20,  {"GPS\nWYPT", 		MUMI_Menu_Main, nil, {{"MPD_MUMI_WYPT_2_Box"}}})

local MUMI_Menu_More = "MUMI_More_Menu_Root_PB"
addPlaceholder(MUMI_Menu_More, {0, 0}, rootName, {{"MPD_MUMI_PB_Label_More", MenuPageSublevel.MUMI_MORE_MENU_PAGE}})

add_PB_label(1,  {"PB", 		MUMI_Menu_More, nil, {{"MPD_MUMI_PB_Box"}}})
add_PB_label(2,  {"NET3", 		MUMI_Menu_More, nil, {{"MPD_MUMI_NET3_Box"}}})
add_PB_label(3,  {"NET2", 		MUMI_Menu_More, nil, {{"MPD_MUMI_NET2_Box"}}})
add_PB_label(4,  {"NET1", 		MUMI_Menu_More, nil, {{"MPD_MUMI_NET1_Box"}}})
add_PB_label(5,  {"SA", 		MUMI_Menu_More, nil, {{"MPD_MUMI_SA_Box"}}})

add_PB_label(7,  {"JSOW", 		MUMI_Menu_More, nil, {{"MPD_MUMI_JSOW_Box"}}})
add_PB_label(8,  {"JDAM", 		MUMI_Menu_More, nil, {{"MPD_MUMI_JDAM_Box"}}})
add_PB_label(9,  {"SLAMR", 		MUMI_Menu_More, nil, {{"MPD_MUMI_SLAMR_Box"}}})
add_PB_label(10,  {"RETURN", 	MUMI_Menu_More})

add_PB_label(14,  {"CAS", 		MUMI_Menu_More, nil, {{"MPD_MUMI_CAS_Box"}}}, {"DCS", 	MUMI_Menu_More})
add_PB_label(15,  {"NETS", 		MUMI_Menu_More, nil, {{"MPD_MUMI_NETS_Box"}}}, {"DCS", 	MUMI_Menu_More})

add_PB_label(16,  {"FLRP", 		MUMI_Menu_More, nil, {{"MPD_MUMI_FLRP_Box"}}})
add_PB_label(17,  {"WIND", 		MUMI_Menu_More, nil, {{"MPD_MUMI_WIND_Box"}}})
add_PB_label(19,  {"PROG", 		MUMI_Menu_More, nil, {{"MPD_MUMI_PROG_Box"}}}, {"ROE", 	MUMI_Menu_More})
add_PB_label(20,  {"GPI", 		MUMI_Menu_More, nil, {{"MPD_MUMI_GPI_Box"}}})

addMenuLabel("MENU", rootName, nil, false)

local MUMI_Information = "MUMI_Information_Root"
addPlaceholder(MUMI_Information, {0, 0}, rootName)

addStrokeText(MUMI_BaseName.."MU_Label",	"MU ID ",			STROKE_FNT_DFLT_150, "CenterCenter",	{-180, 370}, 	MUMI_Information)
addStrokeText(MUMI_BaseName.."MU_Text",		"ABCDEFGH",			STROKE_FNT_DFLT_150, "LeftCenter",	{-100, 370}, 	MUMI_Information, {{"MPD_MUMI_MU_ID_Text"}})
addStrokeLine(MUMI_BaseName.."MU_ID_LINE", 570, {-300, 340}, -90, MUMI_Information)

addStrokeText(MUMI_BaseName.."MU_TEXT_1",	"ABCD",	STROKE_FNT_DFLT_120, "CenterCenter",	{-190, 250}, MUMI_Information, {{"MPD_MUMI_MU_ID_1_Text"}})
addStrokeLine(MUMI_BaseName.."MU_ID_LINE_1", 200, {-290, 220}, -90, MUMI_Information)

addStrokeText(MUMI_BaseName.."MU_TEXT_2",	"ABCD",	STROKE_FNT_DFLT_120, "CenterCenter",	{100, 250}, MUMI_Information, {{"MPD_MUMI_MU_ID_2_Text"}})
addStrokeLine(MUMI_BaseName.."MU_ID_LINE_2", 200, {0, 220}, -90, MUMI_Information)

addStrokeLine(MUMI_BaseName.."Vertical_line", 290, {-50, 220}, -180, MUMI_Information)

addStrokeText(MUMI_BaseName.."MC_Label",	"MC",		STROKE_FNT_DFLT_120, "CenterCenter",	{-350, 170}, MUMI_Information)
addStrokeText(MUMI_BaseName.."MC_Text",		"15C-XXXU",	STROKE_FNT_DFLT_120, "CenterCenter",	{-200, 170}, MUMI_Information, {{"MPD_MUMI_MC_Text"}})

addStrokeText(MUMI_BaseName.."SMS_Label",	"SMS",		STROKE_FNT_DFLT_120, "CenterCenter",	{-350, 100}, MUMI_Information)
addStrokeText(MUMI_BaseName.."SMS_Text",	"15C-XXXU",	STROKE_FNT_DFLT_120, "CenterCenter",	{-200, 100}, MUMI_Information, {{"MPD_MUMI_SMS_Text"}})

addStrokeText(MUMI_BaseName.."DATA_TEXT",	"DATA XFER",STROKE_FNT_DFLT_120, "CenterCenter",	{-210, 10}, MUMI_Information, {{"MPD_MUMI_DATA_Text"}})

addStrokeLine(MUMI_BaseName.."Horizontal_line_Upper", 750, {-400, -100}, -90, MUMI_Information)

addStrokeText(MUMI_BaseName.."ERRORS_Label",	"ERRORS: ",		STROKE_FNT_DFLT_120, "CenterCenter",	{-300, -140}, MUMI_Information)	
addStrokeText(MUMI_BaseName.."ERRORS_Text",		"HARM, NET 1",	STROKE_FNT_DFLT_120, "CenterCenter",	{-70, -140}, MUMI_Information, {{"MPD_MUMI_ERRORS_Text"}})	

addStrokeLine(MUMI_BaseName.."Horizontal_line_Lower", 750, {-400, -250}, -90, MUMI_Information)

addStrokeText(MUMI_BaseName.."MU_LOAD_Label",	"MU LOAD",		STROKE_FNT_DFLT_150, "CenterCenter",	{-320, -330}, rootName, {{"MPD_MUMI_MU_LOAD_Label"}})	