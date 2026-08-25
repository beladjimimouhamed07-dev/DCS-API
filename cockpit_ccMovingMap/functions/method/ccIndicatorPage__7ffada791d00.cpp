/*
 * CockpitBase.dll class reconstruction
 * Function: ccIndicatorPage
 * Address : 7ffada791d00
 * Role    : method
 */


/* WARNING: Removing unreachable block (ram,0x7ffada791e0e) */
/* WARNING: Removing unreachable block (ram,0x7ffada791e1b) */
/* WARNING: Removing unreachable block (ram,0x7ffada791e20) */
/* public: __cdecl cockpit::ccIndicatorPage::ccIndicatorPage(void) __ptr64 */

ccIndicatorPage * __thiscall cockpit::ccIndicatorPage::ccIndicatorPage(ccIndicatorPage *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
                    /* 0x381d00  517  ??0ccIndicatorPage@cockpit@@QEAA@XZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
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
  *(undefined8 *)(this + 0x40) = 7;
  *(undefined8 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar4 = malloc(0x80);
  if (puVar4 == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x80);
  }
  if (7 < (ulonglong)(*(longlong *)(this + 0x38) - (longlong)*(void **)(this + 0x28))) {
    free(*(void **)(this + 0x28));
  }
  *(undefined8 **)(this + 0x28) = puVar4;
  puVar1 = puVar4 + 0x10;
  *(undefined8 **)(this + 0x30) = puVar1;
  *(undefined8 **)(this + 0x38) = puVar1;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    *puVar4 = uVar2;
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x74) = 0x3f800000;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 0x6c) = 0x3f800000;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  return this;
}

