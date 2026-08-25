/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada668190
 * Address : 7ffada668190
 * Role    : method
 */


void FUN_7ffada668190(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  lVar6 = param_1[2];
  lVar2 = param_1[1];
  uVar5 = uVar3;
  if (lVar6 - lVar2 >> 3 != 0) {
    do {
      puVar1 = *(undefined8 **)(uVar3 + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar6 = param_1[2];
      uVar4 = (int)uVar5 + 1;
      lVar2 = param_1[1];
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lVar6 - lVar2 >> 3));
  }
  if (lVar2 != lVar6) {
    param_1[2] = lVar2;
  }
  return;
}

