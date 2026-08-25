/*
 * CockpitBase.dll class reconstruction
 * Function: getparent
 * Address : 7ffada77b0d0
 * Role    : method
 * Vtable slots: 12
 */


/* public: virtual class cockpit::ccDrawable * __ptr64 __cdecl
   cockpit::ccIndicatorPage::getparent(void)const __ptr64 */

ccDrawable * __thiscall cockpit::ccIndicatorPage::getparent(ccIndicatorPage *this)

{
                    /* 0x36b0d0  4355  ?getparent@ccIndicatorPage@cockpit@@UEBAPEAVccDrawable@2@XZ
                        */
  return *(ccDrawable **)(this + 0x78);
}

