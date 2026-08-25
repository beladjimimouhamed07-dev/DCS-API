/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada6685d0
 * Address : 7ffada6685d0
 * Role    : method
 */


void FUN_7ffada6685d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = ED_vsnprintf(param_1 + 1,0x101,param_2,&local_res18);
  if (((int)uVar1 < 0) || (0x100 < uVar1)) {
    uVar1 = 0x100 - (int)*param_1;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *param_1 = *param_1 + (longlong)(int)uVar1;
  return;
}

