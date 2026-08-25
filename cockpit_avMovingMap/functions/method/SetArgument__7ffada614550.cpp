/*
 * CockpitBase.dll class reconstruction
 * Function: SetArgument
 * Address : 7ffada614550
 * Role    : method
 */


/* public: virtual void __cdecl cockpit::ccMainPanel::SetArgument(int,float) __ptr64 */

void __thiscall cockpit::ccMainPanel::SetArgument(ccMainPanel *this,int param_1,float param_2)

{
                    /* 0x204550  2149  ?SetArgument@ccMainPanel@cockpit@@UEAAXHM@Z */
  if ((ulonglong)(longlong)param_1 <
      (ulonglong)(*(longlong *)(this + 0x98) - *(longlong *)(this + 0x90) >> 2)) {
    *(float *)(*(longlong *)(this + 0x90) + (longlong)param_1 * 4) = param_2;
  }
  return;
}

