/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5ef1f0
 * Address : 7ffada5ef1f0
 * Role    : method
 */


longlong *
FUN_7ffada5ef1f0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  size_t _Size;
  ulonglong uVar1;
  int iVar2;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)plVar4[1];
  if (plVar3 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar4 = (longlong *)*plVar4;
  _Size = param_3[2];
  uVar1 = param_3[3];
  while( true ) {
    _Buf2 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar3[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    if (plVar3 == plVar4) {
      *param_2 = (longlong)plVar3;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)plVar3[1];
  }
  *param_2 = *plVar3;
  param_2[1] = (longlong)plVar3;
  return param_2;
}

