/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada664ab0
 * Address : 7ffada664ab0
 * Role    : method
 */


undefined4 * FUN_7ffada664ab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  *(undefined ***)(param_1 + 2) = ClipVolume::vftable;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined ***)(param_1 + 2) = ClipVolumePlanes::vftable;
  *(undefined8 *)(param_1 + 8) = uVar1;
  lVar6 = 3;
  puVar2 = (undefined8 *)(param_1 + 10);
  puVar3 = (undefined8 *)(param_2 + 10);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  param_1[0x6e] = param_2[0x6e];
  *(undefined8 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x75) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined ***)(param_1 + 2) = ClipVolumeCamera::vftable;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  param_1[0x79] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0x3f800000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0x3f800000;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  param_1[0x7a] = param_2[0x7a];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7e] = param_2[0x7e];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  *(undefined ***)(param_1 + 0x82) = ClipVolume::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x86);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x86) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined ***)(param_1 + 0x82) = ClipVolumeBox::vftable;
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x91) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x93) = 0;
  param_1[0x95] = 0;
  *(undefined8 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0x3f800000;
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = param_2[0x95];
  param_1[0x96] = param_2[0x96];
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  *(undefined8 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa1) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0x3f800000;
  param_1[0xaa] = 0;
  param_1[0xab] = 0x3f800000;
  param_1[0x9c] = param_2[0x9c];
  param_1[0x9d] = param_2[0x9d];
  param_1[0x9e] = param_2[0x9e];
  param_1[0xa0] = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  param_1[0xa2] = param_2[0xa2];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa5] = param_2[0xa5];
  param_1[0xa6] = param_2[0xa6];
  param_1[0xa8] = param_2[0xa8];
  param_1[0xa9] = param_2[0xa9];
  param_1[0xaa] = param_2[0xaa];
  param_1[0xac] = param_2[0xac];
  param_1[0xad] = param_2[0xad];
  param_1[0xae] = param_2[0xae];
  param_1[0xaf] = param_2[0xaf];
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  *(undefined8 *)(param_1 + 0xb5) = *(undefined8 *)(param_2 + 0xb5);
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  param_1[0xbb] = param_2[0xbb];
  uVar1 = *(undefined8 *)(param_2 + 0xbe);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xbe) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  return param_1;
}

