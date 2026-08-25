/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f1530
 * Address : 7ffada5f1530
 * Role    : method
 */


void FUN_7ffada5f1530(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

