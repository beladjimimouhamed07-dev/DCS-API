/*
 * CockpitBase.dll class reconstruction
 * Function: setParent
 * Address : 7ffada77b3e0
 * Role    : method
 * Vtable slots: 11
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setParent(class cockpit::ccDrawable *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::setParent(ccIndicatorPage *this,ccDrawable *param_1)

{
                    /* 0x36b3e0  6015  ?setParent@ccIndicatorPage@cockpit@@UEAAXPEAVccDrawable@2@@Z
                        */
  *(ccDrawable **)(this + 0x78) = param_1;
  return;
}

