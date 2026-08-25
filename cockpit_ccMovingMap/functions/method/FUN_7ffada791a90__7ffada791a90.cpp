/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada791a90
 * Address : 7ffada791a90
 * Role    : method
 */


longlong * FUN_7ffada791a90(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *local_38;
  longlong local_30;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar4 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_38,param_3,uVar8);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
  }
  puVar4 = malloc(0x38);
  if (puVar4 == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x38);
  }
  FUN_7ffada5ef690(puVar4 + 2,param_3);
  puVar4[6] = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar7 = local_38;
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    uVar5 = FUN_7ffada5f0470(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_7ffada602ba0((longlong)param_1,uVar5);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
      _Size = puVar4[4];
      puVar7 = puVar6;
      while( true ) {
        puVar6 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        _Buf1 = puVar4 + 2;
        if (0xf < (ulonglong)puVar4[5]) {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar7[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (puVar7 == puVar1) goto LAB_7ffada791c79;
        puVar7 = (undefined8 *)puVar7[1];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_7ffada791c79:
  puVar6 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar7;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  puVar7[1] = puVar4;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == puVar7) {
      *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
      goto LAB_7ffada791cc4;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) != puVar6) goto LAB_7ffada791cc4;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar4;
LAB_7ffada791cc4:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

