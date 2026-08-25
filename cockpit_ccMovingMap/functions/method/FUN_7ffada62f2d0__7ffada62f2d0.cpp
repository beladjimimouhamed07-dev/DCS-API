/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada62f2d0
 * Address : 7ffada62f2d0
 * Role    : method
 */


void FUN_7ffada62f2d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    do {
      piVar3 = (int *)(*param_1 + 8);
      if (*param_1 == 0) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          puVar2 = (undefined8 *)*param_1;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          *param_1 = 0;
        }
      }
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}

