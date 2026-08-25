/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada82b29c
 * Address : 7ffada82b29c
 * Role    : method
 */


void FUN_7ffada82b29c(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada603070();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7ffada6b39e0();
}

