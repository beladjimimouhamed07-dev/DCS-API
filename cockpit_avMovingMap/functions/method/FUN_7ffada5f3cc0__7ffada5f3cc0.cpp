/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f3cc0
 * Address : 7ffada5f3cc0
 * Role    : method
 */


longlong * FUN_7ffada5f3cc0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar6 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= (int)local_28[4];
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar2) {
        plVar4 = local_28 + 2;
        plVar5 = plVar6;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar6 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < (int)plVar5[4])) {
    if (param_1[1] == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f4c90();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar5 = malloc(0x88);
    if (plVar5 == (longlong *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x88);
    }
    *(int *)(plVar5 + 4) = *param_2;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_7ffada5f4830(param_1,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 5;
}

