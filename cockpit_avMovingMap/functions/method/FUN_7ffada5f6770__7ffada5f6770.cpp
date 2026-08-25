/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f6770
 * Address : 7ffada5f6770
 * Role    : method
 */


void FUN_7ffada5f6770(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  ulonglong uVar4;
  undefined8 *_Dst_00;
  undefined8 *_Src;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  lVar5 = (longlong)puVar2 - *param_1 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  uVar6 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  uVar4 = 0x1fffffffffffffff;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  _Dst = malloc(uVar4 * 8);
  if (_Dst == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar4 * 8);
  }
  puVar3 = (undefined8 *)param_1[1];
  _Src = (undefined8 *)*param_1;
  _Dst[lVar5] = *param_2;
  _Dst_00 = _Dst;
  if (puVar2 != puVar3) {
    memmove(_Dst,_Src,(longlong)puVar2 - (longlong)_Src);
    _Dst_00 = _Dst + lVar5 + 1;
    _Src = puVar2;
  }
  memmove(_Dst_00,_Src,(longlong)puVar3 - (longlong)_Src);
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1);
  param_1[2] = (longlong)(_Dst + uVar4);
  return;
}

