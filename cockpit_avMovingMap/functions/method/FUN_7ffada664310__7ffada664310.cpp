/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada664310
 * Address : 7ffada664310
 * Role    : method
 */


undefined8 * FUN_7ffada664310(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  longlong lVar7;
  void *_Src;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  lVar7 = ((longlong)param_2 - lVar2) / 6 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar4 = (param_1[1] - lVar2) / 0x30;
  if (lVar4 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (param_1[2] - lVar2) / 0x30;
  uVar9 = 0x555555555555555;
  if ((uVar5 <= 0x555555555555555 - (uVar5 >> 1)) && (uVar9 = (uVar5 >> 1) + uVar5, uVar9 < uVar1))
  {
    uVar9 = uVar1;
  }
  _Dst = malloc(uVar9 * 0x30);
  if (_Dst == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar9 * 0x30);
  }
  uVar6 = param_3[1];
  puVar8 = _Dst + ((lVar7 >> 3) - (lVar7 >> 0x3f)) * 6;
  *puVar8 = *param_3;
  puVar8[1] = uVar6;
  uVar6 = param_3[3];
  puVar8[2] = param_3[2];
  puVar8[3] = uVar6;
  uVar6 = param_3[5];
  puVar8[4] = param_3[4];
  puVar8[5] = uVar6;
  pvVar3 = (void *)param_1[1];
  _Src = (void *)*param_1;
  _Dst_00 = _Dst;
  if (param_2 != pvVar3) {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = puVar8 + 6;
    _Src = param_2;
  }
  memmove(_Dst_00,_Src,(longlong)pvVar3 - (longlong)_Src);
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1 * 6);
  param_1[2] = (longlong)(_Dst + uVar9 * 6);
  return puVar8;
}

