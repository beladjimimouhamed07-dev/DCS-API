/*
 * CockpitBase.dll class reconstruction
 * Function: avKneeboard
 * Address : 7ffada6650d0
 * Role    : method
 */


/* public: __cdecl cockpit::avKneeboard::avKneeboard(class cockpit::avKneeboard const & __ptr64)
   __ptr64 */

avKneeboard * __thiscall cockpit::avKneeboard::avKneeboard(avKneeboard *this,avKneeboard *param_1)

{
  avKneeboard *paVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
                    /* 0x2550d0  324  ??0avKneeboard@cockpit@@QEAA@AEBV01@@Z */
  avDevice::avDevice((avDevice *)this,(avDevice *)param_1);
  *(undefined ***)(this + 0x98) = avMovingMap::vftable;
  FUN_7ffada664ab0((undefined4 *)(this + 0xa0),(undefined4 *)(param_1 + 0xa0));
  *(undefined8 *)(this + 0x3b0) = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined8 *)(this + 0x3b8) = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined ***)this = &_vftable__for__cockpit__ccContextRelatedObject__;
  *(undefined ***)(this + 0x20) = &_vftable__for__cockpit__avLuaRegistrable__;
  *(undefined ***)(this + 0x98) = &_vftable_;
  uVar6 = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined8 *)(this + 0x3c8) = *(undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(this + 0x3d0) = uVar6;
  uVar3 = *(undefined4 *)(param_1 + 0x3dc);
  uVar4 = *(undefined4 *)(param_1 + 0x3e0);
  uVar5 = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(this + 0x3dc) = uVar3;
  *(undefined4 *)(this + 0x3e0) = uVar4;
  *(undefined4 *)(this + 0x3e4) = uVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x3ec);
  uVar4 = *(undefined4 *)(param_1 + 0x3f0);
  uVar5 = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(this + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(this + 0x3ec) = uVar3;
  *(undefined4 *)(this + 0x3f0) = uVar4;
  *(undefined4 *)(this + 0x3f4) = uVar5;
  this[0x3f8] = param_1[0x3f8];
  *(undefined8 *)(this + 0x400) = *(undefined8 *)(param_1 + 0x400);
  this[0x408] = param_1[0x408];
  *(undefined4 *)(this + 0x40c) = *(undefined4 *)(param_1 + 0x40c);
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  uVar8 = (*(longlong *)(param_1 + 0x418) - *(longlong *)(param_1 + 0x410)) / 0x30;
  if (uVar8 != 0) {
    if (0x555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar9 = uVar8 * 0x30;
    pvVar7 = malloc(sVar9);
    if (pvVar7 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar9);
    }
    *(void **)(this + 0x410) = pvVar7;
    *(void **)(this + 0x418) = pvVar7;
    *(void **)(this + 0x420) = (void *)(sVar9 + (longlong)pvVar7);
    pvVar7 = *(void **)(this + 0x410);
    sVar9 = *(longlong *)(param_1 + 0x418) - (longlong)*(void **)(param_1 + 0x410);
    memmove(pvVar7,*(void **)(param_1 + 0x410),sVar9);
    *(void **)(this + 0x418) = (void *)(((longlong)sVar9 / 0x30) * 0x30 + (longlong)pvVar7);
  }
  *(undefined8 *)(this + 0x428) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(this + 0x430) = *(undefined8 *)(param_1 + 0x430);
  FUN_7ffada62cf50((undefined8 *)(this + 0x438),(longlong *)(param_1 + 0x438));
  FUN_7ffada62cf50((undefined8 *)(this + 0x450),(longlong *)(param_1 + 0x450));
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  uVar8 = *(longlong *)(param_1 + 0x470) - *(longlong *)(param_1 + 0x468) >> 2;
  if (uVar8 != 0) {
    if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar9 = uVar8 * 4;
    pvVar7 = malloc(sVar9);
    if (pvVar7 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar9);
    }
    *(void **)(this + 0x468) = pvVar7;
    *(void **)(this + 0x470) = pvVar7;
    *(void **)(this + 0x478) = (void *)(sVar9 + (longlong)pvVar7);
    pvVar7 = *(void **)(this + 0x468);
    sVar9 = *(longlong *)(param_1 + 0x470) - (longlong)*(void **)(param_1 + 0x468);
    memmove(pvVar7,*(void **)(param_1 + 0x468),sVar9);
    *(void **)(this + 0x470) = (void *)((longlong)pvVar7 + ((longlong)sVar9 >> 2) * 4);
  }
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  uVar8 = *(longlong *)(param_1 + 0x488) - *(longlong *)(param_1 + 0x480) >> 3;
  if (uVar8 != 0) {
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar9 = uVar8 * 8;
    pvVar7 = malloc(sVar9);
    if (pvVar7 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar9);
    }
    *(void **)(this + 0x480) = pvVar7;
    *(void **)(this + 0x488) = pvVar7;
    *(void **)(this + 0x490) = (void *)(sVar9 + (longlong)pvVar7);
    pvVar7 = *(void **)(this + 0x480);
    sVar9 = *(longlong *)(param_1 + 0x488) - (longlong)*(void **)(param_1 + 0x480);
    memmove(pvVar7,*(void **)(param_1 + 0x480),sVar9);
    *(void **)(this + 0x488) = (void *)((longlong)pvVar7 + ((longlong)sVar9 >> 3) * 8);
  }
  *(undefined4 *)(this + 0x498) = *(undefined4 *)(param_1 + 0x498);
  this[0x49c] = param_1[0x49c];
  *(undefined8 *)(this + 0x4a0) = *(undefined8 *)(param_1 + 0x4a0);
  FUN_7ffada62cf50((undefined8 *)(this + 0x4a8),(longlong *)(param_1 + 0x4a8));
  paVar1 = this + 0x4c0;
  *(undefined8 *)paVar1 = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  uVar8 = (*(longlong *)(param_1 + 0x4c8) - *(longlong *)(param_1 + 0x4c0)) / 0x28;
  if (uVar8 != 0) {
    if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar9 = uVar8 * 0x28;
    pvVar7 = malloc(sVar9);
    if (pvVar7 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar9);
    }
    *(void **)paVar1 = pvVar7;
    *(void **)(this + 0x4c8) = pvVar7;
    *(void **)(this + 0x4d0) = (void *)((longlong)pvVar7 + sVar9);
    puVar10 = *(undefined8 **)paVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    for (puVar11 = *(undefined8 **)(param_1 + 0x4c0); puVar11 != puVar2; puVar11 = puVar11 + 5) {
      FUN_7ffada5ef690(puVar10,puVar11);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar11 + 4);
      puVar10 = puVar10 + 5;
    }
    *(undefined8 **)(this + 0x4c8) = puVar10;
  }
  FUN_7ffada5ef690((undefined8 *)(this + 0x4d8),(undefined8 *)(param_1 + 0x4d8));
  return this;
}

