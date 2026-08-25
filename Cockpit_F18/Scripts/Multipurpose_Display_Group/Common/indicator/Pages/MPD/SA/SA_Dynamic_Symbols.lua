dofile(LockOn_Options.script_path.."Multipurpose_Display_Group/Common/indicator/Pages/MPD/MPD_page_defs.lua")

------------------------------------------ SA DYNAMIC SYMBOLS ------------------------------------------
addPlaceholder("SA_AIR_DEFENSE_Keeper", nil, nil, {{"MPD_updateMultipleSymbolsBuffer", multipleSymbolsIDs.SA_AIR_DEFENSE}})
addPlaceholder("SA_Tracks_Keeper", nil, nil, {{"MPD_updateMultipleSymbolsBuffer", multipleSymbolsIDs.SA_TRACKS}})
