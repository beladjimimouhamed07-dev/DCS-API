/*
 * CockpitBase.dll class reconstruction
 * Function: l_register_functions
 * Address : 7ffada649e60
 * Role    : method
 * Vtable slots: 24
 */


/* protected: virtual void __cdecl cockpit::avDevice::l_register_functions(struct lua_State *
   __ptr64,int) __ptr64 */

void __thiscall
cockpit::avDevice::l_register_functions(avDevice *this,lua_State *param_1,int param_2)

{
                    /* 0x239e60  4960
                       ?l_register_functions@avDevice@cockpit@@MEAAXPEAUlua_State@@H@Z */
  lua_pushstring(param_1,s_SetCommand_7ffada8537b0);
  lua_pushcclosure(param_1,FUN_7ffada649f30,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_performClickableAction_7ffada8537c0);
  lua_pushcclosure(param_1,FUN_7ffada649d90,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_listen_command_7ffada8537d8);
  lua_pushcclosure(param_1,FUN_7ffada649c20,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_listen_event_7ffada8537e8);
  lua_pushcclosure(param_1,FUN_7ffada649ca0,0);
  lua_settable(param_1,param_2);
  return;
}

