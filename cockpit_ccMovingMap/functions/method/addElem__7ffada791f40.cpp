/*
 * CockpitBase.dll class reconstruction
 * Function: addElem
 * Address : 7ffada791f40
 * Role    : method
 * Vtable slots: 3
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::addElem(class cockpit::Element * __ptr64)
   __ptr64 */

void __thiscall cockpit::ccIndicatorPage::addElem(ccIndicatorPage *this,Element *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *_Dst;
  ulonglong uVar5;
  undefined8 *_Dst_00;
  ulonglong uVar6;
  undefined8 *_Src;
  longlong lVar7;
  longlong local_38 [2];
  
                    /* 0x381f40  2302  ?addElem@ccIndicatorPage@cockpit@@UEAAXPEAVElement@2@@Z */
  if (param_1 != (Element *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1);
    plVar4 = FUN_7ffada791a90((float *)(this + 0x10),local_38,puVar3);
    *(Element **)(*plVar4 + 0x30) = param_1;
    puVar3 = *(undefined8 **)(this + 0x58);
    if (puVar3 != *(undefined8 **)(this + 0x60)) {
      *puVar3 = param_1;
      *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + 8;
      return;
    }
    lVar7 = (longlong)puVar3 - *(longlong *)(this + 0x50) >> 3;
    if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    uVar6 = (longlong)*(undefined8 **)(this + 0x60) - *(longlong *)(this + 0x50) >> 3;
    uVar1 = lVar7 + 1;
    uVar5 = 0x1fffffffffffffff;
    if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) &&
       (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst = malloc(uVar5 * 8);
    if (_Dst == (undefined8 *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 * 8);
    }
    _Src = *(undefined8 **)(this + 0x50);
    puVar2 = *(undefined8 **)(this + 0x58);
    _Dst[lVar7] = param_1;
    _Dst_00 = _Dst;
    if (puVar3 != puVar2) {
      memmove(_Dst,_Src,(longlong)puVar3 - (longlong)_Src);
      _Dst_00 = _Dst + lVar7 + 1;
      _Src = puVar3;
    }
    memmove(_Dst_00,_Src,(longlong)puVar2 - (longlong)_Src);
    if (*(void **)(this + 0x50) != (void *)0x0) {
      free(*(void **)(this + 0x50));
    }
    *(undefined8 **)(this + 0x50) = _Dst;
    *(undefined8 **)(this + 0x58) = _Dst + uVar1;
    *(undefined8 **)(this + 0x60) = _Dst + uVar5;
  }
  return;
}

