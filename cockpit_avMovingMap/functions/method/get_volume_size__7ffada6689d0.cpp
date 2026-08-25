/*
 * CockpitBase.dll class reconstruction
 * Function: get_volume_size
 * Address : 7ffada6689d0
 * Role    : method
 * Vtable slots: 28
 */


/* public: virtual double __cdecl cockpit::avKneeboard::get_volume_size(void)const __ptr64 */

double __thiscall cockpit::avKneeboard::get_volume_size(avKneeboard *this)

{
  double *pdVar1;
  ulonglong uVar2;
  
                    /* 0x2589d0  4339  ?get_volume_size@avKneeboard@cockpit@@UEBANXZ */
  pdVar1 = *(double **)(this + 0x378);
  uVar2 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar2 < (ulonglong)((*(longlong *)(this + 0x380) - (longlong)pdVar1) / 0x30)) {
    return pdVar1[uVar2 * 6];
  }
  return *pdVar1;
}

