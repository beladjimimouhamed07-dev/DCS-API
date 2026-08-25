/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada828ff0
 * Address : 7ffada828ff0
 * Role    : method
 */


undefined8 * FUN_7ffada828ff0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 2) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xff7fffff;
  *(undefined4 *)(param_1 + 3) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff7fffff;
  *param_1 = ClipVolumePlanes::vftable;
  lVar2 = 10;
  puVar1 = param_1 + 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}

