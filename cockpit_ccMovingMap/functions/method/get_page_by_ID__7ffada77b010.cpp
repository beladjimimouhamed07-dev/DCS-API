/*
 * CockpitBase.dll class reconstruction
 * Function: get_page_by_ID
 * Address : 7ffada77b010
 * Role    : method
 */


/* public: class cockpit::ccIndicatorPage * __ptr64 __cdecl
   cockpit::ccIndicator::get_page_by_ID(unsigned char) __ptr64 */

ccIndicatorPage * __thiscall cockpit::ccIndicator::get_page_by_ID(ccIndicator *this,uchar param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
                    /* 0x36b010  4075
                       ?get_page_by_ID@ccIndicator@cockpit@@QEAAPEAVccIndicatorPage@2@E@Z
                       0x36b010  4076
                       ?get_page_by_ID@ccIndicator@cockpit@@QEBAPEBVccIndicatorPage@2@E@Z */
  plVar2 = *(longlong **)(this + 0x70);
  plVar4 = (longlong *)plVar2[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar3 = plVar2;
  while (cVar1 == '\0') {
    plVar5 = plVar4;
    if (*(byte *)(plVar4 + 4) < param_1) {
      plVar4 = plVar4 + 2;
      plVar5 = plVar3;
    }
    plVar4 = (longlong *)*plVar4;
    plVar3 = plVar5;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar3 + 0x19) == '\0') && (*(byte *)(plVar3 + 4) <= param_1)) &&
     (plVar3 != plVar2)) {
    return (ccIndicatorPage *)plVar3[5];
  }
  return (ccIndicatorPage *)0x0;
}

