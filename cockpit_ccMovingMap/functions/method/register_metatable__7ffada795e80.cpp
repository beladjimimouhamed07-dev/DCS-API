/*
 * CockpitBase.dll class reconstruction
 * Function: register_metatable
 * Address : 7ffada795e80
 * Role    : method
 */


/* public: static void __cdecl cockpit::chart_item::register_metatable(struct lua_State * __ptr64)
    */

void __cdecl cockpit::chart_item::register_metatable(lua_State *param_1)

{
  undefined4 uVar1;
  
                    /* 0x385e80  5527  ?register_metatable@chart_item@cockpit@@SAXPEAUlua_State@@@Z
                        */
  lua_pushstring(param_1,s_chart_item_meta_7ffada8659d0);
  lua_createtable(param_1,0,0);
  lua_createtable(param_1,0,0);
  uVar1 = lua_gettop(param_1);
  lua_pushstring(param_1,s_add_element_7ffada8659e0);
  lua_pushcclosure(param_1,l_add_element,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_center_7ffada8659f0);
  lua_pushcclosure(param_1,l_center,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_AABB_7ffada865a00);
  lua_pushcclosure(param_1,l_AABB,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_OBB_7ffada865a10);
  lua_pushcclosure(param_1,l_OBB,0);
  lua_settable(param_1,uVar1);
  lua_setfield(param_1,0xfffffffe,s___index_7ffada84d3d0);
  lua_settable(param_1,0xffffd8ee);
  return;
}

