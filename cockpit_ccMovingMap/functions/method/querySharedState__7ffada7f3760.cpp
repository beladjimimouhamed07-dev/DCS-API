/*
 * CockpitBase.dll class reconstruction
 * Function: querySharedState
 * Address : 7ffada7f3760
 * Role    : method
 */


/* public: static struct lua_State * __ptr64 __cdecl cockpit::ccLuaLoader::querySharedState(enum
   cockpit::sharedStatesEnum,bool * __ptr64) */

lua_State * __cdecl cockpit::ccLuaLoader::querySharedState(sharedStatesEnum param_1,bool *param_2)

{
  lua_State ***ppplVar1;
  lua_State *plVar2;
  
                    /* 0x3e3760  5461
                       ?querySharedState@ccLuaLoader@cockpit@@SAPEAUlua_State@@W4sharedStatesEnum@2@PEA_N@Z
                        */
  ppplVar1 = &sharedStates_ + (int)param_1;
  if ((&sharedStates_)[(int)param_1] == (lua_State **)0x0) {
    plVar2 = open(s_ccLuaLoader__querySharedState_7ffada86d2f8,false);
    *ppplVar1 = (lua_State **)plVar2;
    if (param_2 == (bool *)0x0) {
      return plVar2;
    }
    *param_2 = true;
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = false;
    return (lua_State *)*ppplVar1;
  }
  return (lua_State *)*ppplVar1;
}

