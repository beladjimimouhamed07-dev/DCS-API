/*
=======================================================================
 CockpitBase.dll CLASS RECONSTRUCTION
 Class: cockpit::ccMovingMap
=======================================================================
*/

#include <cstdint>
#include <cstddef>

// VTABLE ??_7ccMovingMap@cockpit@@6B@ @ 7ffada865910
// COL: 7ffada88c568
//   [000] 7ffada794b90 -> FUN_7ffada794b90
//   [001] 7ffada7923e0 -> initialize
//   [002] 7ffada795040 -> draw
//   [003] 7ffada791f40 -> addElem
//   [004] 7ffada793d20 -> update
//   [005] 7ffada793d80 -> update
//   [006] 7ffada77b3f0 -> setSize
//   [007] 7ffada77b400 -> setViewDistance
//   [008] 7ffada792350 -> getType
//   [009] 7ffada793cd0 -> setCurrentVertexScaleModifier
//   [010] 7ffada77af60 -> getCurrentVertexScaleModifier
//   [011] 7ffada77b3e0 -> setParent
//   [012] 7ffada77b0d0 -> getparent
//   [013] 7ffada793a80 -> reg_in_script
//   [014] 7ffada795dc0 -> reg_in_reusable_state
//   [015] 7ffada794f50 -> distribute_elements
//   [016] 7ffada88c5e8 -> <non-function>
//   [017] 7ffada794b00 -> FUN_7ffada794b00
//   [018] 7ffada795d70 -> rebuild
//   [019] 7ffada794fe0 -> draw
//   [020] 7ffada7951c0 -> initialize
//   [021] 7ffada7850d0 -> on_change_mode
//   [022] 7ffada82c5a8 -> _purecall
//   [023] 7ffada82c5a8 -> _purecall

// VTABLE s_??_7ccMovingMap@cockpit@@6B@_7ffada8eda8a @ 7ffada8eda8a

// RECOVERED FIELD OFFSETS
// +0x0000 used by: DeleteAll, FUN_7ffada5ef690, FUN_7ffada5efbc0, FUN_7ffada5f0470, FUN_7ffada5f0b10, FUN_7ffada5f31a0, FUN_7ffada602ba0, FUN_7ffada62cf50, FUN_7ffada62f2d0, FUN_7ffada828ff0, ccIndicatorPage, distribute_elements, draw, getType, rebuild, render, update, ~SimpleOctTreeNode, ~ccIndicatorPage, ~ccMapObjectsBuffer, ~ccMovingMap
// +0x0008 used by: DeleteAll, FUN_7ffada5ef1f0, FUN_7ffada62cf50, FUN_7ffada828ff0, ccIndicatorPage, ccMovingMap, distribute_elements, ~SimpleOctTreeNode
// +0x000C used by: FUN_7ffada828ff0
// +0x0010 used by: FUN_7ffada5ef690, FUN_7ffada5f0b10, FUN_7ffada5f0c40, FUN_7ffada5f31a0, FUN_7ffada603bc0, FUN_7ffada62cf50, FUN_7ffada828ff0, ccIndicatorPage
// +0x0014 used by: FUN_7ffada828ff0
// +0x0018 used by: DeleteAll, FUN_7ffada5ef1f0, FUN_7ffada5ef690, FUN_7ffada5f0b10, FUN_7ffada5f31a0, FUN_7ffada828ff0, GetObjects, ~SimpleOctTree
// +0x0019 used by: get_page_by_ID
// +0x001C used by: FUN_7ffada828ff0
// +0x0020 used by: get_page_by_ID, initialize
// +0x0028 used by: get_page_by_ID
// +0x0030 used by: FUN_7ffada5ef1f0, addElem
// +0x0038 used by: DeleteAll, FUN_7ffada5f0470, draw, rebuild, ~SimpleOctTreeNode
// +0x0040 used by: DeleteAll, draw, rebuild, ~SimpleOctTreeNode
// +0x0050 used by: distribute_elements, draw, update, ~ccIndicatorPage
// +0x0058 used by: distribute_elements, draw, update, ~ccIndicatorPage, ~ccMapObjectsBuffer
// +0x0068 used by: initialize, setCurrentVertexScaleModifier, setSize
// +0x006C used by: setSize
// +0x0070 used by: get_page_by_ID, initialize, setCurrentVertexScaleModifier, setViewDistance
// +0x0074 used by: getCurrentVertexScaleModifier, setCurrentVertexScaleModifier
// +0x0078 used by: getType, getparent, initialize, setParent
// +0x009A used by: draw
// +0x00A0 used by: render, ~ccMovingMap
// +0x00A8 used by: ~ccMovingMap

/***** FUNCTION FUN_7ffada5ef1f0 @ 7ffada5ef1f0 | method *****/


longlong *
FUN_7ffada5ef1f0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  size_t _Size;
  ulonglong uVar1;
  int iVar2;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)plVar4[1];
  if (plVar3 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar4 = (longlong *)*plVar4;
  _Size = param_3[2];
  uVar1 = param_3[3];
  while( true ) {
    _Buf2 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar3[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    if (plVar3 == plVar4) {
      *param_2 = (longlong)plVar3;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)plVar3[1];
  }
  *param_2 = *plVar3;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



/***** FUNCTION FUN_7ffada5ef690 @ 7ffada5ef690 | method *****/


undefined8 * FUN_7ffada5ef690(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      param_1[3] = 0xf;
      uVar2 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar2;
      return param_1;
    }
    uVar3 = uVar1 | 0xf;
    uVar4 = 0x7fffffffffffffff;
    if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
      uVar4 = 0x16;
    }
    _Dst = malloc(uVar4 + 1);
    if (_Dst == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar4 + 1);
    }
    *param_1 = _Dst;
    param_1[2] = uVar1;
    param_1[3] = uVar4;
    memcpy(_Dst,param_2,uVar1 + 1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7ffada5f0ac0();
}



/***** FUNCTION FUN_7ffada5efbc0 @ 7ffada5efbc0 | method *****/


void FUN_7ffada5efbc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_7ffada5ef580(param_1,puVar1 + 2);
    free(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada5efc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)*param_1);
  return;
}



/***** FUNCTION FUN_7ffada5f0470 @ 7ffada5f0470 | method *****/


ulonglong FUN_7ffada5f0470(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar4 = ceilf((float)param_2 / *param_1);
  lVar2 = 0;
  if ((DAT_7ffada84cc50 <= fVar4) && (fVar4 = fVar4 - DAT_7ffada84cc50, fVar4 < DAT_7ffada84cc50)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar4 + lVar2)) {
    uVar3 = (longlong)fVar4 + lVar2;
  }
  if (uVar3 <= uVar1) {
    return uVar1;
  }
  if ((uVar1 < 0x200) && (uVar3 <= uVar1 * 8)) {
    uVar3 = uVar1 * 8;
  }
  return uVar3;
}



/***** FUNCTION FUN_7ffada5f0ac0 @ 7ffada5f0ac0 | method *****/


void FUN_7ffada5f0ac0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error(s_string_too_long_7ffada84cbb0);
}



/***** FUNCTION FUN_7ffada5f0ae0 @ 7ffada5f0ae0 | method *****/


void FUN_7ffada5f0ae0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error(s_vector_too_long_7ffada84cbe8);
}



/***** FUNCTION FUN_7ffada5f0b10 @ 7ffada5f0b10 | method *****/


undefined8 * FUN_7ffada5f0b10(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 *_Dst_00;
  ulonglong uVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ac0();
    }
    uVar3 = param_3 | 0xf;
    uVar4 = 0x7fffffffffffffff;
    if (((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar4 = uVar3, uVar3 < uVar1)) {
      uVar4 = uVar1;
    }
    _Dst = malloc(uVar4 + 1);
    if (_Dst == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar4 + 1);
    }
    param_1[2] = param_3;
    param_1[3] = uVar4;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar2) {
      free((void *)*param_1);
    }
    *param_1 = _Dst;
  }
  else {
    _Dst_00 = param_1;
    if (0xf < uVar2) {
      _Dst_00 = (undefined8 *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst_00,param_2,param_3);
    *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada5f0c40 @ 7ffada5f0c40 | method *****/


void FUN_7ffada5f0c40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_7ffada5f0850(param_1,(undefined8 *)*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_7ffada5ef580(param_1 + 8,puVar1 + 2);
      free(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_7ffada5ef600(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),&local_res8);
  }
  return;
}



/***** FUNCTION FUN_7ffada5f1620 @ 7ffada5f1620 | method *****/


void FUN_7ffada5f1620(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  *(undefined8 *)param_2[1] = 0;
  _Memory = (undefined8 *)*param_2;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    if (0xf < (ulonglong)_Memory[5]) {
      free((void *)_Memory[2]);
    }
    _Memory[4] = 0;
    _Memory[5] = 0xf;
    *(undefined1 *)(_Memory + 2) = 0;
    free(_Memory);
    _Memory = puVar1;
  }
  return;
}



/***** FUNCTION FUN_7ffada5f31a0 @ 7ffada5f31a0 | method *****/


undefined8 * FUN_7ffada5f31a0(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Size = strlen(param_2);
  if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ac0();
  }
  if (_Size < 0x10) {
    param_1[2] = _Size;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,_Size);
    *(undefined1 *)(_Size + (longlong)param_1) = 0;
    return param_1;
  }
  uVar1 = _Size | 0xf;
  uVar2 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
    uVar2 = 0x16;
  }
  _Dst = malloc(uVar2 + 1);
  if (_Dst == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar2 + 1);
  }
  *param_1 = _Dst;
  param_1[2] = _Size;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,_Size);
  *(undefined1 *)((longlong)_Dst + _Size) = 0;
  return param_1;
}



/***** FUNCTION FUN_7ffada5f68c0 @ 7ffada5f68c0 | method *****/


void FUN_7ffada5f68c0(void)

{
  ed_vlogf();
  return;
}



/***** FUNCTION FUN_7ffada602ba0 @ 7ffada602ba0 | method *****/


void FUN_7ffada602ba0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *_Buf1;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error(s_invalid_hash_bucket_count_7ffada84cbf8);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  lVar14 = 1L << ((char)lVar14 + 1U & 0x3f);
  FUN_7ffada5f0330((longlong *)(param_1 + 0x18),lVar14 * 2,plVar2);
  *(longlong *)(param_1 + 0x38) = lVar14;
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x7ffada602c2c:
  do {
    if (plVar7 == plVar2) {
      return;
    }
    uVar9 = plVar7[5];
    plVar13 = plVar7 + 2;
    plVar3 = (longlong *)*plVar7;
    _Size = plVar7[4];
    if (0xf < uVar9) {
      plVar13 = (longlong *)plVar7[2];
    }
    uVar10 = 0;
    uVar12 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar13 + uVar10);
        uVar10 = uVar10 + 1;
        uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
      } while (uVar10 < _Size);
    }
    puVar15 = (undefined8 *)
              ((*(ulonglong *)(param_1 + 0x30) & uVar12) * 0x10 + *(longlong *)(param_1 + 0x18));
    if ((longlong *)*puVar15 == plVar2) {
      *puVar15 = plVar7;
LAB_7ffada602e08:
      puVar15[1] = plVar7;
      plVar7 = plVar3;
      goto joined_r0x7ffada602c2c;
    }
    plVar4 = (longlong *)puVar15[1];
    plVar13 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar11 = plVar7 + 2;
    if (0xf < uVar9) {
      plVar11 = (longlong *)plVar7[2];
    }
    if ((_Size == plVar4[4]) &&
       ((_Size == 0 || (iVar8 = memcmp(plVar11,plVar13,_Size), iVar8 == 0)))) {
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar7) {
        plVar13 = (longlong *)plVar7[1];
        *plVar13 = (longlong)plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar3[1] = (longlong)plVar13;
        plVar7[1] = (longlong)puVar6;
      }
      goto LAB_7ffada602e08;
    }
    plVar13 = (longlong *)*puVar15;
    do {
      if (plVar13 == plVar4) {
        plVar13 = (longlong *)plVar7[1];
        *plVar13 = (longlong)plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar3[1] = (longlong)plVar13;
        plVar7[1] = (longlong)puVar6;
        *puVar15 = plVar7;
        plVar7 = plVar3;
        goto joined_r0x7ffada602c2c;
      }
      plVar4 = (longlong *)plVar4[1];
      plVar11 = plVar4 + 2;
      if (0xf < (ulonglong)plVar4[5]) {
        plVar11 = (longlong *)*plVar11;
      }
      _Buf1 = plVar7 + 2;
      if (0xf < uVar9) {
        _Buf1 = (longlong *)plVar7[2];
      }
    } while ((_Size != plVar4[4]) ||
            ((_Size != 0 && (iVar8 = memcmp(_Buf1,plVar11,_Size), iVar8 != 0))));
    lVar14 = *plVar4;
    plVar13 = (longlong *)plVar7[1];
    *plVar13 = (longlong)plVar3;
    plVar4 = (longlong *)plVar3[1];
    *plVar4 = lVar14;
    puVar15 = *(undefined8 **)(lVar14 + 8);
    *puVar15 = plVar7;
    *(longlong **)(lVar14 + 8) = plVar4;
    plVar3[1] = (longlong)plVar13;
    plVar7[1] = (longlong)puVar15;
    plVar7 = plVar3;
  } while( true );
}



/***** FUNCTION FUN_7ffada603bc0 @ 7ffada603bc0 | method *****/


void FUN_7ffada603bc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_7ffada603090(param_1,(longlong *)*plVar1,plVar1);
      return;
    }
    FUN_7ffada5f1620(param_1 + 8,plVar1);
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_7ffada5ef600(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),&local_res8);
  }
  return;
}



/***** FUNCTION FUN_7ffada62cf50 @ 7ffada62cf50 | method *****/


undefined8 * FUN_7ffada62cf50(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *_Dst;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    sVar2 = uVar1 * 8;
    _Dst = malloc(sVar2);
    if (_Dst == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,sVar2);
    }
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(sVar2 + (longlong)_Dst);
    sVar2 = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,sVar2);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)sVar2 >> 3) * 8);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada62f2d0 @ 7ffada62f2d0 | method *****/


void FUN_7ffada62f2d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    do {
      piVar3 = (int *)(*param_1 + 8);
      if (*param_1 == 0) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          puVar2 = (undefined8 *)*param_1;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          *param_1 = 0;
        }
      }
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}



/***** FUNCTION FUN_7ffada778590 @ 7ffada778590 | method *****/


void FUN_7ffada778590(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *local_48;
  undefined8 *local_40;
  float *local_38;
  undefined8 *local_30;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    uVar5 = 0;
    puVar4 = param_2 + 2;
    if (0xf < (ulonglong)param_2[5]) {
      puVar4 = (undefined8 *)param_2[2];
    }
    uVar8 = 0xcbf29ce484222325;
    if (param_2[4] != 0) {
      do {
        uVar8 = (uVar8 ^ *(byte *)((longlong)puVar4 + uVar5)) * 0x100000001b3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)param_2[4]);
    }
    FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_48,param_2 + 2,uVar8);
    if (local_40 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
      }
      local_30 = (undefined8 *)0x0;
      local_38 = param_1 + 2;
      puVar4 = malloc(0x38);
      if (puVar4 == (undefined8 *)0x0) {
        ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x38);
      }
      local_30 = puVar4;
      FUN_7ffada5ef690(puVar4 + 2,param_2 + 2);
      puVar4[6] = param_2[6];
      fVar9 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar9 && fVar9 != *param_1) {
        uVar5 = FUN_7ffada5f0470(param_1,*(longlong *)(param_1 + 4) + 1U);
        FUN_7ffada602ba0((longlong)param_1,uVar5);
        puVar6 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
        puVar7 = *(undefined8 **)(param_1 + 2);
        if (puVar6 != puVar7) {
          puVar1 = *(undefined8 **)
                    (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
          _Size = puVar4[4];
          puVar7 = puVar6;
          while( true ) {
            puVar6 = puVar7 + 2;
            if (0xf < (ulonglong)puVar7[5]) {
              puVar6 = (undefined8 *)*puVar6;
            }
            _Buf1 = puVar4 + 2;
            if (0xf < (ulonglong)puVar4[5]) {
              _Buf1 = (undefined8 *)puVar4[2];
            }
            if ((_Size == puVar7[4]) &&
               ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) {
              local_48 = (undefined8 *)*puVar7;
              local_40 = puVar7;
              goto LAB_7ffada7787a7;
            }
            if (puVar7 == puVar1) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        local_40 = (undefined8 *)0x0;
        local_48 = puVar7;
      }
LAB_7ffada7787a7:
      local_30 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)local_48[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar4 = local_48;
      puVar4[1] = puVar6;
      *puVar6 = puVar4;
      local_48[1] = puVar4;
      uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
      lVar2 = *(longlong *)(param_1 + 6);
      puVar7 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
      if (puVar7 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
LAB_7ffada7787f6:
        *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar4;
      }
      else if (puVar7 == local_48) {
        *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
      }
      else if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) == puVar6) goto LAB_7ffada7787f6;
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}



/***** FUNCTION ccIndicatorPage @ 7ffada779980 | method *****/


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



/***** FUNCTION getCurrentVertexScaleModifier @ 7ffada77af60 | method *****/


/* public: virtual float __cdecl cockpit::ccIndicatorPage::getCurrentVertexScaleModifier(void)const
   __ptr64 */

float __thiscall cockpit::ccIndicatorPage::getCurrentVertexScaleModifier(ccIndicatorPage *this)

{
                    /* 0x36af60  3189
                       ?getCurrentVertexScaleModifier@ccIndicatorPage@cockpit@@UEBAMXZ */
  return *(float *)(this + 0x74);
}



/***** FUNCTION get_page_by_ID @ 7ffada77b010 | method *****/


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



/***** FUNCTION getparent @ 7ffada77b0d0 | method *****/


/* public: virtual class cockpit::ccDrawable * __ptr64 __cdecl
   cockpit::ccIndicatorPage::getparent(void)const __ptr64 */

ccDrawable * __thiscall cockpit::ccIndicatorPage::getparent(ccIndicatorPage *this)

{
                    /* 0x36b0d0  4355  ?getparent@ccIndicatorPage@cockpit@@UEBAPEAVccDrawable@2@XZ
                        */
  return *(ccDrawable **)(this + 0x78);
}



/***** FUNCTION setParent @ 7ffada77b3e0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setParent(class cockpit::ccDrawable *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::setParent(ccIndicatorPage *this,ccDrawable *param_1)

{
                    /* 0x36b3e0  6015  ?setParent@ccIndicatorPage@cockpit@@UEAAXPEAVccDrawable@2@@Z
                        */
  *(ccDrawable **)(this + 0x78) = param_1;
  return;
}



/***** FUNCTION setSize @ 7ffada77b3f0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setSize(float,float) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::setSize(ccIndicatorPage *this,float param_1,float param_2)

{
                    /* 0x36b3f0  6065  ?setSize@ccIndicatorPage@cockpit@@UEAAXMM@Z */
  *(float *)(this + 0x68) = param_1;
  *(float *)(this + 0x6c) = param_2;
  return;
}



/***** FUNCTION setViewDistance @ 7ffada77b400 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setViewDistance(float) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::setViewDistance(ccIndicatorPage *this,float param_1)

{
                    /* 0x36b400  6143  ?setViewDistance@ccIndicatorPage@cockpit@@UEAAXM@Z */
  *(float *)(this + 0x70) = param_1;
  return;
}



/***** FUNCTION FUN_7ffada782630 @ 7ffada782630 | method *****/


void FUN_7ffada782630(undefined8 param_1,undefined8 param_2)

{
  lua_pushcclosure(param_2,FUN_7ffada7822b0,0);
  lua_setfield(param_2,0xffffd8ee,s_CreateElement_7ffada864a58);
  lua_pushcclosure(param_2,FUN_7ffada7821e0,0);
  lua_setfield(param_2,0xffffd8ee,&DAT_7ffada864a68);
  lua_pushstring(param_2,s_elementmeta_7ffada8649d0);
  lua_createtable(param_2,0,0);
  lua_pushstring(param_2,s___index_7ffada84d3d0);
  lua_pushcclosure(param_2,FUN_7ffada7824d0,0);
  lua_settable(param_2,0xfffffffd);
  lua_pushstring(param_2,s___newindex_7ffada864a70);
  lua_pushcclosure(param_2,FUN_7ffada782570,0);
  lua_settable(param_2,0xfffffffd);
  lua_settable(param_2,0xffffd8ee);
  return;
}



/***** FUNCTION initialize @ 7ffada785070 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicationTemplateBuffer::initialize(class
   cockpit::ccIndicator * __ptr64,struct lua_State * __ptr64,char const * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicationTemplateBuffer::initialize
          (ccIndicationTemplateBuffer *this,ccIndicator *param_1,lua_State *param_2,char *param_3)

{
  size_t sVar1;
  
                    /* 0x375070  4628
                       ?initialize@ccIndicationTemplateBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@PEBD@Z
                        */
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    FUN_7ffada5f0b10((undefined8 *)(this + 0x18),param_3,sVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada7850cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x20))(this,param_1,param_2);
  return;
}



/***** FUNCTION on_change_mode @ 7ffada7850d0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicationTemplateBuffer::on_change_mode(class
   cockpit::ccIndicator * __ptr64,struct lua_State * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicationTemplateBuffer::on_change_mode
          (ccIndicationTemplateBuffer *this,ccIndicator *param_1,lua_State *param_2)

{
  int iVar1;
  ccIndicatorPage *pcVar2;
  ccIndicationTemplateBuffer *pcVar3;
  double dVar4;
  
                    /* 0x3750d0  5224
                       ?on_change_mode@ccIndicationTemplateBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@@Z
                        */
  if ((param_1 != (ccIndicator *)0x0) && (param_2 != (lua_State *)0x0)) {
    lua_getfield(param_2,0xffffd8ee,s_get_template_7ffada864b70);
    pcVar3 = this + 0x18;
    if (0xf < *(ulonglong *)(this + 0x30)) {
      pcVar3 = *(ccIndicationTemplateBuffer **)pcVar3;
    }
    lua_pushstring(param_2,pcVar3);
    iVar1 = ED_lua_pcall(param_2,1,1,0);
    if ((iVar1 == 0) && (iVar1 = lua_isnumber(param_2,0xffffffff), iVar1 != 0)) {
      dVar4 = (double)lua_tonumber(param_2,0xffffffff);
      pcVar2 = ccIndicator::get_page_by_ID(param_1,(uchar)(int)dVar4);
      if (*(ccIndicatorPage **)(this + 8) != pcVar2) {
        *(ccIndicatorPage **)(this + 8) = pcVar2;
        this[0x10] = (ccIndicationTemplateBuffer)0x1;
      }
    }
  }
  return;
}



/***** FUNCTION FUN_7ffada78c000 @ 7ffada78c000 | method *****/


void FUN_7ffada78c000(undefined8 param_1,undefined8 param_2)

{
  lua_pushstring(param_1,s_____self_indicator_handle_7ffada864d28);
  lua_pushlightuserdata(param_1,param_2);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,FUN_7ffada789d30,0);
  lua_setfield(param_1,0xffffd8ee,s_GetSelf_7ffada853790);
  return;
}



/***** FUNCTION FUN_7ffada791a90 @ 7ffada791a90 | method *****/


longlong * FUN_7ffada791a90(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *local_38;
  longlong local_30;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar4 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_38,param_3,uVar8);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
  }
  puVar4 = malloc(0x38);
  if (puVar4 == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x38);
  }
  FUN_7ffada5ef690(puVar4 + 2,param_3);
  puVar4[6] = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar7 = local_38;
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    uVar5 = FUN_7ffada5f0470(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_7ffada602ba0((longlong)param_1,uVar5);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
      _Size = puVar4[4];
      puVar7 = puVar6;
      while( true ) {
        puVar6 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        _Buf1 = puVar4 + 2;
        if (0xf < (ulonglong)puVar4[5]) {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar7[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (puVar7 == puVar1) goto LAB_7ffada791c79;
        puVar7 = (undefined8 *)puVar7[1];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_7ffada791c79:
  puVar6 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar7;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  puVar7[1] = puVar4;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == puVar7) {
      *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
      goto LAB_7ffada791cc4;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) != puVar6) goto LAB_7ffada791cc4;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar4;
LAB_7ffada791cc4:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/***** FUNCTION ccIndicatorPage @ 7ffada791d00 | method *****/


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



/***** FUNCTION ~ccIndicatorPage @ 7ffada791e70 | destructor *****/


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



/***** FUNCTION addElem @ 7ffada791f40 | method *****/


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



/***** FUNCTION distribute_elements @ 7ffada7920c0 | method *****/


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::distribute_elements(void) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::distribute_elements(ccIndicatorPage *this)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong local_38 [2];
  
                    /* 0x3820c0  2940  ?distribute_elements@ccIndicatorPage@cockpit@@MEAAXXZ */
  puVar9 = *(undefined8 **)(this + 0x50);
  puVar7 = *(undefined8 **)(this + 0x58);
  if (puVar9 != puVar7) {
    do {
      lVar4 = (**(code **)(*(longlong *)*puVar9 + 0x90))();
      puVar7 = *(undefined8 **)(lVar4 + 8);
      for (puVar8 = (undefined8 *)*puVar7; puVar8 != puVar7; puVar8 = (undefined8 *)*puVar8) {
        uVar2 = puVar8[4];
        if (uVar2 != 0) {
          puVar10 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[5]) {
            puVar10 = (undefined8 *)puVar8[2];
          }
          uVar5 = 0;
          uVar11 = 0xcbf29ce484222325;
          if (uVar2 != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar10 + uVar5);
              uVar5 = uVar5 + 1;
              uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
            } while (uVar5 < uVar2);
          }
          plVar6 = FUN_7ffada5ef1f0((longlong)(this + 0x10),local_38,puVar8 + 2,uVar11);
          lVar4 = plVar6[1];
          if (lVar4 == 0) {
            lVar4 = *(longlong *)(this + 0x18);
          }
          if (lVar4 != *(longlong *)(this + 0x18)) {
            (**(code **)(*(longlong *)*puVar9 + 0x80))
                      ((longlong *)*puVar9,*(undefined8 *)(lVar4 + 0x30));
            (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x88))
                      (*(longlong **)(lVar4 + 0x30),*puVar9);
          }
        }
      }
      puVar7 = *(undefined8 **)(this + 0x58);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar7);
  }
  puVar9 = *(undefined8 **)(this + 0x50);
  if (puVar9 != puVar7) {
    puVar7 = puVar9 + 1;
    do {
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar9 + 0x58))();
      uVar2 = puVar8[2];
      if (uVar2 == 0) {
LAB_7ffada7922b2:
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      else {
        puVar10 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar10 = (undefined8 *)*puVar8;
        }
        uVar5 = 0;
        uVar11 = 0xcbf29ce484222325;
        if (uVar2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar10 + uVar5);
            uVar5 = uVar5 + 1;
            uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
          } while (uVar5 < uVar2);
        }
        plVar6 = FUN_7ffada5ef1f0((longlong)(this + 0x10),local_38,puVar8,uVar11);
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(this + 0x18);
        }
        lVar3 = *(longlong *)*puVar9;
        if (lVar4 == *(longlong *)(this + 0x18)) {
          (**(code **)(lVar3 + 0x10))();
          FUN_7ffada5f68c0();
          goto LAB_7ffada7922b2;
        }
        (**(code **)(lVar3 + 0x70))((longlong *)*puVar9,*(undefined8 *)(lVar4 + 0x30));
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x78))(*(longlong **)(lVar4 + 0x30),*puVar9);
        memmove(puVar9,puVar7,*(longlong *)(this + 0x58) - (longlong)puVar7);
        *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + -8;
      }
    } while (puVar9 != *(undefined8 **)(this + 0x58));
  }
  return;
}



/***** FUNCTION draw @ 7ffada7922f0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::draw(class
   cockpit::ccIndicationRenderParser & __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::draw
          (ccIndicatorPage *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x3822f0  2955
                       ?draw@ccIndicatorPage@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar2 = *(undefined8 **)(this + 0x50); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,param_1,param_2);
  }
  return;
}



/***** FUNCTION getType @ 7ffada792350 | method *****/


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



/***** FUNCTION initialize @ 7ffada7923e0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::initialize(class ed::basic_string<char>
   const & __ptr64,bool) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::initialize(ccIndicatorPage *this,basic_string<char> *param_1,bool param_2)

{
  basic_string<char> *pbVar1;
  bool bVar2;
  lua_State *plVar3;
  bool local_res18 [8];
  undefined8 local_18 [2];
  
                    /* 0x3823e0  4630
                       ?initialize@ccIndicatorPage@cockpit@@UEAAXAEBV?$basic_string@D@ed@@_N@Z */
  local_res18[0] = true;
  plVar3 = ccLuaLoader::querySharedState(0,local_res18);
  if (local_res18[0] != false) {
    (**(code **)(*(longlong *)this + 0x68))(this,plVar3);
  }
  (**(code **)(*(longlong *)this + 0x70))(this,plVar3);
  Lua::Config::Config((Config *)local_18,plVar3,-0x2712);
  if (param_2) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    bVar2 = Lua::Config::tmpload_buf((Config *)local_18,(char *)param_1,*(__uint64 *)pbVar1,true);
  }
  else {
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    bVar2 = Lua::Config::tmpload((Config *)local_18,(char *)param_1,true);
  }
  if (bVar2 != false) {
    (**(code **)(*(longlong *)this + 0x78))(this);
    lua_settop(local_18[0],0xfffffffe);
  }
  Lua::Config::~Config((Config *)local_18);
  return;
}



/***** FUNCTION reg_in_reusable_state @ 7ffada793a30 | method *****/


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::reg_in_reusable_state(struct lua_State
   * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::reg_in_reusable_state(ccIndicatorPage *this,lua_State *param_1)

{
                    /* 0x383a30  5508
                       ?reg_in_reusable_state@ccIndicatorPage@cockpit@@MEAAXPEAUlua_State@@@Z */
  lua_pushstring(param_1,s_____indicator_page_handle_7ffada8649b0);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  FUN_7ffada78c000(param_1,*(undefined8 *)(this + 0x78));
  return;
}



/***** FUNCTION reg_in_script @ 7ffada793a80 | method *****/


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::reg_in_script(struct lua_State *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::reg_in_script(ccIndicatorPage *this,lua_State *param_1)

{
                    /* 0x383a80  5510
                       ?reg_in_script@ccIndicatorPage@cockpit@@MEAAXPEAUlua_State@@@Z */
  FUN_7ffada782630(&DAT_7ffada962664,param_1);
  lua_pushcclosure(param_1,FUN_7ffada7938c0,0);
  lua_setfield(param_1,0xffffd8ee,s_SetScale_7ffada865810);
  lua_pushcclosure(param_1,FUN_7ffada793850,0);
  lua_setfield(param_1,0xffffd8ee,s_SetCustomScale_7ffada865820);
  lua_pushcclosure(param_1,FUN_7ffada792690,0);
  lua_setfield(param_1,0xffffd8ee,s_GetScale_7ffada865830);
  lua_pushcclosure(param_1,FUN_7ffada792560,0);
  lua_setfield(param_1,0xffffd8ee,s_GetAspect_7ffada865840);
  lua_pushcclosure(param_1,FUN_7ffada7925a0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetHalfHeight_7ffada865850);
  lua_pushcclosure(param_1,FUN_7ffada7925d0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetHalfWidth_7ffada865860);
  lua_pushcclosure(param_1,FUN_7ffada7924d0,0);
  lua_setfield(param_1,0xffffd8ee,&DAT_7ffada865870);
  lua_pushcclosure(param_1,l_push_guid_string,0);
  lua_setfield(param_1,0xffffd8ee,s_create_guid_string_7ffada865878);
  lua_pushcclosure(param_1,FUN_7ffada792600,0);
  lua_setfield(param_1,0xffffd8ee,s_GetRenderTarget_7ffada865890);
  lua_pushcclosure(param_1,FUN_7ffada7926f0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetAssignedViewport_7ffada8658a0);
  lua_pushcclosure(param_1,FUN_7ffada7931d0,0);
  lua_setfield(param_1,0xffffd8ee,s_MakeMaterial_7ffada8657f0);
  lua_pushcclosure(param_1,FUN_7ffada792760,0);
  lua_setfield(param_1,0xffffd8ee,s_MakeFont_7ffada865800);
  return;
}



/***** FUNCTION setCurrentVertexScaleModifier @ 7ffada793cd0 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setCurrentVertexScaleModifier(char,float)
   __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::setCurrentVertexScaleModifier
          (ccIndicatorPage *this,char param_1,float param_2)

{
                    /* 0x383cd0  5837
                       ?setCurrentVertexScaleModifier@ccIndicatorPage@cockpit@@UEAAXDM@Z */
  if (param_1 == '\x01') {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x68);
  }
  else {
    if (param_1 == '\x02') {
      *(float *)(this + 0x74) = *(float *)(this + 0x70) * DAT_7ffada84dcf8;
      return;
    }
    if (param_1 == '\x03') {
      *(undefined4 *)(this + 0x74) = 0x3f800000;
      return;
    }
    if (param_1 == '\x04') {
      *(float *)(this + 0x74) = param_2;
      return;
    }
  }
  return;
}



/***** FUNCTION update @ 7ffada793d20 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::update(unsigned char) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::update(ccIndicatorPage *this,uchar param_1)

{
  undefined8 *puVar1;
  uchar uVar2;
  undefined8 *puVar3;
  
                    /* 0x383d20  6891  ?update@ccIndicatorPage@cockpit@@UEAAXE@Z */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar3 = *(undefined8 **)(this + 0x50); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    uVar2 = (**(code **)(*(longlong *)*puVar3 + 0x140))();
    if (uVar2 == param_1) {
      (**(code **)(*(longlong *)*puVar3 + 0x20))();
    }
  }
  return;
}



/***** FUNCTION update @ 7ffada793d80 | method *****/


/* public: virtual void __cdecl cockpit::ccIndicatorPage::update(void) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::update(ccIndicatorPage *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x383d80  6892  ?update@ccIndicatorPage@cockpit@@UEAAXXZ */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar2 = *(undefined8 **)(this + 0x50); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x20))();
  }
  return;
}



/***** FUNCTION ccMovingMap @ 7ffada7943a0 | method *****/


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



/***** FUNCTION ccMovingMap @ 7ffada7945c0 | method *****/


/* public: __cdecl cockpit::ccMovingMap::ccMovingMap(void) __ptr64 */

ccMovingMap * __thiscall cockpit::ccMovingMap::ccMovingMap(ccMovingMap *this)

{
                    /* 0x3845c0  531  ??0ccMovingMap@cockpit@@QEAA@XZ */
  ccIndicatorPage::ccIndicatorPage((ccIndicatorPage *)this);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0x98) = 0x101;
  this[0x9a] = (ccMovingMap)0x1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return this;
}



/***** FUNCTION ~ccMapObjectsBuffer @ 7ffada794760 | destructor *****/


/* public: virtual __cdecl cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(void) __ptr64 */

void __thiscall cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(ccMapObjectsBuffer *this)

{
                    /* 0x384760  904  ??1ccMapObjectsBuffer@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  *(undefined4 *)(this + 0x60) = 0;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined ***)this = ccIndicationTemplateBuffer::vftable;
  if (0xf < *(ulonglong *)(this + 0x30)) {
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0xf;
  this[0x18] = (ccMapObjectsBuffer)0x0;
  return;
}



/***** FUNCTION ~ccMovingMap @ 7ffada7947e0 | destructor *****/


/* public: virtual __cdecl cockpit::ccMovingMap::~ccMovingMap(void) __ptr64 */

void __thiscall cockpit::ccMovingMap::~ccMovingMap(ccMovingMap *this)

{
  ccMovingMap *pcVar1;
  undefined8 *puVar2;
  SimpleOctTree *this_00;
  undefined8 *puVar3;
  
                    /* 0x3847e0  906  ??1ccMovingMap@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  puVar2 = *(undefined8 **)(this + 0xa8);
  for (puVar3 = *(undefined8 **)(this + 0xa0); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    if ((SimpleOctTree *)*puVar3 != (SimpleOctTree *)0x0) {
      SimpleOctTree::DeleteAll((SimpleOctTree *)*puVar3);
      this_00 = (SimpleOctTree *)*puVar3;
      if (this_00 != (SimpleOctTree *)0x0) {
        SimpleOctTree::~SimpleOctTree(this_00);
        free(this_00);
      }
      *puVar3 = 0;
    }
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    free(*(void **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
  }
  pcVar1 = this + 0x80;
  if (*(longlong **)pcVar1 != (longlong *)0x0) {
    FUN_7ffada62f2d0(*(longlong **)pcVar1,*(longlong **)(this + 0x88));
    free(*(void **)pcVar1);
    *(undefined8 *)pcVar1 = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x90) = 0;
  }
  ccIndicatorPage::~ccIndicatorPage((ccIndicatorPage *)this);
  return;
}



/***** FUNCTION FUN_7ffada794b00 @ 7ffada794b00 | method *****/


ccMapObjectsBuffer * FUN_7ffada794b00(ccMapObjectsBuffer *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x68,*(__uint64 *)(param_1 + -8),
               cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada794b90 @ 7ffada794b90 | method *****/


ccMovingMap * FUN_7ffada794b90(ccMovingMap *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0xd8,*(__uint64 *)(param_1 + -8),cockpit::ccMovingMap::~ccMovingMap);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::ccMovingMap::~ccMovingMap(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION distribute_elements @ 7ffada794f50 | method *****/


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



/***** FUNCTION draw @ 7ffada794fe0 | method *****/


/* public: virtual void __cdecl cockpit::ccArcade_template_buffer::draw(class
   cockpit::ccIndicationRenderParser & __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccArcade_template_buffer::draw
          (ccArcade_template_buffer *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  undefined8 *puVar1;
  
                    /* 0x384fe0  2950
                       ?draw@ccArcade_template_buffer@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z
                       0x384fe0  2956
                       ?draw@ccMapObjectsBuffer@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,param_1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x40));
  }
  return;
}



/***** FUNCTION draw @ 7ffada795040 | method *****/


/* public: virtual void __cdecl cockpit::ccMovingMap::draw(class cockpit::ccIndicationRenderParser &
   __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccMovingMap::draw(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
                    /* 0x385040  2957
                       ?draw@ccMovingMap@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  if (this[0x9a] != (ccMovingMap)0x0) {
    render(this,param_1,param_2);
  }
  ccIndicatorPage::draw((ccIndicatorPage *)this,param_1,param_2);
  return;
}



/***** FUNCTION initialize @ 7ffada7951c0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __cdecl cockpit::ccMapObjectsBuffer::initialize(class cockpit::ccIndicator *
   __ptr64,struct lua_State * __ptr64,char const * __ptr64) __ptr64 */

void __thiscall
cockpit::ccMapObjectsBuffer::initialize
          (ccMapObjectsBuffer *this,ccIndicator *param_1,lua_State *param_2,char *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 ****_Buf1;
  ulonglong uVar8;
  undefined8 *_Buf2;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  lua_State *local_80;
  undefined8 ***local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
                    /* 0x3851c0  4635
                       ?initialize@ccMapObjectsBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@PEBD@Z
                        */
  local_58 = DAT_7ffada94e840 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  ccIndicationTemplateBuffer::initialize((ccIndicationTemplateBuffer *)this,param_1,param_2,param_3)
  ;
  lVar11 = *(longlong *)(this + 8);
  if ((lVar11 != 0) && (uVar10 = 0, *(int *)(this + 0x60) != 0)) {
    lVar13 = 0;
    local_88 = lVar11;
    do {
      *(undefined8 *)(lVar13 + *(longlong *)(this + 0x58)) = 0;
      lua_getfield(param_2,0xffffd8ee,s_get_specific_element_name_by_id_7ffada865a78);
      lua_pushnumber(param_2,(double)(int)uVar10);
      iVar5 = ED_lua_pcall(param_2,1,1,0);
      if (iVar5 == 0) {
        iVar5 = lua_isstring(param_2,0xffffffff);
        if (iVar5 != 0) {
          pcVar6 = (char *)lua_tolstring(param_2,0xffffffff,0);
          FUN_7ffada5f31a0(local_78,pcVar6);
          uVar4 = local_60;
          _Size = local_68;
          uVar8 = 0xcbf29ce484222325;
          ppppuVar12 = local_78;
          if (0xf < local_60) {
            ppppuVar12 = (undefined8 ****)local_78[0];
          }
          uVar7 = 0;
          if (local_68 != 0) {
            do {
              pbVar1 = (byte *)((longlong)ppppuVar12 + uVar7);
              uVar7 = uVar7 + 1;
              uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
            } while (uVar7 < local_68);
          }
          uVar8 = *(ulonglong *)(lVar11 + 0x40) & uVar8;
          lVar2 = *(longlong *)(lVar11 + 0x18);
          lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 8 + uVar8 * 0x10);
          ppppuVar12 = (undefined8 ****)local_78[0];
          if (lVar9 != lVar2) {
            lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + uVar8 * 0x10);
            while( true ) {
              _Buf2 = (undefined8 *)(lVar9 + 0x10);
              if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
                _Buf2 = (undefined8 *)*_Buf2;
              }
              _Buf1 = local_78;
              if (0xf < uVar4) {
                _Buf1 = ppppuVar12;
              }
              if ((_Size == *(ulonglong *)(lVar9 + 0x20)) &&
                 ((lVar11 = local_88, _Size == 0 ||
                  (iVar5 = memcmp(_Buf1,_Buf2,_Size), lVar11 = local_88,
                  ppppuVar12 = (undefined8 ****)local_78[0], iVar5 == 0)))) goto LAB_7ffada795374;
              lVar11 = local_88;
              if (lVar9 == lVar3) break;
              lVar9 = *(longlong *)(lVar9 + 8);
            }
          }
          lVar9 = 0;
LAB_7ffada795374:
          if (lVar9 == 0) {
            lVar9 = lVar2;
          }
          if (lVar9 != lVar2) {
            *(undefined8 *)(lVar13 + *(longlong *)(this + 0x58)) = *(undefined8 *)(lVar9 + 0x30);
          }
          param_2 = local_80;
          if (0xf < uVar4) {
            free(ppppuVar12);
            param_2 = local_80;
          }
        }
      }
      else {
        lua_settop(param_2,0xfffffffe);
      }
      if (*(longlong *)(lVar13 + *(longlong *)(this + 0x58)) == 0) {
        FUN_7ffada5f68c0();
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar10 < *(uint *)(this + 0x60));
  }
  return;
}



/***** FUNCTION rebuild @ 7ffada795d70 | method *****/


/* public: virtual void __cdecl cockpit::ccArcade_template_buffer::rebuild(class cockpit::Element *
   __ptr64) __ptr64 */

void __thiscall
cockpit::ccArcade_template_buffer::rebuild(ccArcade_template_buffer *this,Element *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x385d70  5500
                       ?rebuild@ccArcade_template_buffer@cockpit@@UEAAXPEAVElement@2@@Z
                       0x385d70  5502  ?rebuild@ccMapObjectsBuffer@cockpit@@UEAAXPEAVElement@2@@Z */
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,param_1);
      (**(code **)(*(longlong *)*puVar1 + 0x20))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x40));
  }
  return;
}



/***** FUNCTION reg_in_reusable_state @ 7ffada795dc0 | method *****/


/* protected: virtual void __cdecl cockpit::ccMovingMap::reg_in_reusable_state(struct lua_State *
   __ptr64) __ptr64 */

void __thiscall cockpit::ccMovingMap::reg_in_reusable_state(ccMovingMap *this,lua_State *param_1)

{
                    /* 0x385dc0  5509
                       ?reg_in_reusable_state@ccMovingMap@cockpit@@MEAAXPEAUlua_State@@@Z */
  ccIndicatorPage::reg_in_reusable_state((ccIndicatorPage *)this,param_1);
  lua_pushstring(param_1,s_____moving_map_page_handle_7ffada865a18);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,l_create_chart,0);
  lua_setfield(param_1,0xffffd8ee,s_create_chart_7ffada865a38);
  lua_pushcclosure(param_1,l_set_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_set_render_to_texture_7ffada865a48);
  lua_pushcclosure(param_1,l_get_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_get_render_to_texture_7ffada865a60);
  chart_item::register_metatable(param_1);
  return;
}



/***** FUNCTION register_metatable @ 7ffada795e80 | method *****/


/* public: static void __cdecl cockpit::chart_item::register_metatable(struct lua_State * __ptr64)
    */

void __cdecl cockpit::chart_item::register_metatable(lua_State *param_1)

{
  undefined4 uVar1;
  
                    /* 0x385e80  5527  ?register_metatable@chart_item@cockpit@@SAXPEAUlua_State@@@Z
                        */
  lua_pushstring(param_1,s_chart_item_meta_7ffada8659d0);
  lua_createtable(param_1,0,0);
  lua_createtable(param_1,0,0);
  uVar1 = lua_gettop(param_1);
  lua_pushstring(param_1,s_add_element_7ffada8659e0);
  lua_pushcclosure(param_1,l_add_element,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_center_7ffada8659f0);
  lua_pushcclosure(param_1,l_center,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_AABB_7ffada865a00);
  lua_pushcclosure(param_1,l_AABB,0);
  lua_settable(param_1,uVar1);
  lua_pushstring(param_1,s_get_OBB_7ffada865a10);
  lua_pushcclosure(param_1,l_OBB,0);
  lua_settable(param_1,uVar1);
  lua_setfield(param_1,0xfffffffe,s___index_7ffada84d3d0);
  lua_settable(param_1,0xffffd8ee);
  return;
}



/***** FUNCTION render @ 7ffada795fa0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* protected: void __cdecl cockpit::ccMovingMap::render(class cockpit::ccIndicationRenderParser &
   __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccMovingMap::render(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  SimpleOctTree *this_00;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined7 in_register_00000081;
  vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
  *pvVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined8 local_2b0;
  ClipVolume local_298 [32];
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  uint local_258;
  uint local_254;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  uint local_230;
  uint local_22c;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  uint local_208;
  uint local_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined4 local_e8;
  ulonglong local_d8;
  
                    /* 0x385fa0  5608
                       ?render@ccMovingMap@cockpit@@IEAAXAEAVccIndicationRenderParser@2@E@Z */
  local_d8 = DAT_7ffada94e840 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(this + 0xa0) != *(longlong *)(this + 0xa8)) &&
     (this_00 = *(SimpleOctTree **)
                 (*(longlong *)(this + 0xa0) + (ulonglong)*(uint *)(this + 0xb8) * 8),
     this_00 != (SimpleOctTree *)0x0)) {
    lVar10 = (**(code **)(**(longlong **)(this + 0x78) + 0xa8))
                       (*(longlong **)(this + 0x78),param_1,CONCAT71(in_register_00000081,param_2));
    uVar6 = *(undefined8 *)(lVar10 + 0x2fc);
    fVar26 = (float)((ulonglong)uVar6 >> 0x20);
    fVar16 = (float)((ulonglong)*(undefined8 *)(lVar10 + 0x2f0) >> 0x20);
    fVar27 = *(float *)(lVar10 + 0x2f8);
    local_2b0._0_4_ = (float)*(undefined8 *)(lVar10 + 0x2f0);
    local_2b8 = *(float *)(lVar10 + 0x248) * fVar16 + *(float *)(lVar10 + 0x238) * fVar27 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar1 = *(float *)(lVar10 + 0x264);
    fVar2 = *(float *)(lVar10 + 0x234);
    local_2c4 = *(float *)(lVar10 + 0x244);
    local_2bc = local_2c4 * fVar16 + fVar2 * fVar27 + *(float *)(lVar10 + 0x254) * (float)local_2b0
                + fVar1;
    fVar3 = *(float *)(lVar10 + 0x260);
    fVar4 = *(float *)(lVar10 + 0x240);
    local_2c0 = *(float *)(lVar10 + 0x230);
    fVar27 = local_2c0 * fVar27;
    fVar17 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    fVar5 = *(float *)(lVar10 + 0x304);
    local_2b0._0_4_ = (float)uVar6;
    local_2c8 = *(float *)(lVar10 + 0x248) * fVar26 + *(float *)(lVar10 + 0x238) * fVar5 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar25 = local_2c4 * fVar26;
    fVar23 = *(float *)(lVar10 + 0x254) * (float)local_2b0;
    fVar24 = local_2c0 * fVar5;
    fVar20 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    local_2b0 = uVar6;
    FUN_7ffada828ff0((undefined8 *)local_298);
    local_e8 = 4;
    dVar19 = (double)(fVar27 + fVar4 * fVar16 + fVar17 + fVar3);
    local_278 = (double)(float)(*(uint *)(lVar10 + 0x240) ^ DAT_7ffada84cdb0);
    local_270 = (double)(float)(*(uint *)(lVar10 + 0x244) ^ DAT_7ffada84cdb0);
    local_268 = (double)(float)(*(uint *)(lVar10 + 0x248) ^ DAT_7ffada84cdb0);
    local_230 = 0;
    uVar11 = local_230;
    if (0.0 <= local_268) {
      uVar11 = 4;
    }
    uVar21 = local_230;
    if (0.0 <= local_270) {
      uVar21 = 2;
    }
    local_258 = uVar11 | uVar21 | (uint)(0.0 <= local_278);
    uVar21 = (uint)DAT_7ffada84cda0;
    uVar22 = (uint)((ulonglong)DAT_7ffada84cda0 >> 0x20);
    local_260 = ((double)CONCAT44((uint)((ulonglong)local_278 >> 0x20) ^ uVar22,
                                  SUB84(local_278,0) ^ uVar21) * dVar19 -
                local_270 * (double)local_2bc) - local_268 * (double)local_2b8;
    local_254 = ~local_258 & 7;
    local_250 = (double)(float)(*(uint *)(lVar10 + 0x250) ^ DAT_7ffada84cdb0);
    local_248 = (double)(float)(*(uint *)(lVar10 + 0x254) ^ DAT_7ffada84cdb0);
    local_240 = (double)(float)(*(uint *)(lVar10 + 600) ^ DAT_7ffada84cdb0);
    uVar11 = local_230;
    if (0.0 <= local_240) {
      uVar11 = 4;
    }
    if (0.0 <= local_248) {
      local_230 = 2;
    }
    local_230 = 0.0 <= local_250 | uVar11 | local_230;
    local_238 = ((double)CONCAT44((uint)((ulonglong)local_250 >> 0x20) ^ uVar22,
                                  SUB84(local_250,0) ^ uVar21) * dVar19 -
                (double)local_2bc * local_248) - (double)local_2b8 * local_240;
    local_22c = ~local_230 & 7;
    dVar19 = (double)(fVar24 + fVar4 * fVar26 + fVar20 + fVar3);
    dVar18 = (double)(fVar25 + fVar2 * fVar5 + fVar23 + fVar1);
    local_228 = (double)*(float *)(lVar10 + 0x240);
    local_220 = (double)*(float *)(lVar10 + 0x244);
    local_218 = (double)*(float *)(lVar10 + 0x248);
    uVar12 = 0;
    uVar11 = uVar12;
    if (0.0 <= local_218) {
      uVar11 = 4;
    }
    uVar9 = uVar12;
    if (0.0 <= local_220) {
      uVar9 = 2;
    }
    local_208 = uVar11 | uVar9 | (uint)(0.0 <= local_228);
    local_210 = ((double)CONCAT44((uint)((ulonglong)local_228 >> 0x20) ^ uVar22,
                                  SUB84(local_228,0) ^ uVar21) * dVar19 - local_220 * dVar18) -
                local_218 * (double)local_2c8;
    local_204 = ~local_208 & 7;
    local_200 = (double)*(float *)(lVar10 + 0x250);
    local_1f8 = (double)*(float *)(lVar10 + 0x254);
    local_1f0 = (double)*(float *)(lVar10 + 600);
    uVar11 = uVar12;
    if (0.0 <= local_1f0) {
      uVar11 = 4;
    }
    if (0.0 <= local_1f8) {
      uVar12 = 2;
    }
    local_1e0 = uVar11 | uVar12 | (uint)(0.0 <= local_200);
    local_1e8 = ((double)CONCAT44((uint)((ulonglong)local_200 >> 0x20) ^ uVar22,
                                  SUB84(local_200,0) ^ uVar21) * dVar19 - local_1f8 * dVar18) -
                local_1f0 * (double)local_2c8;
    local_1dc = ~local_1e0 & 7;
    pvVar15 = (vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
               *)(this + 0x80);
    if (*(longlong **)pvVar15 != *(longlong **)(this + 0x88)) {
      FUN_7ffada62f2d0(*(longlong **)pvVar15,*(longlong **)(this + 0x88));
      *(undefined8 *)(this + 0x88) = *(undefined8 *)pvVar15;
    }
    SimpleOctTree::GetObjects(this_00,local_298,pvVar15,(SimpleOctTree_check_object *)0x0);
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x20))();
        }
      }
    }
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x18))((longlong *)*puVar13,param_1,param_2);
        }
      }
    }
  }
  return;
}



/***** FUNCTION open @ 7ffada7f2fd0 | method *****/


/* public: static struct lua_State * __ptr64 __cdecl cockpit::ccLuaLoader::open(char const *
   __ptr64,bool) */

lua_State * __cdecl cockpit::ccLuaLoader::open(char *param_1,bool param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  lua_State *plVar3;
  
                    /* 0x3e2fd0  5255  ?open@ccLuaLoader@cockpit@@SAPEAUlua_State@@PEBD_N@Z */
  if (param_1 == (char *)0x0) {
    param_1 = s_cockpit__ccLuaLoader__open_7ffada86cba8;
  }
  else {
    sVar1 = strlen(param_1);
    if (0x3f < sVar1) {
      if (sVar1 < sVar1 - 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_7ffada7ed3c0();
      }
      param_1 = param_1 + (sVar1 - 0x40);
      uVar2 = FUN_7ffada82b010((undefined1 (*) [16])param_1,0x40,
                               (undefined1 (*) [16])&DAT_7ffada86c518,2);
      if (uVar2 < 8) {
        param_1 = *(undefined1 (*) [16])param_1 + uVar2;
      }
    }
  }
  plVar3 = (lua_State *)ED_lua_open(param_1);
  if (plVar3 != (lua_State *)0x0) {
    ED_lua_openlibs(plVar3);
    if (!param_2) {
      LuaCoroutine::register_in_script(plVar3);
      bind_options(plVar3);
    }
    lua_pushcclosure(plVar3,FUN_7ffada7efd70,0);
    lua_setfield(plVar3,0xffffd8ee,s_dbg_print_7ffada86cbc8);
    lua_pushcclosure(plVar3,FUN_7ffada7efba0,0);
    lua_setfield(plVar3,0xffffd8ee,s_do_mission_file_7ffada86cbd8);
    lua_pushcclosure(plVar3,FUN_7ffada7f22a0,0);
    lua_setfield(plVar3,0xffffd8ee,s_load_mission_file_7ffada86cbe8);
    lua_pushcclosure(plVar3,FUN_7ffada7f2b80,0);
    lua_setfield(plVar3,0xffffd8ee,s_save_to_mission_7ffada86cc00);
    lua_pushcclosure(plVar3,FUN_7ffada7efaa0,0);
    lua_setfield(plVar3,0xffffd8ee,s_dispatch_action_7ffada86cc10);
    lua_pushcclosure(plVar3,FUN_7ffada7ef910,0);
    lua_setfield(plVar3,0xffffd8ee,s_copy_to_mission_and_dofile_7ffada86cc20);
    lua_pushcclosure(plVar3,FUN_7ffada7ef9e0,0);
    lua_setfield(plVar3,0xffffd8ee,s_copy_to_mission_and_get_buffer_7ffada86cc40);
    lua_pushcclosure(plVar3,FUN_7ffada7f2e10,0);
    lua_setfield(plVar3,0xffffd8ee,s_track_is_reading_7ffada86cc60);
    lua_pushcclosure(plVar3,FUN_7ffada7f2e50,0);
    lua_setfield(plVar3,0xffffd8ee,s_track_is_writing_7ffada86cc78);
    lua_pushcclosure(plVar3,FUN_7ffada7f1090,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_multimonitor_preset_name_7ffada86cc90);
    lua_pushcclosure(plVar3,FUN_7ffada7efdc0,0);
    lua_setfield(plVar3,0xffffd8ee,s_find_viewport_7ffada86ccb0);
    lua_pushcclosure(plVar3,FUN_7ffada7f0010,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_Viewports_7ffada86ccc0);
    lua_pushcclosure(plVar3,FUN_7ffada7eff60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_UIMainView_7ffada86ccd0);
    lua_pushcclosure(plVar3,FUN_7ffada7ef720,0);
    lua_setfield(plVar3,0xffffd8ee,s_UTF8_substring_7ffada86cce0);
    lua_pushcclosure(plVar3,FUN_7ffada7ef6d0,0);
    lua_setfield(plVar3,0xffffd8ee,s_UTF8_strlen_7ffada86ccf0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2130,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_terrain_related_data_7ffada86cd00);
    lua_pushcclosure(plVar3,FUN_7ffada7f2940,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_texture_archives_7ffada86cd20);
    lua_pushcclosure(plVar3,FUN_7ffada7f2940,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_texture_path_7ffada86cd40);
    lua_pushcclosure(plVar3,FUN_7ffada7f2450,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_model_path_7ffada86cd58);
    lua_pushcclosure(plVar3,FUN_7ffada7f2580,0);
    lua_setfield(plVar3,0xffffd8ee,s_mount_vfs_path_to_mount_point_7ffada86cd70);
    lua_pushcclosure(plVar3,FUN_7ffada7f21d0,0);
    lua_setfield(plVar3,0xffffd8ee,s_lo_to_geo_coords_7ffada86cd90);
    lua_pushcclosure(plVar3,FUN_7ffada7efe90,0);
    lua_setfield(plVar3,0xffffd8ee,s_geo_to_lo_coords_7ffada86cda8);
    lua_pushcclosure(plVar3,FUN_7ffada7f2a70,0);
    lua_setfield(plVar3,0xffffd8ee,s_print_message_to_user_7ffada86cdc0);
    lua_pushcclosure(plVar3,FUN_7ffada7f03c0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_base_data_7ffada86cdd8);
    lua_pushcclosure(plVar3,FUN_7ffada7f1450,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_plugin_option_7ffada86cde8);
    lua_pushcclosure(plVar3,FUN_7ffada7f15f0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_plugin_option_value_7ffada86ce00);
    lua_pushcclosure(plVar3,FUN_7ffada7f1270,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_option_value_7ffada86ce18);
    lua_pushcclosure(plVar3,FUN_7ffada7f1060,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_model_time_7ffada86c508);
    lua_pushcclosure(plVar3,FUN_7ffada7f0100,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_absolute_model_time_7ffada86ce30);
    lua_pushcclosure(plVar3,FUN_7ffada7f0fd0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_mission_route_7ffada86ce48);
    lua_pushcclosure(plVar3,FUN_7ffada7f1ea0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_random_orderly_7ffada86ce60);
    lua_pushcclosure(plVar3,FUN_7ffada7f1e40,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_random_evenly_7ffada86ce78);
    lua_pushcclosure(plVar3,FUN_7ffada7f11a0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_non_sim_random_evenly_7ffada86ce90);
    lua_pushcclosure(plVar3,FUN_7ffada7f0130,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_draw_argument_value_7ffada86ceb0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2d60,0);
    lua_setfield(plVar3,0xffffd8ee);
    lua_pushcclosure(plVar3,FUN_7ffada7f0d60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_cockpit_draw_argument_value_7ffada86cf00);
    lua_pushcclosure(plVar3,FUN_7ffada7f2020,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_sim_plugin_path_7ffada86cf20);
    lua_pushcclosure(plVar3,FUN_7ffada7f2020,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_dcs_plugin_path_7ffada86cf38);
    lua_pushcclosure(plVar3,FUN_7ffada7f0c60,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_clickable_element_reference_7ffada86cf50);
    lua_pushcclosure(plVar3,FUN_7ffada7ef860,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_type_7ffada86cf70);
    lua_pushcclosure(plVar3,FUN_7ffada7f02a0,0);
    lua_setfield(plVar3,0xffffd8ee);
    lua_pushcclosure(plVar3,FUN_7ffada7f0320,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_property_or_nil_7ffada86cfa0);
    lua_pushcclosure(plVar3,FUN_7ffada7f01c0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_aircraft_mission_data_7ffada86cfc0);
    lua_pushcclosure(plVar3,FUN_7ffada7f2de0,0);
    lua_setfield(plVar3,0xffffd8ee,s_switch_labels_off_7ffada86cfe0);
    lua_pushcclosure(plVar3,FUN_7ffada7eced0,0);
    lua_setfield(plVar3,0xffffd8ee,s_get_player_crew_index_7ffada86cff8);
    lua_pushcclosure(plVar3,FUN_7ffada7ecf00,0);
    lua_setfield(plVar3,0xffffd8ee,s_set_crew_member_seat_adjustment_7ffada86d010);
    FUN_7ffada800a50(plVar3);
    return plVar3;
  }
  return (lua_State *)0x0;
}



/***** FUNCTION querySharedState @ 7ffada7f3760 | method *****/


/* public: static struct lua_State * __ptr64 __cdecl cockpit::ccLuaLoader::querySharedState(enum
   cockpit::sharedStatesEnum,bool * __ptr64) */

lua_State * __cdecl cockpit::ccLuaLoader::querySharedState(sharedStatesEnum param_1,bool *param_2)

{
  lua_State ***ppplVar1;
  lua_State *plVar2;
  
                    /* 0x3e3760  5461
                       ?querySharedState@ccLuaLoader@cockpit@@SAPEAUlua_State@@W4sharedStatesEnum@2@PEA_N@Z
                        */
  ppplVar1 = &sharedStates_ + (int)param_1;
  if ((&sharedStates_)[(int)param_1] == (lua_State **)0x0) {
    plVar2 = open(s_ccLuaLoader__querySharedState_7ffada86d2f8,false);
    *ppplVar1 = (lua_State **)plVar2;
    if (param_2 == (bool *)0x0) {
      return plVar2;
    }
    *param_2 = true;
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = false;
    return (lua_State *)*ppplVar1;
  }
  return (lua_State *)*ppplVar1;
}



/***** FUNCTION ~SimpleOctTree @ 7ffada7f6230 | destructor *****/


/* public: __cdecl cockpit::SimpleOctTree::~SimpleOctTree(void) __ptr64 */

void __thiscall cockpit::SimpleOctTree::~SimpleOctTree(SimpleOctTree *this)

{
  SimpleOctTreeNode *this_00;
  
                    /* 0x3e6230  700  ??1SimpleOctTree@cockpit@@QEAA@XZ */
  this_00 = *(SimpleOctTreeNode **)(this + 0x18);
  if (this_00 != (SimpleOctTreeNode *)0x0) {
    SimpleOctTreeNode::~SimpleOctTreeNode(this_00);
    free(this_00);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  FUN_7ffada5efbc0((longlong *)(this + 0x28));
  return;
}



/***** FUNCTION ~SimpleOctTreeNode @ 7ffada7f62d0 | destructor *****/


/* public: __cdecl cockpit::SimpleOctTreeNode::~SimpleOctTreeNode(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeNode::~SimpleOctTreeNode(SimpleOctTreeNode *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong *plVar11;
  SimpleOctTreeNode *pSVar12;
  int *piVar10;
  
                    /* 0x3e62d0  702  ??1SimpleOctTreeNode@cockpit@@QEAA@XZ */
  plVar2 = *(longlong **)(this + 0x38);
  piVar10 = (int *)0x0;
  if (plVar2 != *(longlong **)(this + 0x40)) {
    do {
      *(undefined8 *)(*plVar2 + 0x28) = 0;
      plVar3 = *(longlong **)(this + 0x40);
      if (plVar2 + 2 != plVar3) {
        piVar8 = (int *)*plVar2;
        plVar11 = plVar2;
        do {
          piVar6 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar6 = piVar10;
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            iVar7 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (puVar4 = (undefined8 *)*plVar11, puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          *plVar11 = plVar11[2];
          plVar11[2] = 0;
          plVar1 = plVar11 + 4;
          piVar8 = piVar10;
          plVar11 = plVar11 + 2;
        } while (plVar1 != plVar3);
      }
      lVar5 = *(longlong *)(this + 0x40);
      piVar8 = (int *)(*(longlong *)(lVar5 + -0x10) + 8);
      if (*(longlong *)(lVar5 + -0x10) == 0) {
        piVar8 = piVar10;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          puVar4 = *(undefined8 **)(lVar5 + -0x10);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          *(undefined8 *)(lVar5 + -0x10) = 0;
        }
      }
      *(longlong *)(this + 0x40) = *(longlong *)(this + 0x40) + -0x10;
    } while (plVar2 != *(longlong **)(this + 0x40));
  }
  piVar8 = piVar10;
  if (*(longlong *)(this + 0x30) != 0) {
    do {
      pSVar12 = *(SimpleOctTreeNode **)((longlong)piVar8 + *(longlong *)(this + 0x30));
      if (pSVar12 != (SimpleOctTreeNode *)0x0) {
        ~SimpleOctTreeNode(pSVar12);
        free(pSVar12);
      }
      uVar9 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar9;
      iVar7 = 4;
      if (*(char *)(*(longlong *)(this + 0x50) + 0xc) != '\0') {
        iVar7 = 8;
      }
      piVar8 = piVar8 + 2;
    } while ((int)uVar9 < iVar7);
    free(*(void **)(this + 0x30));
  }
  pSVar12 = this + 0x38;
  if (*(longlong **)pSVar12 != (longlong *)0x0) {
    FUN_7ffada62f2d0(*(longlong **)pSVar12,*(longlong **)(this + 0x40));
    free(*(void **)pSVar12);
    *(undefined8 *)pSVar12 = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  return;
}



/***** FUNCTION DeleteAll @ 7ffada7f6a40 | method *****/


/* public: void __cdecl cockpit::SimpleOctTree::DeleteAll(void) __ptr64 */

void __thiscall cockpit::SimpleOctTree::DeleteAll(SimpleOctTree *this)

{
  SimpleOctTreeNode *this_00;
  
                    /* 0x3e6a40  1929  ?DeleteAll@SimpleOctTree@cockpit@@QEAAXXZ */
  if (*(SimpleOctTreeNode **)(this + 0x18) != (SimpleOctTreeNode *)0x0) {
    SimpleOctTreeNode::DeleteAll(*(SimpleOctTreeNode **)(this + 0x18));
    this_00 = *(SimpleOctTreeNode **)(this + 0x18);
    if (this_00 != (SimpleOctTreeNode *)0x0) {
      SimpleOctTreeNode::~SimpleOctTreeNode(this_00);
      free(this_00);
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  FUN_7ffada5f0c40((longlong)(this + 0x20));
  return;
}



/***** FUNCTION DeleteAll @ 7ffada7f6aa0 | method *****/


/* public: void __cdecl cockpit::SimpleOctTreeNode::DeleteAll(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeNode::DeleteAll(SimpleOctTreeNode *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  SimpleOctTreeNode *this_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  longlong *plVar11;
  
                    /* 0x3e6aa0  1930  ?DeleteAll@SimpleOctTreeNode@cockpit@@QEAAXXZ */
  plVar2 = *(longlong **)(this + 0x38);
  piVar9 = (int *)0x0;
  if (plVar2 != *(longlong **)(this + 0x40)) {
    do {
      if (*plVar2 != 0) {
        *(undefined8 *)(*plVar2 + 0x28) = 0;
      }
      plVar3 = *(longlong **)(this + 0x40);
      if (plVar2 + 2 != plVar3) {
        piVar8 = (int *)*plVar2;
        plVar11 = plVar2;
        do {
          piVar6 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar6 = piVar9;
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            iVar7 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (puVar4 = (undefined8 *)*plVar11, puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          *plVar11 = plVar11[2];
          plVar11[2] = 0;
          plVar1 = plVar11 + 4;
          piVar8 = piVar9;
          plVar11 = plVar11 + 2;
        } while (plVar1 != plVar3);
      }
      lVar5 = *(longlong *)(this + 0x40);
      piVar8 = (int *)(*(longlong *)(lVar5 + -0x10) + 8);
      if (*(longlong *)(lVar5 + -0x10) == 0) {
        piVar8 = piVar9;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          puVar4 = *(undefined8 **)(lVar5 + -0x10);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          *(undefined8 *)(lVar5 + -0x10) = 0;
        }
      }
      *(longlong *)(this + 0x40) = *(longlong *)(this + 0x40) + -0x10;
    } while (plVar2 != *(longlong **)(this + 0x40));
  }
  piVar8 = piVar9;
  if (*(longlong *)(this + 0x30) != 0) {
    do {
      DeleteAll(*(SimpleOctTreeNode **)(*(longlong *)(this + 0x30) + (longlong)piVar9));
      this_00 = *(SimpleOctTreeNode **)((longlong)piVar9 + *(longlong *)(this + 0x30));
      if (this_00 != (SimpleOctTreeNode *)0x0) {
        ~SimpleOctTreeNode(this_00);
        free(this_00);
      }
      uVar10 = (int)piVar8 + 1;
      piVar9 = piVar9 + 2;
      iVar7 = 4;
      if (*(char *)(*(longlong *)(this + 0x50) + 0xc) != '\0') {
        iVar7 = 8;
      }
      piVar8 = (int *)(ulonglong)uVar10;
    } while ((int)uVar10 < iVar7);
    free(*(void **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}



/***** FUNCTION GetObjects @ 7ffada7f71e0 | method *****/


/* public: void __cdecl cockpit::SimpleOctTree::GetObjects(class ClipVolume const * __ptr64,class
   ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad,struct ed::DefaultDeleter>,class
   ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad,struct ed::DefaultDeleter> > > &
   __ptr64,class cockpit::SimpleOctTree_check_object * __ptr64) __ptr64 */

void __thiscall
cockpit::SimpleOctTree::GetObjects
          (SimpleOctTree *this,ClipVolume *param_1,
          vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
          *param_2,SimpleOctTree_check_object *param_3)

{
  float fVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  int *piVar11;
  int *apiStack_48 [4];
  
                    /* 0x3e71e0  1987
                       ?GetObjects@SimpleOctTree@cockpit@@QEAAXPEBVClipVolume@@AEAV?$vector@V?$Ptr@VSimpleOctTreeLoad@cockpit@@UDefaultDeleter@ed@@@ed@@V?$allocator@V?$Ptr@VSimpleOctTreeLoad@cockpit@@UDefaultDeleter@ed@@@ed@@@2@@ed@@PEAVSimpleOctTree_check_object@2@@Z
                        */
  lVar4 = *(longlong *)(this + 0x18);
  if (lVar4 == 0) {
    return;
  }
  if ((0 < *(int *)(lVar4 + 0x1c)) &&
     ((param_3 == (SimpleOctTree_check_object *)0x0 ||
      (param_3[8] == (SimpleOctTree_check_object)0x0)))) {
    piVar11 = (int *)0x0;
    piVar8 = piVar11;
    piVar7 = piVar11;
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      do {
        pfVar2 = *(float **)((longlong)piVar8 + *(longlong *)(lVar4 + 0x30));
        fVar1 = pfVar2[6];
        iVar6 = (**(code **)(*(longlong *)param_1 + 0x10))
                          (param_1,*pfVar2 - fVar1,pfVar2[1] - fVar1,pfVar2[2] - fVar1,
                           fVar1 + pfVar2[3],fVar1 + pfVar2[4],fVar1 + pfVar2[5]);
        if (iVar6 != 3) {
          SimpleOctTreeNode::GetObjectList
                    (*(SimpleOctTreeNode **)((longlong)piVar8 + *(longlong *)(lVar4 + 0x30)),param_1
                     ,param_2,param_3);
        }
        uVar10 = (int)piVar7 + 1;
        iVar6 = 4;
        if (*(char *)(*(longlong *)(lVar4 + 0x50) + 0xc) != '\0') {
          iVar6 = 8;
        }
        piVar8 = piVar8 + 2;
        piVar7 = (int *)(ulonglong)uVar10;
      } while ((int)uVar10 < iVar6);
    }
    plVar9 = *(longlong **)(lVar4 + 0x38);
    piVar8 = piVar11;
    if (plVar9 != *(longlong **)(lVar4 + 0x40)) {
      do {
        piVar7 = (int *)(*plVar9 + 8);
        if (*plVar9 == 0) {
          piVar7 = piVar11;
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        if ((piVar8 != (int *)0x0) && (piVar7 = piVar8 + 2, piVar7 != (int *)0x0)) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if ((iVar6 == 1) && (piVar8 != (int *)0x0)) {
            (*(code *)**(undefined8 **)piVar8)(piVar8,1);
          }
        }
        piVar8 = (int *)*plVar9;
        apiStack_48[0] = piVar8;
        if (((char)piVar8[0xc] == '\0') &&
           ((param_1 == (ClipVolume *)0x0 ||
            (iVar6 = (**(code **)(*(longlong *)param_1 + 0x10))
                               (param_1,piVar8[4],piVar8[5],piVar8[6],piVar8[7],piVar8[8],piVar8[9])
            , iVar6 != 3)))) {
          if (param_3 != (SimpleOctTree_check_object *)0x0) {
            if (param_3[8] != (SimpleOctTree_check_object)0x0) break;
            cVar5 = (*(code *)**(undefined8 **)param_3)(param_3,piVar8);
            if (cVar5 == '\0') goto LAB_7ffada7f7176;
          }
          plVar3 = *(longlong **)(param_2 + 8);
          if (plVar3 == *(longlong **)(param_2 + 0x10)) {
            FUN_7ffada7f5880((longlong *)param_2,plVar3,(longlong *)apiStack_48);
          }
          else {
            *plVar3 = (longlong)piVar8;
            piVar7 = piVar8 + 2;
            if (piVar8 == (int *)0x0) {
              piVar7 = piVar11;
            }
            if (piVar7 != (int *)0x0) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
          }
        }
LAB_7ffada7f7176:
        plVar9 = plVar9 + 2;
      } while (plVar9 != *(longlong **)(lVar4 + 0x40));
    }
    if ((piVar8 != (int *)0x0) && (piVar7 = piVar8 + 2, piVar7 != (int *)0x0)) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (piVar8 != (int *)0x0)) {
        (*(code *)**(undefined8 **)piVar8)(piVar8,1);
      }
    }
  }
  return;
}



/***** FUNCTION FUN_7ffada828ff0 @ 7ffada828ff0 | method *****/


undefined8 * FUN_7ffada828ff0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 2) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xff7fffff;
  *(undefined4 *)(param_1 + 3) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff7fffff;
  *param_1 = ClipVolumePlanes::vftable;
  lVar2 = 10;
  puVar1 = param_1 + 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



/***** FUNCTION lua_settop @ 7ffada82a043 | method *****/


void lua_settop(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_settop();
  return;
}



/***** FUNCTION lua_gettop @ 7ffada82a049 | method *****/


void lua_gettop(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_gettop();
  return;
}



/***** FUNCTION lua_isstring @ 7ffada82a04f | method *****/


void lua_isstring(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_isstring();
  return;
}



/***** FUNCTION lua_tolstring @ 7ffada82a05b | method *****/


void lua_tolstring(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_tolstring();
  return;
}



/***** FUNCTION lua_pushstring @ 7ffada82a067 | method *****/


void lua_pushstring(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushstring();
  return;
}



/***** FUNCTION lua_pushcclosure @ 7ffada82a06d | method *****/


void lua_pushcclosure(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushcclosure();
  return;
}



/***** FUNCTION lua_pushlightuserdata @ 7ffada82a073 | method *****/


void lua_pushlightuserdata(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushlightuserdata();
  return;
}



/***** FUNCTION lua_getfield @ 7ffada82a079 | method *****/


void lua_getfield(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_getfield();
  return;
}



/***** FUNCTION lua_createtable @ 7ffada82a07f | method *****/


void lua_createtable(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_createtable();
  return;
}



/***** FUNCTION lua_settable @ 7ffada82a085 | method *****/


void lua_settable(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_settable();
  return;
}



/***** FUNCTION lua_setfield @ 7ffada82a08b | method *****/


void lua_setfield(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_setfield();
  return;
}



/***** FUNCTION lua_tonumber @ 7ffada82a09d | method *****/


void lua_tonumber(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_tonumber();
  return;
}



/***** FUNCTION lua_pushnumber @ 7ffada82a0a9 | method *****/


void lua_pushnumber(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a0a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnumber();
  return;
}



/***** FUNCTION lua_isnumber @ 7ffada82a0bb | method *****/


void lua_isnumber(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_isnumber();
  return;
}



/***** FUNCTION _Xlength_error @ 7ffada82a0f1 | method *****/


void __cdecl std::_Xlength_error(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a0f1. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xlength_error(param_1);
  return;
}



/***** FUNCTION `eh_vector_destructor_iterator' @ 7ffada82b1d4 | method *****/


/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_7ffada8472a0)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



/***** FUNCTION free @ 7ffada82b2d8 | method *****/


void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/***** FUNCTION free @ 7ffada82b2e0 | method *****/


void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/***** FUNCTION __security_check_cookie @ 7ffada82b7d0 | method *****/


/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_7ffada94e840) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_7ffada82bd14();
  return;
}



/***** FUNCTION FUN_7ffada82bd14 @ 7ffada82bd14 | method *****/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7ffada82bd14(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x7ffada82bd3f;
  FUN_7ffada82bf0c((PCONTEXT)&DAT_7ffada9660a0);
  _DAT_7ffada966010 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_7ffada966138 = puVar3 + 0x40;
  _DAT_7ffada966120 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_7ffada966000 = 0xc0000409;
  _DAT_7ffada966004 = 1;
  _DAT_7ffada966018 = 1;
  DAT_7ffada966020 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_7ffada94e840;
  *(undefined8 *)(puVar3 + 0x28) = DAT_7ffada94e880;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_7ffada82bde1;
  DAT_7ffada966198 = _DAT_7ffada966010;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_7ffada8720b0);
}



/***** FUNCTION memcmp @ 7ffada82c596 | method *****/


int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/***** FUNCTION memcpy @ 7ffada82c59c | method *****/


void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/***** FUNCTION memmove @ 7ffada82c5a2 | method *****/


void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/***** FUNCTION _purecall @ 7ffada82c5a8 | method *****/


void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



/***** FUNCTION strlen @ 7ffada82c620 | method *****/


size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}



/***** FUNCTION _guard_dispatch_icall @ 7ffada82c750 | method *****/


/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/***** FUNCTION tmpload @ EXTERNAL:00000001 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000001: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION Config @ EXTERNAL:00000002 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000002: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ED_lua_pcall @ EXTERNAL:00000025 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000025: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION tmpload_buf @ EXTERNAL:0000004c | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000004c: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ~Config @ EXTERNAL:00000051 | destructor *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000051: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ed_vlogf @ EXTERNAL:0000006a | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000006a: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION fatal_out_of_memory @ EXTERNAL:00000071 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000071: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION malloc @ EXTERNAL:000003e5 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003e5: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION free @ EXTERNAL:000003e7 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003e7: Cannot marshal address space: EXTERNAL
 */

/*
CALL GRAPH
[d=1] FUN_7ffada794b90 @ 7ffada794b90 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada794b90 @ 7ffada794b90 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada794b90 @ 7ffada794b90 -> ~ccMovingMap @ 7ffada7947e0
[d=1] FUN_7ffada794b90 @ 7ffada794b90 -> free @ 7ffada82b2d8
[d=1] initialize @ 7ffada7923e0 -> querySharedState @ 7ffada7f3760
[d=1] initialize @ 7ffada7923e0 -> Config @ EXTERNAL:00000002
[d=1] initialize @ 7ffada7923e0 -> tmpload_buf @ EXTERNAL:0000004c
[d=1] initialize @ 7ffada7923e0 -> tmpload @ EXTERNAL:00000001
[d=1] initialize @ 7ffada7923e0 -> lua_settop @ 7ffada82a043
[d=1] initialize @ 7ffada7923e0 -> ~Config @ EXTERNAL:00000051
[d=1] draw @ 7ffada795040 -> render @ 7ffada795fa0
[d=1] draw @ 7ffada795040 -> draw @ 7ffada7922f0
[d=1] addElem @ 7ffada791f40 -> FUN_7ffada791a90 @ 7ffada791a90
[d=1] addElem @ 7ffada791f40 -> malloc @ EXTERNAL:000003e5
[d=1] addElem @ 7ffada791f40 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=1] addElem @ 7ffada791f40 -> memmove @ 7ffada82c5a2
[d=1] addElem @ 7ffada791f40 -> free @ EXTERNAL:000003e7
[d=1] addElem @ 7ffada791f40 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=1] reg_in_script @ 7ffada793a80 -> FUN_7ffada782630 @ 7ffada782630
[d=1] reg_in_script @ 7ffada793a80 -> lua_pushcclosure @ 7ffada82a06d
[d=1] reg_in_script @ 7ffada793a80 -> lua_setfield @ 7ffada82a08b
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> reg_in_reusable_state @ 7ffada793a30
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> lua_pushstring @ 7ffada82a067
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> lua_pushlightuserdata @ 7ffada82a073
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> lua_settable @ 7ffada82a085
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> lua_pushcclosure @ 7ffada82a06d
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> lua_setfield @ 7ffada82a08b
[d=1] reg_in_reusable_state @ 7ffada795dc0 -> register_metatable @ 7ffada795e80
[d=1] distribute_elements @ 7ffada794f50 -> distribute_elements @ 7ffada7920c0
[d=1] distribute_elements @ 7ffada794f50 -> memmove @ 7ffada82c5a2
[d=1] FUN_7ffada794b00 @ 7ffada794b00 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada794b00 @ 7ffada794b00 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada794b00 @ 7ffada794b00 -> ~ccMapObjectsBuffer @ 7ffada794760
[d=1] FUN_7ffada794b00 @ 7ffada794b00 -> free @ 7ffada82b2d8
[d=1] initialize @ 7ffada7951c0 -> initialize @ 7ffada785070
[d=1] initialize @ 7ffada7951c0 -> lua_getfield @ 7ffada82a079
[d=1] initialize @ 7ffada7951c0 -> lua_pushnumber @ 7ffada82a0a9
[d=1] initialize @ 7ffada7951c0 -> ED_lua_pcall @ EXTERNAL:00000025
[d=1] initialize @ 7ffada7951c0 -> lua_isstring @ 7ffada82a04f
[d=1] initialize @ 7ffada7951c0 -> lua_tolstring @ 7ffada82a05b
[d=1] initialize @ 7ffada7951c0 -> FUN_7ffada5f31a0 @ 7ffada5f31a0
[d=1] initialize @ 7ffada7951c0 -> memcmp @ 7ffada82c596
[d=1] initialize @ 7ffada7951c0 -> free @ EXTERNAL:000003e7
[d=1] initialize @ 7ffada7951c0 -> FUN_7ffada5f68c0 @ 7ffada5f68c0
[d=1] initialize @ 7ffada7951c0 -> __security_check_cookie @ 7ffada82b7d0
[d=1] initialize @ 7ffada7951c0 -> lua_settop @ 7ffada82a043
[d=1] on_change_mode @ 7ffada7850d0 -> lua_getfield @ 7ffada82a079
[d=1] on_change_mode @ 7ffada7850d0 -> lua_pushstring @ 7ffada82a067
[d=1] on_change_mode @ 7ffada7850d0 -> ED_lua_pcall @ EXTERNAL:00000025
[d=1] on_change_mode @ 7ffada7850d0 -> lua_isnumber @ 7ffada82a0bb
[d=1] on_change_mode @ 7ffada7850d0 -> lua_tonumber @ 7ffada82a09d
[d=1] on_change_mode @ 7ffada7850d0 -> get_page_by_ID @ 7ffada77b010
[d=1] ccMovingMap @ 7ffada7945c0 -> ccIndicatorPage @ 7ffada791d00
[d=1] ~ccMovingMap @ 7ffada7947e0 -> DeleteAll @ 7ffada7f6a40
[d=1] ~ccMovingMap @ 7ffada7947e0 -> ~SimpleOctTree @ 7ffada7f6230
[d=1] ~ccMovingMap @ 7ffada7947e0 -> free @ 7ffada82b2d8
[d=1] ~ccMovingMap @ 7ffada7947e0 -> free @ EXTERNAL:000003e7
[d=1] ~ccMovingMap @ 7ffada7947e0 -> FUN_7ffada62f2d0 @ 7ffada62f2d0
[d=1] ~ccMovingMap @ 7ffada7947e0 -> ~ccIndicatorPage @ 7ffada791e70
[d=1] ccMovingMap @ 7ffada7943a0 -> ccIndicatorPage @ 7ffada779980
[d=1] ccMovingMap @ 7ffada7943a0 -> malloc @ EXTERNAL:000003e5
[d=1] ccMovingMap @ 7ffada7943a0 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=1] ccMovingMap @ 7ffada7943a0 -> memmove @ 7ffada82c5a2
[d=1] ccMovingMap @ 7ffada7943a0 -> FUN_7ffada62cf50 @ 7ffada62cf50
[d=1] ccMovingMap @ 7ffada7943a0 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] `eh_vector_destructor_iterator' @ 7ffada82b1d4 -> _guard_dispatch_icall @ 7ffada82c750
[d=2] querySharedState @ 7ffada7f3760 -> open @ 7ffada7f2fd0
[d=2] render @ 7ffada795fa0 -> FUN_7ffada828ff0 @ 7ffada828ff0
[d=2] render @ 7ffada795fa0 -> FUN_7ffada62f2d0 @ 7ffada62f2d0
[d=2] render @ 7ffada795fa0 -> GetObjects @ 7ffada7f71e0
[d=2] render @ 7ffada795fa0 -> __security_check_cookie @ 7ffada82b7d0
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> FUN_7ffada5ef1f0 @ 7ffada5ef1f0
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> FUN_7ffada5ef690 @ 7ffada5ef690
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> FUN_7ffada5f0470 @ 7ffada5f0470
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> FUN_7ffada602ba0 @ 7ffada602ba0
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> memcmp @ 7ffada82c596
[d=2] FUN_7ffada791a90 @ 7ffada791a90 -> _Xlength_error @ 7ffada82a0f1
[d=2] FUN_7ffada5f0ae0 @ 7ffada5f0ae0 -> _Xlength_error @ 7ffada82a0f1
[d=2] FUN_7ffada782630 @ 7ffada782630 -> lua_pushcclosure @ 7ffada82a06d
[d=2] FUN_7ffada782630 @ 7ffada782630 -> lua_setfield @ 7ffada82a08b
[d=2] FUN_7ffada782630 @ 7ffada782630 -> lua_pushstring @ 7ffada82a067
[d=2] FUN_7ffada782630 @ 7ffada782630 -> lua_createtable @ 7ffada82a07f
[d=2] FUN_7ffada782630 @ 7ffada782630 -> lua_settable @ 7ffada82a085
[d=2] reg_in_reusable_state @ 7ffada793a30 -> lua_pushstring @ 7ffada82a067
[d=2] reg_in_reusable_state @ 7ffada793a30 -> lua_pushlightuserdata @ 7ffada82a073
[d=2] reg_in_reusable_state @ 7ffada793a30 -> lua_settable @ 7ffada82a085
[d=2] reg_in_reusable_state @ 7ffada793a30 -> FUN_7ffada78c000 @ 7ffada78c000
[d=2] register_metatable @ 7ffada795e80 -> lua_pushstring @ 7ffada82a067
[d=2] register_metatable @ 7ffada795e80 -> lua_createtable @ 7ffada82a07f
[d=2] register_metatable @ 7ffada795e80 -> lua_gettop @ 7ffada82a049
[d=2] register_metatable @ 7ffada795e80 -> lua_pushcclosure @ 7ffada82a06d
[d=2] register_metatable @ 7ffada795e80 -> lua_settable @ 7ffada82a085
[d=2] register_metatable @ 7ffada795e80 -> lua_setfield @ 7ffada82a08b
[d=2] distribute_elements @ 7ffada7920c0 -> FUN_7ffada5ef1f0 @ 7ffada5ef1f0
[d=2] distribute_elements @ 7ffada7920c0 -> memmove @ 7ffada82c5a2
[d=2] distribute_elements @ 7ffada7920c0 -> FUN_7ffada5f68c0 @ 7ffada5f68c0
[d=2] ~ccMapObjectsBuffer @ 7ffada794760 -> free @ 7ffada82b2d8
[d=2] ~ccMapObjectsBuffer @ 7ffada794760 -> free @ EXTERNAL:000003e7
[d=2] initialize @ 7ffada785070 -> strlen @ 7ffada82c620
[d=2] initialize @ 7ffada785070 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=2] FUN_7ffada5f31a0 @ 7ffada5f31a0 -> strlen @ 7ffada82c620
[d=2] FUN_7ffada5f31a0 @ 7ffada5f31a0 -> memcpy @ 7ffada82c59c
[d=2] FUN_7ffada5f31a0 @ 7ffada5f31a0 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada5f31a0 @ 7ffada5f31a0 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada5f31a0 @ 7ffada5f31a0 -> FUN_7ffada5f0ac0 @ 7ffada5f0ac0
[d=2] FUN_7ffada5f68c0 @ 7ffada5f68c0 -> ed_vlogf @ EXTERNAL:0000006a
[d=2] __security_check_cookie @ 7ffada82b7d0 -> FUN_7ffada82bd14 @ 7ffada82bd14
[d=2] ccIndicatorPage @ 7ffada791d00 -> malloc @ EXTERNAL:000003e5
[d=2] ccIndicatorPage @ 7ffada791d00 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] ccIndicatorPage @ 7ffada791d00 -> free @ EXTERNAL:000003e7
[d=2] DeleteAll @ 7ffada7f6a40 -> DeleteAll @ 7ffada7f6aa0
[d=2] DeleteAll @ 7ffada7f6a40 -> ~SimpleOctTreeNode @ 7ffada7f62d0
[d=2] DeleteAll @ 7ffada7f6a40 -> free @ 7ffada82b2d8
[d=2] DeleteAll @ 7ffada7f6a40 -> FUN_7ffada5f0c40 @ 7ffada5f0c40
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> ~SimpleOctTreeNode @ 7ffada7f62d0
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> free @ 7ffada82b2d8
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> free @ EXTERNAL:000003e7
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> FUN_7ffada5efbc0 @ 7ffada5efbc0
[d=2] ~ccIndicatorPage @ 7ffada791e70 -> memmove @ 7ffada82c5a2
[d=2] ~ccIndicatorPage @ 7ffada791e70 -> FUN_7ffada603bc0 @ 7ffada603bc0
[d=2] ~ccIndicatorPage @ 7ffada791e70 -> free @ EXTERNAL:000003e7
[d=2] ~ccIndicatorPage @ 7ffada791e70 -> FUN_7ffada5f1620 @ 7ffada5f1620
[d=2] ccIndicatorPage @ 7ffada779980 -> malloc @ EXTERNAL:000003e5
[d=2] ccIndicatorPage @ 7ffada779980 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] ccIndicatorPage @ 7ffada779980 -> free @ EXTERNAL:000003e7
[d=2] ccIndicatorPage @ 7ffada779980 -> FUN_7ffada778590 @ 7ffada778590
[d=2] ccIndicatorPage @ 7ffada779980 -> FUN_7ffada62cf50 @ 7ffada62cf50
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0

RTTI
[
  {
    "address": "7ffada88c568",
    "signature": 1,
    "offset": 0,
    "cd_offset": 0,
    "type_descriptor": "7ffada95bc40",
    "type_descriptor_info": {
      "address": "7ffada95bc40",
      "raw_name": ".?AVccMovingMap@cockpit@@",
      "name": "cockpit::ccMovingMap"
    },
    "class_hierarchy": {
      "address": "7ffada88c590",
      "signature": 0,
      "attributes": 0,
      "num_bases": 2,
      "base_array": "7ffada88c5a8",
      "bases": [
        {
          "address": "7ffada88c5c0",
          "type_descriptor": "7ffada95bc40",
          "type_name": "cockpit::ccMovingMap",
          "raw_type_name": ".?AVccMovingMap@cockpit@@",
          "num_contained_bases": 1,
          "mdisp": 0,
          "pdisp": -1,
          "vdisp": 0,
          "attributes": 64,
          "chd": "7ffada88c590"
        },
        {
          "address": "7ffada88b040",
          "type_descriptor": "7ffada95b2a0",
          "type_name": "cockpit::ccIndicatorPage",
          "raw_type_name": ".?AVccIndicatorPage@cockpit@@",
          "num_contained_bases": 0,
          "mdisp": 0,
          "pdisp": -1,
          "vdisp": 0,
          "attributes": 64,
          "chd": "7ffada88b018"
        }
      ]
    },
    "self_rva": 4703592
  }
]
*/
