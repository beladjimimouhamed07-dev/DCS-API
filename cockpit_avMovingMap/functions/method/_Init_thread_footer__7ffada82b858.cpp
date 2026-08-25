/*
 * CockpitBase.dll class reconstruction
 * Function: _Init_thread_footer
 * Address : 7ffada82b858
 * Role    : method
 */


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
  uVar1 = (ulonglong)_tls_index;
  DAT_7ffada94e88c = DAT_7ffada94e88c + 1;
  *param_1 = DAT_7ffada94e88c;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_7ffada94e88c;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
                    /* WARNING: Could not recover jumptable at 0x7ffada82b8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_7ffada965fc8);
  return;
}

