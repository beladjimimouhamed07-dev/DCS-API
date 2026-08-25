/*
 * CockpitBase.dll class reconstruction
 * Function: getType
 * Address : 7ffada792350
 * Role    : method
 * Vtable slots: 8
 */


/* public: virtual int __cdecl cockpit::ccIndicatorPage::getType(void)const __ptr64 */

int __thiscall cockpit::ccIndicatorPage::getType(ccIndicatorPage *this)

{
  int iVar1;
  
                    /* 0x382350  3637  ?getType@ccIndicatorPage@cockpit@@UEBAHXZ */
  if (*(longlong **)(this + 0x78) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x7ffada79235c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(longlong **)(this + 0x78) + 0xd8))();
    return iVar1;
  }
  return 0;
}

