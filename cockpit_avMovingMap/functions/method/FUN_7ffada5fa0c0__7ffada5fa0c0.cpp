/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5fa0c0
 * Address : 7ffada5fa0c0
 * Role    : method
 */


undefined1 FUN_7ffada5fa0c0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar18 = *param_2;
  fVar17 = 0.0;
  fVar14 = 0.0;
  fVar1 = param_1[3];
  fVar2 = *param_1;
  if (fVar18 < fVar2) {
    fVar14 = (fVar2 - fVar18) * (fVar2 - fVar18) + 0.0;
  }
  if (fVar1 < fVar18) {
    fVar14 = fVar14 + (fVar18 - fVar1) * (fVar18 - fVar1);
  }
  fVar3 = param_1[1];
  fVar16 = 0.0;
  fVar19 = param_2[1];
  fVar4 = param_1[4];
  if (fVar19 < fVar3) {
    fVar16 = (fVar3 - fVar19) * (fVar3 - fVar19) + 0.0;
  }
  if (fVar4 < fVar19) {
    fVar16 = fVar16 + (fVar19 - fVar4) * (fVar19 - fVar4);
  }
  fVar5 = param_1[2];
  fVar15 = param_2[2];
  fVar6 = param_1[5];
  if (fVar15 < fVar5) {
    fVar17 = (fVar5 - fVar15) * (fVar5 - fVar15) + 0.0;
  }
  if (fVar6 < fVar15) {
    fVar17 = fVar17 + (fVar15 - fVar6) * (fVar15 - fVar6);
  }
  if (fVar17 + fVar16 + fVar14 <= param_3 * param_3) {
    fVar17 = fVar15 - param_3;
    cVar9 = '\x01';
    fVar15 = fVar15 + param_3;
    if ((((fVar17 < fVar5) || (fVar6 < fVar17)) || (fVar15 < fVar5)) ||
       (cVar11 = '\x01', fVar6 < fVar15)) {
      cVar11 = '\0';
    }
    if (((fVar5 < fVar17) || (fVar15 < fVar5)) ||
       ((fVar6 < fVar17 || (cVar7 = '\x01', fVar15 < fVar6)))) {
      cVar7 = '\0';
    }
    fVar17 = fVar19 - param_3;
    fVar19 = fVar19 + param_3;
    if (((fVar17 < fVar3) || (fVar4 < fVar17)) ||
       ((fVar19 < fVar3 || (cVar12 = '\x01', fVar4 < fVar19)))) {
      cVar12 = '\0';
    }
    if ((((fVar3 < fVar17) || (fVar19 < fVar3)) || (fVar4 < fVar17)) ||
       (cVar8 = '\x01', fVar19 < fVar4)) {
      cVar8 = '\0';
    }
    fVar17 = fVar18 - param_3;
    fVar18 = fVar18 + param_3;
    if (((fVar17 < fVar2) || (fVar1 < fVar17)) ||
       ((fVar18 < fVar2 || (cVar10 = '\x01', fVar1 < fVar18)))) {
      cVar10 = '\0';
    }
    if (((fVar2 < fVar17) || (fVar18 < fVar2)) || ((fVar1 < fVar17 || (fVar18 < fVar1)))) {
      cVar9 = '\0';
    }
    cVar10 = (-cVar8 & 10U) + cVar12 + (-cVar9 & 10U) + (-cVar7 & 10U) + cVar11 + cVar10;
    if (cVar10 == '\x03') {
      uVar13 = 2;
    }
    else {
      uVar13 = cVar10 != '\x1e';
    }
  }
  else {
    uVar13 = 3;
  }
  return uVar13;
}

