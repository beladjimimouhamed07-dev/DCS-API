/*
 * CockpitBase.dll class reconstruction
 * Function: get_map_rotation
 * Address : 7ffada668860
 * Role    : method
 * Vtable slots: 27
 */


/* public: virtual bool __cdecl cockpit::avKneeboard::get_map_rotation(double & __ptr64) __ptr64 */

bool __thiscall cockpit::avKneeboard::get_map_rotation(avKneeboard *this,double *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0x258860  4023  ?get_map_rotation@avKneeboard@cockpit@@UEAA_NAEAN@Z */
  lVar1 = *(longlong *)(this + 0x378);
  uVar2 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar2 < (ulonglong)((*(longlong *)(this + 0x380) - lVar1) / 0x30)) {
    *param_1 = *(double *)(uVar2 * 0x30 + lVar1 + 0x10);
    return true;
  }
  *param_1 = *(double *)(lVar1 + 0x10);
  return true;
}

