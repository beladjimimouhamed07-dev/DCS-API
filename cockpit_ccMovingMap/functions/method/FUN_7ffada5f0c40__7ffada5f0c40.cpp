/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f0c40
 * Address : 7ffada5f0c40
 * Role    : method
 */


void FUN_7ffada5f0c40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_7ffada5f0850(param_1,(undefined8 *)*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_7ffada5ef580(param_1 + 8,puVar1 + 2);
      free(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_7ffada5ef600(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),&local_res8);
  }
  return;
}

