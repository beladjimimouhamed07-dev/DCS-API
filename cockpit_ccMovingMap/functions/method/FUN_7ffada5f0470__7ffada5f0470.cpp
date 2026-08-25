/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f0470
 * Address : 7ffada5f0470
 * Role    : method
 */


ulonglong FUN_7ffada5f0470(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar4 = ceilf((float)param_2 / *param_1);
  lVar2 = 0;
  if ((DAT_7ffada84cc50 <= fVar4) && (fVar4 = fVar4 - DAT_7ffada84cc50, fVar4 < DAT_7ffada84cc50)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar4 + lVar2)) {
    uVar3 = (longlong)fVar4 + lVar2;
  }
  if (uVar3 <= uVar1) {
    return uVar1;
  }
  if ((uVar1 < 0x200) && (uVar3 <= uVar1 * 8)) {
    uVar3 = uVar1 * 8;
  }
  return uVar3;
}

