/*
 * CockpitBase.dll class reconstruction
 * Function: reg_in_script
 * Address : 7ffada793a80
 * Role    : method
 * Vtable slots: 13
 */


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::reg_in_script(struct lua_State *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::reg_in_script(ccIndicatorPage *this,lua_State *param_1)

{
                    /* 0x383a80  5510
                       ?reg_in_script@ccIndicatorPage@cockpit@@MEAAXPEAUlua_State@@@Z */
  FUN_7ffada782630(&DAT_7ffada962664,param_1);
  lua_pushcclosure(param_1,FUN_7ffada7938c0,0);
  lua_setfield(param_1,0xffffd8ee,s_SetScale_7ffada865810);
  lua_pushcclosure(param_1,FUN_7ffada793850,0);
  lua_setfield(param_1,0xffffd8ee,s_SetCustomScale_7ffada865820);
  lua_pushcclosure(param_1,FUN_7ffada792690,0);
  lua_setfield(param_1,0xffffd8ee,s_GetScale_7ffada865830);
  lua_pushcclosure(param_1,FUN_7ffada792560,0);
  lua_setfield(param_1,0xffffd8ee,s_GetAspect_7ffada865840);
  lua_pushcclosure(param_1,FUN_7ffada7925a0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetHalfHeight_7ffada865850);
  lua_pushcclosure(param_1,FUN_7ffada7925d0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetHalfWidth_7ffada865860);
  lua_pushcclosure(param_1,FUN_7ffada7924d0,0);
  lua_setfield(param_1,0xffffd8ee,&DAT_7ffada865870);
  lua_pushcclosure(param_1,l_push_guid_string,0);
  lua_setfield(param_1,0xffffd8ee,s_create_guid_string_7ffada865878);
  lua_pushcclosure(param_1,FUN_7ffada792600,0);
  lua_setfield(param_1,0xffffd8ee,s_GetRenderTarget_7ffada865890);
  lua_pushcclosure(param_1,FUN_7ffada7926f0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetAssignedViewport_7ffada8658a0);
  lua_pushcclosure(param_1,FUN_7ffada7931d0,0);
  lua_setfield(param_1,0xffffd8ee,s_MakeMaterial_7ffada8657f0);
  lua_pushcclosure(param_1,FUN_7ffada792760,0);
  lua_setfield(param_1,0xffffd8ee,s_MakeFont_7ffada865800);
  return;
}

