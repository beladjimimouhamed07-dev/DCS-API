/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada667990
 * Address : 7ffada667990
 * Role    : method
 */


void FUN_7ffada667990(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 5) {
      if (0xf < (ulonglong)puVar2[3]) {
        free((void *)*puVar2);
      }
      puVar2[2] = 0;
      puVar2[3] = 0xf;
      *(undefined1 *)puVar2 = 0;
    }
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

