dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/MPD_page_defs.lua")
local CustomStrDef = {fontScaleY_150, fontScaleX_150, 11 * GetScale(), fontInterlineDflt150 * GetScale()}
local DistanceBetween150Lines = 48

add_PB_label(6, "A/C")
add_PB_label(7, "WYPT")
add_PB_label(8, "TCN")
add_PB_label(9, "MDATA")
add_PB_label(10, "HSI")

add_PB_label(5,  "XFER")
add_PB_label(3,  {"GPS", nil, nil, true})
add_PB_label(19, {"PRECISE", nil, nil, {{"MPD_HSI_GPS_Data_isPrecise"}}})

add_PB_label(11, "NAVCK")
add_PB_symbol(12, "124-arrow-up")			-- MC waypoint up
add_PB_symbol(13, "124-arrow-down")			-- MC waypoint down
addStrokeText("MC_Wypt_Index", "", STROKE_FNT_DFLT_100, "CenterCenter", {500, 60}, nil, {{"MPD_HSI_GPS_Data_MCWaypointIndex"}})

add_PB_symbol(1,  "124-arrow-down")			-- CURSOR DOWN
add_PB_symbol(16, "075-arrow-down")			-- PAGE DOWN
add_PB_symbol(17, "075-arrow-up")			-- PAGE UP
add_PB_symbol(20, "124-arrow-right")		-- CURSOR RIGHT


-- GPS point name
-- MC waypoint name + number
local HEADER_VALUE_Y = 410
addStrokeText("GPS_CurrentID", "", CustomStrDef, "LeftCenter", {-380, HEADER_VALUE_Y}, nil, {{"MPD_HSI_GPS_Data_CurrentID"}})
addStrokeText("MC_Wypt_Name",  "", CustomStrDef, "LeftCenter", { 120, HEADER_VALUE_Y}, nil, {{"MPD_HSI_GPS_Data_MCWaypointName"}})
addStrokeText("GPS_MCWypt_Number", "", CustomStrDef, "LeftCenter", { 120, HEADER_VALUE_Y - DistanceBetween150Lines}, nil, {{"MPD_HSI_GPS_Data_MCWaypointNumber"}})

local LEFT_X     = -380
local DATA_TOP_Y = HEADER_VALUE_Y - DistanceBetween150Lines * 2
local RIGHT_X    = 80
addStrokeText("GPS_Lat", "", CustomStrDef, "LeftCenter", {LEFT_X, DATA_TOP_Y}, nil, {{"MPD_HSI_GPS_Data_setDegrees", 0}}, {"%c%3d°%02d.%02d'", "%c%3d°%02d'%02d\"", "%c%3d°%02d.%02d%02d'", "%c%3d°%02d'%02d.%02d\""})
addStrokeText("GPS_Lon", "", CustomStrDef, "LeftCenter", {LEFT_X, DATA_TOP_Y - DistanceBetween150Lines}, nil, {{"MPD_HSI_GPS_Data_setDegrees", 1}}, {"%c%3d°%02d.%02d'", "%c%3d°%02d'%02d\"", "%c%3d°%02d.%02d%02d'", "%c%3d°%02d'%02d.%02d\""})
addStrokeText("GPS_Elev", "", CustomStrDef, "LeftCenter", {LEFT_X, DATA_TOP_Y - DistanceBetween150Lines * 2}, nil, {{"MPD_HSI_GPS_Data_Elevation"}})

addStrokeText("MC_Lat", "", CustomStrDef, "LeftCenter", {RIGHT_X, DATA_TOP_Y}, nil, {{"MPD_HSI_GPS_Data_MCsetDegrees", 0}}, {"%c%3d°%02d.%02d'", "%c%3d°%02d'%02d\"", "%c%3d°%02d.%02d%02d'", "%c%3d°%02d'%02d.%02d\""})
addStrokeText("MC_Lon", "", CustomStrDef, "LeftCenter", {RIGHT_X, DATA_TOP_Y - DistanceBetween150Lines}, nil, {{"MPD_HSI_GPS_Data_MCsetDegrees", 1}}, {"%c%3d°%02d.%02d'", "%c%3d°%02d'%02d\"", "%c%3d°%02d.%02d%02d'", "%c%3d°%02d'%02d.%02d\""})
addStrokeText("MC_Elev", "", CustomStrDef, "LeftCenter", {RIGHT_X, DATA_TOP_Y - DistanceBetween150Lines * 2}, nil, {{"MPD_HSI_GPS_Data_MCElevation"}})

-- Center grid
-- 3 columns × 8 rows = 24 GPS waypoint ID slots for the page
local GRID_TOP_Y	= DATA_TOP_Y - DistanceBetween150Lines * 3 - 18
local GRID_COL_X	= {-310, -10, 290}
local ROW_STEP		= 82

for col = 0, 2 do
	for row = 0, 7 do
		local idx = col * 8 + row
		local px  = GRID_COL_X[col + 1]
		local py  = GRID_TOP_Y - row * ROW_STEP

		addStrokeText("GPS_ID_Cell_" .. tostring(idx), "", CustomStrDef, "CenterCenter", {px, py}, nil, {{"MPD_HSI_GPS_Data_CellID", idx}})
		addStrokeBox("GPS_Cursor_Box_" .. tostring(idx), 150, 44, "CenterCenter",{px, py}, nil,{{"MPD_HSI_GPS_Data_CellCursorShow", idx}})
	end
end

addStrokeText("GPS_PageIndicator", "", STROKE_FNT_DFLT_100, "CenterCenter", {260, -485}, nil, {{"MPD_HSI_GPS_Data_PageIndicator"}})
