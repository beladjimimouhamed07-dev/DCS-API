/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f29f0
 * Address : 7ffada5f29f0
 * Role    : method
 */


longlong * FUN_7ffada5f29f0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 *local_48;
  longlong local_40;
  
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar3 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_48,param_3,uVar9);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
  }
  puVar3 = malloc(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x78);
  }
  FUN_7ffada5ef690(puVar3 + 2,param_3);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar10 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar4 = 0;
    if ((DAT_7ffada84cc50 <= fVar10) &&
       (fVar10 = fVar10 - DAT_7ffada84cc50, fVar10 < DAT_7ffada84cc50)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar8 = uVar6;
    if ((uVar6 < uVar5) && ((0x1ff < uVar6 || (uVar8 = uVar6 * 8, uVar6 * 8 < uVar5)))) {
      uVar8 = uVar5;
    }
    FUN_7ffada5f0510((longlong)param_1,uVar8);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    local_48 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != local_48) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
      uVar6 = puVar3[5];
      _Size = puVar3[4];
      local_48 = puVar7;
      while( true ) {
        puVar7 = local_48 + 2;
        if (0xf < (ulonglong)local_48[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar3 + 2;
        if (0xf < uVar6) {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == local_48[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar7,_Size), iVar2 == 0)))) break;
        if (local_48 == puVar1) goto LAB_7ffada5f2c72;
        local_48 = (undefined8 *)local_48[1];
      }
      local_48 = (undefined8 *)*local_48;
    }
  }
LAB_7ffada5f2c72:
  puVar7 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = local_48;
  puVar3[1] = puVar7;
  *puVar7 = puVar3;
  local_48[1] = puVar3;
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  lVar4 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar4 + uVar9 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == local_48) {
      *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar3;
      goto LAB_7ffada5f2cbd;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) != puVar7) goto LAB_7ffada5f2cbd;
  }
  *(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) = puVar3;
LAB_7ffada5f2cbd:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

