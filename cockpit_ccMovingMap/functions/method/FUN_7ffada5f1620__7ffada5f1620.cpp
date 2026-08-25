/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f1620
 * Address : 7ffada5f1620
 * Role    : method
 */


void FUN_7ffada5f1620(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  *(undefined8 *)param_2[1] = 0;
  _Memory = (undefined8 *)*param_2;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    if (0xf < (ulonglong)_Memory[5]) {
      free((void *)_Memory[2]);
    }
    _Memory[4] = 0;
    _Memory[5] = 0xf;
    *(undefined1 *)(_Memory + 2) = 0;
    free(_Memory);
    _Memory = puVar1;
  }
  return;
}

