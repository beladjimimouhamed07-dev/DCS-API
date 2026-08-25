/*
 * CockpitBase.dll class reconstruction
 * Function: ensured_Lua
 * Address : 7ffada6498d0
 * Role    : method
 */


/* protected: struct lua_State * __ptr64 __cdecl cockpit::avDevice::ensured_Lua(char const *
   __ptr64) __ptr64 */

lua_State * __thiscall cockpit::avDevice::ensured_Lua(avDevice *this,char *param_1)

{
  lua_State *plVar1;
  char *pcVar2;
  
                    /* 0x2398d0  3019  ?ensured_Lua@avDevice@cockpit@@IEAAPEAUlua_State@@PEBD@Z */
  if (*(longlong *)(this + 0x50) == 0) {
    pcVar2 = s_avDevice__ensured_Lua_7ffada853868;
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    plVar1 = ccLuaLoader::open(pcVar2,false);
    *(lua_State **)(this + 0x50) = plVar1;
    (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
    return *(lua_State **)(this + 0x50);
  }
  return *(lua_State **)(this + 0x50);
}

