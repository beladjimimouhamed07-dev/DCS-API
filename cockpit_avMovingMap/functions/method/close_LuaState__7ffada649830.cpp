/*
 * CockpitBase.dll class reconstruction
 * Function: close_LuaState
 * Address : 7ffada649830
 * Role    : method
 */


/* protected: void __cdecl cockpit::avDevice::close_LuaState(void) __ptr64 */

void __thiscall cockpit::avDevice::close_LuaState(avDevice *this)

{
  int iVar1;
  
                    /* 0x239830  2778  ?close_LuaState@avDevice@cockpit@@IEAAXXZ */
  if (*(longlong *)(this + 0x50) != 0) {
    lua_getfield(*(longlong *)(this + 0x50),0xffffd8ee,s_on_state_close_7ffada853830);
    iVar1 = lua_type(*(undefined8 *)(this + 0x50),0xffffffff);
    if (iVar1 == 6) {
      iVar1 = ED_lua_pcall(*(undefined8 *)(this + 0x50),0,0,0);
      if (iVar1 != 0) {
        lua_tolstring(*(undefined8 *)(this + 0x50),0xffffffff,0);
        FUN_7ffada5f68c0();
        lua_settop(*(undefined8 *)(this + 0x50),0xfffffffe);
      }
    }
    ED_lua_close(*(undefined8 *)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

