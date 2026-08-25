/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f1590
 * Address : 7ffada5f1590
 * Role    : method
 */


void FUN_7ffada5f1590(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_7ffada5f1590(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    if ((void *)param_3[5] != (void *)0x0) {
      free((void *)param_3[5]);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

