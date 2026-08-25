/*
 * CockpitBase.dll class reconstruction
 * Function: get_arg_value
 * Address : 7ffada5f9850
 * Role    : method
 */


/* public: float __cdecl cockpit::clickableElementData::get_arg_value(int) __ptr64 */

float __thiscall
cockpit::clickableElementData::get_arg_value(clickableElementData *this,int param_1)

{
  float fVar1;
  
                    /* 0x1e9850  3751  ?get_arg_value@clickableElementData@cockpit@@QEAAMH@Z */
  if ((*(longlong **)(this + 0x198) != (longlong *)0x0) && (-1 < param_1)) {
                    /* WARNING: Could not recover jumptable at 0x7ffada5f9864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(**(longlong **)(this + 0x198) + 0x70))();
    return fVar1;
  }
  return 0.0;
}

