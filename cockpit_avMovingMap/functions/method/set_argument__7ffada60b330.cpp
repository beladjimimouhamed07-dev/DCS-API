/*
 * CockpitBase.dll class reconstruction
 * Function: set_argument
 * Address : 7ffada60b330
 * Role    : method
 */


/* public: void __cdecl cockpit::ccCockpitContext::set_argument(int,float) __ptr64 */

void __thiscall
cockpit::ccCockpitContext::set_argument(ccCockpitContext *this,int param_1,float param_2)

{
                    /* 0x1fb330  6178  ?set_argument@ccCockpitContext@cockpit@@QEAAXHM@Z */
  if (*(longlong *)(this + 0xf8) != 0) {
    ccMainPanel::SetArgument((ccMainPanel *)(*(longlong *)(this + 0xf8) + 0x98),param_1,param_2);
    return;
  }
  return;
}

