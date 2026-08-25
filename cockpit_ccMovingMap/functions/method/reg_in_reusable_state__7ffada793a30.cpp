/*
 * CockpitBase.dll class reconstruction
 * Function: reg_in_reusable_state
 * Address : 7ffada793a30
 * Role    : method
 */


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::reg_in_reusable_state(struct lua_State
   * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::reg_in_reusable_state(ccIndicatorPage *this,lua_State *param_1)

{
                    /* 0x383a30  5508
                       ?reg_in_reusable_state@ccIndicatorPage@cockpit@@MEAAXPEAUlua_State@@@Z */
  lua_pushstring(param_1,s_____indicator_page_handle_7ffada8649b0);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  FUN_7ffada78c000(param_1,*(undefined8 *)(this + 0x78));
  return;
}

