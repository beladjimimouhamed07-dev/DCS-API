/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada62cf50
 * Address : 7ffada62cf50
 * Role    : method
 */


undefined8 * FUN_7ffada62cf50(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *_Dst;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar2 = uVar1 * 8;
    _Dst = malloc(sVar2);
    if (_Dst == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar2);
    }
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(sVar2 + (longlong)_Dst);
    sVar2 = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,sVar2);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)sVar2 >> 3) * 8);
  }
  return param_1;
}

