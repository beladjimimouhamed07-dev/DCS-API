/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada664600
 * Address : 7ffada664600
 * Role    : method
 */


void FUN_7ffada664600(longlong *param_1,ulonglong param_2)

{
  void *_Src;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  size_t _Size;
  
  puVar6 = (undefined8 *)param_1[1];
  lVar4 = *param_1;
  lVar3 = ((longlong)puVar6 - lVar4) / 6 + ((longlong)puVar6 - lVar4 >> 0x3f);
  uVar5 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  if (param_2 < uVar5) {
    param_1[1] = param_2 * 0x30 + lVar4;
    return;
  }
  if (uVar5 < param_2) {
    uVar1 = (param_1[2] - lVar4) / 0x30;
    if (uVar1 < param_2) {
      if (param_2 < 0x555555555555556) {
        uVar2 = 0x555555555555555;
        if ((uVar1 <= 0x555555555555555 - (uVar1 >> 1)) &&
           (uVar2 = uVar1 + (uVar1 >> 1), uVar2 < param_2)) {
          uVar2 = param_2;
        }
        _Size = uVar2 * 0x30;
        _Dst = malloc(_Size);
        if (_Dst == (void *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
        }
        puVar6 = (undefined8 *)(uVar5 * 0x30 + (longlong)_Dst);
        for (lVar4 = param_2 - uVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6 = puVar6 + 6;
        }
        _Src = (void *)*param_1;
        memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
        if (_Src != (void *)0x0) {
          free(_Src);
        }
        *param_1 = (longlong)_Dst;
        param_1[1] = (longlong)(param_2 * 0x30 + (longlong)_Dst);
        param_1[2] = (longlong)(_Size + (longlong)_Dst);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    for (lVar4 = param_2 - uVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6 = puVar6 + 6;
    }
    param_1[1] = (longlong)puVar6;
  }
  return;
}

