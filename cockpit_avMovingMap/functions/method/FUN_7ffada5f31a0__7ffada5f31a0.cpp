/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f31a0
 * Address : 7ffada5f31a0
 * Role    : method
 */


undefined8 * FUN_7ffada5f31a0(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Size = strlen(param_2);
  if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ac0();
  }
  if (_Size < 0x10) {
    param_1[2] = _Size;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,_Size);
    *(undefined1 *)(_Size + (longlong)param_1) = 0;
    return param_1;
  }
  uVar1 = _Size | 0xf;
  uVar2 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
    uVar2 = 0x16;
  }
  _Dst = malloc(uVar2 + 1);
  if (_Dst == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar2 + 1);
  }
  *param_1 = _Dst;
  param_1[2] = _Size;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,_Size);
  *(undefined1 *)((longlong)_Dst + _Size) = 0;
  return param_1;
}

