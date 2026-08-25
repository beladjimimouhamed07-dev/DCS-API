/*
 * CockpitBase.dll class reconstruction
 * Function: ccIndicatorPage
 * Address : 7ffada779980
 * Role    : method
 */


/* public: __cdecl cockpit::ccIndicatorPage::ccIndicatorPage(class cockpit::ccIndicatorPage const &
   __ptr64) __ptr64 */

ccIndicatorPage * __thiscall
cockpit::ccIndicatorPage::ccIndicatorPage(ccIndicatorPage *this,ccIndicatorPage *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
                    /* 0x369980  516  ??0ccIndicatorPage@cockpit@@QEAA@AEBV01@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(float *)(this + 0x10) = *(float *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  pvVar3 = malloc(0x38);
  if (pvVar3 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x38);
  }
  *(void **)pvVar3 = pvVar3;
  *(void **)((longlong)pvVar3 + 8) = pvVar3;
  *(void **)(this + 0x18) = pvVar3;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3;
  uVar2 = *(undefined8 *)(this + 0x18);
  if ((ulonglong)(*(longlong *)(this + 0x30) >> 3) < uVar5) {
    puVar4 = malloc(uVar5 * 8);
    if (puVar4 == (undefined8 *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 * 8);
    }
    if (7 < (ulonglong)(*(longlong *)(this + 0x38) - (longlong)*(void **)(this + 0x28))) {
      free(*(void **)(this + 0x28));
    }
    *(undefined8 **)(this + 0x28) = puVar4;
    puVar1 = puVar4 + uVar5;
    *(undefined8 **)(this + 0x30) = puVar1;
    *(undefined8 **)(this + 0x38) = puVar1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar4 = uVar2;
    }
  }
  else {
    uVar5 = *(longlong *)(this + 0x30) + 7U >> 3;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)0x0;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      }
    }
  }
  FUN_7ffada778590((float *)(this + 0x10),(undefined8 *)**(undefined8 **)(param_1 + 0x18),
                   *(undefined8 **)(param_1 + 0x18));
  FUN_7ffada62cf50((undefined8 *)(this + 0x50),(longlong *)(param_1 + 0x50));
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  return this;
}

