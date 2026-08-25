/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada603bc0
 * Address : 7ffada603bc0
 * Role    : method
 */


void FUN_7ffada603bc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_7ffada603090(param_1,(longlong *)*plVar1,plVar1);
      return;
    }
    FUN_7ffada5f1620(param_1 + 8,plVar1);
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_7ffada5ef600(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),&local_res8);
  }
  return;
}

