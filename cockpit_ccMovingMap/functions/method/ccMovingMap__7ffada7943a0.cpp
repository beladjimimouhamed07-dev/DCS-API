/*
 * CockpitBase.dll class reconstruction
 * Function: ccMovingMap
 * Address : 7ffada7943a0
 * Role    : method
 */


/* public: __cdecl cockpit::ccMovingMap::ccMovingMap(class cockpit::ccMovingMap const & __ptr64)
   __ptr64 */

ccMovingMap * __thiscall cockpit::ccMovingMap::ccMovingMap(ccMovingMap *this,ccMovingMap *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong *plVar8;
  
                    /* 0x3843a0  530  ??0ccMovingMap@cockpit@@QEAA@AEBV01@@Z */
  ccIndicatorPage::ccIndicatorPage((ccIndicatorPage *)this,(ccIndicatorPage *)param_1);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar6 = *(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 4;
  if (uVar6 != 0) {
    if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar7 = uVar6 * 0x10;
    pvVar3 = malloc(sVar7);
    if (pvVar3 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar7);
    }
    *(void **)(this + 0x80) = pvVar3;
    *(void **)(this + 0x88) = pvVar3;
    *(void **)(this + 0x90) = (void *)(sVar7 + (longlong)pvVar3);
    plVar1 = *(longlong **)(param_1 + 0x88);
    plVar8 = *(longlong **)(this + 0x80);
    for (plVar5 = *(longlong **)(param_1 + 0x80); plVar5 != plVar1; plVar5 = plVar5 + 2) {
      lVar2 = *plVar5;
      *plVar8 = lVar2;
      piVar4 = (int *)(lVar2 + 8);
      if (lVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      plVar8 = plVar8 + 2;
    }
    *(longlong **)(this + 0x88) = plVar8;
  }
  this[0x98] = param_1[0x98];
  this[0x99] = param_1[0x99];
  this[0x9a] = param_1[0x9a];
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  uVar6 = *(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 3;
  if (uVar6 != 0) {
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar7 = uVar6 * 8;
    pvVar3 = malloc(sVar7);
    if (pvVar3 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar7);
    }
    *(void **)(this + 0xa0) = pvVar3;
    *(void **)(this + 0xa8) = pvVar3;
    *(void **)(this + 0xb0) = (void *)(sVar7 + (longlong)pvVar3);
    pvVar3 = *(void **)(this + 0xa0);
    sVar7 = *(longlong *)(param_1 + 0xa8) - (longlong)*(void **)(param_1 + 0xa0);
    memmove(pvVar3,*(void **)(param_1 + 0xa0),sVar7);
    *(void **)(this + 0xa8) = (void *)((longlong)pvVar3 + ((longlong)sVar7 >> 3) * 8);
  }
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  FUN_7ffada62cf50((undefined8 *)(this + 0xc0),(longlong *)(param_1 + 0xc0));
  return this;
}

