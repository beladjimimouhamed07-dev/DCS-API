/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f0b10
 * Address : 7ffada5f0b10
 * Role    : method
 */


undefined8 * FUN_7ffada5f0b10(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 *_Dst_00;
  ulonglong uVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ac0();
    }
    uVar3 = param_3 | 0xf;
    uVar4 = 0x7fffffffffffffff;
    if (((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar4 = uVar3, uVar3 < uVar1)) {
      uVar4 = uVar1;
    }
    _Dst = malloc(uVar4 + 1);
    if (_Dst == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar4 + 1);
    }
    param_1[2] = param_3;
    param_1[3] = uVar4;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar2) {
      free((void *)*param_1);
    }
    *param_1 = _Dst;
  }
  else {
    _Dst_00 = param_1;
    if (0xf < uVar2) {
      _Dst_00 = (undefined8 *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst_00,param_2,param_3);
    *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  }
  return param_1;
}

