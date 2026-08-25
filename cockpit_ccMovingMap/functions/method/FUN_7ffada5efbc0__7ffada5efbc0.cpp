/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5efbc0
 * Address : 7ffada5efbc0
 * Role    : method
 */


void FUN_7ffada5efbc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_7ffada5ef580(param_1,puVar1 + 2);
    free(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada5efc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)*param_1);
  return;
}

