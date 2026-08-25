/*
 * CockpitBase.dll class reconstruction
 * Function: reset_draw_objects
 * Address : 7ffada7eb5b0
 * Role    : method
 */


/* public: void __cdecl cockpit::avDrawCachedObj::reset_draw_objects(void)const __ptr64 */

void __thiscall cockpit::avDrawCachedObj::reset_draw_objects(avDrawCachedObj *this)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
                    /* 0x3db5b0  5680  ?reset_draw_objects@avDrawCachedObj@cockpit@@QEBAXXZ */
  lVar4 = *(longlong *)(this + 0x10);
  uVar3 = 0;
  lVar2 = *(longlong *)(this + 8);
  if (lVar4 - lVar2 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(lVar2 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
      lVar4 = *(longlong *)(this + 0x10);
      uVar3 = (ulonglong)((int)uVar3 + 1);
      lVar2 = *(longlong *)(this + 8);
    } while (uVar3 < (ulonglong)(lVar4 - lVar2 >> 3));
  }
  if (lVar2 != lVar4) {
    *(longlong *)(this + 0x10) = lVar2;
  }
  return;
}

