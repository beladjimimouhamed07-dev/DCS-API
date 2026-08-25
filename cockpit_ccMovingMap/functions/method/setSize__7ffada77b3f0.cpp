/*
 * CockpitBase.dll class reconstruction
 * Function: setSize
 * Address : 7ffada77b3f0
 * Role    : method
 * Vtable slots: 6
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setSize(float,float) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::setSize(ccIndicatorPage *this,float param_1,float param_2)

{
                    /* 0x36b3f0  6065  ?setSize@ccIndicatorPage@cockpit@@UEAAXMM@Z */
  *(float *)(this + 0x68) = param_1;
  *(float *)(this + 0x6c) = param_2;
  return;
}

