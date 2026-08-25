/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada6647d0
 * Address : 7ffada6647d0
 * Role    : method
 */


void FUN_7ffada6647d0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  size_t _Size;
  
  if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  lVar10 = (param_1[1] - *param_1) / 0x28;
  uVar4 = (param_1[2] - *param_1) / 0x28;
  uVar13 = 0x666666666666666;
  if ((uVar4 <= 0x666666666666666 - (uVar4 >> 1)) &&
     (uVar13 = (uVar4 >> 1) + uVar4, uVar13 < param_2)) {
    uVar13 = param_2;
  }
  _Size = uVar13 * 0x28;
  pvVar9 = malloc(_Size);
  if (pvVar9 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
  }
  puVar12 = (undefined8 *)((longlong)pvVar9 + lVar10 * 0x28);
  for (lVar10 = param_2 - lVar10; lVar10 != 0; lVar10 = lVar10 + -1) {
    puVar12[4] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    puVar12 = puVar12 + 5;
  }
  puVar2 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  if (puVar11 != puVar2) {
    puVar12 = (undefined8 *)((longlong)pvVar9 + 0x18);
    do {
      puVar12[-3] = 0;
      puVar12[-2] = 0;
      puVar12[-1] = 0;
      *puVar12 = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)(puVar12 + -3) = *puVar11;
      *(undefined4 *)((longlong)puVar12 + -0x14) = uVar5;
      *(undefined4 *)(puVar12 + -2) = uVar6;
      *(undefined4 *)((longlong)puVar12 + -0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar11 + 6);
      puVar12[-1] = *(undefined8 *)(puVar11 + 4);
      *puVar12 = uVar8;
      *(undefined1 *)puVar11 = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      puVar1 = puVar11 + 8;
      puVar11 = puVar11 + 10;
      *(undefined4 *)(puVar12 + 1) = *puVar1;
      puVar12 = puVar12 + 5;
    } while (puVar11 != puVar2);
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    for (; puVar12 != puVar3; puVar12 = puVar12 + 5) {
      if (0xf < (ulonglong)puVar12[3]) {
        free((void *)*puVar12);
      }
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      *(undefined1 *)puVar12 = 0;
    }
    free((void *)*param_1);
  }
  *param_1 = (longlong)pvVar9;
  param_1[1] = (longlong)((longlong)pvVar9 + param_2 * 0x28);
  param_1[2] = (longlong)(_Size + (longlong)pvVar9);
  return;
}

