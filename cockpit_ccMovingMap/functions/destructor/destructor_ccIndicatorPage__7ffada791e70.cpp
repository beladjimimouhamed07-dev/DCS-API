/*
 * CockpitBase.dll class reconstruction
 * Function: ~ccIndicatorPage
 * Address : 7ffada791e70
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::ccIndicatorPage::~ccIndicatorPage(void) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::~ccIndicatorPage(ccIndicatorPage *this)

{
  longlong *_Dst;
  longlong *plVar1;
  
                    /* 0x381e70  899  ??1ccIndicatorPage@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  _Dst = *(longlong **)(this + 0x50);
  if (_Dst != *(longlong **)(this + 0x58)) {
    do {
      plVar1 = (longlong *)*_Dst;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
      memmove(_Dst,_Dst + 1,*(longlong *)(this + 0x58) - (longlong)(_Dst + 1));
      *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + -8;
    } while (_Dst != *(longlong **)(this + 0x58));
  }
  FUN_7ffada603bc0((longlong)(this + 0x10));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
  }
  FUN_7ffada5f1620(this + 0x18,*(undefined8 **)(this + 0x18));
                    /* WARNING: Could not recover jumptable at 0x7ffada791f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(*(void **)(this + 0x18));
  return;
}

