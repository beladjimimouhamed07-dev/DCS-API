/*
 * CockpitBase.dll class reconstruction
 * Function: LuaDofile
 * Address : 7ffada7ed350
 * Role    : method
 */


/* public: static int __cdecl cockpit::ccLuaLoader::LuaDofile(struct lua_State * __ptr64,class
   ed::basic_string<char> const & __ptr64,bool) */

int __cdecl
cockpit::ccLuaLoader::LuaDofile(lua_State *param_1,basic_string<char> *param_2,bool param_3)

{
  CheckedLoader *this;
  
                    /* 0x3dd350  2046
                       ?LuaDofile@ccLuaLoader@cockpit@@SAHPEAUlua_State@@AEBV?$basic_string@D@ed@@_N@Z
                        */
  if (*(longlong *)(param_2 + 0x10) != 0) {
    this = Lua::CheckedLoader::instance();
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(basic_string<char> **)param_2;
    }
    Lua::CheckedLoader::loadFile(this,param_1,(char *)param_2,(char *)0x0);
    return 0;
  }
  return -1;
}

