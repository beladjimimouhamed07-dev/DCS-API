/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada645a10
 * Address : 7ffada645a10
 * Role    : method
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_7ffada645a10(longlong *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < (int)param_1[1])) {
    return (undefined4 *)(*param_1 + (longlong)param_2 * 8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_7ffada960db8) {
    FUN_7ffada82b8c4(&DAT_7ffada960db8);
    if (DAT_7ffada960db8 == -1) {
      _DAT_7ffada960db0 = 0;
      _Init_thread_footer(&DAT_7ffada960db8);
    }
  }
  _DAT_7ffada960db0 = 0;
  return &DAT_7ffada960db0;
}

