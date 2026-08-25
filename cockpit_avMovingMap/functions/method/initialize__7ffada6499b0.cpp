/*
 * CockpitBase.dll class reconstruction
 * Function: initialize
 * Address : 7ffada6499b0
 * Role    : method
 */


/* public: virtual void __cdecl cockpit::avDevice::initialize(unsigned char,class
   ed::basic_string<char> const & __ptr64,class ed::basic_string<char> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avDevice::initialize
          (avDevice *this,uchar param_1,basic_string<char> *param_2,basic_string<char> *param_3)

{
  lua_State *plVar1;
  basic_string<char> *pbVar2;
  basic_string<char> *pbVar3;
  
                    /* 0x2399b0  4530
                       ?initialize@avDevice@cockpit@@UEAAXEAEBV?$basic_string@D@ed@@0@Z */
  this[0x28] = (avDevice)0x1;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    this[0x90] = (avDevice)0x1;
    if (this[0x80] != (avDevice)0x0) {
      pbVar3 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 0x18)) {
        pbVar3 = *(basic_string<char> **)param_3;
      }
      if (*(longlong *)(this + 0x50) == 0) {
        pbVar2 = (basic_string<char> *)s_avDevice__ensured_Lua_7ffada853868;
        if (pbVar3 != (basic_string<char> *)0x0) {
          pbVar2 = pbVar3;
        }
        plVar1 = ccLuaLoader::open((char *)pbVar2,false);
        *(lua_State **)(this + 0x50) = plVar1;
        (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x7ffada649a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      copy_and_do_lua_file(*(lua_State **)(this + 0x50),param_3,(char *)0x0,false);
      return;
    }
    pbVar3 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 0x18)) {
      pbVar3 = *(basic_string<char> **)param_3;
    }
    if (*(longlong *)(this + 0x50) == 0) {
      pbVar2 = (basic_string<char> *)s_avDevice__ensured_Lua_7ffada853868;
      if (pbVar3 != (basic_string<char> *)0x0) {
        pbVar2 = pbVar3;
      }
      plVar1 = ccLuaLoader::open((char *)pbVar2,false);
      *(lua_State **)(this + 0x50) = plVar1;
      (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
    }
    ccLuaLoader::LuaDofile(*(lua_State **)(this + 0x50),param_3,false);
  }
  return;
}

