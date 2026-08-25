/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f14c0
 * Address : 7ffada5f14c0
 * Role    : method
 */


void FUN_7ffada5f14c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada5f1523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)*param_1);
  return;
}

