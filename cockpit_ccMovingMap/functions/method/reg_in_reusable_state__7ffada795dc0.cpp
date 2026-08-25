/*
 * CockpitBase.dll class reconstruction
 * Function: reg_in_reusable_state
 * Address : 7ffada795dc0
 * Role    : method
 * Vtable slots: 14
 */


/* protected: virtual void __cdecl cockpit::ccMovingMap::reg_in_reusable_state(struct lua_State *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccMovingMap::reg_in_reusable_state(ccMovingMap *this,lua_State *param_1)

{
                    /* 0x385dc0  5509
                       ?reg_in_reusable_state@ccMovingMap@cockpit@@MEAAXPEAUlua_State@@@Z */
  ccIndicatorPage::reg_in_reusable_state((ccIndicatorPage *)this,param_1);
  lua_pushstring(param_1,s_____moving_map_page_handle_7ffada865a18);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,l_create_chart,0);
  lua_setfield(param_1,0xffffd8ee,s_create_chart_7ffada865a38);
  lua_pushcclosure(param_1,l_set_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_set_render_to_texture_7ffada865a48);
  lua_pushcclosure(param_1,l_get_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_get_render_to_texture_7ffada865a60);
  chart_item::register_metatable(param_1);
  return;
}

