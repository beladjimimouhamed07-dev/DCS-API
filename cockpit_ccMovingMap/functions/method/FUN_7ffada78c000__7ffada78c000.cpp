/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada78c000
 * Address : 7ffada78c000
 * Role    : method
 */


void FUN_7ffada78c000(undefined8 param_1,undefined8 param_2)

{
  lua_pushstring(param_1,s_____self_indicator_handle_7ffada864d28);
  lua_pushlightuserdata(param_1,param_2);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,FUN_7ffada789d30,0);
  lua_setfield(param_1,0xffffd8ee,s_GetSelf_7ffada853790);
  return;
}

