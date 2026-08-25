/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada778590
 * Address : 7ffada778590
 * Role    : method
 */


void FUN_7ffada778590(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *local_48;
  undefined8 *local_40;
  float *local_38;
  undefined8 *local_30;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    uVar5 = 0;
    puVar4 = param_2 + 2;
    if (0xf < (ulonglong)param_2[5]) {
      puVar4 = (undefined8 *)param_2[2];
    }
    uVar8 = 0xcbf29ce484222325;
    if (param_2[4] != 0) {
      do {
        uVar8 = (uVar8 ^ *(byte *)((longlong)puVar4 + uVar5)) * 0x100000001b3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)param_2[4]);
    }
    FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_48,param_2 + 2,uVar8);
    if (local_40 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
      }
      local_30 = (undefined8 *)0x0;
      local_38 = param_1 + 2;
      puVar4 = malloc(0x38);
      if (puVar4 == (undefined8 *)0x0) {
        ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x38);
      }
      local_30 = puVar4;
      FUN_7ffada5ef690(puVar4 + 2,param_2 + 2);
      puVar4[6] = param_2[6];
      fVar9 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar9 && fVar9 != *param_1) {
        uVar5 = FUN_7ffada5f0470(param_1,*(longlong *)(param_1 + 4) + 1U);
        FUN_7ffada602ba0((longlong)param_1,uVar5);
        puVar6 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
        puVar7 = *(undefined8 **)(param_1 + 2);
        if (puVar6 != puVar7) {
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
               ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) {
              local_48 = (undefined8 *)*puVar7;
              local_40 = puVar7;
              goto LAB_7ffada7787a7;
            }
            if (puVar7 == puVar1) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        local_40 = (undefined8 *)0x0;
        local_48 = puVar7;
      }
LAB_7ffada7787a7:
      local_30 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)local_48[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar4 = local_48;
      puVar4[1] = puVar6;
      *puVar6 = puVar4;
      local_48[1] = puVar4;
      uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
      lVar2 = *(longlong *)(param_1 + 6);
      puVar7 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
      if (puVar7 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
LAB_7ffada7787f6:
        *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar4;
      }
      else if (puVar7 == local_48) {
        *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
      }
      else if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) == puVar6) goto LAB_7ffada7787f6;
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}

