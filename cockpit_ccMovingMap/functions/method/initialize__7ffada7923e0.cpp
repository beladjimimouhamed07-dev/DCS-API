/*
 * CockpitBase.dll class reconstruction
 * Function: initialize
 * Address : 7ffada7923e0
 * Role    : method
 * Vtable slots: 1
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::initialize(class ed::basic_string<char>
   const & __ptr64,bool) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::initialize(ccIndicatorPage *this,basic_string<char> *param_1,bool param_2)

{
  basic_string<char> *pbVar1;
  bool bVar2;
  lua_State *plVar3;
  bool local_res18 [8];
  undefined8 local_18 [2];
  
                    /* 0x3823e0  4630
                       ?initialize@ccIndicatorPage@cockpit@@UEAAXAEBV?$basic_string@D@ed@@_N@Z */
  local_res18[0] = true;
  plVar3 = ccLuaLoader::querySharedState(0,local_res18);
  if (local_res18[0] != false) {
    (**(code **)(*(longlong *)this + 0x68))(this,plVar3);
  }
  (**(code **)(*(longlong *)this + 0x70))(this,plVar3);
  Lua::Config::Config((Config *)local_18,plVar3,-0x2712);
  if (param_2) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    bVar2 = Lua::Config::tmpload_buf((Config *)local_18,(char *)param_1,*(__uint64 *)pbVar1,true);
  }
  else {
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    bVar2 = Lua::Config::tmpload((Config *)local_18,(char *)param_1,true);
  }
  if (bVar2 != false) {
    (**(code **)(*(longlong *)this + 0x78))(this);
    lua_settop(local_18[0],0xfffffffe);
  }
  Lua::Config::~Config((Config *)local_18);
  return;
}

