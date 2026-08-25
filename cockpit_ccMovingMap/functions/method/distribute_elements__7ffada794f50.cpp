/*
 * CockpitBase.dll class reconstruction
 * Function: distribute_elements
 * Address : 7ffada794f50
 * Role    : method
 * Vtable slots: 15
 */


/* protected: virtual void __cdecl cockpit::ccMovingMap::distribute_elements(void) __ptr64 */

void __thiscall cockpit::ccMovingMap::distribute_elements(ccMovingMap *this)

{
  longlong *_Src;
  longlong *plVar1;
  longlong *_Dst;
  longlong *plVar2;
  
                    /* 0x384f50  2941  ?distribute_elements@ccMovingMap@cockpit@@MEAAXXZ */
  ccIndicatorPage::distribute_elements((ccIndicatorPage *)this);
  plVar2 = *(longlong **)(this + 0xc0);
  if (plVar2 != *(longlong **)(this + 200)) {
    do {
      plVar1 = *(longlong **)(this + 0x58);
      if (*(longlong **)(this + 0x50) != plVar1) {
        _Dst = *(longlong **)(this + 0x50);
        do {
          _Src = _Dst + 1;
          if (*plVar2 == *_Dst) {
            memmove(_Dst,_Src,(longlong)plVar1 - (longlong)_Src);
            *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + -8;
            break;
          }
          _Dst = _Src;
        } while (_Src != plVar1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != *(longlong **)(this + 200));
  }
  if (*(longlong *)(this + 0xc0) != *(longlong *)(this + 200)) {
    *(longlong *)(this + 200) = *(longlong *)(this + 0xc0);
  }
  return;
}

