/*
 * CockpitBase.dll class reconstruction
 * Function: open
 * Address : 7ffada7f2fd0
 * Role    : method
 */


/* public: static struct lua_State * __ptr64 __cdecl cockpit::ccLuaLoader::open(char const *
   __ptr64,bool) */

lua_State * __cdecl cockpit::ccLuaLoader::open(char *param_1,bool param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  lua_State *plVar3;
  
                    /* 0x3e2fd0  5255  ?open@ccLuaLoader@cockpit@@SAPEAUlua_State@@PEBD_N@Z */
  if (param_1 == (char *)0x0) {
    param_1 = s_cockpit__ccLuaLoader__open_7ffada86cba8;
  }
  else {
    sVar1 = strlen(param_1);
    if (0x3f < sVar1) {
      if (sVar1 < sVar1 - 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_7ffada7ed3c0();
      }
      param_1 = param_1 + (sVar1 - 0x40);
      uVar2 = FUN_7ffada82b010((undefined1 (*) [16])param_1,0x40,
                               (undefined1 (*) [16])&DAT_7ffada86c518,2);
      if (uVar2 < 8) {
        param_1 = *(undefined1 (*) [16])param_1 + uVar2;
      }
    }
  }
  plVar3 = (lua_State *)ED_lua_open(param_1);
  if (plVar3 != (lua_State *)0x0) {
    ED_lua_openlibs(plVar3);
    if (!param_2) {
      LuaCoroutine::register_in_script(plVar3);
      bind_options(plVar3);
    }
    lua_pushcclosure(plVar3,FUN_7ffada7efd70,0);
    lua_setfield(plVar3,0xffffd8ee,s_dbg_print_7ffada86cbc8);
    lua_pushcclosure(plVar3,FUN_7ffada7efba0,0);
    lua_setfield(plVar3,0xffffd8ee,s_do_mission_file_7ffada86cbd8);
    lua_pushcclosure(plVar3,FUN_7ffada7f22a0,0);
    lua_setfield(plVar3,0xffffd8ee,s_load_mission_file_7ffada86cbe8);
    lua_pushcclosure(plVar3,FUN_7ffada7f2b80,0);
    lua_setfield(plVar3,0xffffd8ee,s_save_to_mission_7ffada86cc00);
    lua_pushcclosure(plVar3,FUN_7ffada7efaa0,0);
    lua_setfield(plVar3,0xffffd8ee,s_dispatch_action_7ffada86cc10);
    lua_pushcclosure(plVar3,FUN_7ffada7ef910,0);
    lua_setfield(plVar3,0xffffd8ee,s_copy_to_mission_and_dofile_7ffada86cc20);
    lua_pushcclosure(plVar3,FUN_7ffada7ef9e0,0);
    lua_setfield(plVar3,0xffffd8ee,s_copy_to_mission_and_get_buffer_7ffada86cc40);
    lua_pushcclosure(plVar3,FUN_7ffada7f2e10,0);
    lua_setfield(plVar3,0xffffd8ee,s_track_is_reading_7ffada86cc60);
    lua_pushcclosure(plVar3,FUN_7ffada7f2e50,0);
    lua_setfield(plVar3,0xffffd8ee,s_track_is_writing_7ffada86cc78);
    lua_pushcclosure(plVar3,FUN_7ffada7f1090,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_multimonitor_preset_name_7ffada86cc90);
    lua_pushcclosure(plVar3,FUN_7ffada7efdc0,0);
    lua_setfield(plVar3,0xffffd8ee,s_find_viewport_7ffada86ccb0);
    lua_pushcclosure(plVar3,FUN_7ffada7f0010,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_Viewports_7ffada86ccc0);
    lua_pushcclosure(plVar3,FUN_7ffada7eff60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_UIMainView_7ffada86ccd0);
    lua_pushcclosure(plVar3,FUN_7ffada7ef720,0);
    lua_setfield(plVar3,0xffffd8ee,s_UTF8_substring_7ffada86cce0);
    lua_pushcclosure(plVar3,FUN_7ffada7ef6d0,0);
    lua_setfield(plVar3,0xffffd8ee,s_UTF8_strlen_7ffada86ccf0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2130,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_terrain_related_data_7ffada86cd00);
    lua_pushcclosure(plVar3,FUN_7ffada7f2940,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_texture_archives_7ffada86cd20);
    lua_pushcclosure(plVar3,FUN_7ffada7f2940,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_texture_path_7ffada86cd40);
    lua_pushcclosure(plVar3,FUN_7ffada7f2450,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_model_path_7ffada86cd58);
    lua_pushcclosure(plVar3,FUN_7ffada7f2580,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_path_to_mount_point_7ffada86cd70);
    lua_pushcclosure(plVar3,FUN_7ffada7f21d0,0);
    lua_setfield(plVar3,0xffffd8ee,s_lo_to_geo_coords_7ffada86cd90);
    lua_pushcclosure(plVar3,FUN_7ffada7efe90,0);
    lua_setfield(plVar3,0xffffd8ee,s_geo_to_lo_coords_7ffada86cda8);
    lua_pushcclosure(plVar3,FUN_7ffada7f2a70,0);
    lua_setfield(plVar3,0xffffd8ee,s_print_message_to_user_7ffada86cdc0);
    lua_pushcclosure(plVar3,FUN_7ffada7f03c0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_base_data_7ffada86cdd8);
    lua_pushcclosure(plVar3,FUN_7ffada7f1450,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_plugin_option_7ffada86cde8);
    lua_pushcclosure(plVar3,FUN_7ffada7f15f0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_plugin_option_value_7ffada86ce00);
    lua_pushcclosure(plVar3,FUN_7ffada7f1270,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_option_value_7ffada86ce18);
    lua_pushcclosure(plVar3,FUN_7ffada7f1060,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_model_time_7ffada86c508);
    lua_pushcclosure(plVar3,FUN_7ffada7f0100,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_absolute_model_time_7ffada86ce30);
    lua_pushcclosure(plVar3,FUN_7ffada7f0fd0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_mission_route_7ffada86ce48);
    lua_pushcclosure(plVar3,FUN_7ffada7f1ea0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_random_orderly_7ffada86ce60);
    lua_pushcclosure(plVar3,FUN_7ffada7f1e40,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_random_evenly_7ffada86ce78);
    lua_pushcclosure(plVar3,FUN_7ffada7f11a0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_non_sim_random_evenly_7ffada86ce90);
    lua_pushcclosure(plVar3,FUN_7ffada7f0130,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_draw_argument_value_7ffada86ceb0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2d60,0);
    lua_setfield(plVar3,0xffffd8ee);
    lua_pushcclosure(plVar3,FUN_7ffada7f0d60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_cockpit_draw_argument_value_7ffada86cf00);
    lua_pushcclosure(plVar3,FUN_7ffada7f2020,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_sim_plugin_path_7ffada86cf20);
    lua_pushcclosure(plVar3,FUN_7ffada7f2020,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_dcs_plugin_path_7ffada86cf38);
    lua_pushcclosure(plVar3,FUN_7ffada7f0c60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_clickable_element_reference_7ffada86cf50);
    lua_pushcclosure(plVar3,FUN_7ffada7ef860,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_type_7ffada86cf70);
    lua_pushcclosure(plVar3,FUN_7ffada7f02a0,0);
    lua_setfield(plVar3,0xffffd8ee);
    lua_pushcclosure(plVar3,FUN_7ffada7f0320,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_property_or_nil_7ffada86cfa0);
    lua_pushcclosure(plVar3,FUN_7ffada7f01c0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_mission_data_7ffada86cfc0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2de0,0);
    lua_setfield(plVar3,0xffffd8ee,s_switch_labels_off_7ffada86cfe0);
    lua_pushcclosure(plVar3,FUN_7ffada7eced0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_player_crew_index_7ffada86cff8);
    lua_pushcclosure(plVar3,FUN_7ffada7ecf00,0);
    lua_setfield(plVar3,0xffffd8ee,s_set_crew_member_seat_adjustment_7ffada86d010);
    FUN_7ffada800a50(plVar3);
    return plVar3;
  }
  return (lua_State *)0x0;
}

