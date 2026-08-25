/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada82b8c4
 * Address : 7ffada82b8c4
 * Role    : method
 */


void FUN_7ffada82b8c4(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_7ffada82b92c:
                    /* WARNING: Could not recover jumptable at 0x7ffada82b938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_7ffada94e88c;
      goto LAB_7ffada82b92c;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_7ffada965fc8,(PSRWLOCK)&DAT_7ffada965fd0,0xffffffff,0);
  } while( true );
}

