/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada782630
 * Address : 7ffada782630
 * Role    : method
 */


void FUN_7ffada782630(undefined8 param_1,undefined8 param_2)

{
  lua_pushcclosure(param_2,FUN_7ffada7822b0,0);
  lua_setfield(param_2,0xffffd8ee,s_CreateElement_7ffada864a58);
  lua_pushcclosure(param_2,FUN_7ffada7821e0,0);
  lua_setfield(param_2,0xffffd8ee,&DAT_7ffada864a68);
  lua_pushstring(param_2,s_elementmeta_7ffada8649d0);
  lua_createtable(param_2,0,0);
  lua_pushstring(param_2,s___index_7ffada84d3d0);
  lua_pushcclosure(param_2,FUN_7ffada7824d0,0);
  lua_settable(param_2,0xfffffffd);
  lua_pushstring(param_2,s___newindex_7ffada864a70);
  lua_pushcclosure(param_2,FUN_7ffada782570,0);
  lua_settable(param_2,0xfffffffd);
  lua_settable(param_2,0xffffd8ee);
  return;
}

