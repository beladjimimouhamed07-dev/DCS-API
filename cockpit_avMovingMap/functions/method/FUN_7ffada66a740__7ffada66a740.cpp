/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada66a740
 * Address : 7ffada66a740
 * Role    : method
 */


void FUN_7ffada66a740(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  puVar1 = (undefined4 *)param_1[1];
  uVar4 = (longlong)puVar1 - lVar5 >> 3;
  if (param_2 < uVar4) {
    puVar1 = (undefined4 *)(lVar5 + param_2 * 8);
  }
  else {
    if (param_2 <= uVar4) {
      return;
    }
    uVar3 = param_1[2] - lVar5 >> 3;
    if (uVar3 < param_2) {
      if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_7ffada5f0ae0();
      }
      uVar2 = 0x1fffffffffffffff;
      if ((uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) &&
         (uVar2 = uVar3 + (uVar3 >> 1), uVar2 < param_2)) {
        uVar2 = param_2;
      }
      _Size = uVar2 * 8;
      _Dst = malloc(_Size);
      if (_Dst == (void *)0x0) {
        ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
      }
      puVar1 = (undefined4 *)((longlong)_Dst + uVar4 * 8);
      for (lVar5 = param_2 - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
      }
      _Src = (void *)*param_1;
      memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
      if (_Src != (void *)0x0) {
        free(_Src);
      }
      *param_1 = (longlong)_Dst;
      param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
      param_1[2] = (longlong)(_Size + (longlong)_Dst);
      return;
    }
    for (lVar5 = param_2 - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
  }
  param_1[1] = (longlong)puVar1;
  return;
}

