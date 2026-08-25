/*
 * CockpitBase.dll class reconstruction
 * Function: get_argument
 * Address : 7ffada606d80
 * Role    : method
 */


/* public: float __cdecl cockpit::ccCockpitContext::get_argument(int) __ptr64 */

float __thiscall cockpit::ccCockpitContext::get_argument(ccCockpitContext *this,int param_1)

{
                    /* 0x1f6d80  3752  ?get_argument@ccCockpitContext@cockpit@@QEAAMH@Z */
  if (*(longlong *)(this + 0xf8) != 0) {
    return *(float *)(*(longlong *)(*(longlong *)(this + 0xf8) + 0x128) + (longlong)param_1 * 4);
  }
  return 0.0;
}

