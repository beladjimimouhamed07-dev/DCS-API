/*
 * CockpitBase.dll class reconstruction
 * Function: register_in_script
 * Address : 7ffada64a440
 * Role    : method
 * Vtable slots: 21
 */


/* protected: virtual void __cdecl cockpit::avDevice::register_in_script(struct lua_State * __ptr64)
   __ptr64 */

void __thiscall cockpit::avDevice::register_in_script(avDevice *this,lua_State *param_1)

{
                    /* 0x23a440  5522  ?register_in_script@avDevice@cockpit@@MEAAXPEAUlua_State@@@Z
                        */
  lua_pushstring(param_1,s_____self_device_handle_7ffada853768);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,FUN_7ffada822cd0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetDevice_7ffada853780);
  lua_pushcclosure(param_1,FUN_7ffada649bd0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetSelf_7ffada853790);
  lua_pushcclosure(param_1,FUN_7ffada649fe0,0);
  lua_setfield(param_1,0xffffd8ee,s_SetGlobalCommand_7ffada853798);
  return;
}

