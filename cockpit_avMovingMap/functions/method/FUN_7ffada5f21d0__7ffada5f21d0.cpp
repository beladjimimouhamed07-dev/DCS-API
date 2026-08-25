/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f21d0
 * Address : 7ffada5f21d0
 * Role    : method
 */


void FUN_7ffada5f21d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  _Memory = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}

