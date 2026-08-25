/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f10d0
 * Address : 7ffada5f10d0
 * Role    : method
 */


void FUN_7ffada5f10d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = FUN_7ffada5f1230(param_1,*(undefined8 **)(*param_2 + 8),*param_1,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}

