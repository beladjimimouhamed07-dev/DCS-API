/*
 * CockpitBase.dll class reconstruction
 * Function: read_airdrome_id
 * Address : 7ffada802b60
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned int __cdecl cockpit::read_airdrome_id(class Lua::Config & __ptr64) */

uint __cdecl cockpit::read_airdrome_id(Config *param_1)

{
  bool bVar1;
  uint uVar2;
  wAirdrome *pwVar3;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
                    /* 0x3f2b60  5484  ?read_airdrome_id@cockpit@@YAIAEAVConfig@Lua@@@Z */
  local_10 = DAT_7ffada94e840 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  Lua::Config::get(param_1,s_airdromeId_7ffada86db40);
  bVar1 = Lua::Config::pop(param_1,local_38);
  if (bVar1) {
    pwVar3 = wAirdrome::getAirdromeByLev4((ushort)local_38[0]);
    if (pwVar3 != (wAirdrome *)0x0) {
      return *(uint *)(pwVar3 + 0x1c);
    }
  }
  else {
    uStack_28 = 0;
    local_20 = _DAT_7ffada84dd60;
    uStack_18 = uRam00007ffada84dd68;
    local_30 = (void *)0x0;
    Lua::Config::get(param_1,s_helipadId_7ffada86db50);
    bVar1 = Lua::Config::pop(param_1,(basic_string<char> *)&local_30);
    if (bVar1) {
      uVar2 = (**(code **)(**(longlong **)globalDispatcher_exref + 0x148))
                        (*(longlong **)globalDispatcher_exref,&local_30);
      if (0xf < uStack_18) {
        free(local_30);
      }
      return uVar2;
    }
    if (0xf < uStack_18) {
      free(local_30);
    }
  }
  return 0;
}

