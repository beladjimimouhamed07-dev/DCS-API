/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f9de0
 * Address : 7ffada5f9de0
 * Role    : method
 */


undefined8
FUN_7ffada5f9de0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  ulonglong in_RAX;
  float **ppfVar3;
  uint7 uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar2 = param_5;
  fVar1 = DAT_7ffada84d3ec;
  fVar6 = DAT_7ffada84d3d8;
  bVar5 = 1;
  fVar9 = *param_3 - *param_2;
  fVar8 = param_3[1] - param_2[1];
  fVar7 = param_3[2] - param_2[2];
  *param_4 = -3.4028235e+38;
  *param_5 = 3.4028235e+38;
  if (fVar9 <= fVar6) {
    if (fVar9 < fVar1) {
      param_5._0_4_ = (*param_1 - *param_2) / fVar9;
      ppfVar3 = &param_5;
      if (DAT_7ffada84d3e8 <= param_5._0_4_) {
        ppfVar3 = (float **)pfVar2;
      }
      in_RAX = (ulonglong)(uint)*(float *)ppfVar3;
      *pfVar2 = *(float *)ppfVar3;
      fVar6 = param_1[3];
      goto LAB_7ffada5f9e7b;
    }
    if ((*param_2 < *param_1) || (param_1[3] < *param_2)) {
      bVar5 = 0;
    }
  }
  else {
    fVar6 = (param_1[3] - *param_2) / fVar9;
    if (DAT_7ffada84d3e8 <= fVar6) {
      fVar6 = DAT_7ffada84d3e8;
    }
    *param_5 = fVar6;
    fVar6 = *param_1;
LAB_7ffada5f9e7b:
    fVar9 = (fVar6 - *param_2) / fVar9;
    if (fVar9 <= *param_4) {
      fVar9 = *param_4;
    }
    *param_4 = fVar9;
  }
  if (fVar8 <= DAT_7ffada84d3d8) {
    if (fVar8 < fVar1) {
      fVar6 = (param_1[1] - param_2[1]) / fVar8;
      if (*pfVar2 <= fVar6) {
        fVar6 = *pfVar2;
      }
      *pfVar2 = fVar6;
      fVar6 = param_1[4];
      goto LAB_7ffada5f9eef;
    }
    uVar4 = (uint7)(in_RAX >> 8);
    if ((param_2[1] < param_1[1]) || (param_1[4] < param_2[1])) {
      in_RAX = (ulonglong)uVar4 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar4,1);
    }
    bVar5 = bVar5 & (byte)in_RAX;
  }
  else {
    fVar6 = (param_1[4] - param_2[1]) / fVar8;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[1];
LAB_7ffada5f9eef:
    fVar8 = (fVar6 - param_2[1]) / fVar8;
    if (fVar8 <= *param_4) {
      fVar8 = *param_4;
    }
    *param_4 = fVar8;
  }
  if (fVar7 <= DAT_7ffada84d3d8) {
    if (fVar1 <= fVar7) {
      uVar4 = (uint7)(in_RAX >> 8);
      if ((param_2[2] < param_1[2]) || (param_1[5] < param_2[2])) {
        in_RAX = (ulonglong)uVar4 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar4,1);
      }
      bVar5 = bVar5 & (byte)in_RAX;
      goto LAB_7ffada5f9f9f;
    }
    fVar6 = (param_1[2] - param_2[2]) / fVar7;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[5];
  }
  else {
    fVar6 = (param_1[5] - param_2[2]) / fVar7;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[2];
  }
  fVar7 = (fVar6 - param_2[2]) / fVar7;
  if (fVar7 <= *param_4) {
    fVar7 = *param_4;
  }
  *param_4 = fVar7;
LAB_7ffada5f9f9f:
  if ((bVar5 != 0) && (*param_4 <= *pfVar2)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  *pfVar2 = 0.0;
  *param_4 = 0.0;
  return 0;
}

