/*
=======================================================================
 CockpitBase.dll CLASS RECONSTRUCTION
 Class: cockpit::avMovingMap
=======================================================================
*/

#include <cstdint>
#include <cstddef>

// VTABLE ??_7avMovingMap@cockpit@@6B@ @ 7ffada854f60
// COL: 7ffada87c5b8
//   [000] 7ffada666ba0 -> FUN_7ffada666ba0
//   [001] 7ffada5f2060 -> NetCrewMemberUpdateStream
//   [002] 7ffada82c5a8 -> _purecall
//   [003] 7ffada668690 -> get_camera
//   [004] 7ffada82c5a8 -> _purecall
//   [005] 7ffada82c5a8 -> _purecall
//   [006] 7ffada82c5a8 -> _purecall
//   [007] 7ffada87c820 -> <non-function>
//   [008] 7ffada8276ec -> FinalRelease
//   [009] 7ffada666a70 -> FUN_7ffada666a70
//   [010] 7ffada669260 -> initialize
//   [011] 7ffada64a500 -> release
//   [012] 7ffada6675f0 -> SetCommand
//   [013] 7ffada666fe0 -> OnCockpitEvent
//   [014] 7ffada5f2250 -> ~avDate
//   [015] 7ffada5f2250 -> ~avDate
//   [016] 7ffada649680 -> checkCallbackKeyboard
//   [017] 7ffada649250 -> checkCallbackClickable
//   [018] 7ffada5f21c0 -> CheckNavMode
//   [019] 7ffada5f2250 -> ~avDate
//   [020] 7ffada5f2060 -> NetCrewMemberUpdateStream
//   [021] 7ffada64a440 -> register_in_script
//   [022] 7ffada5f23a0 -> l_metatable_name
//   [023] 7ffada87c8f8 -> <non-function>
//   [024] 7ffada649e60 -> l_register_functions
//   [025] 7ffada87c920 -> <non-function>
//   [026] 7ffada666af8 -> <non-function>
//   [027] 7ffada668860 -> get_map_rotation
//   [028] 7ffada6689d0 -> get_volume_size
//   [029] 7ffada668690 -> get_camera
//   [030] 7ffada6686c0 -> get_camera_point
//   [031] 7ffada5f2250 -> ~avDate
//   [032] 7ffada5f2250 -> ~avDate
//   [033] 7ffada87c948 -> <non-function>
//   [034] 7ffada6669e0 -> FUN_7ffada6669e0
//   [035] 7ffada87c630 -> <non-function>
//   [036] 7ffada666c40 -> FUN_7ffada666c40
//   [037] 7ffada7f7f40 -> check_segment
//   [038] 7ffada7f7f70 -> check_sphere
//   [039] 7ffada66a8b0 -> setName
//   [040] 7ffada87c7d0 -> <non-function>
//   [041] 7ffada666ccc -> FUN_7ffada666ccc
//   [042] 7ffada87c7f8 -> <non-function>
//   [043] 7ffada8276ec -> FinalRelease
//   [044] 7ffada666cd8 -> FUN_7ffada666cd8
//   [045] 7ffada87c970 -> <non-function>
//   [046] 7ffada666b10 -> FUN_7ffada666b10
//   [047] 7ffada7f7f40 -> check_segment
//   [048] 7ffada7f7f70 -> check_sphere
//   [049] 7ffada87ca08 -> <non-function>
//   [050] 7ffada666b94 -> FUN_7ffada666b94
//   [051] 7ffada87cb30 -> <non-function>
//   [052] 7ffada614180 -> FUN_7ffada614180
//   [053] 7ffada613858 -> FUN_7ffada613858
//   [054] 7ffada6682b8 -> FUN_7ffada6682b8
//   [055] 7ffada614b40 -> FUN_7ffada614b40
//   [056] 7ffada87ca30 -> <non-function>
//   [057] 7ffada614180 -> FUN_7ffada614180
//   [058] 7ffada613858 -> FUN_7ffada613858
//   [059] 7ffada6682b8 -> FUN_7ffada6682b8
//   [060] 7ffada614b40 -> FUN_7ffada614b40

// VTABLE s_??_7avMovingMap@cockpit@@6B@_7ffada8eb12b @ 7ffada8eb12b

// RECOVERED FIELD OFFSETS
// +0x0000 used by: AddObject, DeleteAll, FUN_7ffada5ef690, FUN_7ffada5efbc0, FUN_7ffada5f0b10, FUN_7ffada5f10d0, FUN_7ffada5f1180, FUN_7ffada5f14c0, FUN_7ffada5f21d0, FUN_7ffada5f31a0, FUN_7ffada5f3cc0, FUN_7ffada5f6770, FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, FUN_7ffada603a60, FUN_7ffada614180, FUN_7ffada62cf50, FUN_7ffada645a10, FUN_7ffada664310, FUN_7ffada664600, FUN_7ffada6647d0, FUN_7ffada664ab0, FUN_7ffada666ba0, FUN_7ffada667990, FUN_7ffada668190, FUN_7ffada6685d0, FUN_7ffada66a530, FUN_7ffada66a740, add_note, avKneeboardZoneObject, avMovingMap, avMovingMapPoint, ccSound, check_camera_orientation, check_camera_volume, ed_cockpit_set_action_digital, force_update, get_arg_value, get_camera_point, init_waypoints, initialize, mark_self, read_airdrome_id, read_waypoint, reset_draw_objects, set_page_as_shortcut, ~SimpleOctTreeLoad, ~SimpleOctTreeNode, ~avDevice, ~avDrawCachedObj, ~avKneeboard, ~avKneeboardZoneObject, ~avMovingMap, ~avMovingMapPoint
// +0x0001 used by: SetCommand
// +0x0004 used by: FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, FUN_7ffada66a740, force_update
// +0x0008 used by: DeleteAll, FUN_7ffada5f3cc0, FUN_7ffada5f6770, FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, FUN_7ffada62cf50, FUN_7ffada645a10, FUN_7ffada664310, FUN_7ffada664600, FUN_7ffada6647d0, FUN_7ffada664ab0, FUN_7ffada667990, FUN_7ffada668190, FUN_7ffada6685d0, FUN_7ffada66a740, avKneeboardZoneObject, avMovingMapPoint, ccSound, checkCallbackClickable, checkCallbackKeyboard, force_update, reset_draw_objects, ~SimpleOctTreeNode
// +0x000C used by: FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, force_update
// +0x0010 used by: FUN_7ffada5ef690, FUN_7ffada5f0b10, FUN_7ffada5f0c40, FUN_7ffada5f10d0, FUN_7ffada5f1180, FUN_7ffada5f31a0, FUN_7ffada5f6770, FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, FUN_7ffada603a60, FUN_7ffada62cf50, FUN_7ffada664600, FUN_7ffada6647d0, FUN_7ffada664ab0, FUN_7ffada666ba0, FUN_7ffada668190, FUN_7ffada6682d0, FUN_7ffada66a530, avKneeboardZoneObject, avMovingMapPoint, ccSound, check_camera_volume, force_update, reset_draw_objects, ~avMovingMap
// +0x0014 used by: FUN_7ffada5f9230, FUN_7ffada5f9de0, FUN_7ffada5f9fc0, FUN_7ffada5fa0c0, avKneeboardZoneObject, avMovingMapPoint, force_update
// +0x0018 used by: AddObject, DeleteAll, FUN_7ffada5ef690, FUN_7ffada5f0b10, FUN_7ffada5f31a0, FUN_7ffada603a60, FUN_7ffada6647d0, FUN_7ffada66a530, avKneeboardZoneObject, avMovingMapPoint, mark_self, ~SimpleOctTree
// +0x0019 used by: FUN_7ffada5f10d0, FUN_7ffada5f1180, checkCallbackKeyboard
// +0x001C used by: avKneeboardZoneObject, avMovingMapPoint
// +0x0020 used by: FUN_7ffada6647d0, FUN_7ffada664ab0, avKneeboardZoneObject, avMovingMapPoint, checkCallbackKeyboard, get_camera, ~avDevice, ~avKneeboard
// +0x0024 used by: avKneeboardZoneObject, avMovingMapPoint
// +0x0028 used by: FUN_7ffada664ab0, avKneeboardZoneObject, avMovingMapPoint, checkCallbackKeyboard, get_camera, initialize
// +0x0030 used by: FUN_7ffada664600, avKneeboardZoneObject, avMovingMapPoint, check_segment, check_sphere, get_camera
// +0x0038 used by: DeleteAll, init_waypoints, ~SimpleOctTreeNode, ~avKneeboardZoneObject, ~avMovingMapPoint
// +0x0040 used by: DeleteAll, ~SimpleOctTreeNode
// +0x0050 used by: checkCallbackKeyboard, close_LuaState, ensured_Lua, make_default_activity
// +0x0058 used by: ~avDevice, ~avKneeboardZoneObject, ~avMovingMapPoint
// +0x0060 used by: checkCallbackClickable
// +0x0068 used by: ensured_Lua, initialize
// +0x0070 used by: checkCallbackKeyboard, ~avMovingMapPoint
// +0x0080 used by: FUN_7ffada664ab0, initialize
// +0x0088 used by: ~avMovingMapPoint
// +0x0090 used by: SetArgument, initialize, mark_target
// +0x0098 used by: SetArgument, ~avKneeboard
// +0x00A0 used by: setPoint
// +0x00D0 used by: update
// +0x00D8 used by: force_update
// +0x00E8 used by: getActionData
// +0x00F0 used by: getActionData
// +0x00F8 used by: get_argument, set_argument
// +0x0100 used by: mark_target
// +0x0108 used by: mark_target
// +0x0110 used by: mark_target
// +0x0148 used by: init_waypoints
// +0x0150 used by: to_map_units
// +0x0190 used by: init_waypoints
// +0x0198 used by: force_update, get_arg_value
// +0x0210 used by: FUN_7ffada666ba0, ~avMovingMap
// +0x0238 used by: check_camera_orientation
// +0x0240 used by: check_camera_orientation
// +0x0248 used by: check_camera_orientation
// +0x024C used by: check_camera_orientation
// +0x0258 used by: check_camera_orientation
// +0x0260 used by: check_camera_orientation
// +0x02F8 used by: check_camera_volume
// +0x02FC used by: check_camera_volume
// +0x0300 used by: check_camera_volume
// +0x0304 used by: check_camera_volume
// +0x0308 used by: check_camera_volume
// +0x030C used by: check_camera_volume
// +0x0310 used by: check_camera_orientation
// +0x0374 used by: get_map_rotation, get_volume_size
// +0x0378 used by: get_camera_point, get_map_rotation, get_volume_size
// +0x0380 used by: get_map_rotation, get_volume_size
// +0x03E8 used by: get_map_rotation, get_volume_size
// +0x0408 used by: init_waypoints, init_zones, to_map_units
// +0x040C used by: next_page
// +0x0428 used by: ~avKneeboard
// +0x0468 used by: set_page_as_shortcut
// +0x0470 used by: set_page_as_shortcut
// +0x0480 used by: add_new_page_code, next_page, set_page_as_shortcut, unset_page_as_shortcut
// +0x0488 used by: add_new_page_code, next_page, set_page_as_shortcut, unset_page_as_shortcut
// +0x0498 used by: next_page
// +0x04E8 used by: add_note

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



/***** FUNCTION FUN_7ffada5f10d0 @ 7ffada5f10d0 | method *****/


void FUN_7ffada5f10d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = FUN_7ffada5f1230(param_1,*(undefined8 **)(*param_2 + 8),*param_1,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}



/***** FUNCTION FUN_7ffada5f1180 @ 7ffada5f1180 | method *****/


void FUN_7ffada5f1180(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = FUN_7ffada5f1310(param_1,*(undefined8 **)(*param_2 + 8),*param_1,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}



/***** FUNCTION FUN_7ffada5f14c0 @ 7ffada5f14c0 | method *****/


void FUN_7ffada5f14c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada5f1523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)*param_1);
  return;
}



/***** FUNCTION FUN_7ffada5f1530 @ 7ffada5f1530 | method *****/


void FUN_7ffada5f1530(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/***** FUNCTION FUN_7ffada5f1590 @ 7ffada5f1590 | method *****/


void FUN_7ffada5f1590(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_7ffada5f1590(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    if ((void *)param_3[5] != (void *)0x0) {
      free((void *)param_3[5]);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/***** FUNCTION avDevice @ 7ffada5f1770 | method *****/


/* public: __cdecl cockpit::avDevice::avDevice(class cockpit::avDevice const & __ptr64) __ptr64 */

avDevice * __thiscall cockpit::avDevice::avDevice(avDevice *this,avDevice *param_1)

{
  avDevice *paVar1;
  void *pvVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  
                    /* 0x1e1770  247  ??0avDevice@cockpit@@QEAA@AEBV01@@Z */
  Common::FakeUnknown<Common::Identifiable>::FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)this,
             (FakeUnknown<class_Common::Identifiable> *)param_1);
  *(undefined ***)this = ccContextRelatedObject::vftable;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)this = vftable_for_cockpit__ccContextRelatedObject_;
  *(undefined ***)(this + 0x20) = vftable_for_cockpit__avLuaRegistrable_;
  this[0x28] = param_1[0x28];
  this[0x29] = param_1[0x29];
  FUN_7ffada5ef690((undefined8 *)(this + 0x30),(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  paVar1 = this + 0x60;
  *(longlong *)paVar1 = 0;
  *(undefined8 *)(this + 0x68) = 0;
  pvVar2 = malloc(0x30);
  if (pvVar2 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x30);
  }
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)paVar1 = pvVar2;
  FUN_7ffada5f10d0((longlong *)paVar1,(longlong *)(param_1 + 0x60),in_R8,in_R9);
  paVar1 = this + 0x70;
  *(longlong *)paVar1 = 0;
  *(undefined8 *)(this + 0x78) = 0;
  pvVar2 = malloc(0x40);
  if (pvVar2 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x40);
  }
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)paVar1 = pvVar2;
  FUN_7ffada5f1180((longlong *)paVar1,(longlong *)(param_1 + 0x70),in_R8,in_R9);
  this[0x80] = param_1[0x80];
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  this[0x90] = param_1[0x90];
  this[0x91] = param_1[0x91];
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}



/***** FUNCTION ccSound @ 7ffada5f1910 | method *****/


/* WARNING: Removing unreachable block (ram,0x7ffada5f1a1e) */
/* WARNING: Removing unreachable block (ram,0x7ffada5f1a2b) */
/* WARNING: Removing unreachable block (ram,0x7ffada5f1a30) */
/* private: __cdecl cockpit::ccSound::ccSound(void) __ptr64 */

ccSound * __thiscall cockpit::ccSound::ccSound(ccSound *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
                    /* 0x1e1910  551  ??0ccSound@cockpit@@AEAA@XZ */
  *(undefined8 *)this = 0xffffffffffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
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
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  return this;
}



/***** FUNCTION NetCrewMemberUpdateStream @ 7ffada5f2060 | method *****/


/* public: virtual bool __cdecl cockpit::avDevice::NetCrewMemberUpdateStream(unsigned char,unsigned
   char,class Mail::Stream & __ptr64) __ptr64 */

bool __thiscall
cockpit::avDevice::NetCrewMemberUpdateStream
          (avDevice *this,uchar param_1,uchar param_2,Stream *param_3)

{
                    /* 0x1e2060  2080
                       ?NetCrewMemberUpdateStream@avDevice@cockpit@@UEAA_NEEAEAVStream@Mail@@@Z
                       0x1e2060  2508  ?calculate@SightDevice@cockpit@@UEAA_NAEAVPolar@Math@@@Z
                       0x1e2060  3008  ?easyCommOverride@avIntercom@cockpit@@MEAA_NI@Z
                       0x1e2060  3009  ?easyCommOverride@avIntercomV2@cockpit@@MEAA_NI@Z
                       0x1e2060  3369  ?getLampsTest@avEkranControl@cockpit@@UEBA_NXZ
                       0x1e2060  3487
                       ?getPointOfInterest@ccMainPanel@cockpit@@UEBA_NHAEAVVec3f@osg@@@Z
                       0x1e2060  3834
                       ?get_current_waypoint@avArcadeRadar@cockpit@@UEAA_NAEAVVec3d@osg@@@Z
                       0x1e2060  3873  ?get_draw_level@ceHint@cockpit@@UEBAEXZ
                       0x1e2060  3935  ?get_gun_is_selected@avArcadeRadar@cockpit@@UEBA_NXZ
                       0x1e2060  3938
                       ?get_gun_sight_data@avArcadeRadar@cockpit@@UEAA_NAEAVPolar@Math@@@Z
                       0x1e2060  4024  ?get_map_rotation@avMovingMap@cockpit@@UEAA_NAEAN@Z
                       0x1e2060  4215  ?get_selected_system@SNSv2@cockpit@@UEBAEXZ
                       0x1e2060  4321  ?get_use_root_params@ceHint@cockpit@@UEAA_NXZ
                       0x1e2060  4383  ?helmet_type@avHelmet@cockpit@@UEBAEXZ
                       0x1e2060  4747  ?isTrainingWeapon@eqIAM@cockpit@@QEBA_NXZ
                       0x1e2060  4764  ?is_LockOn@avBasicSensor@cockpit@@UEBA_NXZ
                       0x1e2060  4783  ?is_collimated@ceHint@cockpit@@UEBA_NXZ
                       0x1e2060  5246
                       ?on_relative_axis@avTVSensor@cockpit@@MEAA_NAEAVavMotor@2@MM@Z
                       0x1e2060  6244  ?set_damage@avSimpleTurnSlipIndicator@cockpit@@UEAA_NI_N@Z
                       0x1e2060  6718  ?toLockOnlyParts@avTVSensor@cockpit@@MEBA_NXZ
                       0x1e2060  7062  ?use_volume_search@avTVSensor@cockpit@@MEBA_NXZ */
  return false;
}



/***** FUNCTION CheckNavMode @ 7ffada5f21c0 | method *****/


/* protected: bool __cdecl cockpit::avNavigation_MAC::CheckNavMode(void) __ptr64 */

bool __thiscall cockpit::avNavigation_MAC::CheckNavMode(avNavigation_MAC *this)

{
                    /* 0x1e21c0  1910  ?CheckNavMode@avNavigation_MAC@cockpit@@IEAA_NXZ
                       0x1e21c0  2290  ?active_MT@MultiThreading@cockpit@@YA_NXZ
                       0x1e21c0  2614  ?checkAnimationConditions@avBaseASP_3@cockpit@@UEAA_NHHAEAM@Z
                       0x1e21c0  2617  ?checkAnimationConditions@avDevice@cockpit@@UEAA_NHHAEAM@Z
                       0x1e21c0  2638  ?checkIsDropPossible@avChaffFlareDispencer@cockpit@@MEAA_NE@Z
                       0x1e21c0  2652  ?checkSelfTestConditions@avEkranControl@cockpit@@UEAA_NXZ
                       0x1e21c0  2674  ?check_gimbal_limits@avIRSensor@cockpit@@MEAA_NXZ
                       0x1e21c0  3010  ?easyCommOverride@avIntercom_MAC@cockpit@@EEAA_NI@Z
                       0x1e21c0  3306  ?getGyroPitchBankValid@avBaseIKP@cockpit@@MEBA_NXZ
                       0x1e21c0  3897  ?get_fire_permission@avArcadeRadar@cockpit@@UEBA_NXZ
                       0x1e21c0  4213  ?get_selected_system@SNS_GPS@cockpit@@UEBAEXZ
                       0x1e21c0  4719  ?isOn@IntercomImplement@cockpit@@UEBA_NXZ
                       0x1e21c0  4721  ?isOn@avIntercom@cockpit@@UEBA_NXZ
                       0x1e21c0  4754  ?isWireCommOn@IntercomImplement@cockpit@@UEBA_NXZ
                       0x1e21c0  4755  ?isWireCommOn@avIntercom@cockpit@@UEBA_NXZ
                       0x1e21c0  4807
                       ?is_scan_for_targets_available@avSimpleRadar@cockpit@@IEBA_NXZ
                       0x1e21c0  5106  ?makeSetupForCommunicator@avIntercom@cockpit@@MEAA_NI@Z
                       0x1e21c0  5107  ?makeSetupForCommunicator@avIntercomV2@cockpit@@MEAA_NI@Z
                       0x1e21c0  7054  ?useLockOnParts@avTVSensor@cockpit@@MEBA_NXZ
                       0x1e21c0  7063  ?use_volume_search@eqLitening_TGP@cockpit@@MEBA_NXZ
                       0x1e21c0  7064  ?use_volume_search@eqTVGuidedWeapon@cockpit@@MEBA_NXZ */
  return true;
}



/***** FUNCTION FUN_7ffada5f21d0 @ 7ffada5f21d0 | method *****/


void FUN_7ffada5f21d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  _Memory = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_7ffada5f1530(param_1,param_1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}



/***** FUNCTION ~avDate @ 7ffada5f2250 | destructor *****/


/* public: __cdecl cockpit::avDate::~avDate(void) __ptr64 */

void __thiscall cockpit::avDate::~avDate(avDate *this)

{
                    /* 0x1e2250  757  ??1avDate@cockpit@@QEAA@XZ
                       0x1e2250  809  ??1avMotor@cockpit@@QEAA@XZ
                       0x1e2250  810  ??1avMotor_Additive@cockpit@@QEAA@XZ
                       0x1e2250  865  ??1avTrackData@cockpit@@QEAA@XZ
                       0x1e2250  1941  ?DropSnar@avAN_ALE_40V@cockpit@@MEAAXEHD@Z
                       0x1e2250  1942  ?DropSnar@avChaffFlareDispencer@cockpit@@MEAAXEHD@Z
                       0x1e2250  2004  ?InitContainersPayload@avAN_ALE_40V@cockpit@@MEAAXXZ
                       0x1e2250  2005  ?InitContainersPayload@avChaffFlareDispencer@cockpit@@MEAAXXZ
                       0x1e2250  2095  ?OnBeginFrame@ccIndicatorBake@cockpit@@MEAAXXZ
                       0x1e2250  2099
                       ?OnCockpitEvent@avDevice@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2101
                       ?OnCockpitEvent@avILS@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2105
                       ?OnCockpitEvent@avTACAN@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2106
                       ?OnCockpitEvent@ccDrawable@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2126  ?OnPowerOn@avBaseIKP@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  2129  ?PrepareParser@ccIndicator@cockpit@@MEAAXXZ
                       0x1e2250  2134  ?RegisterInScript@ccDrawable@cockpit@@MEAAXPEAUlua_State@@@Z
                       0x1e2250  2154  ?SetCommand@avADI@cockpit@@UEAAXHM@Z
                       0x1e2250  2156  ?SetCommand@avAHRS@cockpit@@UEAAXHM@Z
                       0x1e2250  2165  ?SetCommand@avBiruzaGuidanceModule@cockpit@@UEAAXHM@Z
                       0x1e2250  2167  ?SetCommand@avDNS@cockpit@@UEAAXHM@Z
                       0x1e2250  2169  ?SetCommand@avDevice@cockpit@@UEAAXHM@Z
                       0x1e2250  2171  ?SetCommand@avEkranControl@cockpit@@UEAAXHM@Z
                       0x1e2250  2172  ?SetCommand@avElectroMagneticDetector@cockpit@@UEAAXHM@Z
                       0x1e2250  2173  ?SetCommand@avHSI@cockpit@@UEAAXHM@Z
                       0x1e2250  2180  ?SetCommand@avINS@cockpit@@UEAAXHM@Z
                       0x1e2250  2187  ?SetCommand@avMLWS@cockpit@@UEAAXHM@Z
                       0x1e2250  2188  ?SetCommand@avMarkerReceiver@cockpit@@UEAAXHM@Z
                       0x1e2250  2189  ?SetCommand@avMechCompass@cockpit@@UEAAXHM@Z
                       0x1e2250  2191  ?SetCommand@avMechanicClock@cockpit@@UEAAXHM@Z
                       0x1e2250  2196  ?SetCommand@avRadarAltimeterBase@cockpit@@UEAAXHM@Z
                       0x1e2250  2203  ?SetCommand@avTW_Prime@cockpit@@UEAAXHM@Z
                       0x1e2250  2214  ?SetCommand@ccDrawable@cockpit@@UEAAXHM@Z
                       0x1e2250  2387  ?apply@ceSimple@cockpit@@UEAAXXZ
                       0x1e2250  2392  ?applyDifferentialCorrection@SNS_GPS@cockpit@@QEAAX_N@Z
                       0x1e2250  2432
                       ?brakes_value_actual@ccControlsIndicatorBase@cockpit@@SAXPEAVElement@2@PEAVccDrawable@2@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2438  ?break_lock@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  2604  ?checkAllSignals@avEkranControl@cockpit@@MEAAXXZ
                       0x1e2250  2605  ?checkAllSignals@avVMS@cockpit@@MEAAXXZ
                       0x1e2250  2666  ?check_camera_position@avKneeboard@cockpit@@MEAAXXZ
                       0x1e2250  2667  ?check_camera_scale@avKneeboard@cockpit@@MEAAXXZ
                       0x1e2250  2811  ?connect_electric@avBaseASP_3@cockpit@@MEAAXXZ
                       0x1e2250  2834  ?control@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  2883  ?create_elements_controllers_map@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  2991
                       ?draw_temporal_set@ccIndicator@cockpit@@UEAAXPEAVElement@2@IE@Z
                       0x1e2250  3043
                       ?external_parse@avDevice@cockpit@@UEAAXAEAVModelParser@Graphics@@AEBV?$wPosition3@M@@PEAVeffectState@4@@Z
                       0x1e2250  4205
                       ?get_screen_params@ccIndicator@cockpit@@UEAAXAEAV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  4419  ?imgui_render@ceFont@cockpit@@UEAAXXZ
                       0x1e2250  4420  ?imgui_update@SNS_GPS@cockpit@@QEAAXXZ
                       0x1e2250  4451  ?initLimits@avIgla_seeker@cockpit@@IEAAXXZ
                       0x1e2250  4452  ?initLimits@avR60Seeker@cockpit@@IEAAXXZ
                       0x1e2250  4453  ?initLimits@avR73seeker@cockpit@@IEAAXXZ
                       0x1e2250  4454  ?initLimits@avSidewinderSeeker@cockpit@@IEAAXXZ
                       0x1e2250  4480
                       ?init_geometry@ceFont@cockpit@@UEAAXAEAVRenderObjectDyn@Graphics@@@Z
                       0x1e2250  5032  ?load_dials@DynamicBaseRadio@cockpit@@UEAAXAEAVConfig@Lua@@@Z
                       0x1e2250  5034  ?load_dials@avRadio_MAC@cockpit@@MEAAXAEAVConfig@Lua@@@Z
                       0x1e2250  5045  ?load_presets@avR_828@cockpit@@MEAAXXZ
                       0x1e2250  5057  ?log@ceHint@cockpit@@UEAAXAEAV?$basic_string@D@ed@@_N@Z
                       0x1e2250  5060  ?log_self@ceSimple@cockpit@@MEAAXAEAV?$basic_string@D@ed@@@Z
                       0x1e2250  5168  ?onAddTo@ccPanelGauge@cockpit@@UEAAXPEAVccMainPanel@2@@Z
                       0x1e2250  5171  ?onAxesStop@avIgla_seeker@cockpit@@MEAAXXZ
                       0x1e2250  5180
                       ?onDamage@AIGunnersManager@gunner_AI@@UEAAXW4wcCoalitionName@@IIIM@Z
                       0x1e2250  5199  ?onPowerOff@avTACAN@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  5200  ?onPowerOn@avTACAN@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  5207  ?onRemoveFrom@ccPanelGauge@cockpit@@UEAAXPEAVccMainPanel@2@@Z
                       0x1e2250  5227  ?on_frequency_changed@avBaseARC@cockpit@@MEAAXXZ
                       0x1e2250  5228  ?on_frequency_changed@avBaseRadio@cockpit@@MEAAXXZ
                       0x1e2250  5250  ?on_update_position@avPlatform@cockpit@@MEAAXN@Z
                       0x1e2250  5277
                       ?parking_brake@ccControlsIndicatorBase@cockpit@@SAXPEAVElement@2@PEAVccDrawable@2@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  5282
                       ?parse_for_render@ccMainPanel@cockpit@@UEAAXAEBV?$wPosition3@M@@AEAVModelParser@Graphics@@@Z
                       0x1e2250  5294  ?perform_update@ccMouseHandler@cockpit@@MEAAXXZ
                       0x1e2250  5312  ?postProcess@avRWRearly@cockpit@@MEAAXXZ
                       0x1e2250  5341  ?post_initialize@avDevice@cockpit@@UEAAXXZ
                       0x1e2250  5343  ?post_initialize@avEkranControl@cockpit@@UEAAXXZ
                       0x1e2250  5346  ?post_initialize@avFMProxyBase@cockpit@@UEAAXXZ
                       0x1e2250  5353  ?post_initialize@avINSinterface@navigation@cockpit@@QEAAXXZ
                       0x1e2250  5360  ?post_initialize@avKneeboard@cockpit@@UEAAXXZ
                       0x1e2250  5362  ?post_initialize@avMechanicAccelerometer@cockpit@@UEAAXXZ
                       0x1e2250  5365  ?post_initialize@avRadarAltimeterBase@cockpit@@UEAAXXZ
                       0x1e2250  5366  ?post_initialize@avSNS_GPS_Listener@cockpit@@UEAAXXZ
                       0x1e2250  5382  ?post_initialize@ccCrewIndicatorBase@cockpit@@UEAAXXZ
                       0x1e2250  5383  ?post_initialize@ccDrawable@cockpit@@UEAAXXZ
                       0x1e2250  5384  ?post_initialize@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  5385  ?post_initialize@ccK14GunSight@cockpit@@UEAAXXZ
                       0x1e2250  5386  ?post_initialize@ccMainPanel@cockpit@@UEAAXXZ
                       0x1e2250  5394  ?precreate@ceHint@cockpit@@UEAAXXZ
                       0x1e2250  5418  ?prolongate@avTVSensor@cockpit@@MEAAXN@Z
                       0x1e2250  5424  ?pushAnglesForAlignment@avIMUv2@cockpit@@QEAAXVVec3d@osg@@@Z
                       0x1e2250  5451  ?pushTrueAirSpeed@avINSinterface@navigation@cockpit@@QEAAXN@Z
                       0x1e2250  5504  ?recalculate_gyro_mode@avTVSensor@cockpit@@MEAAXXZ
                       0x1e2250  5543  ?release@avAPN_209@cockpit@@UEAAXXZ
                       0x1e2250  5563  ?release@avMarkerReceiver@cockpit@@UEAAXXZ
                       0x1e2250  5566  ?release@avNavigation_MAC@cockpit@@UEAAXXZ
                       0x1e2250  5575  ?release@avTW_Prime@cockpit@@UEAAXXZ
                       0x1e2250  5582  ?release@avVMS@cockpit@@UEAAXXZ
                       0x1e2250  5640  ?repeat@avVMS_ALMAZ_UP@cockpit@@MEAAXXZ
                       0x1e2250  5709  ?save_dials@DynamicBaseRadio@cockpit@@UEBAXXZ
                       0x1e2250  5711  ?save_dials@avRadio_MAC@cockpit@@MEBAXXZ
                       0x1e2250  5727  ?scan_stop@avTVSensor@cockpit@@MEAAXXZ
                       0x1e2250  5734  ?search@avA2GRadar@cockpit@@UEAAXXZ
                       0x1e2250  5743  ?search@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  5757
                       ?self_render@ceSimple@cockpit@@MEAAXAEAVccIndicationRenderParser@2@@Z
                       0x1e2250  5761  ?selftest@avVMS@cockpit@@UEAAXXZ
                       0x1e2250  6108  ?setToCheckGeometry@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6148
                       ?setWorkingConstellation@SNSinterface@cockpit@@QEAAXV?$initializer_list@H@std@@@Z
                       0x1e2250  6216  ?set_contrast@ceHint@cockpit@@UEAAXM@Z
                       0x1e2250  6266  ?set_draw@GestureComplex@cockpit@@UEAAX_N@Z
                       0x1e2250  6276  ?set_external_designation@avBasicSensor@cockpit@@UEAAX_N0@Z
                       0x1e2250  6285  ?set_forced_color@ceHint@cockpit@@UEAAXAEBVVec3f@osg@@@Z
                       0x1e2250  6286  ?set_forced_color@ceHint@cockpit@@UEAAXMMM@Z
                       0x1e2250  6303  ?set_geometry_child@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6305  ?set_geometry_host@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6353
                       ?set_mat_params@ceFont@cockpit@@UEAAXAEBVccIndicationRenderParser@2@PEAVRenderObject@Graphics@@@Z
                       0x1e2250  6407  ?set_position@ceHint@cockpit@@UEAAXAEBV?$wPosition3@M@@@Z
                       0x1e2250  6468  ?set_system@SNS_GPS@cockpit@@UEAAXI@Z
                       0x1e2250  6470  ?set_system@SNSv2@cockpit@@UEAAXI@Z
                       0x1e2250  6491  ?set_use_contrast@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6494  ?set_use_forced_color@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6497  ?set_use_root_params@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6499  ?set_use_temporal_set@ceHint@cockpit@@UEAAX_NI@Z
                       0x1e2250  6514  ?setchild_element@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6521  ?setparent_element@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6550  ?simulate_loop_antenna@avBaseARC@cockpit@@MEAAXN@Z
                       0x1e2250  6551  ?simulate_signal_strength@avBaseARC@cockpit@@MEAAXN@Z
                       0x1e2250  6558  ?slaveToDirection@avIRSensor@cockpit@@UEAAXAEBVVec3d@osg@@@Z
                       0x1e2250  6618  ?startSlew@avIgla_seeker@cockpit@@MEAAXXZ
                       0x1e2250  6631  ?start_search@eqAGM_65E@cockpit@@IEAAXXZ
                       0x1e2250  6667  ?stop_search@eqAGM_65E@cockpit@@IEAAXXZ
                       0x1e2250  6748  ?trySetCommunicator@avIntercom@cockpit@@MEAAXI@Z
                       0x1e2250  6749  ?trySetCommunicator@avIntercomV2@cockpit@@MEAAXI@Z
                       0x1e2250  6822  ?update@avBasicOxygenSystemInterface@cockpit@@UEAAXXZ
                       0x1e2250  6828  ?update@avDevice@cockpit@@UEAAXXZ
                       0x1e2250  6844  ?update@avKneeboard@cockpit@@UEAAXXZ
                       0x1e2250  6996  ?update_communicator_state@avVHF_FuG16ZY@cockpit@@MEAAXXZ
                       0x1e2250  7085  ?zoom_in@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  7089  ?zoom_out@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  7129  ed_cockpit_voip_enable_bare_voice
                       0x1e2250  7135  ed_cockpit_voip_modify_crew_bare_voice_volume */
  return;
}



/***** FUNCTION instance @ 7ffada5f2310 | method *****/


/* public: static class cockpit::ccSound & __ptr64 __cdecl cockpit::ccSound::instance(void) */

ccSound * __cdecl cockpit::ccSound::instance(void)

{
                    /* 0x1e2310  4666  ?instance@ccSound@cockpit@@SAAEAV12@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      `public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'::
      __l2::_thread_safe_static_guard_0__) {
    FUN_7ffada82b8c4(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
                      ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ccSound(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
               ::__l2::inst);
      atexit(FUN_7ffada839710);
      _Init_thread_footer(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
              ::__l2::inst;
    }
  }
  return &`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
          ::__l2::inst;
}



/***** FUNCTION l_metatable_name @ 7ffada5f23a0 | method *****/


/* protected: virtual char const * __ptr64 __cdecl cockpit::avDevice::l_metatable_name(void)const
   __ptr64 */

char * __thiscall cockpit::avDevice::l_metatable_name(avDevice *this)

{
                    /* 0x1e23a0  4927  ?l_metatable_name@avDevice@cockpit@@MEBAPEBDXZ */
  return s_device_meta_7ffada84ce90;
}



/***** FUNCTION FUN_7ffada5f29f0 @ 7ffada5f29f0 | method *****/


longlong * FUN_7ffada5f29f0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 *local_48;
  longlong local_40;
  
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar3 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_7ffada5ef1f0((longlong)param_1,(longlong *)&local_48,param_3,uVar9);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error(s_unordered_map_set_too_long_7ffada84cc18);
  }
  puVar3 = malloc(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x78);
  }
  FUN_7ffada5ef690(puVar3 + 2,param_3);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar10 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar4 = 0;
    if ((DAT_7ffada84cc50 <= fVar10) &&
       (fVar10 = fVar10 - DAT_7ffada84cc50, fVar10 < DAT_7ffada84cc50)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar8 = uVar6;
    if ((uVar6 < uVar5) && ((0x1ff < uVar6 || (uVar8 = uVar6 * 8, uVar6 * 8 < uVar5)))) {
      uVar8 = uVar5;
    }
    FUN_7ffada5f0510((longlong)param_1,uVar8);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    local_48 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != local_48) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
      uVar6 = puVar3[5];
      _Size = puVar3[4];
      local_48 = puVar7;
      while( true ) {
        puVar7 = local_48 + 2;
        if (0xf < (ulonglong)local_48[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar3 + 2;
        if (0xf < uVar6) {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == local_48[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar7,_Size), iVar2 == 0)))) break;
        if (local_48 == puVar1) goto LAB_7ffada5f2c72;
        local_48 = (undefined8 *)local_48[1];
      }
      local_48 = (undefined8 *)*local_48;
    }
  }
LAB_7ffada5f2c72:
  puVar7 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = local_48;
  puVar3[1] = puVar7;
  *puVar7 = puVar3;
  local_48[1] = puVar3;
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  lVar4 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar4 + uVar9 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == local_48) {
      *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar3;
      goto LAB_7ffada5f2cbd;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) != puVar7) goto LAB_7ffada5f2cbd;
  }
  *(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) = puVar3;
LAB_7ffada5f2cbd:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
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



/***** FUNCTION FUN_7ffada5f3cc0 @ 7ffada5f3cc0 | method *****/


longlong * FUN_7ffada5f3cc0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar6 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= (int)local_28[4];
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar2) {
        plVar4 = local_28 + 2;
        plVar5 = plVar6;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar6 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < (int)plVar5[4])) {
    if (param_1[1] == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f4c90();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar5 = malloc(0x88);
    if (plVar5 == (longlong *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x88);
    }
    *(int *)(plVar5 + 4) = *param_2;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_7ffada5f4830(param_1,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 5;
}



/***** FUNCTION listen_command @ 7ffada5f6390 | method *****/


/* void __cdecl cockpit::listen_command(class cockpit::avDevice * __ptr64,int) */

void __cdecl cockpit::listen_command(avDevice *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [32];
  avDevice *local_res8;
  int local_res10 [2];
  
                    /* 0x1e6390  5016  ?listen_command@cockpit@@YAXPEAVavDevice@1@H@Z */
  local_res10[0] = param_2;
  plVar1 = FUN_7ffada5f3cc0(&DAT_7ffada95fe78,local_res10);
  local_res8 = param_1;
  pauVar2 = thunk_FUN_7ffada82ad30
                      ((undefined1 (*) [32])*plVar1,(undefined1 (*) [32])plVar1[1],
                       (ulonglong)param_1);
  if (pauVar2 == (undefined1 (*) [32])plVar1[1]) {
    FUN_7ffada5f6770(plVar1,&local_res8);
  }
  return;
}



/***** FUNCTION listen_event @ 7ffada5f65d0 | method *****/


/* void __cdecl cockpit::listen_event(class cockpit::avDevice * __ptr64,class ed::basic_string<char>
   const & __ptr64) */

void __cdecl cockpit::listen_event(avDevice *param_1,basic_string<char> *param_2)

{
  longlong *plVar1;
  avDevice *local_res8 [4];
  longlong local_18 [3];
  
                    /* 0x1e65d0  5021
                       ?listen_event@cockpit@@YAXPEAVavDevice@1@AEBV?$basic_string@D@ed@@@Z */
  local_res8[0] = param_1;
  plVar1 = FUN_7ffada5f29f0((float *)&DAT_7ffada95fea0,local_18,(undefined8 *)param_2);
  FUN_7ffada5f6770((longlong *)(*plVar1 + 0x30),local_res8);
  return;
}



/***** FUNCTION FUN_7ffada5f6770 @ 7ffada5f6770 | method *****/


void FUN_7ffada5f6770(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  ulonglong uVar4;
  undefined8 *_Dst_00;
  undefined8 *_Src;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  lVar5 = (longlong)puVar2 - *param_1 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  uVar6 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  uVar4 = 0x1fffffffffffffff;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  _Dst = malloc(uVar4 * 8);
  if (_Dst == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar4 * 8);
  }
  puVar3 = (undefined8 *)param_1[1];
  _Src = (undefined8 *)*param_1;
  _Dst[lVar5] = *param_2;
  _Dst_00 = _Dst;
  if (puVar2 != puVar3) {
    memmove(_Dst,_Src,(longlong)puVar2 - (longlong)_Src);
    _Dst_00 = _Dst + lVar5 + 1;
    _Src = puVar2;
  }
  memmove(_Dst_00,_Src,(longlong)puVar3 - (longlong)_Src);
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1);
  param_1[2] = (longlong)(_Dst + uVar4);
  return;
}



/***** FUNCTION FUN_7ffada5f68c0 @ 7ffada5f68c0 | method *****/


void FUN_7ffada5f68c0(void)

{
  ed_vlogf();
  return;
}



/***** FUNCTION FUN_7ffada5f9230 @ 7ffada5f9230 | method *****/


undefined1 FUN_7ffada5f9230(float *param_1,float *param_2)

{
  if (*param_1 <= param_1[3]) {
    if (((((param_1[1] <= param_1[4]) && (param_1[2] <= param_1[5])) && (*param_1 <= *param_2)) &&
        ((*param_2 <= param_1[3] && (param_1[1] <= param_2[1])))) &&
       ((param_2[1] <= param_1[4] && ((param_1[2] <= param_2[2] && (param_2[2] <= param_1[5])))))) {
      return 1;
    }
  }
  return 0;
}



/***** FUNCTION force_update @ 7ffada5f92a0 | method *****/


/* public: void __cdecl cockpit::clickableElementData::force_update(void) __ptr64 */

void __thiscall cockpit::clickableElementData::force_update(clickableElementData *this)

{
  clickableElementData *pcVar1;
  longlong *plVar2;
  uint uVar3;
  float *pfVar4;
  clickableElementData *pcVar5;
  BoundingBoxImpl<osg::Vec3f> *pBVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_f8 [58];
  
                    /* 0x1e92a0  3095  ?force_update@clickableElementData@cockpit@@QEAAXXZ */
  if ((*(longlong *)(this + 0x198) != 0) &&
     (plVar2 = *(longlong **)(this + 0xd8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_168);
    fVar10 = *(float *)(this + 0x130);
    fVar11 = *(float *)(this + 300);
    fVar17 = *(float *)(this + 0x134);
    fVar7 = *(float *)(this + 0x13c);
    fVar13 = local_158 * fVar10 + local_168 * fVar11 + local_148 * fVar17;
    local_118 = local_158;
    local_104 = local_144;
    local_120 = local_160;
    local_124 = local_158;
    local_110 = local_144;
    local_108 = local_160;
    fVar8 = local_164 * fVar11 + local_154 * fVar10 + local_144 * fVar17;
    fVar9 = *(float *)(this + 0x140);
    fVar14 = *(float *)(this + 0x144);
    fVar12 = local_150 * fVar10 + local_160 * fVar11 + local_140 * fVar17;
    fVar15 = local_158 * fVar9 + fVar7 * local_168 + local_148 * fVar14;
    fVar16 = local_164 * fVar7 + fVar9 * local_154 + local_144 * fVar14;
    fVar10 = *(float *)(this + 0x150);
    fVar11 = *(float *)(this + 0x14c);
    fVar9 = local_160 * fVar7 + local_150 * fVar9 + fVar14 * local_140;
    fVar17 = *(float *)(this + 0x154);
    fVar7 = fVar10 * local_158 + fVar11 * local_168 + fVar17 * local_148;
    fVar14 = local_164 * fVar11 + fVar10 * local_154 + fVar17 * local_144;
    fVar11 = local_150 * fVar10 + fVar11 * local_160 + fVar17 * local_140;
    fVar10 = fVar8 * fVar8 + fVar13 * fVar13 + fVar12 * fVar12;
    local_168 = fVar13;
    local_164 = fVar8;
    local_160 = fVar12;
    local_158 = fVar15;
    local_154 = fVar16;
    local_150 = fVar9;
    local_148 = fVar7;
    local_144 = fVar14;
    local_140 = fVar11;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar17 = fVar16 * fVar16 + fVar15 * fVar15 + fVar9 * fVar9;
    if (fVar17 < 0.0) {
      fVar17 = sqrtf(fVar17);
    }
    else {
      fVar17 = SQRT(fVar17);
    }
    fVar11 = fVar14 * fVar14 + fVar7 * fVar7 + fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (DAT_7ffada84d3e0 < fVar10) {
      fVar10 = DAT_7ffada84d3dc;
    }
    if (DAT_7ffada84d3e0 < fVar17) {
      fVar17 = DAT_7ffada84d3dc;
    }
    if (DAT_7ffada84d3e0 < fVar11) {
      fVar11 = DAT_7ffada84d3dc;
    }
    FUN_7ffada5fcc80(&local_168);
    FUN_7ffada5fcc80(&local_158);
    FUN_7ffada5fcc80(&local_148);
    pfVar4 = (float *)(**(code **)(**(longlong **)(this + 0x198) + 0x78))();
    pcVar5 = (clickableElementData *)FUN_7ffada5f0030(&local_168,local_f8,pfVar4);
    uVar3 = DAT_7ffada84cdb0;
    pcVar1 = this + 0x74;
    *(uint *)(this + 0xb8) = (uint)fVar10 ^ DAT_7ffada84cdb0;
    *(uint *)(this + 0xbc) = (uint)fVar17 ^ uVar3;
    *(uint *)(this + 0xc0) = (uint)fVar11 ^ uVar3;
    *(float *)(this + 0xc4) = fVar10;
    *(float *)(this + 200) = fVar17;
    *(float *)(this + 0xcc) = fVar11;
    if (pcVar1 != pcVar5) {
      *(float *)pcVar1 = *(float *)pcVar5;
      *(float *)(this + 0x78) = *(float *)(pcVar5 + 4);
      *(float *)(this + 0x7c) = *(float *)(pcVar5 + 8);
      *(float *)(this + 0x84) = *(float *)(pcVar5 + 0x10);
      *(float *)(this + 0x88) = *(float *)(pcVar5 + 0x14);
      *(float *)(this + 0x8c) = *(float *)(pcVar5 + 0x18);
      *(float *)(this + 0x94) = *(float *)(pcVar5 + 0x20);
      *(float *)(this + 0x98) = *(float *)(pcVar5 + 0x24);
      *(float *)(this + 0x9c) = *(float *)(pcVar5 + 0x28);
      *(float *)(this + 0xa4) = *(float *)(pcVar5 + 0x30);
      *(float *)(this + 0xa8) = *(float *)(pcVar5 + 0x34);
      *(float *)(this + 0xac) = *(float *)(pcVar5 + 0x38);
    }
    pBVar6 = (BoundingBoxImpl<osg::Vec3f> *)
             FUN_7ffada5f7fe0((float *)(this + 0xb8),&local_128,(float *)pcVar1);
    SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar6);
  }
  return;
}



/***** FUNCTION getActionData @ 7ffada5f97a0 | method *****/


/* public: class cockpit::clickableElementActionData * __ptr64 __cdecl
   cockpit::clickableElementData::getActionData(unsigned char) __ptr64 */

clickableElementActionData * __thiscall
cockpit::clickableElementData::getActionData(clickableElementData *this,uchar param_1)

{
                    /* 0x1e97a0  3129
                       ?getActionData@clickableElementData@cockpit@@QEAAPEAVclickableElementActionData@2@E@Z
                       0x1e97a0  3130
                       ?getActionData@clickableElementData@cockpit@@QEBAPEBVclickableElementActionData@2@E@Z
                        */
  if ((ulonglong)param_1 < (ulonglong)(*(longlong *)(this + 0xf0) - *(longlong *)(this + 0xe8) >> 3)
     ) {
    return *(clickableElementActionData **)(*(longlong *)(this + 0xe8) + (ulonglong)param_1 * 8);
  }
  return (clickableElementActionData *)0x0;
}



/***** FUNCTION get_arg_value @ 7ffada5f9850 | method *****/


/* public: float __cdecl cockpit::clickableElementData::get_arg_value(int) __ptr64 */

float __thiscall
cockpit::clickableElementData::get_arg_value(clickableElementData *this,int param_1)

{
  float fVar1;
  
                    /* 0x1e9850  3751  ?get_arg_value@clickableElementData@cockpit@@QEAAMH@Z */
  if ((*(longlong **)(this + 0x198) != (longlong *)0x0) && (-1 < param_1)) {
                    /* WARNING: Could not recover jumptable at 0x7ffada5f9864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(**(longlong **)(this + 0x198) + 0x70))();
    return fVar1;
  }
  return 0.0;
}



/***** FUNCTION FUN_7ffada5f9de0 @ 7ffada5f9de0 | method *****/


undefined8
FUN_7ffada5f9de0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  ulonglong in_RAX;
  float **ppfVar3;
  uint7 uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar2 = param_5;
  fVar1 = DAT_7ffada84d3ec;
  fVar6 = DAT_7ffada84d3d8;
  bVar5 = 1;
  fVar9 = *param_3 - *param_2;
  fVar8 = param_3[1] - param_2[1];
  fVar7 = param_3[2] - param_2[2];
  *param_4 = -3.4028235e+38;
  *param_5 = 3.4028235e+38;
  if (fVar9 <= fVar6) {
    if (fVar9 < fVar1) {
      param_5._0_4_ = (*param_1 - *param_2) / fVar9;
      ppfVar3 = &param_5;
      if (DAT_7ffada84d3e8 <= param_5._0_4_) {
        ppfVar3 = (float **)pfVar2;
      }
      in_RAX = (ulonglong)(uint)*(float *)ppfVar3;
      *pfVar2 = *(float *)ppfVar3;
      fVar6 = param_1[3];
      goto LAB_7ffada5f9e7b;
    }
    if ((*param_2 < *param_1) || (param_1[3] < *param_2)) {
      bVar5 = 0;
    }
  }
  else {
    fVar6 = (param_1[3] - *param_2) / fVar9;
    if (DAT_7ffada84d3e8 <= fVar6) {
      fVar6 = DAT_7ffada84d3e8;
    }
    *param_5 = fVar6;
    fVar6 = *param_1;
LAB_7ffada5f9e7b:
    fVar9 = (fVar6 - *param_2) / fVar9;
    if (fVar9 <= *param_4) {
      fVar9 = *param_4;
    }
    *param_4 = fVar9;
  }
  if (fVar8 <= DAT_7ffada84d3d8) {
    if (fVar8 < fVar1) {
      fVar6 = (param_1[1] - param_2[1]) / fVar8;
      if (*pfVar2 <= fVar6) {
        fVar6 = *pfVar2;
      }
      *pfVar2 = fVar6;
      fVar6 = param_1[4];
      goto LAB_7ffada5f9eef;
    }
    uVar4 = (uint7)(in_RAX >> 8);
    if ((param_2[1] < param_1[1]) || (param_1[4] < param_2[1])) {
      in_RAX = (ulonglong)uVar4 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar4,1);
    }
    bVar5 = bVar5 & (byte)in_RAX;
  }
  else {
    fVar6 = (param_1[4] - param_2[1]) / fVar8;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[1];
LAB_7ffada5f9eef:
    fVar8 = (fVar6 - param_2[1]) / fVar8;
    if (fVar8 <= *param_4) {
      fVar8 = *param_4;
    }
    *param_4 = fVar8;
  }
  if (fVar7 <= DAT_7ffada84d3d8) {
    if (fVar1 <= fVar7) {
      uVar4 = (uint7)(in_RAX >> 8);
      if ((param_2[2] < param_1[2]) || (param_1[5] < param_2[2])) {
        in_RAX = (ulonglong)uVar4 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar4,1);
      }
      bVar5 = bVar5 & (byte)in_RAX;
      goto LAB_7ffada5f9f9f;
    }
    fVar6 = (param_1[2] - param_2[2]) / fVar7;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[5];
  }
  else {
    fVar6 = (param_1[5] - param_2[2]) / fVar7;
    if (*pfVar2 <= fVar6) {
      fVar6 = *pfVar2;
    }
    *pfVar2 = fVar6;
    fVar6 = param_1[2];
  }
  fVar7 = (fVar6 - param_2[2]) / fVar7;
  if (fVar7 <= *param_4) {
    fVar7 = *param_4;
  }
  *param_4 = fVar7;
LAB_7ffada5f9f9f:
  if ((bVar5 != 0) && (*param_4 <= *pfVar2)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  *pfVar2 = 0.0;
  *param_4 = 0.0;
  return 0;
}



/***** FUNCTION FUN_7ffada5f9fc0 @ 7ffada5f9fc0 | method *****/


ulonglong FUN_7ffada5f9fc0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong uVar3;
  undefined7 uVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  fVar1 = *param_1;
  if (((fVar1 <= *param_2) || (fVar1 < *param_3 || fVar1 == *param_3)) &&
     ((*param_2 <= param_1[3] || (*param_3 <= param_1[3])))) {
    fVar1 = param_1[1];
    if (((fVar1 <= param_2[1]) || (fVar1 < param_3[1] || fVar1 == param_3[1])) &&
       ((param_2[1] <= param_1[4] || (param_3[1] <= param_1[4])))) {
      fVar1 = param_1[2];
      if (((fVar1 <= param_2[2]) || (fVar1 < param_3[2] || fVar1 == param_3[2])) &&
         ((param_2[2] <= param_1[5] || (param_3[2] <= param_1[5])))) {
        cVar2 = FUN_7ffada5f9230(param_1,param_2);
        uVar4 = extraout_var;
        if (cVar2 == '\0') {
          cVar2 = FUN_7ffada5f9230(param_1,param_3);
          uVar4 = extraout_var_00;
          if (cVar2 == '\0') {
            uVar3 = FUN_7ffada5f9de0(param_1,param_2,param_3,local_res10,local_res8);
            return uVar3;
          }
        }
        return CONCAT71(uVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/***** FUNCTION FUN_7ffada5fa0c0 @ 7ffada5fa0c0 | method *****/


undefined1 FUN_7ffada5fa0c0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar18 = *param_2;
  fVar17 = 0.0;
  fVar14 = 0.0;
  fVar1 = param_1[3];
  fVar2 = *param_1;
  if (fVar18 < fVar2) {
    fVar14 = (fVar2 - fVar18) * (fVar2 - fVar18) + 0.0;
  }
  if (fVar1 < fVar18) {
    fVar14 = fVar14 + (fVar18 - fVar1) * (fVar18 - fVar1);
  }
  fVar3 = param_1[1];
  fVar16 = 0.0;
  fVar19 = param_2[1];
  fVar4 = param_1[4];
  if (fVar19 < fVar3) {
    fVar16 = (fVar3 - fVar19) * (fVar3 - fVar19) + 0.0;
  }
  if (fVar4 < fVar19) {
    fVar16 = fVar16 + (fVar19 - fVar4) * (fVar19 - fVar4);
  }
  fVar5 = param_1[2];
  fVar15 = param_2[2];
  fVar6 = param_1[5];
  if (fVar15 < fVar5) {
    fVar17 = (fVar5 - fVar15) * (fVar5 - fVar15) + 0.0;
  }
  if (fVar6 < fVar15) {
    fVar17 = fVar17 + (fVar15 - fVar6) * (fVar15 - fVar6);
  }
  if (fVar17 + fVar16 + fVar14 <= param_3 * param_3) {
    fVar17 = fVar15 - param_3;
    cVar9 = '\x01';
    fVar15 = fVar15 + param_3;
    if ((((fVar17 < fVar5) || (fVar6 < fVar17)) || (fVar15 < fVar5)) ||
       (cVar11 = '\x01', fVar6 < fVar15)) {
      cVar11 = '\0';
    }
    if (((fVar5 < fVar17) || (fVar15 < fVar5)) ||
       ((fVar6 < fVar17 || (cVar7 = '\x01', fVar15 < fVar6)))) {
      cVar7 = '\0';
    }
    fVar17 = fVar19 - param_3;
    fVar19 = fVar19 + param_3;
    if (((fVar17 < fVar3) || (fVar4 < fVar17)) ||
       ((fVar19 < fVar3 || (cVar12 = '\x01', fVar4 < fVar19)))) {
      cVar12 = '\0';
    }
    if ((((fVar3 < fVar17) || (fVar19 < fVar3)) || (fVar4 < fVar17)) ||
       (cVar8 = '\x01', fVar19 < fVar4)) {
      cVar8 = '\0';
    }
    fVar17 = fVar18 - param_3;
    fVar18 = fVar18 + param_3;
    if (((fVar17 < fVar2) || (fVar1 < fVar17)) ||
       ((fVar18 < fVar2 || (cVar10 = '\x01', fVar1 < fVar18)))) {
      cVar10 = '\0';
    }
    if (((fVar2 < fVar17) || (fVar18 < fVar2)) || ((fVar1 < fVar17 || (fVar18 < fVar1)))) {
      cVar9 = '\0';
    }
    cVar10 = (-cVar8 & 10U) + cVar12 + (-cVar9 & 10U) + (-cVar7 & 10U) + cVar11 + cVar10;
    if (cVar10 == '\x03') {
      uVar13 = 2;
    }
    else {
      uVar13 = cVar10 != '\x1e';
    }
  }
  else {
    uVar13 = 3;
  }
  return uVar13;
}



/***** FUNCTION update @ 7ffada5fd2c0 | method *****/


/* public: void __cdecl cockpit::clickableElementData::update(void) __ptr64 */

void __thiscall cockpit::clickableElementData::update(clickableElementData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x1ed2c0  6904  ?update@clickableElementData@cockpit@@QEAAXXZ */
  if (this[0xd0] != (clickableElementData)0x0) {
    force_update(this);
    puVar1 = *(undefined8 **)(this + 0x38);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      update((clickableElementData *)puVar2[2]);
    }
  }
  return;
}



/***** FUNCTION FUN_7ffada603a60 @ 7ffada603a60 | method *****/


undefined8 * FUN_7ffada603a60(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  void *_Src;
  undefined8 *puVar3;
  void *_Dst_00;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[3];
  _Size = param_1[2];
  if (uVar2 - _Size < param_3) {
    if (0x7fffffffffffffff - _Size < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ac0();
    }
    uVar4 = _Size + param_3 | 0xf;
    uVar5 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst_00 = malloc(uVar5 + 1);
    if (_Dst_00 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 + 1);
    }
    param_1[3] = uVar5;
    param_1[2] = _Size + param_3;
    _Dst = (void *)(_Size + (longlong)_Dst_00);
    if (uVar2 < 0x10) {
      memcpy(_Dst_00,param_1,_Size);
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
    }
    else {
      _Src = (void *)*param_1;
      memcpy(_Dst_00,_Src,_Size);
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
      free(_Src);
    }
    *param_1 = _Dst_00;
  }
  else {
    param_1[2] = _Size + param_3;
    puVar3 = param_1;
    if (0xf < uVar2) {
      puVar3 = (undefined8 *)*param_1;
    }
    memmove((void *)(_Size + (longlong)puVar3),param_2,param_3);
    *(undefined1 *)((longlong)(_Size + (longlong)puVar3) + param_3) = 0;
  }
  return param_1;
}



/***** FUNCTION get_argument @ 7ffada606d80 | method *****/


/* public: float __cdecl cockpit::ccCockpitContext::get_argument(int) __ptr64 */

float __thiscall cockpit::ccCockpitContext::get_argument(ccCockpitContext *this,int param_1)

{
                    /* 0x1f6d80  3752  ?get_argument@ccCockpitContext@cockpit@@QEAAMH@Z */
  if (*(longlong *)(this + 0xf8) != 0) {
    return *(float *)(*(longlong *)(*(longlong *)(this + 0xf8) + 0x128) + (longlong)param_1 * 4);
  }
  return 0.0;
}



/***** FUNCTION set_argument @ 7ffada60b330 | method *****/


/* public: void __cdecl cockpit::ccCockpitContext::set_argument(int,float) __ptr64 */

void __thiscall
cockpit::ccCockpitContext::set_argument(ccCockpitContext *this,int param_1,float param_2)

{
                    /* 0x1fb330  6178  ?set_argument@ccCockpitContext@cockpit@@QEAAXHM@Z */
  if (*(longlong *)(this + 0xf8) != 0) {
    ccMainPanel::SetArgument((ccMainPanel *)(*(longlong *)(this + 0xf8) + 0x98),param_1,param_2);
    return;
  }
  return;
}



/***** FUNCTION FUN_7ffada613858 @ 7ffada613858 | method *****/


void FUN_7ffada613858(longlong param_1,uint param_2)

{
  FUN_7ffada613cb0((Factory *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}



/***** FUNCTION FUN_7ffada613cb0 @ 7ffada613cb0 | method *****/


Factory * FUN_7ffada613cb0(Factory *param_1,uint param_2)

{
  Common::Factory::~Factory(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0x10);
  }
  return param_1 + -0x10;
}



/***** FUNCTION FUN_7ffada614180 @ 7ffada614180 | method *****/


void FUN_7ffada614180(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x7ffada61418d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,1);
    return;
  }
  return;
}



/***** FUNCTION SetArgument @ 7ffada614550 | method *****/


/* public: virtual void __cdecl cockpit::ccMainPanel::SetArgument(int,float) __ptr64 */

void __thiscall cockpit::ccMainPanel::SetArgument(ccMainPanel *this,int param_1,float param_2)

{
                    /* 0x204550  2149  ?SetArgument@ccMainPanel@cockpit@@UEAAXHM@Z */
  if ((ulonglong)(longlong)param_1 <
      (ulonglong)(*(longlong *)(this + 0x98) - *(longlong *)(this + 0x90) >> 2)) {
    *(float *)(*(longlong *)(this + 0x90) + (longlong)param_1 * 4) = param_2;
  }
  return;
}



/***** FUNCTION FUN_7ffada614b40 @ 7ffada614b40 | method *****/


void FUN_7ffada614b40(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x7ffada614b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2,1);
    return;
  }
  return;
}



/***** FUNCTION getHost @ 7ffada61f5b0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class Sound::Host & __ptr64 __cdecl cockpit::ccSound::getHost(char const * __ptr64)
   __ptr64 */

Host * __thiscall cockpit::ccSound::getHost(ccSound *this,char *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *******pppppppuVar4;
  ulonglong uVar5;
  undefined8 *_Buf2;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 ******local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x20f5b0  3328  ?getHost@ccSound@cockpit@@QEAAAEAVHost@Sound@@PEBD@Z */
  local_38 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  if (param_1 != (char *)0x0) {
    FUN_7ffada5f31a0(local_58,param_1);
    uVar5 = 0xcbf29ce484222325;
    pppppppuVar4 = local_58;
    if (0xf < local_40) {
      pppppppuVar4 = (undefined8 *******)local_58[0];
    }
    uVar6 = 0;
    uVar2 = uVar6;
    if (local_48 != 0) {
      do {
        uVar3 = uVar2 + 1;
        uVar5 = (uVar5 ^ *(byte *)((longlong)pppppppuVar4 + uVar2)) * 0x100000001b3;
        uVar2 = uVar3;
      } while (uVar3 < local_48);
    }
    uVar2 = *(ulonglong *)
             (*(longlong *)(this + 0x28) + 8 + (*(ulonglong *)(this + 0x40) & uVar5) * 0x10);
    uVar3 = uVar6;
    if (uVar2 != *(ulonglong *)(this + 0x18)) {
      uVar5 = *(ulonglong *)
               (*(longlong *)(this + 0x28) + (*(ulonglong *)(this + 0x40) & uVar5) * 0x10);
      while( true ) {
        _Buf2 = (undefined8 *)(uVar2 + 0x10);
        if (0xf < *(ulonglong *)(uVar2 + 0x28)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        pppppppuVar4 = local_58;
        if (0xf < local_40) {
          pppppppuVar4 = (undefined8 *******)local_58[0];
        }
        if (((local_48 == *(ulonglong *)(uVar2 + 0x20)) &&
            ((uVar3 = uVar2, local_48 == 0 ||
             (iVar1 = memcmp(pppppppuVar4,_Buf2,local_48), iVar1 == 0)))) ||
           (uVar3 = uVar6, uVar2 == uVar5)) break;
        uVar2 = *(ulonglong *)(uVar2 + 8);
      }
    }
    if (uVar3 == 0) {
      uVar3 = *(ulonglong *)(this + 0x18);
    }
    if (0xf < local_40) {
      free(local_58[0]);
    }
    if (uVar3 != *(ulonglong *)(this + 0x18)) {
      if (*(Host **)(uVar3 + 0x30) == (Host *)0x0) {
        return (Host *)(this + 0x50);
      }
      return *(Host **)(uVar3 + 0x30);
    }
  }
  return (Host *)(this + 0x50);
}



/***** FUNCTION ed_cockpit_set_action_digital @ 7ffada62c840 | method *****/


void ed_cockpit_set_action_digital(undefined4 param_1)

{
                    /* 0x21c840  7119  ed_cockpit_set_action_digital */
                    /* WARNING: Could not recover jumptable at 0x7ffada62c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(cockpit::ccCockpitContext::contexts_ptr + 0x10) + 0xc0))
            (*(longlong **)(cockpit::ccCockpitContext::contexts_ptr + 0x10),param_1);
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



/***** FUNCTION FUN_7ffada645a10 @ 7ffada645a10 | method *****/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_7ffada645a10(longlong *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < (int)param_1[1])) {
    return (undefined4 *)(*param_1 + (longlong)param_2 * 8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_7ffada960db8) {
    FUN_7ffada82b8c4(&DAT_7ffada960db8);
    if (DAT_7ffada960db8 == -1) {
      _DAT_7ffada960db0 = 0;
      _Init_thread_footer(&DAT_7ffada960db8);
    }
  }
  _DAT_7ffada960db0 = 0;
  return &DAT_7ffada960db0;
}



/***** FUNCTION ~avDevice @ 7ffada648aa0 | destructor *****/


/* public: virtual __cdecl cockpit::avDevice::~avDevice(void) __ptr64 */

void __thiscall cockpit::avDevice::~avDevice(avDevice *this)

{
                    /* 0x238aa0  759  ??1avDevice@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__ccContextRelatedObject_;
  *(undefined ***)(this + 0x20) = vftable_for_cockpit__avLuaRegistrable_;
  if (*(longlong *)(this + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(this + 0x58) + 0x68) = 1;
    wTime::KillMe(*(wTime **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  close_LuaState(this);
  FUN_7ffada5f1590(this + 0x70,this + 0x70,*(longlong **)(*(longlong *)(this + 0x70) + 8));
  free(*(void **)(this + 0x70));
  FUN_7ffada5f14c0((longlong *)(this + 0x60),this + 0x60);
  if (0xf < *(ulonglong *)(this + 0x48)) {
    free(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0xf;
  this[0x30] = (avDevice)0x0;
                    /* WARNING: Could not recover jumptable at 0x7ffada648b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Common::FakeUnknown<Common::Identifiable>::~FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)this);
  return;
}



/***** FUNCTION checkCallbackClickable @ 7ffada649250 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual bool __cdecl cockpit::avDevice::checkCallbackClickable(int,float & __ptr64)
   __ptr64 */

bool __thiscall cockpit::avDevice::checkCallbackClickable(avDevice *this,int param_1,float *param_2)

{
  clickableElementActionData cVar1;
  longlong *plVar2;
  clickableElementData *this_00;
  longlong *plVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  clickableElementActionData *pcVar7;
  ccSound *pcVar8;
  Host *pHVar9;
  byte bVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auStack_f8 [32];
  float local_d8 [4];
  undefined4 local_c8 [2];
  double local_c0;
  double local_b8;
  double local_b0;
  ulonglong local_58;
  
                    /* 0x239250  2631  ?checkCallbackClickable@avDevice@cockpit@@UEAA_NHAEAM@Z */
  fVar4 = DAT_7ffada84d22c;
  local_58 = DAT_7ffada94e840 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(this + 0x60);
  plVar6 = (longlong *)plVar2[1];
  cVar5 = *(char *)((longlong)plVar6 + 0x19);
  plVar3 = plVar2;
  while (cVar5 == '\0') {
    plVar11 = plVar6;
    if ((int)plVar6[4] < param_1) {
      plVar6 = plVar6 + 2;
      plVar11 = plVar3;
    }
    plVar6 = (longlong *)*plVar6;
    plVar3 = plVar11;
    cVar5 = *(char *)((longlong)plVar6 + 0x19);
  }
  if (((*(char *)((longlong)plVar3 + 0x19) != '\0') || (param_1 < (int)plVar3[4])) ||
     (plVar3 == plVar2)) {
    return true;
  }
  this_00 = (clickableElementData *)plVar3[5];
  if ((float)((uint)*param_2 & _DAT_7ffada84d240) < DAT_7ffada84d22c) {
    *param_2 = 0.0;
  }
  bVar10 = 0;
  do {
    pcVar7 = clickableElementData::getActionData(this_00,bVar10);
    if ((pcVar7 != (clickableElementActionData *)0x0) &&
       ((param_1 == *(int *)(pcVar7 + 0xc) || (param_1 == *(int *)(pcVar7 + 0x10)))))
    goto LAB_7ffada649334;
    bVar10 = bVar10 + 1;
  } while (bVar10 < 8);
  if (pcVar7 == (clickableElementActionData *)0x0) {
    return true;
  }
LAB_7ffada649334:
  fVar12 = clickableElementData::get_arg_value(this_00,*(int *)(pcVar7 + 0x18));
  local_d8[0] = fVar12;
  cVar5 = (**(code **)(*(longlong *)pcVar7 + 8))(pcVar7,local_d8,param_2,param_1);
  if (cVar5 == '\0') {
    return false;
  }
  cVar1 = pcVar7[8];
  if (cVar1 == (clickableElementActionData)0x1) {
    if (fVar4 <= (float)((uint)local_d8[0] & _DAT_7ffada84d240)) {
      if (this[0x91] != (avDevice)0x0) {
        local_c0 = (double)*(float *)(this_00 + 0xa4);
        local_c8[0] = 1;
        local_b8 = (double)*(float *)(this_00 + 0xa8);
        local_b0 = (double)*(float *)(this_00 + 0xac);
        pcVar8 = ccSound::instance();
        pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
        Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
        if ((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) {
          pcVar8 = ccSound::instance();
          Sound::Source::play_once((Source *)pcVar8,(SND_SourceParams *)0x0);
        }
      }
      uVar14 = ED_get_time();
      *(undefined8 *)(this_00 + 0x120) = uVar14;
      return true;
    }
    cVar1 = pcVar7[0x30];
    dVar13 = (double)ED_get_time();
    if (((DAT_7ffada852098 < dVar13 - *(double *)(this_00 + 0x120)) &&
        (0.0 < *(double *)(this_00 + 0x120))) && (this[0x91] != (avDevice)0x0)) {
      local_c0 = (double)*(float *)(this_00 + 0xa4);
      local_c8[0] = 1;
      local_b8 = (double)*(float *)(this_00 + 0xa8);
      local_b0 = (double)*(float *)(this_00 + 0xac);
      pcVar8 = ccSound::instance();
      pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
      Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
      if ((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) {
        pcVar8 = ccSound::instance();
        Sound::Source::play_once((Source *)(pcVar8 + 4),(SND_SourceParams *)0x0);
      }
    }
    *(undefined8 *)(this_00 + 0x120) = 0xbff0000000000000;
    return (bool)cVar1;
  }
  if (cVar1 != (clickableElementActionData)0x2) {
    if (cVar1 == (clickableElementActionData)0x3) {
      if (this[0x91] == (avDevice)0x0) {
        return true;
      }
      local_c0 = (double)*(float *)(this_00 + 0xa4);
      local_c8[0] = 1;
      local_b8 = (double)*(float *)(this_00 + 0xa8);
      local_b0 = (double)*(float *)(this_00 + 0xac);
      pcVar8 = ccSound::instance();
      pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
      Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
      if (*(int *)(pcVar7 + 0x3c) != -1) {
        return true;
      }
      if (*(int *)(pcVar7 + 0x40) != -1) {
        return true;
      }
      goto LAB_7ffada649456;
    }
    if (cVar1 != (clickableElementActionData)0x6) {
      return true;
    }
  }
  if (this[0x91] != (avDevice)0x0) {
    local_c0 = (double)*(float *)(this_00 + 0xa4);
    local_c8[0] = 1;
    local_b8 = (double)*(float *)(this_00 + 0xa8);
    local_b0 = (double)*(float *)(this_00 + 0xac);
    pcVar8 = ccSound::instance();
    pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
    Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
    if (((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) &&
       (local_d8[0] != fVar12)) {
LAB_7ffada649456:
      pcVar8 = ccSound::instance();
      Sound::Source::play_once((Source *)(pcVar8 + 8),(SND_SourceParams *)0x0);
      return true;
    }
  }
  return true;
}



/***** FUNCTION checkCallbackKeyboard @ 7ffada649680 | method *****/


/* public: virtual bool __cdecl cockpit::avDevice::checkCallbackKeyboard(int,float & __ptr64)
   __ptr64 */

bool __thiscall cockpit::avDevice::checkCallbackKeyboard(avDevice *this,int param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  
                    /* 0x239680  2632  ?checkCallbackKeyboard@avDevice@cockpit@@UEAA_NHAEAM@Z */
  fVar3 = DAT_7ffada84d22c;
  plVar7 = *(longlong **)(this + 0x70);
  plVar5 = (longlong *)plVar7[1];
  cVar4 = *(char *)((longlong)plVar5 + 0x19);
  plVar6 = plVar7;
  while (cVar4 == '\0') {
    plVar9 = plVar5;
    if ((int)plVar5[4] < param_1) {
      plVar5 = plVar5 + 2;
      plVar9 = plVar6;
    }
    plVar5 = (longlong *)*plVar5;
    plVar6 = plVar9;
    cVar4 = *(char *)((longlong)plVar5 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((int)plVar6[4] <= param_1)) &&
     (plVar6 != plVar7)) {
    piVar2 = (int *)plVar6[6];
    for (piVar8 = (int *)plVar6[5]; piVar8 != piVar2; piVar8 = piVar8 + 6) {
      if (*piVar8 != 0) {
        local_res8[0] = *param_2;
        if (local_res8[0] == 0.0) {
          local_res8[0] = (float)piVar8[2];
        }
        cVar4 = (**(code **)(*(longlong *)this + 0x50))(this,*piVar8,param_1,local_res8);
        if (cVar4 == '\0') {
          return false;
        }
        fVar10 = ccCockpitContext::get_argument(*(ccCockpitContext **)(this + 0x18),*piVar8);
        *param_2 = local_res8[0];
        if ((char)piVar8[5] == '\0') {
          fVar10 = fVar10 + local_res8[0];
          fVar12 = (float)piVar8[3];
          if ((fVar10 <= (float)piVar8[4] + fVar3) &&
             (fVar11 = fVar12 - fVar3, fVar12 = fVar10, fVar10 < fVar11)) {
            fVar12 = (float)piVar8[4];
          }
        }
        else {
          fVar12 = (float)piVar8[2];
        }
        ccCockpitContext::set_argument(*(ccCockpitContext **)(this + 0x18),*piVar8,fVar12);
      }
      iVar1 = piVar8[1];
      if (iVar1 != 0) {
        plVar7 = *(longlong **)(this + 0x60);
        plVar5 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          do {
            plVar7 = plVar5;
            if ((int)plVar5[4] < iVar1) {
              plVar5 = plVar5 + 2;
              plVar7 = plVar6;
            }
            plVar5 = (longlong *)*plVar5;
            plVar6 = plVar7;
          } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
          plVar6 = *(longlong **)(this + 0x60);
        }
        if (((*(char *)((longlong)plVar7 + 0x19) == '\0') && ((int)plVar7[4] <= iVar1)) &&
           ((plVar7 != plVar6 && ((clickableElementData *)plVar7[5] != (clickableElementData *)0x0))
           )) {
          clickableElementData::update((clickableElementData *)plVar7[5]);
        }
      }
    }
  }
  return true;
}



/***** FUNCTION close_LuaState @ 7ffada649830 | method *****/


/* protected: void __cdecl cockpit::avDevice::close_LuaState(void) __ptr64 */

void __thiscall cockpit::avDevice::close_LuaState(avDevice *this)

{
  int iVar1;
  
                    /* 0x239830  2778  ?close_LuaState@avDevice@cockpit@@IEAAXXZ */
  if (*(longlong *)(this + 0x50) != 0) {
    lua_getfield(*(longlong *)(this + 0x50),0xffffd8ee,s_on_state_close_7ffada853830);
    iVar1 = lua_type(*(undefined8 *)(this + 0x50),0xffffffff);
    if (iVar1 == 6) {
      iVar1 = ED_lua_pcall(*(undefined8 *)(this + 0x50),0,0,0);
      if (iVar1 != 0) {
        lua_tolstring(*(undefined8 *)(this + 0x50),0xffffffff,0);
        FUN_7ffada5f68c0();
        lua_settop(*(undefined8 *)(this + 0x50),0xfffffffe);
      }
    }
    ED_lua_close(*(undefined8 *)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}



/***** FUNCTION ensured_Lua @ 7ffada6498d0 | method *****/


/* protected: struct lua_State * __ptr64 __cdecl cockpit::avDevice::ensured_Lua(char const *
   __ptr64) __ptr64 */

lua_State * __thiscall cockpit::avDevice::ensured_Lua(avDevice *this,char *param_1)

{
  lua_State *plVar1;
  char *pcVar2;
  
                    /* 0x2398d0  3019  ?ensured_Lua@avDevice@cockpit@@IEAAPEAUlua_State@@PEBD@Z */
  if (*(longlong *)(this + 0x50) == 0) {
    pcVar2 = s_avDevice__ensured_Lua_7ffada853868;
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    plVar1 = ccLuaLoader::open(pcVar2,false);
    *(lua_State **)(this + 0x50) = plVar1;
    (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
    return *(lua_State **)(this + 0x50);
  }
  return *(lua_State **)(this + 0x50);
}



/***** FUNCTION initialize @ 7ffada6499b0 | method *****/


/* public: virtual void __cdecl cockpit::avDevice::initialize(unsigned char,class
   ed::basic_string<char> const & __ptr64,class ed::basic_string<char> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avDevice::initialize
          (avDevice *this,uchar param_1,basic_string<char> *param_2,basic_string<char> *param_3)

{
  lua_State *plVar1;
  basic_string<char> *pbVar2;
  basic_string<char> *pbVar3;
  
                    /* 0x2399b0  4530
                       ?initialize@avDevice@cockpit@@UEAAXEAEBV?$basic_string@D@ed@@0@Z */
  this[0x28] = (avDevice)0x1;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    this[0x90] = (avDevice)0x1;
    if (this[0x80] != (avDevice)0x0) {
      pbVar3 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 0x18)) {
        pbVar3 = *(basic_string<char> **)param_3;
      }
      if (*(longlong *)(this + 0x50) == 0) {
        pbVar2 = (basic_string<char> *)s_avDevice__ensured_Lua_7ffada853868;
        if (pbVar3 != (basic_string<char> *)0x0) {
          pbVar2 = pbVar3;
        }
        plVar1 = ccLuaLoader::open((char *)pbVar2,false);
        *(lua_State **)(this + 0x50) = plVar1;
        (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x7ffada649a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      copy_and_do_lua_file(*(lua_State **)(this + 0x50),param_3,(char *)0x0,false);
      return;
    }
    pbVar3 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 0x18)) {
      pbVar3 = *(basic_string<char> **)param_3;
    }
    if (*(longlong *)(this + 0x50) == 0) {
      pbVar2 = (basic_string<char> *)s_avDevice__ensured_Lua_7ffada853868;
      if (pbVar3 != (basic_string<char> *)0x0) {
        pbVar2 = pbVar3;
      }
      plVar1 = ccLuaLoader::open((char *)pbVar2,false);
      *(lua_State **)(this + 0x50) = plVar1;
      (**(code **)(*(longlong *)this + 0x68))(this,plVar1);
    }
    ccLuaLoader::LuaDofile(*(lua_State **)(this + 0x50),param_3,false);
  }
  return;
}



/***** FUNCTION l_register_functions @ 7ffada649e60 | method *****/


/* protected: virtual void __cdecl cockpit::avDevice::l_register_functions(struct lua_State *
   __ptr64,int) __ptr64 */

void __thiscall
cockpit::avDevice::l_register_functions(avDevice *this,lua_State *param_1,int param_2)

{
                    /* 0x239e60  4960
                       ?l_register_functions@avDevice@cockpit@@MEAAXPEAUlua_State@@H@Z */
  lua_pushstring(param_1,s_SetCommand_7ffada8537b0);
  lua_pushcclosure(param_1,FUN_7ffada649f30,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_performClickableAction_7ffada8537c0);
  lua_pushcclosure(param_1,FUN_7ffada649d90,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_listen_command_7ffada8537d8);
  lua_pushcclosure(param_1,FUN_7ffada649c20,0);
  lua_settable(param_1,param_2);
  lua_pushstring(param_1,s_listen_event_7ffada8537e8);
  lua_pushcclosure(param_1,FUN_7ffada649ca0,0);
  lua_settable(param_1,param_2);
  return;
}



/***** FUNCTION make_default_activity @ 7ffada64a1f0 | method *****/


/* protected: void __cdecl cockpit::avDevice::make_default_activity(double) __ptr64 */

void __thiscall cockpit::avDevice::make_default_activity(avDevice *this,double param_1)

{
  double dVar1;
  wTime *this_00;
  double local_res8;
  wTime *local_res10;
  Config local_28 [32];
  
                    /* 0x23a1f0  5109  ?make_default_activity@avDevice@cockpit@@IEAAXN@Z */
  local_res8 = param_1;
  if (*(lua_State **)(this + 0x50) != (lua_State *)0x0) {
    Lua::Config::Config(local_28,*(lua_State **)(this + 0x50),-0x2712);
    Lua::Config::get(local_28,s_device_timer_dt_7ffada853748);
    Lua::Config::pop(local_28,&local_res8);
    Lua::Config::~Config(local_28);
  }
  if (*(longlong *)(this + 0x58) == 0) {
    this_00 = (wTime *)FUN_7ffada82b29c(0x70);
    dVar1 = local_res8;
    if (this_00 == (wTime *)0x0) {
      this_00 = (wTime *)0x0;
    }
    else {
      local_res10 = this_00;
      wTime::wTime(this_00);
      this_00[0x68] = (wTime)0x0;
      *(avDevice **)(this_00 + 0x58) = this;
      *(double *)(this_00 + 0x60) = dVar1;
      *(undefined ***)this_00 = avDevice_BasicTimer::vftable;
      ed::basic_string<char>::format
                ((basic_string<char> *)(this_00 + 0x38),s__s__update_7ffada853758,
                 *(undefined8 *)(this + 0x10));
    }
    *(wTime **)(this + 0x58) = this_00;
    return;
  }
  *(double *)(*(longlong *)(this + 0x58) + 0x60) = local_res8;
  return;
}



/***** FUNCTION register_in_script @ 7ffada64a440 | method *****/


/* protected: virtual void __cdecl cockpit::avDevice::register_in_script(struct lua_State * __ptr64)
   __ptr64 */

void __thiscall cockpit::avDevice::register_in_script(avDevice *this,lua_State *param_1)

{
                    /* 0x23a440  5522  ?register_in_script@avDevice@cockpit@@MEAAXPEAUlua_State@@@Z
                        */
  lua_pushstring(param_1,s_____self_device_handle_7ffada853768);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,FUN_7ffada822cd0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetDevice_7ffada853780);
  lua_pushcclosure(param_1,FUN_7ffada649bd0,0);
  lua_setfield(param_1,0xffffd8ee,s_GetSelf_7ffada853790);
  lua_pushcclosure(param_1,FUN_7ffada649fe0,0);
  lua_setfield(param_1,0xffffd8ee,s_SetGlobalCommand_7ffada853798);
  return;
}



/***** FUNCTION release @ 7ffada64a500 | method *****/


/* public: virtual void __cdecl cockpit::avDevice::release(void) __ptr64 */

void __thiscall cockpit::avDevice::release(avDevice *this)

{
                    /* 0x23a500  5551  ?release@avDevice@cockpit@@UEAAXXZ */
  FUN_7ffada5f21d0((longlong *)(this + 0x60));
  if (*(longlong *)(this + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(this + 0x58) + 0x68) = 1;
    wTime::KillMe(*(wTime **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  close_LuaState(this);
  return;
}



/***** FUNCTION FUN_7ffada664310 @ 7ffada664310 | method *****/


undefined8 * FUN_7ffada664310(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  longlong lVar7;
  void *_Src;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  lVar7 = ((longlong)param_2 - lVar2) / 6 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar4 = (param_1[1] - lVar2) / 0x30;
  if (lVar4 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (param_1[2] - lVar2) / 0x30;
  uVar9 = 0x555555555555555;
  if ((uVar5 <= 0x555555555555555 - (uVar5 >> 1)) && (uVar9 = (uVar5 >> 1) + uVar5, uVar9 < uVar1))
  {
    uVar9 = uVar1;
  }
  _Dst = malloc(uVar9 * 0x30);
  if (_Dst == (undefined8 *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar9 * 0x30);
  }
  uVar6 = param_3[1];
  puVar8 = _Dst + ((lVar7 >> 3) - (lVar7 >> 0x3f)) * 6;
  *puVar8 = *param_3;
  puVar8[1] = uVar6;
  uVar6 = param_3[3];
  puVar8[2] = param_3[2];
  puVar8[3] = uVar6;
  uVar6 = param_3[5];
  puVar8[4] = param_3[4];
  puVar8[5] = uVar6;
  pvVar3 = (void *)param_1[1];
  _Src = (void *)*param_1;
  _Dst_00 = _Dst;
  if (param_2 != pvVar3) {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = puVar8 + 6;
    _Src = param_2;
  }
  memmove(_Dst_00,_Src,(longlong)pvVar3 - (longlong)_Src);
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1 * 6);
  param_1[2] = (longlong)(_Dst + uVar9 * 6);
  return puVar8;
}



/***** FUNCTION FUN_7ffada664600 @ 7ffada664600 | method *****/


void FUN_7ffada664600(longlong *param_1,ulonglong param_2)

{
  void *_Src;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  size_t _Size;
  
  puVar6 = (undefined8 *)param_1[1];
  lVar4 = *param_1;
  lVar3 = ((longlong)puVar6 - lVar4) / 6 + ((longlong)puVar6 - lVar4 >> 0x3f);
  uVar5 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  if (param_2 < uVar5) {
    param_1[1] = param_2 * 0x30 + lVar4;
    return;
  }
  if (uVar5 < param_2) {
    uVar1 = (param_1[2] - lVar4) / 0x30;
    if (uVar1 < param_2) {
      if (param_2 < 0x555555555555556) {
        uVar2 = 0x555555555555555;
        if ((uVar1 <= 0x555555555555555 - (uVar1 >> 1)) &&
           (uVar2 = uVar1 + (uVar1 >> 1), uVar2 < param_2)) {
          uVar2 = param_2;
        }
        _Size = uVar2 * 0x30;
        _Dst = malloc(_Size);
        if (_Dst == (void *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
        }
        puVar6 = (undefined8 *)(uVar5 * 0x30 + (longlong)_Dst);
        for (lVar4 = param_2 - uVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6 = puVar6 + 6;
        }
        _Src = (void *)*param_1;
        memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
        if (_Src != (void *)0x0) {
          free(_Src);
        }
        *param_1 = (longlong)_Dst;
        param_1[1] = (longlong)(param_2 * 0x30 + (longlong)_Dst);
        param_1[2] = (longlong)(_Size + (longlong)_Dst);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ae0();
    }
    for (lVar4 = param_2 - uVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6 = puVar6 + 6;
    }
    param_1[1] = (longlong)puVar6;
  }
  return;
}



/***** FUNCTION FUN_7ffada6647d0 @ 7ffada6647d0 | method *****/


void FUN_7ffada6647d0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  size_t _Size;
  
  if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada5f0ae0();
  }
  lVar10 = (param_1[1] - *param_1) / 0x28;
  uVar4 = (param_1[2] - *param_1) / 0x28;
  uVar13 = 0x666666666666666;
  if ((uVar4 <= 0x666666666666666 - (uVar4 >> 1)) &&
     (uVar13 = (uVar4 >> 1) + uVar4, uVar13 < param_2)) {
    uVar13 = param_2;
  }
  _Size = uVar13 * 0x28;
  pvVar9 = malloc(_Size);
  if (pvVar9 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
  }
  puVar12 = (undefined8 *)((longlong)pvVar9 + lVar10 * 0x28);
  for (lVar10 = param_2 - lVar10; lVar10 != 0; lVar10 = lVar10 + -1) {
    puVar12[4] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    puVar12 = puVar12 + 5;
  }
  puVar2 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  if (puVar11 != puVar2) {
    puVar12 = (undefined8 *)((longlong)pvVar9 + 0x18);
    do {
      puVar12[-3] = 0;
      puVar12[-2] = 0;
      puVar12[-1] = 0;
      *puVar12 = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)(puVar12 + -3) = *puVar11;
      *(undefined4 *)((longlong)puVar12 + -0x14) = uVar5;
      *(undefined4 *)(puVar12 + -2) = uVar6;
      *(undefined4 *)((longlong)puVar12 + -0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar11 + 6);
      puVar12[-1] = *(undefined8 *)(puVar11 + 4);
      *puVar12 = uVar8;
      *(undefined1 *)puVar11 = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      puVar1 = puVar11 + 8;
      puVar11 = puVar11 + 10;
      *(undefined4 *)(puVar12 + 1) = *puVar1;
      puVar12 = puVar12 + 5;
    } while (puVar11 != puVar2);
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    for (; puVar12 != puVar3; puVar12 = puVar12 + 5) {
      if (0xf < (ulonglong)puVar12[3]) {
        free((void *)*puVar12);
      }
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      *(undefined1 *)puVar12 = 0;
    }
    free((void *)*param_1);
  }
  *param_1 = (longlong)pvVar9;
  param_1[1] = (longlong)((longlong)pvVar9 + param_2 * 0x28);
  param_1[2] = (longlong)(_Size + (longlong)pvVar9);
  return;
}



/***** FUNCTION FUN_7ffada664ab0 @ 7ffada664ab0 | method *****/


undefined4 * FUN_7ffada664ab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  *(undefined ***)(param_1 + 2) = ClipVolume::vftable;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined ***)(param_1 + 2) = ClipVolumePlanes::vftable;
  *(undefined8 *)(param_1 + 8) = uVar1;
  lVar6 = 3;
  puVar2 = (undefined8 *)(param_1 + 10);
  puVar3 = (undefined8 *)(param_2 + 10);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  param_1[0x6e] = param_2[0x6e];
  *(undefined8 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x75) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined ***)(param_1 + 2) = ClipVolumeCamera::vftable;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  param_1[0x79] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0x3f800000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0x3f800000;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  param_1[0x7a] = param_2[0x7a];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7e] = param_2[0x7e];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  *(undefined ***)(param_1 + 0x82) = ClipVolume::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x86);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x86) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined ***)(param_1 + 0x82) = ClipVolumeBox::vftable;
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x91) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x93) = 0;
  param_1[0x95] = 0;
  *(undefined8 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0x3f800000;
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = param_2[0x95];
  param_1[0x96] = param_2[0x96];
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  *(undefined8 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa1) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0x3f800000;
  param_1[0xaa] = 0;
  param_1[0xab] = 0x3f800000;
  param_1[0x9c] = param_2[0x9c];
  param_1[0x9d] = param_2[0x9d];
  param_1[0x9e] = param_2[0x9e];
  param_1[0xa0] = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  param_1[0xa2] = param_2[0xa2];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa5] = param_2[0xa5];
  param_1[0xa6] = param_2[0xa6];
  param_1[0xa8] = param_2[0xa8];
  param_1[0xa9] = param_2[0xa9];
  param_1[0xaa] = param_2[0xaa];
  param_1[0xac] = param_2[0xac];
  param_1[0xad] = param_2[0xad];
  param_1[0xae] = param_2[0xae];
  param_1[0xaf] = param_2[0xaf];
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  *(undefined8 *)(param_1 + 0xb5) = *(undefined8 *)(param_2 + 0xb5);
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  param_1[0xbb] = param_2[0xbb];
  uVar1 = *(undefined8 *)(param_2 + 0xbe);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xbe) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  return param_1;
}



/***** FUNCTION avKneeboard @ 7ffada6650d0 | method *****/


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



/***** FUNCTION avKneeboard @ 7ffada6655c0 | method *****/


/* public: __cdecl cockpit::avKneeboard::avKneeboard(void) __ptr64 */

avKneeboard * __thiscall cockpit::avKneeboard::avKneeboard(avKneeboard *this)

{
                    /* 0x2555c0  325  ??0avKneeboard@cockpit@@QEAA@XZ */
  avDevice::avDevice((avDevice *)this);
  avMovingMap::avMovingMap((avMovingMap *)(this + 0x98));
  *(undefined ***)this = &_vftable__for__cockpit__ccContextRelatedObject__;
  *(undefined ***)(this + 0x20) = &_vftable__for__cockpit__avLuaRegistrable__;
  *(undefined ***)(this + 0x98) = &_vftable_;
  this[0x3f0] = (avKneeboard)0x0;
  this[0x408] = (avKneeboard)0x0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  this[0x49c] = (avKneeboard)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0xf;
  this[0x4d8] = (avKneeboard)0x0;
  this[0x3f8] = (avKneeboard)0x1;
  *(undefined8 *)(this + 0x400) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x40c) = 0;
  return this;
}



/***** FUNCTION avKneeboardZoneObject @ 7ffada665720 | method *****/


/* public: __cdecl cockpit::avKneeboardZoneObject::avKneeboardZoneObject(class Lua::Config &
   __ptr64) __ptr64 */

avKneeboardZoneObject * __thiscall
cockpit::avKneeboardZoneObject::avKneeboardZoneObject(avKneeboardZoneObject *this,Config *param_1)

{
  void *_Src;
  float *pfVar1;
  bool bVar2;
  void *_Dst;
  int iVar3;
  float local_res18 [2];
  float local_res20 [2];
  float local_38 [4];
  
                    /* 0x255720  326  ??0avKneeboardZoneObject@cockpit@@QEAA@AEAVConfig@Lua@@@Z */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  *(undefined4 *)(this + 0x10) = 0x7f7fffff;
  *(undefined4 *)(this + 0x14) = 0x7f7fffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined4 *)(this + 0x1c) = 0xff7fffff;
  *(undefined4 *)(this + 0x20) = 0xff7fffff;
  *(undefined4 *)(this + 0x24) = 0xff7fffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0x100;
  avDrawCachedObj::avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  _Dst = malloc(0x78);
  if (_Dst == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x78);
  }
  _Src = *(void **)(this + 0x58);
  memmove(_Dst,_Src,*(longlong *)(this + 0x60) - (longlong)_Src);
  if (_Src != (void *)0x0) {
    free(_Src);
  }
  *(void **)(this + 0x58) = _Dst;
  *(void **)(this + 0x60) = _Dst;
  *(longlong *)(this + 0x68) = (longlong)_Dst + 0x78;
  iVar3 = 1;
  bVar2 = Lua::Config::open(param_1,1);
  if (bVar2) {
    do {
      local_res20[0] = 0.0;
      Lua::Config::get(param_1,2);
      Lua::Config::pop(param_1,local_res20);
      local_res18[0] = 0.0;
      Lua::Config::get(param_1,1);
      Lua::Config::pop(param_1,local_res18);
      local_38[0] = local_res18[0];
      local_38[1] = 0.0;
      local_38[2] = local_res20[0];
      pfVar1 = *(float **)(this + 0x60);
      if (pfVar1 == *(float **)(this + 0x68)) {
        FUN_7ffada60de80((longlong *)(this + 0x58),pfVar1,(undefined8 *)local_38);
      }
      else {
        *pfVar1 = local_res18[0];
        pfVar1[1] = 0.0;
        pfVar1[2] = local_res20[0];
        *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 0xc;
      }
      lua_settop(*(undefined8 *)param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
      bVar2 = Lua::Config::open(param_1,iVar3);
    } while (bVar2);
  }
  set_points(this,(vector<osg::Vec3f,ed::allocator<osg::Vec3f>_> *)(this + 0x58));
  return this;
}



/***** FUNCTION avMovingMap @ 7ffada665a50 | method *****/


/* public: __cdecl cockpit::avMovingMap::avMovingMap(class cockpit::avMovingMap const & __ptr64)
   __ptr64 */

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this,avMovingMap *param_1)

{
                    /* 0x255a50  354  ??0avMovingMap@cockpit@@QEAA@AEBV01@@Z */
  *(undefined ***)this = vftable;
  FUN_7ffada664ab0((undefined4 *)(this + 8),(undefined4 *)(param_1 + 8));
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(this + 800) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x328);
  return this;
}



/***** FUNCTION ~avKneeboard @ 7ffada665e50 | destructor *****/


/* public: virtual __cdecl cockpit::avKneeboard::~avKneeboard(void) __ptr64 */

void __thiscall cockpit::avKneeboard::~avKneeboard(avKneeboard *this)

{
  SimpleOctTree *pSVar1;
  
                    /* 0x255e50  797  ??1avKneeboard@cockpit@@UEAA@XZ */
  *(undefined ***)this = &_vftable__for__cockpit__ccContextRelatedObject__;
  *(undefined ***)(this + 0x20) = &_vftable__for__cockpit__avLuaRegistrable__;
  *(undefined ***)(this + 0x98) = &_vftable_;
  if (*(SimpleOctTree **)(this + 0x428) != (SimpleOctTree *)0x0) {
    SimpleOctTree::DeleteAll(*(SimpleOctTree **)(this + 0x428));
    pSVar1 = *(SimpleOctTree **)(this + 0x428);
    if (pSVar1 != (SimpleOctTree *)0x0) {
      SimpleOctTree::~SimpleOctTree(pSVar1);
      free(pSVar1);
    }
    *(undefined8 *)(this + 0x428) = 0;
  }
  if (*(SimpleOctTree **)(this + 0x430) != (SimpleOctTree *)0x0) {
    SimpleOctTree::DeleteAll(*(SimpleOctTree **)(this + 0x430));
    pSVar1 = *(SimpleOctTree **)(this + 0x430);
    if (pSVar1 != (SimpleOctTree *)0x0) {
      SimpleOctTree::~SimpleOctTree(pSVar1);
      free(pSVar1);
    }
    *(undefined8 *)(this + 0x430) = 0;
  }
  if (0xf < *(ulonglong *)(this + 0x4f0)) {
    free(*(void **)(this + 0x4d8));
  }
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0xf;
  this[0x4d8] = (avKneeboard)0x0;
  FUN_7ffada667990((undefined8 *)(this + 0x4c0));
  if (*(void **)(this + 0x4a8) != (void *)0x0) {
    free(*(void **)(this + 0x4a8));
    *(undefined8 *)(this + 0x4a8) = 0;
    *(undefined8 *)(this + 0x4b0) = 0;
    *(undefined8 *)(this + 0x4b8) = 0;
  }
  if (*(void **)(this + 0x480) != (void *)0x0) {
    free(*(void **)(this + 0x480));
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x490) = 0;
  }
  if (*(void **)(this + 0x468) != (void *)0x0) {
    free(*(void **)(this + 0x468));
    *(undefined8 *)(this + 0x468) = 0;
    *(undefined8 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x478) = 0;
  }
  if (*(void **)(this + 0x450) != (void *)0x0) {
    free(*(void **)(this + 0x450));
    *(undefined8 *)(this + 0x450) = 0;
    *(undefined8 *)(this + 0x458) = 0;
    *(undefined8 *)(this + 0x460) = 0;
  }
  if (*(void **)(this + 0x438) != (void *)0x0) {
    free(*(void **)(this + 0x438));
    *(undefined8 *)(this + 0x438) = 0;
    *(undefined8 *)(this + 0x440) = 0;
    *(undefined8 *)(this + 0x448) = 0;
  }
  if (*(void **)(this + 0x410) != (void *)0x0) {
    free(*(void **)(this + 0x410));
    *(undefined8 *)(this + 0x410) = 0;
    *(undefined8 *)(this + 0x418) = 0;
    *(undefined8 *)(this + 0x420) = 0;
  }
  *(undefined ***)(this + 0x98) = avMovingMap::vftable;
  *(undefined ***)(this + 0x2a8) = ClipVolume::vftable;
  *(undefined ***)(this + 0xa8) = ClipVolume::vftable;
  avDevice::~avDevice((avDevice *)this);
  return;
}



/***** FUNCTION ~avKneeboardZoneObject @ 7ffada666060 | destructor *****/


/* public: virtual __cdecl cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(void) __ptr64 */

void __thiscall cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(avKneeboardZoneObject *this)

{
                    /* 0x256060  798  ??1avKneeboardZoneObject@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
  }
  avDrawCachedObj::~avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  SimpleOctTreeLoad::~SimpleOctTreeLoad((SimpleOctTreeLoad *)this);
  return;
}



/***** FUNCTION ~avMovingMap @ 7ffada6660c0 | destructor *****/


/* public: virtual __cdecl cockpit::avMovingMap::~avMovingMap(void) __ptr64 */

void __thiscall cockpit::avMovingMap::~avMovingMap(avMovingMap *this)

{
                    /* 0x2560c0  811  ??1avMovingMap@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x210) = ClipVolume::vftable;
  *(undefined ***)(this + 0x10) = ClipVolume::vftable;
  return;
}



/***** FUNCTION FUN_7ffada6669e0 @ 7ffada6669e0 | method *****/


avDrawCachedObj * FUN_7ffada6669e0(avDrawCachedObj *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x20,*(__uint64 *)(param_1 + -8),cockpit::avDrawCachedObj::~avDrawCachedObj);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avDrawCachedObj::~avDrawCachedObj(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada666a70 @ 7ffada666a70 | method *****/


avKneeboard * FUN_7ffada666a70(avKneeboard *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x4f8,*(__uint64 *)(param_1 + -8),cockpit::avKneeboard::~avKneeboard);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avKneeboard::~avKneeboard(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada666b10 @ 7ffada666b10 | method *****/


avKneeboardZoneObject * FUN_7ffada666b10(avKneeboardZoneObject *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x70,*(__uint64 *)(param_1 + -8),
               cockpit::avKneeboardZoneObject::~avKneeboardZoneObject);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada666b94 @ 7ffada666b94 | method *****/


void FUN_7ffada666b94(longlong param_1,uint param_2)

{
  FUN_7ffada666b10((avKneeboardZoneObject *)(param_1 + -0x38),param_2);
  return;
}



/***** FUNCTION FUN_7ffada666ba0 @ 7ffada666ba0 | method *****/


undefined8 * FUN_7ffada666ba0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,0x330,param_1[-1],cockpit::avMovingMap::~avMovingMap);
    if ((param_2 & 1) != 0) {
      free(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = cockpit::avMovingMap::vftable;
  param_1[0x42] = ClipVolume::vftable;
  param_1[2] = ClipVolume::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada666c40 @ 7ffada666c40 | method *****/


avMovingMapPoint * FUN_7ffada666c40(avMovingMapPoint *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x140,*(__uint64 *)(param_1 + -8),
               cockpit::avMovingMapPoint::~avMovingMapPoint);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avMovingMapPoint::~avMovingMapPoint(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada666ccc @ 7ffada666ccc | method *****/


void FUN_7ffada666ccc(longlong param_1,uint param_2)

{
  FUN_7ffada666c40((avMovingMapPoint *)(param_1 + -0x38),param_2);
  return;
}



/***** FUNCTION FUN_7ffada666cd8 @ 7ffada666cd8 | method *****/


void FUN_7ffada666cd8(longlong param_1,uint param_2)

{
  FUN_7ffada666c40((avMovingMapPoint *)(param_1 + -0x58),param_2);
  return;
}



/***** FUNCTION OnCockpitEvent @ 7ffada666fe0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __cdecl cockpit::avKneeboard::OnCockpitEvent(class ed::basic_string<char>
   const & __ptr64,class HeapVector<struct Graphics::DynamicParam> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avKneeboard::OnCockpitEvent
          (avKneeboard *this,basic_string<char> *param_1,HeapVector<Graphics::DynamicParam> *param_2
          )

{
  longlong lVar1;
  wMessage *this_00;
  bool bVar2;
  int iVar3;
  basic_string<char> *pbVar4;
  undefined8 *puVar5;
  LuaTableElement *pLVar6;
  LuaTableElement *pLVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  basic_string<char> *local_78;
  double local_70;
  double local_68;
  basic_string<char> *local_58 [2];
  double local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x256fe0  2103
                       ?OnCockpitEvent@avKneeboard@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                        */
  local_38 = DAT_7ffada94e840 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(ulonglong *)(param_1 + 0x18);
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 0xf) && (iVar3 = memcmp(pbVar4,s_AI__AttackGroup_7ffada84d5f8,0xf), iVar3 == 0)) {
LAB_7ffada667086:
    FUN_7ffada668190((longlong *)(this + 0x4a0));
    if (0 < *(int *)(param_2 + 8)) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_7ffada960db8) &&
       (FUN_7ffada82b8c4(&DAT_7ffada960db8), DAT_7ffada960db8 == -1)) {
      _DAT_7ffada960db0 = 0;
      _Init_thread_footer(&DAT_7ffada960db8);
      _DAT_7ffada960db0 = 0;
      return;
    }
    _DAT_7ffada960db0 = 0;
    return;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xe) {
    lVar8 = *(longlong *)pbVar4 + -0x617474413a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x6e556b63, lVar8 == 0)) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 0xc) - 0x7469;
    }
    if (lVar8 == 0) goto LAB_7ffada667086;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xb) {
    lVar8 = *(longlong *)pbVar4 + -0x626d6f423a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x6e69, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[10] - 0x67;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 0x13) &&
     (iVar3 = memcmp(pbVar4,s_AI__AttackMapObject_7ffada84d628,0x13), iVar3 == 0)) {
LAB_7ffada6672c3:
    FUN_7ffada668190((longlong *)(this + 0x4a0));
    FUN_7ffada645a10((longlong *)param_2,0);
    return;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0x11) {
    lVar8 = *(longlong *)pbVar4 + -0x626d6f423a3a4941;
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(pbVar4 + 8) + -0x61776e7552676e69, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0x10] - 0x79;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 9) {
    lVar8 = *(longlong *)pbVar4 + -0x6962724f3a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)(byte)pbVar4[8] - 0x74;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 8) && (*(longlong *)pbVar4 == 0x646e614c3a3a4941)) goto LAB_7ffada6672c3;
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xd) {
    lVar8 = *(longlong *)pbVar4 + -0x756665523a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x6e696c65, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0xc] - 0x67;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 10) {
    lVar8 = *(longlong *)pbVar4 + -0x6c6c6f463a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x776f;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 10) {
    lVar8 = *(longlong *)pbVar4 + -0x6f6373453a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x7472;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 8) && (*(longlong *)pbVar4 == 0x6b7361543a3a4941)) goto LAB_7ffada6672c3;
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xd) {
    lVar8 = *(longlong *)pbVar4 + -0x657365723a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x73615474, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0xc] - 0x6b;
    }
    if (lVar8 == 0) {
      FUN_7ffada668190((longlong *)(this + 0x4a0));
      return;
    }
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xe) {
    lVar8 = *(longlong *)pbVar4 + -0x4d6f696461526e6f;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x61737365, lVar8 == 0)) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 0xc) - 0x6567;
    }
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)FUN_7ffada645a10((longlong *)param_2,0);
      this_00 = (wMessage *)*puVar5;
      if (this_00 == (wMessage *)0x0) {
        return;
      }
      LuaTableElement::print((LuaTableElement *)(this_00 + 0xc0));
      if (*(int *)(this_00 + 0x180) - 0x1152U < 5) {
        pLVar6 = LuaTableElement::operator[]
                           ((LuaTableElement *)(this_00 + 0xc0),s_target_location_7ffada8552c0);
        bVar2 = LuaTableElement::empty(pLVar6);
        if (!bVar2) {
          pLVar7 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea58);
          local_78 = (basic_string<char> *)LuaTableElement::operator_double(pLVar7);
          pLVar7 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea5c);
          local_70 = LuaTableElement::operator_double(pLVar7);
          pLVar6 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea60);
          local_68 = LuaTableElement::operator_double(pLVar6);
          mark_target(this,(Vec3d *)&local_78);
        }
        local_78 = wMessage::getSubtitle(this_00);
        local_70 = *(double *)(local_78 + 0x10);
        if (0xf < *(ulonglong *)(local_78 + 0x18)) {
          local_78 = *(basic_string<char> **)local_78;
        }
        add_note(this,&local_78);
      }
      goto LAB_7ffada66757f;
    }
  }
  if (0xf < uVar10) {
    param_1 = *(basic_string<char> **)param_1;
  }
  if (lVar1 != 0xf) {
    return;
  }
  iVar3 = memcmp(param_1,s_onClipboardText_7ffada855248,0xf);
  if (iVar3 != 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_7ffada645a10((longlong *)param_2,0);
  plVar9 = (longlong *)*puVar5;
  dVar11 = wTime::GetAbsoluteModelTime();
  dVar11 = fmod(dVar11,DAT_7ffada84e060);
  uVar10 = (ulonglong)dVar11;
  iVar3 = (int)uVar10;
  local_88 = iVar3 + (int)((uVar10 & 0xffffffff) / 0x3c) * -0x3c;
  if (0xf < (ulonglong)plVar9[3]) {
    plVar9 = (longlong *)*plVar9;
  }
  local_80 = (longlong)plVar9;
  ed::string_format((char *)local_58,s_<_02d:_02d:_02d>__s_7ffada8552d0,
                    (ulonglong)
                    ((uint)(iVar3 + (int)((uVar10 & 0xffffffff) / 0x15180) * -0x15180) / 0xe10),
                    (ulonglong)
                    ((uint)(iVar3 + (int)((uVar10 & 0xffffffff) / 0xe10) * -0xe10) / 0x3c));
  local_78 = (basic_string<char> *)local_58;
  if (0xf < local_40) {
    local_78 = local_58[0];
  }
  local_70 = local_48;
  add_note(this,&local_78);
LAB_7ffada66757f:
  if (local_40 < 0x10) {
    return;
  }
  free(local_58[0]);
  return;
}



/***** FUNCTION SetCommand @ 7ffada6675f0 | method *****/


/* public: virtual void __cdecl cockpit::avKneeboard::SetCommand(int,float) __ptr64 */

void __thiscall cockpit::avKneeboard::SetCommand(avKneeboard *this,int param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
                    /* 0x2575f0  2185  ?SetCommand@avKneeboard@cockpit@@UEAAXHM@Z */
  if (param_1 < 0xbba) {
    if (param_1 == 0xbb9) {
      next_page(this);
      return;
    }
    if (param_1 != 0xa3c) {
      return;
    }
switchD_7ffada6676b7_caseD_bbe:
    uVar6 = (longlong)(param_2 + DAT_7ffada84dd10) & 0xffffffff;
    if ((uVar6 < (ulonglong)(*(longlong *)(this + 0x470) - *(longlong *)(this + 0x468) >> 2)) &&
       (iVar5 = *(int *)(*(longlong *)(this + 0x468) + uVar6 * 4), iVar5 != -1)) {
      uVar7 = 0;
      uVar6 = *(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3;
      if (uVar6 != 0) {
        do {
          if (*(int *)(*(longlong *)(this + 0x480) + 4 + uVar7 * 8) == iVar5) {
            *(int *)(this + 0x40c) = (int)uVar7;
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < uVar6);
      }
LAB_7ffada667757:
      if (*(int *)(this + 0x498) != 0) {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
        return;
      }
      *(undefined4 *)(this + 0x498) = 0x7fffffff;
      return;
    }
  }
  else {
    switch(param_1) {
    case 0xbba:
      iVar5 = *(int *)(this + 0x40c);
      if (iVar5 == 0) {
        if (*(longlong *)(this + 0x480) == *(longlong *)(this + 0x488)) goto LAB_7ffada6676eb;
        iVar5 = (int)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3);
      }
      *(int *)(this + 0x40c) = iVar5 + -1;
LAB_7ffada6676eb:
      if (*(int *)(this + 0x498) != 0) {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
        return;
      }
      *(undefined4 *)(this + 0x498) = 0x7fffffff;
      return;
    case 0xbbb:
      mark_self(this);
      return;
    case 0xbbc:
      set_page_as_shortcut
                (this,*(uint *)(*(longlong *)(this + 0x480) + 4 +
                               (ulonglong)*(uint *)(this + 0x40c) * 8));
      return;
    case 0xbbd:
      lVar2 = *(longlong *)(this + 0x468);
      iVar5 = 1;
      if (param_2 < 0.0) {
        iVar5 = -1;
      }
      if (lVar2 == *(longlong *)(this + 0x470)) {
        return;
      }
      uVar6 = 0;
      lVar4 = *(longlong *)(this + 0x480);
      lVar10 = *(longlong *)(this + 0x470) - lVar2 >> 2;
      iVar1 = *(int *)(lVar4 + (ulonglong)*(uint *)(this + 0x40c) * 8);
      if (iVar1 < 0) {
        uVar7 = uVar6;
        if (iVar5 < 1) {
LAB_7ffada667866:
          uVar7 = (ulonglong)((int)lVar10 - 1);
        }
      }
      else {
        uVar9 = iVar1 + iVar5;
        if ((int)uVar9 < 0) goto LAB_7ffada667866;
        uVar7 = (ulonglong)uVar9;
        if (lVar10 - 1U < (ulonglong)(longlong)(int)uVar9) {
          uVar7 = 0;
        }
      }
      if (lVar10 != 0) {
        lVar8 = lVar10;
        do {
          if ((uVar7 < (ulonglong)(*(longlong *)(this + 0x470) - lVar2 >> 2)) &&
             (iVar5 = *(int *)(lVar2 + uVar7 * 4), iVar5 != -1)) {
            uVar7 = *(longlong *)(this + 0x488) - lVar4 >> 3;
            if (uVar7 == 0) goto LAB_7ffada667919;
            goto LAB_7ffada667900;
          }
          uVar9 = (int)uVar7 * 2;
          if ((int)uVar9 < 0) {
            uVar7 = (ulonglong)((int)lVar10 - 1);
          }
          else {
            uVar7 = (ulonglong)uVar9;
            if (lVar10 - 1U < (ulonglong)(longlong)(int)uVar9) {
              uVar7 = uVar6;
            }
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      break;
    case 0xbbe:
      goto switchD_7ffada6676b7_caseD_bbe;
    case 0xbbf:
      if (0.0 < param_2) {
        ed_cockpit_set_action_digital(0x633);
        return;
      }
      break;
    case 0xbc0:
      unset_page_as_shortcut
                (this,*(uint *)(*(longlong *)(this + 0x480) + 4 +
                               (ulonglong)*(uint *)(this + 0x40c) * 8));
      return;
    case 0xbc1:
      uVar9 = *(uint *)(this + 0x40c);
      if (uVar9 == 0) {
        return;
      }
      lVar2 = *(longlong *)(this + 0x480);
      uVar3 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8);
      *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8) =
           *(undefined8 *)(lVar2 + (ulonglong)(uVar9 - 1) * 8);
      *(undefined8 *)(lVar2 + (ulonglong)(uVar9 - 1) * 8) = uVar3;
      *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + -1;
      goto LAB_7ffada667757;
    case 0xbc2:
      uVar9 = *(uint *)(this + 0x40c);
      lVar2 = *(longlong *)(this + 0x480);
      uVar6 = (ulonglong)(uVar9 + 1);
      if (uVar6 < (ulonglong)(*(longlong *)(this + 0x488) - lVar2 >> 3)) {
        uVar3 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8);
        *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
        *(undefined8 *)(lVar2 + uVar6 * 8) = uVar3;
        *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + 1;
        goto LAB_7ffada667757;
      }
    }
  }
  return;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar7) {
LAB_7ffada667900:
    if (*(int *)(lVar4 + 4 + uVar6 * 8) == iVar5) {
      *(int *)(this + 0x40c) = (int)uVar6;
      break;
    }
  }
LAB_7ffada667919:
  if (*(int *)(this + 0x498) != 0) {
    *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
    return;
  }
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  return;
}



/***** FUNCTION FUN_7ffada667990 @ 7ffada667990 | method *****/


void FUN_7ffada667990(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 5) {
      if (0xf < (ulonglong)puVar2[3]) {
        free((void *)*puVar2);
      }
      puVar2[2] = 0;
      puVar2[3] = 0xf;
      *(undefined1 *)puVar2 = 0;
    }
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/***** FUNCTION add_new_page_code @ 7ffada667a40 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: unsigned int __cdecl cockpit::avKneeboard::add_new_page_code(class
   ed::basic_string<char> const & __ptr64) __ptr64 */

uint __thiscall
cockpit::avKneeboard::add_new_page_code(avKneeboard *this,basic_string<char> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  IcClickable *pIVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  basic_string<char> **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  basic_string<char> *local_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
                    /* 0x257a40  2336
                       ?add_new_page_code@avKneeboard@cockpit@@AEAAIAEBV?$basic_string@D@ed@@@Z */
  local_20 = DAT_7ffada94e840 ^ (ulonglong)auStack_88;
  FUN_7ffada66a740((longlong *)(this + 0x480),
                   (*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) + 1);
  uVar5 = (int)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) - 1;
  *(uint *)(*(longlong *)(this + 0x488) + -4) = uVar5;
  local_48 = param_1;
  pIVar3 = instance();
  pcVar1 = *(code **)(*(longlong *)pIVar3 + 0x68);
  local_68 = &local_48;
  local_60 = 1;
  local_5c = 1;
  local_58 = 3;
  local_50 = 0;
  local_54 = 0;
  local_40 = (char *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  pcVar4 = malloc(0x20);
  if (pcVar4 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar2 = s_KneeboardGeneratePage_7ffada8552e8._8_8_;
  local_30 = _DAT_7ffada8553b0;
  uStack_28 = uRam00007ffada8553b8;
  *(undefined8 *)pcVar4 = s_KneeboardGeneratePage_7ffada8552e8._0_8_;
  *(undefined8 *)(pcVar4 + 8) = uVar2;
  *(undefined4 *)(pcVar4 + 0x10) = s_KneeboardGeneratePage_7ffada8552e8._16_4_;
  pcVar4[0x14] = s_KneeboardGeneratePage_7ffada8552e8[0x14];
  pcVar4[0x15] = '\0';
  local_40 = pcVar4;
  (*pcVar1)(pIVar3,&local_40,&local_68);
  if (0xf < uStack_28) {
    free(local_40);
  }
  local_30 = _DAT_7ffada84dd60;
  uStack_28 = uRam00007ffada84dd68;
  local_40 = (char *)((ulonglong)local_40 & 0xffffffffffffff00);
  if (local_58 == 1) {
    free(local_68);
  }
  return uVar5;
}



/***** FUNCTION add_note @ 7ffada667ec0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::add_note(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

void __thiscall cockpit::avKneeboard::add_note(avKneeboard *this,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 (*pauVar8) [32];
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auStackY_b8 [32];
  char local_80;
  undefined7 uStack_7f;
  size_t local_70;
  ulonglong uStack_68;
  undefined1 (*local_60 [2]) [32];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
                    /* 0x257ec0  2339
                       ?add_note@avKneeboard@cockpit@@IEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
                        */
  local_40 = DAT_7ffada94e840 ^ (ulonglong)auStackY_b8;
  if ((*(longlong *)(this + 0x4e8) != 0) && (param_2[1] != 0)) {
    pcVar9 = (char *)*param_2;
    pcVar10 = pcVar9 + param_2[1];
    iVar6 = 1;
    for (; pcVar9 != pcVar10; pcVar9 = pcVar9 + 1) {
      iVar7 = iVar6 + 1;
      if (*pcVar9 != '\n') {
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
    }
    puVar2 = *(undefined8 **)(this + 0x4c0);
    puVar3 = *(undefined8 **)(this + 0x4c8);
    if ((puVar2 == puVar3) || (0x1f < (uint)(*(int *)(puVar3 + -1) + iVar6))) {
      uVar5 = ((longlong)puVar3 - (longlong)puVar2) / 0x28;
      uVar1 = uVar5 + 1;
      if (uVar1 < uVar5) {
        for (puVar11 = puVar2 + uVar1 * 5; puVar11 != puVar3; puVar11 = puVar11 + 5) {
          if (0xf < (ulonglong)puVar11[3]) {
            free((void *)*puVar11);
          }
          puVar11[2] = 0;
          puVar11[3] = 0xf;
          *(undefined1 *)puVar11 = 0;
        }
        *(undefined8 **)(this + 0x4c8) = puVar2 + uVar1 * 5;
      }
      else if (uVar5 < uVar1) {
        if ((ulonglong)((*(longlong *)(this + 0x4d0) - (longlong)puVar2) / 0x28) < uVar1) {
          FUN_7ffada6647d0((longlong *)(this + 0x4c0),uVar1);
        }
        else {
          puVar3[4] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0xf;
          *(undefined1 *)puVar3 = 0;
          *(undefined8 **)(this + 0x4c8) = puVar3 + 5;
        }
      }
      lVar4 = *(longlong *)(this + 0x4c8);
      FUN_7ffada5f0b10((undefined8 *)(lVar4 + -0x28),(void *)*param_2,param_2[1]);
      *(int *)(lVar4 + -8) = iVar6;
      FUN_7ffada5ef690(local_60,(undefined8 *)(this + 0x4d8));
      ed::string_format(&local_80);
      pauVar12 = (undefined1 (*) [32])local_60;
      if (0xf < local_48) {
        pauVar12 = local_60[0];
      }
      if (((1 < local_50) &&
          (pauVar8 = thunk_FUN_7ffada82ae20
                               (pauVar12,(undefined1 (*) [32])(*pauVar12 + local_50),
                                (undefined1 (*) [16])&DAT_7ffada85536c,2),
          pauVar8 != (undefined1 (*) [32])(*pauVar12 + local_50))) &&
         ((longlong)pauVar8 - (longlong)pauVar12 != 0xffffffffffffffff)) {
        pcVar9 = &local_80;
        if (0xf < uStack_68) {
          pcVar9 = (char *)CONCAT71(uStack_7f,local_80);
        }
        FUN_7ffada66a530((longlong *)local_60,(longlong)pauVar8 - (longlong)pauVar12,2,pcVar9,
                         local_70);
      }
      add_new_page_code(this,(basic_string<char> *)local_60);
      if (0xf < uStack_68) {
        free((void *)CONCAT71(uStack_7f,local_80));
      }
      local_70 = _DAT_7ffada84dd60;
      uStack_68 = uRam00007ffada84dd68;
      local_80 = '\0';
      if (0xf < local_48) {
        free(local_60[0]);
      }
    }
    else {
      FUN_7ffada603a60(puVar3 + -5,&DAT_7ffada855348,1);
      FUN_7ffada603a60(puVar3 + -5,(void *)*param_2,param_2[1]);
      *(int *)(puVar3 + -1) = *(int *)(puVar3 + -1) + iVar6;
    }
  }
  return;
}



/***** FUNCTION FUN_7ffada668190 @ 7ffada668190 | method *****/


void FUN_7ffada668190(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  lVar6 = param_1[2];
  lVar2 = param_1[1];
  uVar5 = uVar3;
  if (lVar6 - lVar2 >> 3 != 0) {
    do {
      puVar1 = *(undefined8 **)(uVar3 + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar6 = param_1[2];
      uVar4 = (int)uVar5 + 1;
      lVar2 = param_1[1];
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lVar6 - lVar2 >> 3));
  }
  if (lVar2 != lVar6) {
    param_1[2] = lVar2;
  }
  return;
}



/***** FUNCTION FUN_7ffada6682b8 @ 7ffada6682b8 | method *****/


void FUN_7ffada6682b8(longlong param_1,undefined8 *param_2)

{
  FUN_7ffada6682d0(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}



/***** FUNCTION FUN_7ffada6682d0 @ 7ffada6682d0 | method *****/


longlong FUN_7ffada6682d0(undefined8 param_1,undefined8 *param_2)

{
  avKneeboard *this;
  longlong lVar1;
  
  this = (avKneeboard *)FUN_7ffada82b29c(0x4f8);
  if (this == (avKneeboard *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = cockpit::avKneeboard::avKneeboard(this);
  }
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  return lVar1;
}



/***** FUNCTION find_available_coverage @ 7ffada668390 | method *****/


/* protected: void __cdecl cockpit::avKneeboard::find_available_coverage(struct
   cockpit::kneeboard_map_page & __ptr64)const __ptr64 */

void __thiscall
cockpit::avKneeboard::find_available_coverage(avKneeboard *this,kneeboard_map_page *param_1)

{
  ITerrain *pIVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  
                    /* 0x258390  3066
                       ?find_available_coverage@avKneeboard@cockpit@@IEBAXAEAUkneeboard_map_page@2@@Z
                        */
  if (param_1[0x28] == (kneeboard_map_page)0x0) {
    pIVar1 = edterrain::ITerrain::GetDefaultTerrain();
    local_34 = 0xbdcccccd;
    iVar2 = 6;
    local_28 = 0x462be000;
    dVar4 = (double)(float)*(double *)param_1;
    local_38 = (float)(*(double *)(param_1 + 0x18) - dVar4);
    local_30 = (float)(*(double *)(param_1 + 0x20) - dVar4);
    local_2c = (float)(*(double *)(param_1 + 0x18) + dVar4);
    local_24 = (float)(*(double *)(param_1 + 0x20) + dVar4);
    do {
      fVar3 = (float)(**(code **)(*(longlong *)pIVar1 + 0x188))(pIVar1,&local_38,iVar2);
      if (fVar3 != 0.0) break;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    if (*(int *)(param_1 + 8) < iVar2) {
      iVar2 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar2;
    for (; iVar2 < 10; iVar2 = iVar2 + 1) {
      fVar3 = (float)(**(code **)(*(longlong *)pIVar1 + 0x188))(pIVar1,&local_38,iVar2);
      if (fVar3 != 0.0) {
        *(int *)(param_1 + 8) = iVar2;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (6 < iVar2) {
      iVar2 = 6;
    }
    *(int *)(param_1 + 8) = iVar2;
    param_1[0x28] = (kneeboard_map_page)0x1;
  }
  return;
}



/***** FUNCTION FUN_7ffada6685d0 @ 7ffada6685d0 | method *****/


void FUN_7ffada6685d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = ED_vsnprintf(param_1 + 1,0x101,param_2,&local_res18);
  if (((int)uVar1 < 0) || (0x100 < uVar1)) {
    uVar1 = 0x100 - (int)*param_1;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *param_1 = *param_1 + (longlong)(int)uVar1;
  return;
}



/***** FUNCTION get_camera @ 7ffada668690 | method *****/


/* public: virtual class Graphics::Camera const & __ptr64 __cdecl
   cockpit::avMovingMap::get_camera(void) __ptr64 */

Camera * __thiscall cockpit::avMovingMap::get_camera(avMovingMap *this)

{
  Camera *pCVar1;
  
                    /* 0x258690  3785  ?get_camera@avMovingMap@cockpit@@UEAAAEBVCamera@Graphics@@XZ
                        */
  pCVar1 = get_camera(this,false,DAT_7ffada84d238,DAT_7ffada84cc34,DAT_7ffada84d238,DAT_7ffada84cc34
                     );
  return pCVar1;
}



/***** FUNCTION get_camera_point @ 7ffada6686c0 | method *****/


/* protected: virtual class osg::Vec3f __cdecl cockpit::avKneeboard::get_camera_point(void)const
   __ptr64 */

void __thiscall cockpit::avKneeboard::get_camera_point(avKneeboard *this)

{
  longlong *plVar1;
  float *in_RDX;
  double *pdVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_38 [2];
  double local_28;
  undefined1 local_20 [24];
  
                    /* 0x2586c0  3789  ?get_camera_point@avKneeboard@cockpit@@MEBA?AVVec3f@osg@@XZ
                        */
  pdVar2 = *(double **)(this + 0x378);
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar3 < (ulonglong)((*(longlong *)(this + 0x380) - (longlong)pdVar2) / 0x30)) {
    pdVar2 = pdVar2 + uVar3 * 6;
  }
  dVar5 = pdVar2[3];
  dVar6 = pdVar2[4];
  if (this[0x404] != (avKneeboard)0x0) {
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(this + -0x80) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + -0x80) + 0x28) == 0) {
      plVar1 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x98))(plVar1,local_20);
    to_map_units(this + -0x98,(Vec3d *)local_38);
    dVar5 = local_38[0];
    dVar6 = local_28;
  }
  if (this[0x360] == (avKneeboard)0x0) {
    dVar4 = *pdVar2 + *pdVar2;
  }
  else {
    dVar4 = 0.0;
  }
  *in_RDX = (float)dVar5;
  in_RDX[1] = (float)dVar4;
  in_RDX[2] = (float)dVar6;
  return;
}



/***** FUNCTION get_map_rotation @ 7ffada668860 | method *****/


/* public: virtual bool __cdecl cockpit::avKneeboard::get_map_rotation(double & __ptr64) __ptr64 */

bool __thiscall cockpit::avKneeboard::get_map_rotation(avKneeboard *this,double *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0x258860  4023  ?get_map_rotation@avKneeboard@cockpit@@UEAA_NAEAN@Z */
  lVar1 = *(longlong *)(this + 0x378);
  uVar2 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar2 < (ulonglong)((*(longlong *)(this + 0x380) - lVar1) / 0x30)) {
    *param_1 = *(double *)(uVar2 * 0x30 + lVar1 + 0x10);
    return true;
  }
  *param_1 = *(double *)(lVar1 + 0x10);
  return true;
}



/***** FUNCTION get_volume_size @ 7ffada6689d0 | method *****/


/* public: virtual double __cdecl cockpit::avKneeboard::get_volume_size(void)const __ptr64 */

double __thiscall cockpit::avKneeboard::get_volume_size(avKneeboard *this)

{
  double *pdVar1;
  ulonglong uVar2;
  
                    /* 0x2589d0  4339  ?get_volume_size@avKneeboard@cockpit@@UEBANXZ */
  pdVar1 = *(double **)(this + 0x378);
  uVar2 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar2 < (ulonglong)((*(longlong *)(this + 0x380) - (longlong)pdVar1) / 0x30)) {
    return pdVar1[uVar2 * 6];
  }
  return *pdVar1;
}



/***** FUNCTION init_waypoints @ 7ffada668a60 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::init_waypoints(void) __ptr64 */

void __thiscall cockpit::avKneeboard::init_waypoints(avKneeboard *this)

{
  ulonglong uVar1;
  size_t _Size;
  undefined8 *_Src;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  SimpleOctTree *pSVar7;
  lua_State *plVar8;
  longlong *plVar9;
  MovingObject *this_00;
  longlong lVar10;
  undefined1 *puVar11;
  void **ppvVar12;
  undefined8 *puVar13;
  avMovingMapPoint *this_01;
  void *_Dst;
  char *pcVar14;
  ulonglong uVar15;
  void *_Dst_00;
  MovingObject *pMVar16;
  size_t _Size_00;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  undefined8 local_1a0 [2];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178 [2];
  undefined4 local_168;
  undefined4 local_164;
  char *local_160;
  undefined8 local_158;
  avMovingMapPoint *local_150;
  undefined1 local_148 [64];
  float local_108 [8];
  char local_e6;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  void *pvStack_c0;
  void *local_88 [3];
  ulonglong local_70;
  ulonglong local_68;
  
                    /* 0x258a60  4483  ?init_waypoints@avKneeboard@cockpit@@IEAAXXZ */
  local_68 = DAT_7ffada94e840 ^ (ulonglong)auStack_1c8;
  if (this[0x408] == (avKneeboard)0x0) {
    uVar18 = (undefined4)DAT_7ffada855388;
    uVar19 = (undefined4)((ulonglong)DAT_7ffada855388 >> 0x20);
  }
  else {
    uVar18 = (undefined4)DAT_7ffada855380;
    uVar19 = (undefined4)((ulonglong)DAT_7ffada855380 >> 0x20);
  }
  fVar20 = (float)(double)CONCAT44(uVar19,uVar18);
  uStack_188 = CONCAT44(fVar20,(uint)fVar20 ^ DAT_7ffada84cdb0);
  local_190 = (double)CONCAT44(0xc3960000,(uint)fVar20 ^ DAT_7ffada84cdb0);
  local_180 = (double)CONCAT44(fVar20,0x46ea6000);
  pSVar7 = SimpleOctTree::create_quad_tree
                     ((BoundingBoxImpl<osg::Vec3f> *)&local_190,DAT_7ffada84cc34);
  *(SimpleOctTree **)(this + 0x428) = pSVar7;
  plVar8 = (lua_State *)(**(code **)(**(longlong **)globalDispatcher_exref + 0xd0))();
  Lua::Config::Config((Config *)local_178,plVar8,-0x2712);
  bVar3 = Lua::Config::open((Config *)local_178,s_db_human_group_route_points_7ffada855270);
  if (bVar3) {
    plVar8 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
    Lua::Config::Config((Config *)local_1a0,plVar8,-0x2712);
    iVar5 = 1;
    local_1a8 = 1;
    bVar3 = Lua::Config::open((Config *)local_178,1);
    if (bVar3) {
      do {
        this_01 = (avMovingMapPoint *)0x0;
        local_108[0] = 0.0;
        local_108[1] = 0.0;
        local_108[2] = 0.0;
        pvStack_d0 = (void *)0x0;
        local_c8 = (void *)0x0;
        pvStack_c0 = (void *)0xf;
        local_d8 = (void *)0x0;
        read_waypoint((Waypoint *)local_108,(Config *)local_178);
        if (((byte)(local_e6 - 0xdU) < 2) || (local_e6 == '2')) {
          uVar4 = read_airdrome_id((Config *)local_178);
          plVar9 = (longlong *)
                   (**(code **)(**(longlong **)instance_exref + 0x10))
                             (*(longlong **)instance_exref,uVar4);
          if ((plVar9 == (longlong *)0x0) ||
             (this_00 = (MovingObject *)(**(code **)(*plVar9 + 0x38))(plVar9),
             this_00 == (MovingObject *)0x0)) goto LAB_7ffada668d95;
          lVar10 = (**(code **)(*(longlong *)this_00 + 0x148))(this_00);
          fVar20 = *(float *)(lVar10 + 0x30);
          fVar21 = *(float *)(lVar10 + 0x38);
          iVar5 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          iVar6 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          if (iVar6 == 0x80) {
            MovingObject::Type(this_00);
          }
          iVar6 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          if (iVar5 == 0x200) {
            puVar11 = (undefined1 *)(**(code **)(*(longlong *)this_00 + 0x3e0))(this_00,0);
            if (local_148 != puVar11) {
              fVar20 = *(float *)(puVar11 + 0x30);
              fVar21 = *(float *)(puVar11 + 0x38);
            }
            pMVar16 = this_00 + 0x2538;
            if ((MovingObject *)&local_d8 == pMVar16) goto LAB_7ffada668d85;
            if (0xf < *(ulonglong *)(this_00 + 0x2550)) {
              pMVar16 = *(MovingObject **)pMVar16;
            }
            FUN_7ffada5f0b10(&local_d8,pMVar16,*(size_t *)(this_00 + 0x2548));
            local_108[0] = fVar20;
            iVar5 = local_1a8;
            local_108[2] = fVar21;
          }
          else {
            if (iVar6 == 0x800) {
              local_168 = 3;
              puVar17 = &local_168;
            }
            else {
              local_164 = 3;
              puVar17 = &local_164;
            }
            ppvVar12 = (void **)(**(code **)(**(longlong **)globalDispatcher_exref + 0x130))
                                          (*(longlong **)globalDispatcher_exref,local_88,
                                           *(undefined4 *)(this_00 + 0x1c),puVar17);
            if (&local_d8 != ppvVar12) {
              if ((void *)0xf < pvStack_c0) {
                free(local_d8);
              }
              local_d8 = *ppvVar12;
              pvStack_d0 = ppvVar12[1];
              local_c8 = ppvVar12[2];
              pvStack_c0 = ppvVar12[3];
              ppvVar12[2] = (void *)0x0;
              *(undefined1 *)ppvVar12 = 0;
              ppvVar12[3] = (void *)0xf;
            }
            if (0xf < local_70) {
              free(local_88[0]);
            }
LAB_7ffada668d85:
            local_108[0] = fVar20;
            iVar5 = local_1a8;
            local_108[2] = fVar21;
          }
        }
        else {
LAB_7ffada668d95:
          fVar20 = local_108[0];
        }
        local_190 = (double)fVar20;
        uStack_188 = 0;
        local_180 = (double)local_108[2];
        puVar13 = (undefined8 *)to_map_units(this,(Vec3d *)local_88);
        local_190 = (double)*puVar13;
        uStack_188 = puVar13[1];
        local_180 = (double)puVar13[2];
        local_150 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
        if (local_150 != (avMovingMapPoint *)0x0) {
          this_01 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_150);
        }
        *(undefined4 *)(this_01 + 0x90) = 0;
        if (local_c8 != (void *)0x0) {
          (**(code **)(*(longlong *)this_01 + 0x18))(this_01,&local_d8);
        }
        *(int *)(this_01 + 0x138) = iVar5 + -1;
        uVar2 = _DAT_7ffada960f50;
        *(undefined8 *)(this_01 + 0x120) = _DAT_7ffada960f48;
        *(undefined8 *)(this_01 + 0x128) = uVar2;
        *(undefined8 *)(this_01 + 0x130) = DAT_7ffada960f58;
        avMovingMapPoint::setPoint(this_01,(Vec3d *)&local_190);
        SimpleOctTree::AddObject(*(SimpleOctTree **)(this + 0x428),(SimpleOctTreeLoad *)this_01);
        puVar13 = *(undefined8 **)(this + 0x440);
        if (puVar13 == *(undefined8 **)(this + 0x448)) {
          lVar10 = (longlong)puVar13 - *(longlong *)(this + 0x438) >> 3;
          if (lVar10 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_7ffada5f0ae0();
          }
          uVar1 = lVar10 + 1;
          uVar15 = (longlong)*(undefined8 **)(this + 0x448) - *(longlong *)(this + 0x438) >> 3;
          if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
            uVar15 = 0x1fffffffffffffff;
          }
          else {
            uVar15 = (uVar15 >> 1) + uVar15;
            if (uVar15 < uVar1) {
              uVar15 = uVar1;
            }
          }
          _Size = uVar15 * 8;
          _Dst = malloc(_Size);
          if (_Dst == (void *)0x0) {
            ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
          }
          *(avMovingMapPoint **)((longlong)_Dst + lVar10 * 8) = this_01;
          _Src = *(undefined8 **)(this + 0x438);
          if (puVar13 == *(undefined8 **)(this + 0x440)) {
            _Size_00 = (longlong)*(undefined8 **)(this + 0x440) - (longlong)_Src;
            _Dst_00 = _Dst;
            puVar13 = _Src;
          }
          else {
            memmove(_Dst,_Src,(longlong)puVar13 - (longlong)_Src);
            _Size_00 = *(longlong *)(this + 0x440) - (longlong)puVar13;
            _Dst_00 = (void *)((longlong)_Dst + (lVar10 + 1) * 8);
          }
          memmove(_Dst_00,puVar13,_Size_00);
          if (*(void **)(this + 0x438) != (void *)0x0) {
            free(*(void **)(this + 0x438));
          }
          *(void **)(this + 0x438) = _Dst;
          *(void **)(this + 0x440) = (void *)((longlong)_Dst + uVar1 * 8);
          *(void **)(this + 0x448) = (void *)(_Size + (longlong)_Dst);
          iVar5 = local_1a8;
        }
        else {
          *puVar13 = this_01;
          *(longlong *)(this + 0x440) = *(longlong *)(this + 0x440) + 8;
        }
        Lua::Config::get((Config *)local_1a0,s_on_waypoint_adding_7ffada855290);
        iVar6 = lua_type(local_1a0[0],0xffffffff);
        if (iVar6 == 6) {
          lua_pushnumber(local_1a0[0],SUB84(local_190,0));
          lua_pushnumber(local_1a0[0],SUB84(local_180,0));
          lua_pushnumber(local_1a0[0],0);
          local_160 = s_on_waypoint_adding_7ffada855290;
          local_158 = ED_get_ticks();
          iVar6 = ED_lua_pcall(local_1a0[0],3,0,0);
          if (iVar6 == 0) {
            Lua::CallTiming::finish((CallTiming *)&local_160);
          }
          else {
            Lua::CallTiming::finish((CallTiming *)&local_160);
            pcVar14 = (char *)lua_tolstring(local_1a0[0],0xffffffff,0);
            Lua::Config::call_log((Config *)local_1a0,s_on_waypoint_adding_7ffada855290,pcVar14);
            lua_settop(local_1a0[0],0xfffffffe);
            Lua::CallTiming::finish((CallTiming *)&local_160);
          }
        }
        else {
          lua_settop(local_1a0[0],0xfffffffe);
        }
        lua_settop(local_178[0],0xfffffffe);
        if ((void *)0xf < pvStack_c0) {
          free(local_d8);
        }
        iVar5 = iVar5 + 1;
        local_1a8 = iVar5;
        bVar3 = Lua::Config::open((Config *)local_178,iVar5);
      } while (bVar3);
    }
    lua_settop(local_178[0],0xfffffffe);
    Lua::Config::~Config((Config *)local_1a0);
  }
  Lua::Config::~Config((Config *)local_178);
  return;
}



/***** FUNCTION init_zones @ 7ffada669100 | method *****/


/* protected: void __cdecl cockpit::avKneeboard::init_zones(void) __ptr64 */

void __thiscall cockpit::avKneeboard::init_zones(avKneeboard *this)

{
  bool bVar1;
  SimpleOctTree *pSVar2;
  lua_State *plVar3;
  avKneeboardZoneObject *this_00;
  SimpleOctTreeLoad *pSVar4;
  int iVar5;
  double dVar6;
  undefined8 local_38 [2];
  uint local_28 [3];
  float local_1c;
  undefined4 local_18;
  float local_14;
  
                    /* 0x259100  4488  ?init_zones@avKneeboard@cockpit@@IEAAXXZ */
  dVar6 = DAT_7ffada855388;
  if (this[0x408] != (avKneeboard)0x0) {
    dVar6 = DAT_7ffada855380;
  }
  local_1c = (float)dVar6;
  local_28[0] = (uint)local_1c ^ DAT_7ffada84cdb0;
  local_28[1] = 0xc3960000;
  local_18 = 0x46ea6000;
  local_28[2] = local_28[0];
  local_14 = local_1c;
  pSVar2 = SimpleOctTree::create_quad_tree((BoundingBoxImpl<osg::Vec3f> *)local_28,DAT_7ffada84cc34)
  ;
  *(SimpleOctTree **)(this + 0x430) = pSVar2;
  plVar3 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
  Lua::Config::Config((Config *)local_38,plVar3,-0x2712);
  bVar1 = Lua::Config::open((Config *)local_38,s_zones_7ffada8552a4);
  if (bVar1) {
    iVar5 = 1;
    bVar1 = Lua::Config::open((Config *)local_38,1);
    if (bVar1) {
      do {
        pSVar2 = *(SimpleOctTree **)(this + 0x430);
        this_00 = (avKneeboardZoneObject *)FUN_7ffada82b29c(0x70);
        pSVar4 = (SimpleOctTreeLoad *)0x0;
        if (this_00 != (avKneeboardZoneObject *)0x0) {
          pSVar4 = (SimpleOctTreeLoad *)
                   avKneeboardZoneObject::avKneeboardZoneObject(this_00,(Config *)local_38);
        }
        SimpleOctTree::AddObject(pSVar2,pSVar4);
        lua_settop(local_38[0],0xfffffffe);
        iVar5 = iVar5 + 1;
        bVar1 = Lua::Config::open((Config *)local_38,iVar5);
      } while (bVar1);
    }
    lua_settop(local_38[0],0xfffffffe);
  }
  Lua::Config::~Config((Config *)local_38);
  return;
}



/***** FUNCTION initialize @ 7ffada669260 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __cdecl cockpit::avKneeboard::initialize(unsigned char,class
   ed::basic_string<char> const & __ptr64,class ed::basic_string<char> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avKneeboard::initialize
          (avKneeboard *this,uchar param_1,basic_string<char> *param_2,basic_string<char> *param_3)

{
  avKneeboard *paVar1;
  undefined8 *puVar2;
  kneeboard_map_page *pkVar3;
  undefined8 uVar4;
  double dVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  wcCoalitionName wVar9;
  lua_State *plVar10;
  char *pcVar11;
  MovingObject *pMVar12;
  char *pcVar13;
  longlong lVar14;
  kneeboard_map_page *pkVar15;
  int iVar16;
  MovingObject *pMVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 auStackY_138 [32];
  avKneeboard local_108 [8];
  undefined8 local_100 [2];
  char *local_f0;
  undefined8 local_e8 [2];
  char *local_d8 [4];
  char *local_b8;
  undefined8 uStack_b0;
  double local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulonglong local_88;
  
                    /* 0x259260  4557
                       ?initialize@avKneeboard@cockpit@@UEAAXEAEBV?$basic_string@D@ed@@0@Z */
  local_88 = DAT_7ffada94e840 ^ (ulonglong)auStackY_138;
  avDevice::initialize((avDevice *)this,param_1,param_2,param_3);
  avDevice::make_default_activity((avDevice *)this,DAT_7ffada84fcc0);
  plVar10 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
  Lua::Config::Config((Config *)local_100,plVar10,-0x2712);
  pcVar11 = DAT_7ffada84cc38;
  local_f0 = DAT_7ffada84cc38;
  Lua::Config::get((Config *)local_100,s_lat_lon_aspect_7ffada855150);
  Lua::Config::pop((Config *)local_100,(double *)&local_f0);
  *(char **)(this + 0x400) = local_f0;
  local_108[0] = (avKneeboard)0x0;
  Lua::Config::get((Config *)local_100,s_use_lat_lon_7ffada855160);
  Lua::Config::pop((Config *)local_100,(bool *)local_108);
  this[0x408] = local_108[0];
  pMVar17 = (MovingObject *)0x0;
  pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    pMVar12 = pMVar17;
  }
  (**(code **)(*(longlong *)pMVar12 + 0x98))(pMVar12,&local_b8);
  to_map_units(this,(Vec3d *)local_d8);
  pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    pMVar12 = pMVar17;
  }
  (**(code **)(*(longlong *)pMVar12 + 0x178))();
  init_waypoints(this);
  pcVar6 = local_d8[0];
  lua_pushnumber(local_100[0]);
  Lua::Config::set((Config *)local_100,s_x_start_7ffada855170);
  pcVar7 = local_d8[2];
  lua_pushnumber(local_100[0]);
  Lua::Config::set((Config *)local_100,s_z_start_7ffada855178);
  plVar10 = (lua_State *)(**(code **)(**(longlong **)globalDispatcher_exref + 0xd0))();
  Lua::Config::Config((Config *)local_e8,plVar10,-0x2712);
  bVar8 = Lua::Config::open((Config *)local_e8,s_mission_coalition_7ffada855180);
  if (bVar8) {
    pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
      pMVar12 = pMVar17;
    }
    wVar9 = MovingObject::Coalition(pMVar12);
    pcVar13 = s_neutrals_7ffada854e50;
    local_d8[0] = s_neutrals_7ffada854e50;
    local_d8[1] = &DAT_7ffada854e5c;
    local_d8[2] = &DAT_7ffada854e60;
    if (wVar9 < 3) {
      pcVar13 = local_d8[(int)wVar9];
    }
    bVar8 = Lua::Config::open((Config *)local_e8,pcVar13);
    if (bVar8) {
      bVar8 = Lua::Config::open((Config *)local_e8,s_bullseye_7ffada855198);
      if (bVar8) {
        Lua::Config::get((Config *)local_e8,&DAT_7ffada84ea58);
        Lua::Config::pop((Config *)local_e8,(double *)&local_f0);
        Lua::Config::get((Config *)local_e8,&DAT_7ffada84ea5c);
        Lua::Config::pop((Config *)local_e8,(double *)(local_d8 + 3));
        local_d8[0] = local_f0;
        local_d8[1] = (undefined *)0x0;
        local_d8[2] = local_d8[3];
        to_map_units(this,(Vec3d *)&local_b8);
        lua_pushnumber(local_100[0],local_b8);
        Lua::Config::set((Config *)local_100,s_x_bullseye_7ffada8551a8);
        lua_pushnumber(local_100[0],local_a8);
        Lua::Config::set((Config *)local_100,s_z_bullseye_7ffada8551b8);
        lua_settop(local_e8[0],0xfffffffe);
      }
      lua_settop(local_e8[0],0xfffffffe);
    }
    lua_settop(local_e8[0],0xfffffffe);
  }
  Lua::Config::call_func
            ((Config *)local_100,s_generate_maps_7ffada8551c8,(basic_string<char> *)0x0,0,0);
  bVar8 = Lua::Config::open((Config *)local_100,s_map_pages_7ffada8551d8);
  if (bVar8) {
    iVar16 = 1;
    bVar8 = Lua::Config::open((Config *)local_100,1);
    if (bVar8) {
      do {
        uStack_90 = 0;
        Lua::Config::get((Config *)local_100,s_scale_7ffada8551e4);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&local_b8);
        if (!bVar8) {
          local_b8 = pcVar11;
        }
        Lua::Config::get((Config *)local_100,s_chart_7ffada8551ec);
        bVar8 = Lua::Config::pop((Config *)local_100,(uint *)&uStack_b0);
        uVar19 = (uint)uStack_b0;
        if (!bVar8) {
          uVar19 = 6;
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
        Lua::Config::get((Config *)local_100,&DAT_7ffada84ea58);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&pcStack_a0);
        if (!bVar8) {
          pcStack_a0 = pcVar6;
        }
        Lua::Config::get((Config *)local_100,&DAT_7ffada84ea60);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&local_98);
        if (!bVar8) {
          local_98 = pcVar7;
        }
        Lua::Config::get((Config *)local_100,s_rotation_7ffada84e538);
        bVar8 = Lua::Config::pop((Config *)local_100,&local_a8);
        if (!bVar8) {
          local_a8 = 0.0;
        }
        puVar2 = *(undefined8 **)(this + 0x418);
        if (puVar2 == *(undefined8 **)(this + 0x420)) {
          FUN_7ffada664310((longlong *)(this + 0x410),puVar2,&local_b8);
        }
        else {
          *puVar2 = local_b8;
          puVar2[1] = uStack_b0;
          puVar2[2] = local_a8;
          puVar2[3] = pcStack_a0;
          puVar2[4] = local_98;
          puVar2[5] = CONCAT71(uStack_8f,uStack_90);
          *(longlong *)(this + 0x418) = *(longlong *)(this + 0x418) + 0x30;
        }
        lua_settop(local_100[0],0xfffffffe);
        iVar16 = iVar16 + 1;
        bVar8 = Lua::Config::open((Config *)local_100,iVar16);
      } while (bVar8);
    }
    lua_settop(local_100[0],0xfffffffe);
  }
  paVar1 = this + 0x410;
  if (*(longlong *)paVar1 == *(longlong *)(this + 0x418)) {
    FUN_7ffada664600((longlong *)paVar1,1);
    local_f0 = DAT_7ffada84f6a0;
    Lua::Config::get((Config *)local_100,s_default_scale_7ffada8551f8);
    Lua::Config::pop((Config *)local_100,(double *)&local_f0);
    **(ulonglong **)paVar1 = (ulonglong)local_f0;
    Lua::Config::get((Config *)local_100,s_default_chart_7ffada855208);
    bVar8 = Lua::Config::pop((Config *)local_100,(int *)&local_f0);
    uVar18 = 6;
    if (bVar8) {
      uVar18 = local_f0._0_4_;
    }
    *(undefined4 *)(*(longlong *)paVar1 + 8) = uVar18;
    pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
      pMVar12 = pMVar17;
    }
    uVar19 = (**(code **)(*(longlong *)pMVar12 + 0x178))();
    *(double *)(*(longlong *)paVar1 + 0x10) = (double)(float)(uVar19 ^ DAT_7ffada84cdb0);
    *(char **)(*(longlong *)paVar1 + 0x18) = pcVar6;
    *(char **)(*(longlong *)paVar1 + 0x20) = pcVar7;
  }
  pkVar3 = *(kneeboard_map_page **)(this + 0x418);
  for (pkVar15 = *(kneeboard_map_page **)paVar1; pkVar15 != pkVar3; pkVar15 = pkVar15 + 0x30) {
    find_available_coverage(this,pkVar15);
  }
  local_f0 = (char *)((ulonglong)local_f0 & 0xffffffff00000000);
  Lua::Config::get((Config *)local_100,s_number_of_additional_pages_7ffada855218);
  Lua::Config::pop((Config *)local_100,(int *)&local_f0);
  FUN_7ffada66a740((longlong *)(this + 0x480),
                   (*(longlong *)(this + 0x418) - *(longlong *)(this + 0x410)) / 0x30 +
                   ((ulonglong)local_f0 & 0xffffffff));
  lVar14 = *(longlong *)(this + 0x480);
  pMVar12 = pMVar17;
  if (*(longlong *)(this + 0x488) - lVar14 >> 3 != 0) {
    do {
      *(int *)(pMVar17 + lVar14 + 4) = (int)pMVar12;
      uVar19 = (int)pMVar12 + 1;
      pMVar17 = pMVar17 + 8;
      lVar14 = *(longlong *)(this + 0x480);
      pMVar12 = (MovingObject *)(ulonglong)uVar19;
    } while ((ulonglong)(longlong)(int)uVar19 <
             (ulonglong)(*(longlong *)(this + 0x488) - lVar14 >> 3));
  }
  init_zones(this);
  local_a8 = _DAT_7ffada84dd80;
  pcStack_a0 = pcRam00007ffada84dd88;
  local_b8 = (char *)s_AI__AttackGroup_7ffada84d5f8._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_AI__AttackGroup_7ffada84d5f8._12_2_,s_AI__AttackGroup_7ffada84d5f8._8_4_);
  uStack_b0._0_7_ = CONCAT16(s_AI__AttackGroup_7ffada84d5f8[0xe],(uint6)uStack_b0);
  uStack_b0 = (ulonglong)(uint7)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f710;
  pcStack_a0 = pcRam00007ffada84f718;
  local_b8 = (char *)s_AI__AttackUnit_7ffada84d608._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_AI__AttackUnit_7ffada84d608._12_2_,s_AI__AttackUnit_7ffada84d608._8_4_);
  uStack_b0 = (ulonglong)(uint6)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84dd70;
  pcStack_a0 = pcRam00007ffada84dd78;
  local_b8 = (char *)s_AI__Bombing_7ffada84d618._0_8_;
  uStack_b0 = (ulonglong)CONCAT12(s_AI__Bombing_7ffada84d618[10],s_AI__Bombing_7ffada84d618._8_2_);
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0.0;
  pcStack_a0 = (char *)0x0;
  pcVar11 = malloc(0x20);
  if (pcVar11 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar4 = s_AI__AttackMapObject_7ffada84d628._8_8_;
  local_a8 = _DAT_7ffada853450;
  pcStack_a0 = pcRam00007ffada853458;
  *(undefined8 *)pcVar11 = s_AI__AttackMapObject_7ffada84d628._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  *(undefined2 *)(pcVar11 + 0x10) = s_AI__AttackMapObject_7ffada84d628._16_2_;
  pcVar11[0x12] = s_AI__AttackMapObject_7ffada84d628[0x12];
  pcVar11[0x13] = '\0';
  local_b8 = pcVar11;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0.0;
  pcStack_a0 = (char *)0x0;
  pcVar11 = malloc(0x20);
  if (pcVar11 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar4 = s_AI__BombingRunway_7ffada84d640._8_8_;
  local_a8 = _DAT_7ffada854400;
  pcStack_a0 = pcRam00007ffada854408;
  *(undefined8 *)pcVar11 = s_AI__BombingRunway_7ffada84d640._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  pcVar11[0x10] = s_AI__BombingRunway_7ffada84d640[0x10];
  pcVar11[0x11] = '\0';
  local_b8 = pcVar11;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84d120;
  pcStack_a0 = pcRam00007ffada84d128;
  local_b8 = (char *)s_AI__Orbit_7ffada84d658._0_8_;
  uStack_b0 = (ulonglong)(byte)s_AI__Orbit_7ffada84d658[8];
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada855390;
  pcStack_a0 = pcRam00007ffada855398;
  local_b8 = (char *)0x646e614c3a3a4941;
  uStack_b0 = 0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f700;
  pcStack_a0 = pcRam00007ffada84f708;
  local_b8 = (char *)s_AI__Refueling_7ffada84d678._0_8_;
  uStack_b0._0_5_ = CONCAT14(s_AI__Refueling_7ffada84d678[0xc],s_AI__Refueling_7ffada84d678._8_4_);
  uStack_b0 = (ulonglong)(uint5)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  pcVar11 = pcRam00007ffada8553a8;
  dVar5 = _DAT_7ffada8553a0;
  local_a8 = _DAT_7ffada8553a0;
  pcStack_a0 = pcRam00007ffada8553a8;
  local_b8 = (char *)s_AI__Follow_7ffada84d688._0_8_;
  uStack_b0 = (ulonglong)(ushort)s_AI__Follow_7ffada84d688._8_2_;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = dVar5;
  pcStack_a0 = pcVar11;
  local_b8 = (char *)s_AI__Escort_7ffada84d698._0_8_;
  uStack_b0 = (ulonglong)(ushort)s_AI__Escort_7ffada84d698._8_2_;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada855390;
  pcStack_a0 = pcRam00007ffada855398;
  local_b8 = (char *)0x6b7361543a3a4941;
  uStack_b0 = 0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f700;
  pcStack_a0 = pcRam00007ffada84f708;
  local_b8 = (char *)s_AI__resetTask_7ffada84d6b8._0_8_;
  uStack_b0._0_5_ = CONCAT14(s_AI__resetTask_7ffada84d6b8[0xc],s_AI__resetTask_7ffada84d6b8._8_4_);
  uStack_b0 = (ulonglong)(uint5)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f710;
  pcStack_a0 = pcRam00007ffada84f718;
  local_b8 = (char *)s_onRadioMessage_7ffada855238._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_onRadioMessage_7ffada855238._12_2_,s_onRadioMessage_7ffada855238._8_4_);
  uStack_b0 = (ulonglong)(uint6)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84dd80;
  pcStack_a0 = pcRam00007ffada84dd88;
  local_b8 = (char *)s_onClipboardText_7ffada855248._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_onClipboardText_7ffada855248._12_2_,s_onClipboardText_7ffada855248._8_4_);
  uStack_b0._0_7_ = CONCAT16(s_onClipboardText_7ffada855248[0xe],(uint6)uStack_b0);
  uStack_b0 = (ulonglong)(uint7)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  listen_command((avDevice *)this,0xa3c);
  Lua::Config::get((Config *)local_100,s_note_generate_template_7ffada855258);
  Lua::Config::pop((Config *)local_100,(basic_string<char> *)(this + 0x4d8));
  Lua::Config::~Config((Config *)local_e8);
  Lua::Config::~Config((Config *)local_100);
  return;
}



/***** FUNCTION mark_self @ 7ffada669ef0 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::mark_self(void) __ptr64 */

void __thiscall cockpit::avKneeboard::mark_self(avKneeboard *this)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  avMovingMapPoint *paVar4;
  avMovingMapPoint *paVar5;
  avMovingMapPoint *paVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1b8 [32];
  avMovingMapPoint *local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined1 local_178 [32];
  size_t local_158;
  undefined1 local_150 [264];
  ulonglong local_48;
  
                    /* 0x259ef0  5120  ?mark_self@avKneeboard@cockpit@@IEAAXXZ */
  local_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_1b8;
  paVar6 = (avMovingMapPoint *)0x0;
  paVar4 = (avMovingMapPoint *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    paVar4 = paVar6;
  }
  (**(code **)(*(longlong *)paVar4 + 0x98))(paVar4,local_178);
  to_map_units(this,(Vec3d *)&local_190);
  plVar3 = *(longlong **)(this + 0x450);
  while( true ) {
    if (plVar3 == *(longlong **)(this + 0x458)) {
      local_198 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
      paVar4 = paVar6;
      if (local_198 != (avMovingMapPoint *)0x0) {
        paVar4 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_198);
      }
      local_158 = 0;
      local_150[0] = 0;
      local_198 = paVar4;
      dVar8 = wTime::GetAbsoluteModelTime();
      dVar8 = fmod(dVar8,DAT_7ffada84e060);
      dVar9 = floor(dVar8 / DAT_7ffada850c60);
      dVar8 = floor((dVar8 - (double)(int)dVar9 * DAT_7ffada850c60) / DAT_7ffada84dd38);
      FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar9,
                       (ulonglong)(uint)(int)dVar8);
      FUN_7ffada5f0b10((undefined8 *)(paVar4 + 0x70),local_150,local_158);
      *(undefined4 *)(paVar4 + 0x90) = 2;
      uVar2 = _DAT_7ffada960f50;
      *(undefined8 *)(paVar4 + 0x120) = _DAT_7ffada960f48;
      *(undefined8 *)(paVar4 + 0x128) = uVar2;
      *(undefined8 *)(paVar4 + 0x130) = DAT_7ffada960f58;
      avMovingMapPoint::setPoint(paVar4,(Vec3d *)&local_190);
      paVar5 = (avMovingMapPoint *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
      if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
        paVar5 = paVar6;
      }
      uVar7 = (**(code **)(*(longlong *)paVar5 + 0x178))();
      avMovingMapPoint::setRotate(paVar4,(float)(uVar7 ^ DAT_7ffada84cdb0));
      SimpleOctTree::AddObject
                (*(SimpleOctTree **)(this + 0x428),(basic_string<char> *)(paVar4 + 0x70),
                 (SimpleOctTreeLoad *)paVar4);
      FUN_7ffada5f6770((longlong *)(this + 0x450),&local_198);
      if (*(int *)(this + 0x498) == 0) {
        *(undefined4 *)(this + 0x498) = 0x7fffffff;
      }
      else {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
      }
      return;
    }
    lVar1 = *plVar3;
    if ((*(int *)(lVar1 + 0x90) == 2) &&
       (dVar10 = *(double *)(lVar1 + 0x110) - local_180,
       dVar8 = *(double *)(lVar1 + 0x108) - local_188,
       dVar9 = *(double *)(lVar1 + 0x100) - local_190,
       dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10 < DAT_7ffada855378)) break;
    plVar3 = plVar3 + 1;
  }
  local_158 = 0;
  local_150[0] = 0;
  dVar8 = wTime::GetAbsoluteModelTime();
  dVar8 = fmod(dVar8,DAT_7ffada84e060);
  dVar9 = floor(dVar8 / DAT_7ffada850c60);
  dVar8 = floor((dVar8 - (double)(int)dVar9 * DAT_7ffada850c60) / DAT_7ffada84dd38);
  FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar9,
                   (ulonglong)(uint)(int)dVar8);
  FUN_7ffada5f0b10((undefined8 *)(lVar1 + 0x70),local_150,local_158);
  return;
}



/***** FUNCTION mark_target @ 7ffada66a200 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::mark_target(class osg::Vec3d const & __ptr64)
   __ptr64 */

void __thiscall cockpit::avKneeboard::mark_target(avKneeboard *this,Vec3d *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  avMovingMapPoint *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_198 [32];
  avMovingMapPoint *local_178;
  double local_170;
  double local_168;
  double local_160;
  size_t local_158;
  undefined1 local_150 [264];
  ulonglong local_48;
  
                    /* 0x25a200  5121  ?mark_target@avKneeboard@cockpit@@IEAAXAEBVVec3d@osg@@@Z */
  local_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_198;
  to_map_units(this,(Vec3d *)&local_170);
  plVar3 = *(longlong **)(this + 0x450);
  while( true ) {
    if (plVar3 == *(longlong **)(this + 0x458)) {
      local_178 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
      if (local_178 == (avMovingMapPoint *)0x0) {
        this_00 = (avMovingMapPoint *)0x0;
      }
      else {
        this_00 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_178);
      }
      local_158 = 0;
      local_150[0] = 0;
      local_178 = this_00;
      dVar4 = wTime::GetAbsoluteModelTime();
      dVar4 = fmod(dVar4,DAT_7ffada84e060);
      dVar5 = floor(dVar4 / DAT_7ffada850c60);
      dVar4 = floor((dVar4 - (double)(int)dVar5 * DAT_7ffada850c60) / DAT_7ffada84dd38);
      FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar5,
                       (ulonglong)(uint)(int)dVar4);
      FUN_7ffada5f0b10((undefined8 *)(this_00 + 0x70),local_150,local_158);
      *(undefined4 *)(this_00 + 0x90) = 3;
      uVar2 = _DAT_7ffada960f50;
      *(undefined8 *)(this_00 + 0x120) = _DAT_7ffada960f48;
      *(undefined8 *)(this_00 + 0x128) = uVar2;
      *(undefined8 *)(this_00 + 0x130) = DAT_7ffada960f58;
      avMovingMapPoint::setPoint(this_00,(Vec3d *)&local_170);
      SimpleOctTree::AddObject
                (*(SimpleOctTree **)(this + 0x428),(basic_string<char> *)(this_00 + 0x70),
                 (SimpleOctTreeLoad *)this_00);
      FUN_7ffada5f6770((longlong *)(this + 0x450),&local_178);
      if (*(int *)(this + 0x498) == 0) {
        *(undefined4 *)(this + 0x498) = 0x7fffffff;
      }
      else {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
      }
      return;
    }
    lVar1 = *plVar3;
    if ((*(int *)(lVar1 + 0x90) == 3) &&
       (dVar6 = *(double *)(lVar1 + 0x110) - local_160,
       dVar4 = *(double *)(lVar1 + 0x108) - local_168,
       dVar5 = *(double *)(lVar1 + 0x100) - local_170,
       dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6 < DAT_7ffada855378)) break;
    plVar3 = plVar3 + 1;
  }
  return;
}



/***** FUNCTION next_page @ 7ffada66a420 | method *****/


/* public: void __cdecl cockpit::avKneeboard::next_page(void) __ptr64 */

void __thiscall cockpit::avKneeboard::next_page(avKneeboard *this)

{
                    /* 0x25a420  5158  ?next_page@avKneeboard@cockpit@@QEAAXXZ */
  *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + 1;
  if ((ulonglong)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) <=
      (ulonglong)*(uint *)(this + 0x40c)) {
    *(undefined4 *)(this + 0x40c) = 0;
  }
  if (*(int *)(this + 0x498) != 0) {
    *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
    return;
  }
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  return;
}



/***** FUNCTION FUN_7ffada66a530 @ 7ffada66a530 | method *****/


longlong *
FUN_7ffada66a530(longlong *param_1,ulonglong param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  void *pvVar1;
  void *_Src;
  ulonglong uVar2;
  longlong *plVar3;
  size_t _Size;
  ulonglong uVar4;
  ulonglong uVar5;
  byte local_res8;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada667a20();
  }
  uVar4 = uVar2 - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 == param_5) {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    memmove((void *)((longlong)plVar3 + param_2),param_4,param_5);
  }
  else if (param_5 < param_3) {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    pvVar1 = (void *)((longlong)plVar3 + param_2);
    memmove(pvVar1,param_4,param_5);
    memmove((void *)((longlong)pvVar1 + param_5),(void *)((longlong)pvVar1 + param_3),
            (uVar4 - param_3) + 1);
    param_1[2] = (uVar2 - param_3) + param_5;
  }
  else {
    uVar5 = param_5 - param_3;
    if (param_1[3] - uVar2 < uVar5) {
      param_1 = FUN_7ffada6644a0(param_1,uVar5,(ulonglong)local_res8,param_2,param_3,param_4,param_5
                                );
    }
    else {
      param_1[2] = uVar2 + uVar5;
      plVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar3 = (longlong *)*param_1;
      }
      pvVar1 = (void *)((longlong)plVar3 + param_2);
      _Src = (void *)((longlong)pvVar1 + param_3);
      _Size = param_5;
      if ((pvVar1 < (void *)((longlong)param_4 + param_5)) &&
         (param_4 <= (void *)((longlong)plVar3 + uVar2))) {
        if (param_4 < _Src) {
          _Size = (longlong)_Src - (longlong)param_4;
        }
        else {
          _Size = 0;
        }
      }
      memmove((void *)((longlong)_Src + uVar5),_Src,(uVar4 - param_3) + 1);
      memmove(pvVar1,param_4,_Size);
      memcpy((void *)(_Size + (longlong)pvVar1),(void *)(_Size + uVar5 + (longlong)param_4),
             param_5 - _Size);
    }
  }
  return param_1;
}



/***** FUNCTION FUN_7ffada66a740 @ 7ffada66a740 | method *****/


void FUN_7ffada66a740(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  puVar1 = (undefined4 *)param_1[1];
  uVar4 = (longlong)puVar1 - lVar5 >> 3;
  if (param_2 < uVar4) {
    puVar1 = (undefined4 *)(lVar5 + param_2 * 8);
  }
  else {
    if (param_2 <= uVar4) {
      return;
    }
    uVar3 = param_1[2] - lVar5 >> 3;
    if (uVar3 < param_2) {
      if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_7ffada5f0ae0();
      }
      uVar2 = 0x1fffffffffffffff;
      if ((uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) &&
         (uVar2 = uVar3 + (uVar3 >> 1), uVar2 < param_2)) {
        uVar2 = param_2;
      }
      _Size = uVar2 * 8;
      _Dst = malloc(_Size);
      if (_Dst == (void *)0x0) {
        ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
      }
      puVar1 = (undefined4 *)((longlong)_Dst + uVar4 * 8);
      for (lVar5 = param_2 - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
      }
      _Src = (void *)*param_1;
      memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
      if (_Src != (void *)0x0) {
        free(_Src);
      }
      *param_1 = (longlong)_Dst;
      param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
      param_1[2] = (longlong)(_Size + (longlong)_Dst);
      return;
    }
    for (lVar5 = param_2 - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
  }
  param_1[1] = (longlong)puVar1;
  return;
}



/***** FUNCTION setName @ 7ffada66a8b0 | method *****/


/* public: virtual void __cdecl cockpit::avMovingMapPoint::setName(class ed::basic_string<char>
   const & __ptr64) __ptr64 */

void __thiscall
cockpit::avMovingMapPoint::setName(avMovingMapPoint *this,basic_string<char> *param_1)

{
  basic_string<char> *pbVar1;
  
                    /* 0x25a8b0  5987
                       ?setName@avMovingMapPoint@cockpit@@UEAAXAEBV?$basic_string@D@ed@@@Z */
  if (this + 0x70 != (avMovingMapPoint *)param_1) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    FUN_7ffada5f0b10((undefined8 *)(this + 0x70),param_1,*(size_t *)pbVar1);
    return;
  }
  return;
}



/***** FUNCTION set_page_as_shortcut @ 7ffada66a9e0 | method *****/


/* public: void __cdecl cockpit::avKneeboard::set_page_as_shortcut(unsigned int) __ptr64 */

void __thiscall cockpit::avKneeboard::set_page_as_shortcut(avKneeboard *this,uint param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int *_Dst;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
                    /* 0x25a9e0  6397  ?set_page_as_shortcut@avKneeboard@cockpit@@QEAAXI@Z */
  piVar9 = *(int **)(this + 0x480);
  if (piVar9 != *(int **)(this + 0x488)) {
    while (piVar9[1] != param_1) {
      piVar9 = piVar9 + 2;
      if (piVar9 == *(int **)(this + 0x488)) {
        return;
      }
    }
    if ((piVar9 != (int *)0x0) && (*piVar9 < 0)) {
      piVar3 = *(int **)(this + 0x468);
      iVar7 = 0;
      piVar6 = *(int **)(this + 0x470);
      uVar10 = (longlong)piVar6 - (longlong)piVar3 >> 2;
      piVar4 = piVar3;
      if (uVar10 != 0) {
        do {
          if (*piVar4 == -1) {
            piVar3[iVar7] = piVar9[1];
            *piVar9 = iVar7;
            return;
          }
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 1;
        } while ((ulonglong)(longlong)iVar7 < uVar10);
      }
      iVar7 = piVar9[1];
      if (piVar6 == *(int **)(this + 0x478)) {
        if (uVar10 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_7ffada5f0ae0();
        }
        uVar8 = (longlong)*(int **)(this + 0x478) - (longlong)piVar3 >> 2;
        uVar1 = uVar10 + 1;
        uVar5 = 0x3fffffffffffffff;
        if ((uVar8 <= 0x3fffffffffffffff - (uVar8 >> 1)) &&
           (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
          uVar5 = uVar1;
        }
        piVar3 = malloc(uVar5 * 4);
        if (piVar3 == (int *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 * 4);
        }
        piVar4 = *(int **)(this + 0x468);
        piVar2 = *(int **)(this + 0x470);
        piVar3[uVar10] = iVar7;
        _Dst = piVar3;
        if (piVar6 != piVar2) {
          memmove(piVar3,piVar4,(longlong)piVar6 - (longlong)piVar4);
          _Dst = piVar3 + uVar10 + 1;
          piVar4 = piVar6;
        }
        memmove(_Dst,piVar4,(longlong)piVar2 - (longlong)piVar4);
        if (*(void **)(this + 0x468) != (void *)0x0) {
          free(*(void **)(this + 0x468));
        }
        *(int **)(this + 0x468) = piVar3;
        piVar6 = piVar3 + uVar1;
        *(int **)(this + 0x470) = piVar6;
        *(int **)(this + 0x478) = piVar3 + uVar5;
      }
      else {
        *piVar6 = iVar7;
        *(longlong *)(this + 0x470) = *(longlong *)(this + 0x470) + 4;
        piVar6 = *(int **)(this + 0x470);
      }
      *piVar9 = (int)((longlong)piVar6 - *(longlong *)(this + 0x468) >> 2) + -1;
    }
  }
  return;
}



/***** FUNCTION to_map_units @ 7ffada66af50 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class osg::Vec3d __cdecl cockpit::avKneeboard::to_map_units(class osg::Vec3d const &
   __ptr64)const __ptr64 */

Vec3d * __thiscall cockpit::avKneeboard::to_map_units(avKneeboard *this,Vec3d *param_1)

{
  undefined8 uVar1;
  ITerrain *pIVar2;
  undefined8 *puVar3;
  undefined8 *in_R8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  double local_28;
  undefined8 local_20 [2];
  ulonglong local_10;
  
                    /* 0x25af50  6728
                       ?to_map_units@avKneeboard@cockpit@@AEBA?AVVec3d@osg@@AEBV34@@Z */
  local_10 = DAT_7ffada94e840 ^ (ulonglong)auStack_98;
  if (this[0x408] == (avKneeboard)0x0) {
    uVar1 = in_R8[1];
    *(undefined8 *)param_1 = *in_R8;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = in_R8[2];
  }
  else {
    local_78 = *(undefined4 *)in_R8;
    uStack_74 = *(undefined4 *)((longlong)in_R8 + 4);
    uStack_70 = *(undefined4 *)(in_R8 + 1);
    uStack_6c = *(undefined4 *)((longlong)in_R8 + 0xc);
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = in_R8[2];
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)pIVar2 + 0xb0))(pIVar2,local_40);
    local_60 = *puVar3;
    uStack_58 = puVar3[1];
    local_50 = puVar3[2];
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    local_48 = (**(code **)(*(longlong *)pIVar2 + 0xa8))(pIVar2);
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    (**(code **)(*(longlong *)pIVar2 + 0x150))(pIVar2,&local_78,&local_28,local_20);
    *(double *)param_1 = local_28 / *(double *)(this + 0x400);
    *(undefined8 *)(param_1 + 8) = local_48;
    *(undefined8 *)(param_1 + 0x10) = local_20[0];
  }
  return param_1;
}



/***** FUNCTION unset_page_as_shortcut @ 7ffada66b080 | method *****/


/* public: void __cdecl cockpit::avKneeboard::unset_page_as_shortcut(unsigned int) __ptr64 */

void __thiscall cockpit::avKneeboard::unset_page_as_shortcut(avKneeboard *this,uint param_1)

{
  int *piVar1;
  
                    /* 0x25b080  6785  ?unset_page_as_shortcut@avKneeboard@cockpit@@QEAAXI@Z */
  piVar1 = *(int **)(this + 0x480);
  if (piVar1 != *(int **)(this + 0x488)) {
    while (piVar1[1] != param_1) {
      piVar1 = piVar1 + 2;
      if (piVar1 == *(int **)(this + 0x488)) {
        return;
      }
    }
    if (-1 < *piVar1) {
      *(undefined4 *)(*(longlong *)(this + 0x468) + (longlong)*piVar1 * 4) = 0xffffffff;
      *piVar1 = -1;
      piVar1 = *(int **)(this + 0x470);
      while ((*(int **)(this + 0x468) != piVar1 &&
             (piVar1 = (int *)(*(longlong *)(this + 0x470) + -4), *piVar1 == -1))) {
        *(int **)(this + 0x470) = piVar1;
      }
    }
  }
  return;
}



/***** FUNCTION avMovingMap @ 7ffada673810 | method *****/


/* public: __cdecl cockpit::avMovingMap::avMovingMap(void) __ptr64 */

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this)

{
                    /* 0x263810  355  ??0avMovingMap@cockpit@@QEAA@XZ */
  *(undefined ***)this = vftable;
  Graphics::Camera::Camera((Camera *)(this + 8),0);
  *(undefined8 *)(this + 0x318) = 0xbff0000000000000;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0x310] = (avMovingMap)0x1;
  return this;
}



/***** FUNCTION check_camera_orientation @ 7ffada6738c0 | method *****/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avMovingMap::check_camera_orientation(void) __ptr64 */

void __thiscall cockpit::avMovingMap::check_camera_orientation(avMovingMap *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  double local_res8;
  float local_58;
  uint local_54;
  float local_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
                    /* 0x2638c0  2665  ?check_camera_orientation@avMovingMap@cockpit@@IEAAXXZ */
  this[0x310] = (avMovingMap)0x1;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 600) = 0;
  local_res8 = 0.0;
  *(undefined8 *)(this + 0x238) = 0x3f800000;
  *(undefined8 *)(this + 0x24c) = 0x3f800000;
  *(undefined4 *)(this + 0x260) = 0x3f800000;
  cVar1 = (**(code **)(*(longlong *)this + 8))(0,&local_res8);
  if (cVar1 != '\0') {
    fVar3 = (float)local_res8;
    this[0x310] = (avMovingMap)0x1;
    fVar2 = sinf(fVar3);
    local_58 = cosf(fVar3);
    uStack_4c = (undefined4)_DAT_7ffada84dde0;
    fStack_48 = (float)((ulonglong)_DAT_7ffada84dde0 >> 0x20);
    fStack_44 = (float)uRam00007ffada84dde8;
    uStack_40 = (undefined4)((ulonglong)uRam00007ffada84dde8 >> 0x20);
    local_54 = 0;
    local_3c = 0;
    local_38 = (ulonglong)((uint)fVar2 ^ DAT_7ffada84cdb0);
    local_30 = (ulonglong)(uint)local_58;
    local_50 = fVar2;
    FUN_7ffada6135c0((float *)(this + 0x238),&local_58);
  }
  fVar2 = DAT_7ffada855ae0;
  this[0x310] = (avMovingMap)0x1;
  fVar3 = sinf(fVar2);
  local_58 = cosf(fVar2);
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_50 = 0.0;
  uStack_4c = 0;
  local_54 = (uint)fVar3 ^ DAT_7ffada84cdb0;
  local_30 = 0x3f800000;
  fStack_48 = fVar3;
  fStack_44 = local_58;
  FUN_7ffada6135c0((float *)(this + 0x238),&local_58);
  return;
}



/***** FUNCTION check_camera_volume @ 7ffada673a40 | method *****/


/* protected: void __cdecl cockpit::avMovingMap::check_camera_volume(bool,float,float,float,float)
   __ptr64 */

void __thiscall
cockpit::avMovingMap::check_camera_volume
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  double dVar1;
  float fVar2;
  
                    /* 0x263a40  2668  ?check_camera_volume@avMovingMap@cockpit@@IEAAX_NMMMM@Z */
  if ((((*(float *)(this + 0x304) < *(float *)(this + 0x2f8)) ||
       (*(float *)(this + 0x308) < *(float *)(this + 0x2fc))) ||
      (*(float *)(this + 0x30c) < *(float *)(this + 0x300))) || (param_1)) {
    dVar1 = (double)(**(code **)(*(longlong *)this + 0x10))();
    *(undefined4 *)(this + 0x300) = 0xbdcccccd;
    fVar2 = (float)dVar1;
    this[0x310] = (avMovingMap)0x1;
    *(undefined4 *)(this + 0x30c) = 0x462be000;
    *(float *)(this + 0x2fc) = fVar2 * param_4;
    *(float *)(this + 0x2f8) = fVar2 * param_2;
    *(float *)(this + 0x308) = fVar2 * param_5;
    *(float *)(this + 0x304) = fVar2 * param_3;
  }
  return;
}



/***** FUNCTION get_camera @ 7ffada673b50 | method *****/


/* public: class Graphics::Camera const & __ptr64 __cdecl
   cockpit::avMovingMap::get_camera(bool,float,float,float,float) __ptr64 */

Camera * __thiscall
cockpit::avMovingMap::get_camera
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 local_38 [48];
  
                    /* 0x263b50  3784
                       ?get_camera@avMovingMap@cockpit@@QEAAAEBVCamera@Graphics@@_NMMMM@Z */
  dVar4 = wTime::GetModelTime();
  if (dVar4 != *(double *)(this + 0x318)) {
    dVar4 = wTime::GetModelTime();
    *(double *)(this + 0x318) = dVar4;
    (**(code **)(*(longlong *)this + 0x28))(this);
    check_camera_orientation(this);
    check_camera_volume(this,param_1,param_2,param_3,param_4,param_5);
    (**(code **)(*(longlong *)this + 0x30))(this);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this,local_38);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
    this[0x310] = (avMovingMap)0x1;
    *(undefined8 *)(this + 0x268) = uVar1;
    *(undefined4 *)(this + 0x270) = uVar2;
  }
  return (Camera *)(this + 8);
}



/***** FUNCTION avMovingMapPoint @ 7ffada674330 | method *****/


/* public: __cdecl cockpit::avMovingMapPoint::avMovingMapPoint(void) __ptr64 */

avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this)

{
                    /* 0x264330  357  ??0avMovingMapPoint@cockpit@@QEAA@XZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  *(undefined4 *)(this + 0x10) = 0x7f7fffff;
  *(undefined4 *)(this + 0x14) = 0x7f7fffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined4 *)(this + 0x1c) = 0xff7fffff;
  *(undefined4 *)(this + 0x20) = 0xff7fffff;
  *(undefined4 *)(this + 0x24) = 0xff7fffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0x100;
  avDrawCachedObj::avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  Common::FakeUnknown<Common::Identifiable>::FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)(this + 0x58));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x120) = 0xc2480000;
  *(undefined4 *)(this + 0x124) = 0xc2480000;
  *(undefined4 *)(this + 0x128) = 0xc2480000;
  *(undefined4 *)(this + 300) = 0x42480000;
  *(undefined4 *)(this + 0x130) = 0x42480000;
  *(undefined4 *)(this + 0x134) = 0x42480000;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  return this;
}



/***** FUNCTION ~avMovingMapPoint @ 7ffada6744d0 | destructor *****/


/* public: virtual __cdecl cockpit::avMovingMapPoint::~avMovingMapPoint(void) __ptr64 */

void __thiscall cockpit::avMovingMapPoint::~avMovingMapPoint(avMovingMapPoint *this)

{
                    /* 0x2644d0  812  ??1avMovingMapPoint@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  if (0xf < *(ulonglong *)(this + 0x88)) {
    free(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  Common::FakeUnknown<Common::Identifiable>::~FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)(this + 0x58));
  avDrawCachedObj::~avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  SimpleOctTreeLoad::~SimpleOctTreeLoad((SimpleOctTreeLoad *)this);
  return;
}



/***** FUNCTION setPoint @ 7ffada6746c0 | method *****/


/* public: void __cdecl cockpit::avMovingMapPoint::setPoint(class osg::Vec3d const & __ptr64)
   __ptr64 */

void __thiscall cockpit::avMovingMapPoint::setPoint(avMovingMapPoint *this,Vec3d *param_1)

{
  undefined8 uVar1;
  BoundingBoxImpl<osg::Vec3f> *pBVar2;
  float local_28 [8];
  
                    /* 0x2646c0  6025  ?setPoint@avMovingMapPoint@cockpit@@QEAAXAEBVVec3d@osg@@@Z */
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  pBVar2 = (BoundingBoxImpl<osg::Vec3f> *)
           FUN_7ffada673fd0((float *)(this + 0x120),local_28,(double *)(this + 0xa0));
  SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar2);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 8);
  return;
}



/***** FUNCTION setRotate @ 7ffada674800 | method *****/


/* public: void __cdecl cockpit::avMovingMapPoint::setRotate(float) __ptr64 */

void __thiscall cockpit::avMovingMapPoint::setRotate(avMovingMapPoint *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
                    /* 0x264800  6049  ?setRotate@avMovingMapPoint@cockpit@@QEAAXM@Z */
  fVar4 = (float)((uint)param_1 ^ DAT_7ffada84cdb0);
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  dVar2 = sin((double)fVar4);
  dVar3 = cos((double)fVar4);
  dVar1 = *(double *)(this + 0xa0);
  *(double *)(this + 0xa0) = dVar1 * dVar3 - *(double *)(this + 0xe0) * dVar2;
  *(double *)(this + 0xe0) = *(double *)(this + 0xe0) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xa8);
  *(double *)(this + 0xa8) = dVar1 * dVar3 - *(double *)(this + 0xe8) * dVar2;
  *(double *)(this + 0xe8) = *(double *)(this + 0xe8) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xb0);
  *(double *)(this + 0xb0) = dVar1 * dVar3 - *(double *)(this + 0xf0) * dVar2;
  *(double *)(this + 0xf0) = *(double *)(this + 0xf0) * dVar3 + dVar1 * dVar2;
  return;
}



/***** FUNCTION ~avDrawCachedObj @ 7ffada7eb570 | destructor *****/


/* public: virtual __cdecl cockpit::avDrawCachedObj::~avDrawCachedObj(void) __ptr64 */

void __thiscall cockpit::avDrawCachedObj::~avDrawCachedObj(avDrawCachedObj *this)

{
                    /* 0x3db570  765  ??1avDrawCachedObj@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  reset_draw_objects(this);
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}



/***** FUNCTION reset_draw_objects @ 7ffada7eb5b0 | method *****/


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



/***** FUNCTION LuaDofile @ 7ffada7ed350 | method *****/


/* public: static int __cdecl cockpit::ccLuaLoader::LuaDofile(struct lua_State * __ptr64,class
   ed::basic_string<char> const & __ptr64,bool) */

int __cdecl
cockpit::ccLuaLoader::LuaDofile(lua_State *param_1,basic_string<char> *param_2,bool param_3)

{
  CheckedLoader *this;
  
                    /* 0x3dd350  2046
                       ?LuaDofile@ccLuaLoader@cockpit@@SAHPEAUlua_State@@AEBV?$basic_string@D@ed@@_N@Z
                        */
  if (*(longlong *)(param_2 + 0x10) != 0) {
    this = Lua::CheckedLoader::instance();
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(basic_string<char> **)param_2;
    }
    Lua::CheckedLoader::loadFile(this,param_1,(char *)param_2,(char *)0x0);
    return 0;
  }
  return -1;
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



/***** FUNCTION ~SimpleOctTreeLoad @ 7ffada7f62a0 | destructor *****/


/* public: virtual __cdecl cockpit::SimpleOctTreeLoad::~SimpleOctTreeLoad(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeLoad::~SimpleOctTreeLoad(SimpleOctTreeLoad *this)

{
                    /* 0x3e62a0  701  ??1SimpleOctTreeLoad@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  remove_from_node(this);
  *(undefined ***)this = ed::Shared::vftable;
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



/***** FUNCTION AddObject @ 7ffada7f6470 | method *****/


/* public: bool __cdecl cockpit::SimpleOctTree::AddObject(class ed::basic_string<char> const &
   __ptr64,class cockpit::SimpleOctTreeLoad * __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTree::AddObject
          (SimpleOctTree *this,basic_string<char> *param_1,SimpleOctTreeLoad *param_2)

{
  SimpleOctTreeLoad *pSVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong *plVar6;
  int *piVar7;
  longlong local_18 [2];
  
                    /* 0x3e6470  1889
                       ?AddObject@SimpleOctTree@cockpit@@QEAA_NAEBV?$basic_string@D@ed@@PEAVSimpleOctTreeLoad@2@@Z
                        */
  if ((param_2 != (SimpleOctTreeLoad *)0x0) && (*(longlong *)(this + 0x18) != 0)) {
    plVar6 = FUN_7ffada7f5b90((float *)(this + 0x20),local_18,(undefined8 *)param_1);
    lVar3 = *plVar6;
    pSVar1 = param_2 + 8;
    if (pSVar1 != (SimpleOctTreeLoad *)0x0) {
      LOCK();
      *(int *)pSVar1 = *(int *)pSVar1 + 1;
      UNLOCK();
    }
    piVar7 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar4 = *(undefined8 **)(lVar3 + 0x30), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(SimpleOctTreeLoad **)(lVar3 + 0x30) = param_2;
    bVar5 = SimpleOctTreeNode::AddObject(*(SimpleOctTreeNode **)(this + 0x18),param_2);
    return bVar5;
  }
  return false;
}



/***** FUNCTION AddObject @ 7ffada7f6520 | method *****/


/* public: bool __cdecl cockpit::SimpleOctTree::AddObject(class cockpit::SimpleOctTreeLoad *
   __ptr64) __ptr64 */

bool __thiscall cockpit::SimpleOctTree::AddObject(SimpleOctTree *this,SimpleOctTreeLoad *param_1)

{
  float fVar1;
  SimpleOctTreeNode *pSVar2;
  longlong lVar3;
  float *pfVar4;
  bool bVar5;
  int iVar6;
  
                    /* 0x3e6520  1890
                       ?AddObject@SimpleOctTree@cockpit@@QEAA_NPEAVSimpleOctTreeLoad@2@@Z */
  if ((param_1 == (SimpleOctTreeLoad *)0x0) ||
     (pSVar2 = *(SimpleOctTreeNode **)(this + 0x18), pSVar2 == (SimpleOctTreeNode *)0x0)) {
    return false;
  }
  *(int *)(pSVar2 + 0x1c) = *(int *)(pSVar2 + 0x1c) + 1;
  lVar3 = *(longlong *)(pSVar2 + 0x30);
  if ((lVar3 == 0) || (iVar6 = FUN_7ffada7f6d70((float *)pSVar2,(longlong)param_1), iVar6 < 0)) {
    FUN_7ffada7f73b0((float *)pSVar2,(int *)param_1);
    bVar5 = true;
  }
  else {
    bVar5 = SimpleOctTreeNode::AddObject
                      (*(SimpleOctTreeNode **)(lVar3 + (longlong)iVar6 * 8),param_1);
  }
  pfVar4 = *(float **)(pSVar2 + 0x50);
  if (((byte)pSVar2[0x58] < (byte)*(SimpleOctTreeNode *)((longlong)pfVar4 + 0xd)) &&
     ((int)pfVar4[1] < *(int *)(pSVar2 + 0x1c))) {
    fVar1 = *pfVar4;
    if (*(char *)(pfVar4 + 3) == '\0') {
      if ((*(float *)(pSVar2 + 0xc) - *(float *)pSVar2 <= fVar1) &&
         (*(float *)(pSVar2 + 0x14) - *(float *)(pSVar2 + 8) <= fVar1)) {
        return bVar5;
      }
    }
    else if (((*(float *)(pSVar2 + 0xc) - *(float *)pSVar2 <= fVar1) &&
             (*(float *)(pSVar2 + 0x14) - *(float *)(pSVar2 + 8) <= fVar1)) &&
            (*(float *)(pSVar2 + 0x10) - *(float *)(pSVar2 + 4) <= fVar1)) {
      return bVar5;
    }
    FUN_7ffada7f7af0(pSVar2);
  }
  return bVar5;
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



/***** FUNCTION check_segment @ 7ffada7f7f40 | method *****/


/* protected: virtual bool __cdecl cockpit::SimpleOctTreeLoad::check_segment(class osg::Vec3f const
   & __ptr64,class osg::Vec3f const & __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTreeLoad::check_segment(SimpleOctTreeLoad *this,Vec3f *param_1,Vec3f *param_2)

{
  ulonglong uVar1;
  
                    /* 0x3e7f40  2691
                       ?check_segment@SimpleOctTreeLoad@cockpit@@MEAA_NAEBVVec3f@osg@@0@Z */
  if (this[0x30] == (SimpleOctTreeLoad)0x0) {
    uVar1 = FUN_7ffada5f9fc0((float *)(this + 0x10),(float *)param_1,(float *)param_2);
    return (char)uVar1 != '\0';
  }
  return false;
}



/***** FUNCTION check_sphere @ 7ffada7f7f70 | method *****/


/* protected: virtual bool __cdecl cockpit::SimpleOctTreeLoad::check_sphere(class osg::Vec3f const &
   __ptr64,float const & __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTreeLoad::check_sphere(SimpleOctTreeLoad *this,Vec3f *param_1,float *param_2)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  
                    /* 0x3e7f70  2699
                       ?check_sphere@SimpleOctTreeLoad@cockpit@@MEAA_NAEBVVec3f@osg@@AEBM@Z */
  if (this[0x30] == (SimpleOctTreeLoad)0x0) {
    uVar1 = FUN_7ffada5fa0c0((float *)(this + 0x10),(float *)param_1,*param_2);
    return CONCAT31(extraout_var,uVar1) != 3;
  }
  return false;
}



/***** FUNCTION create_quad_tree @ 7ffada7f8000 | method *****/


/* public: static class cockpit::SimpleOctTree * __ptr64 __cdecl
   cockpit::SimpleOctTree::create_quad_tree(class osg::BoundingBoxImpl<class osg::Vec3f> const &
   __ptr64,float) */

SimpleOctTree * __cdecl
cockpit::SimpleOctTree::create_quad_tree(BoundingBoxImpl<osg::Vec3f> *param_1,float param_2)

{
  SimpleOctTree *pSVar1;
  
                    /* 0x3e8000  2890
                       ?create_quad_tree@SimpleOctTree@cockpit@@SAPEAV12@AEBV?$BoundingBoxImpl@VVec3f@osg@@@osg@@M@Z
                        */
  pSVar1 = (SimpleOctTree *)FUN_7ffada82b29c(0x78);
  if (pSVar1 == (SimpleOctTree *)0x0) {
    pSVar1 = (SimpleOctTree *)0x0;
  }
  else {
    pSVar1 = (SimpleOctTree *)SimpleOctTree(pSVar1);
  }
  pSVar1[0x6c] = (SimpleOctTree)0x0;
  *(float *)(pSVar1 + 0x60) = param_2;
  Initialize(pSVar1,param_1);
  return pSVar1;
}



/***** FUNCTION read_airdrome_id @ 7ffada802b60 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned int __cdecl cockpit::read_airdrome_id(class Lua::Config & __ptr64) */

uint __cdecl cockpit::read_airdrome_id(Config *param_1)

{
  bool bVar1;
  uint uVar2;
  wAirdrome *pwVar3;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
                    /* 0x3f2b60  5484  ?read_airdrome_id@cockpit@@YAIAEAVConfig@Lua@@@Z */
  local_10 = DAT_7ffada94e840 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  Lua::Config::get(param_1,s_airdromeId_7ffada86db40);
  bVar1 = Lua::Config::pop(param_1,local_38);
  if (bVar1) {
    pwVar3 = wAirdrome::getAirdromeByLev4((ushort)local_38[0]);
    if (pwVar3 != (wAirdrome *)0x0) {
      return *(uint *)(pwVar3 + 0x1c);
    }
  }
  else {
    uStack_28 = 0;
    local_20 = _DAT_7ffada84dd60;
    uStack_18 = uRam00007ffada84dd68;
    local_30 = (void *)0x0;
    Lua::Config::get(param_1,s_helipadId_7ffada86db50);
    bVar1 = Lua::Config::pop(param_1,(basic_string<char> *)&local_30);
    if (bVar1) {
      uVar2 = (**(code **)(**(longlong **)globalDispatcher_exref + 0x148))
                        (*(longlong **)globalDispatcher_exref,&local_30);
      if (0xf < uStack_18) {
        free(local_30);
      }
      return uVar2;
    }
    if (0xf < uStack_18) {
      free(local_30);
    }
  }
  return 0;
}



/***** FUNCTION read_waypoint @ 7ffada802d30 | method *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl cockpit::read_waypoint(struct Waypoint & __ptr64,class Lua::Config & __ptr64) */

void __cdecl cockpit::read_waypoint(Waypoint *param_1,Config *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong ***ppplVar3;
  basic_string<char> *pbVar4;
  int iVar5;
  longlong lVar6;
  basic_string<char> *pbVar7;
  Waypoint WVar8;
  undefined1 auStack_78 [32];
  longlong **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0x3f2d30  5496  ?read_waypoint@cockpit@@YAXAEAUWaypoint@@AEAVConfig@Lua@@@Z
                        */
  local_18 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_58 = (longlong **)0x0;
  Lua::Config::get(param_2,&DAT_7ffada855cf4);
  Lua::Config::pop(param_2,(basic_string<char> *)&local_58);
  ppplVar3 = &local_58;
  if (0xf < local_40) {
    ppplVar3 = (longlong ***)local_58;
  }
  if (local_48 == 7) {
    iVar5 = *(int *)ppplVar3 + -0x656b6154;
    if ((iVar5 == 0) && (iVar5 = *(ushort *)((longlong)ppplVar3 + 4) - 0x664f, iVar5 == 0)) {
      iVar5 = *(byte *)((longlong)ppplVar3 + 6) - 0x66;
    }
    if (iVar5 != 0) goto LAB_7ffada802dd4;
LAB_7ffada802e5c:
    param_1[0x22] = (Waypoint)0x32;
  }
  else {
LAB_7ffada802dd4:
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0xe) {
      lVar6 = (longlong)*ppplVar3 + -0x5066664f656b6154;
      if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(ppplVar3 + 1) - 0x696b7261, lVar6 == 0)) {
        lVar6 = (ulonglong)*(ushort *)((longlong)ppplVar3 + 0xc) - 0x676e;
      }
      if (lVar6 == 0) goto LAB_7ffada802e5c;
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0x11) {
      lVar6 = (longlong)*ppplVar3 + -0x5066664f656b6154;
      if ((lVar6 == 0) && (lVar6 = (longlong)ppplVar3[1] + -0x6f48676e696b7261, lVar6 == 0)) {
        lVar6 = (ulonglong)*(byte *)(ppplVar3 + 2) - 0x74;
      }
      if (lVar6 == 0) goto LAB_7ffada802e5c;
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0xd) {
      lVar6 = (longlong)*ppplVar3 + -0x52676e69646e614c;
      if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(ppplVar3 + 1) - 0x41754665, lVar6 == 0)) {
        lVar6 = (ulonglong)*(byte *)((longlong)ppplVar3 + 0xc) - 0x72;
      }
      if (lVar6 == 0) {
        param_1[0x22] = (Waypoint)0x14;
        goto LAB_7ffada802ed3;
      }
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if ((local_48 == 4) && (*(int *)ppplVar3 == 0x646e614c)) {
      param_1[0x22] = (Waypoint)0xe;
    }
    else {
      param_1[0x22] = (Waypoint)0x0;
    }
  }
LAB_7ffada802ed3:
  Lua::Config::get(param_2,s_alt_type_7ffada855d00);
  bVar2 = Lua::Config::pop(param_2,(basic_string<char> *)&local_58);
  if (bVar2) {
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 5) {
      iVar5 = *(int *)ppplVar3 + -0x49444152;
      if (iVar5 == 0) {
        iVar5 = *(byte *)((longlong)ppplVar3 + 4) - 0x4f;
      }
      WVar8 = (Waypoint)(iVar5 == 0);
    }
    else {
      WVar8 = (Waypoint)0x0;
    }
    param_1[0xc] = WVar8;
  }
  Lua::Config::get(param_2,&DAT_7ffada84ea58);
  Lua::Config::pop(param_2,(float *)param_1);
  Lua::Config::get(param_2,&DAT_7ffada84ea5c);
  Lua::Config::pop(param_2,(float *)(param_1 + 8));
  Lua::Config::get(param_2,&DAT_7ffada855c24);
  Lua::Config::pop(param_2,(float *)(param_1 + 4));
  Lua::Config::get(param_2,s_speed_7ffada8502a8);
  Lua::Config::pop(param_2,(float *)(param_1 + 0x10));
  Lua::Config::get(param_2,s_speed_locked_7ffada86db18);
  Lua::Config::pop(param_2,(bool *)(param_1 + 0x20));
  Lua::Config::get(param_2,&DAT_7ffada86db28);
  Lua::Config::pop(param_2,(double *)(param_1 + 0x18));
  Lua::Config::get(param_2,s_ETA_locked_7ffada86db30);
  Lua::Config::pop(param_2,(bool *)(param_1 + 0x21));
  Lua::Config::get(param_2,&DAT_7ffada84d9bc);
  pbVar7 = (basic_string<char> *)(param_1 + 0x30);
  Lua::Config::pop(param_2,pbVar7);
  pbVar4 = (basic_string<char> *)
           (**(code **)(**(longlong **)globalDispatcher_exref + 0x198))
                     (*(longlong **)globalDispatcher_exref,local_38,pbVar7);
  if (pbVar7 != pbVar4) {
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      free(*(void **)pbVar7);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xf;
    *pbVar7 = (basic_string<char>)0x0;
    uVar1 = *(undefined8 *)(pbVar4 + 8);
    *(undefined8 *)pbVar7 = *(undefined8 *)pbVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(pbVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pbVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(pbVar4 + 0x10) = 0;
    *(undefined8 *)(pbVar4 + 0x18) = 0xf;
    *pbVar4 = (basic_string<char>)0x0;
  }
  if (0xf < local_20) {
    free(local_38[0]);
  }
  if (0xf < local_40) {
    free(local_58);
  }
  return;
}



/***** FUNCTION FinalRelease @ 7ffada8276ec | method *****/


void __thiscall
Common::FakeUnknown<Common::Identifiable>::FinalRelease(FakeUnknown<Common::Identifiable> *this)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada8276ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FinalRelease(this);
  return;
}



/***** FUNCTION lua_settop @ 7ffada82a043 | method *****/


void lua_settop(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_settop();
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



/***** FUNCTION lua_pushnumber @ 7ffada82a0a9 | method *****/


void lua_pushnumber(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a0a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnumber();
  return;
}



/***** FUNCTION lua_type @ 7ffada82a0d9 | method *****/


void lua_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x7ffada82a0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_type();
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



/***** FUNCTION thunk_FUN_7ffada82ad30 @ 7ffada82b0e0 | thunk *****/


undefined1 (*) [32]
thunk_FUN_7ffada82ad30(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  longlong lVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_7ffada94e89c & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_7ffada94e89c & 4) != 0)) {
      puVar2 = *param_1;
      do {
        auVar6._0_8_ = -(ulonglong)(*(ulonglong *)*param_1 == param_3);
        auVar6._8_8_ = -(ulonglong)(*(ulonglong *)(*param_1 + 8) == param_3);
        uVar1 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)(auVar6._8_8_ >> 7) & 1) << 8 |
                (ushort)((byte)(auVar6._8_8_ >> 0xf) & 1) << 9 |
                (ushort)((byte)(auVar6._8_8_ >> 0x17) & 1) << 10 |
                (ushort)((byte)(auVar6._8_8_ >> 0x1f) & 1) << 0xb |
                (ushort)((byte)(auVar6._8_8_ >> 0x27) & 1) << 0xc |
                (ushort)((byte)(auVar6._8_8_ >> 0x2f) & 1) << 0xd |
                (ushort)((byte)(auVar6._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar6._8_8_ >> 0x3f) << 0xf;
        if (uVar1 != 0) {
          uVar3 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar3);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(ulonglong *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    }
    return param_1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_3;
  auVar6 = vpunpcklqdq_avx(auVar10,auVar10);
  puVar2 = *param_1;
  do {
    lVar9 = auVar6._0_8_;
    auVar7._0_8_ = -(ulonglong)(lVar9 == *(longlong *)*param_1);
    lVar11 = auVar6._8_8_;
    auVar7._8_8_ = -(ulonglong)(lVar11 == *(longlong *)(*param_1 + 8));
    auVar7._16_8_ = -(ulonglong)(lVar9 == SUB248(*(undefined1 (*) [24])*param_1,0x10));
    auVar7._24_8_ = -(ulonglong)(lVar11 == *(longlong *)(*param_1 + 0x18));
    uVar3 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
            (uint)((byte)(auVar7._24_8_ >> 7) & 1) << 0x18 |
            (uint)((byte)(auVar7._24_8_ >> 0xf) & 1) << 0x19 |
            (uint)((byte)(auVar7._24_8_ >> 0x17) & 1) << 0x1a |
            (uint)((byte)(auVar7._24_8_ >> 0x1f) & 1) << 0x1b |
            (uint)((byte)(auVar7._24_8_ >> 0x27) & 1) << 0x1c |
            (uint)((byte)(auVar7._24_8_ >> 0x2f) & 1) << 0x1d |
            (uint)((byte)(auVar7._24_8_ >> 0x37) & 1) << 0x1e |
            (uint)(byte)(auVar7._24_8_ >> 0x3f) << 0x1f;
    if (uVar3 != 0) goto LAB_7ffada82adb1;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
  uVar4 = (uint)uVar5 & 0x1c;
  if ((uVar5 & 0x1c) != 0) {
    auVar7 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_7ffada872040 + -(ulonglong)uVar4),*param_1)
    ;
    auVar8._0_8_ = -(ulonglong)(auVar7._0_8_ == lVar9);
    auVar8._8_8_ = -(ulonglong)(auVar7._8_8_ == lVar11);
    auVar8._16_8_ = -(ulonglong)(auVar7._16_8_ == lVar9);
    auVar8._24_8_ = -(ulonglong)(auVar7._24_8_ == lVar11);
    auVar7 = vpand_avx2(auVar8,*(undefined1 (*) [32])(&DAT_7ffada872040 + -(ulonglong)uVar4));
    uVar3 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
    if (uVar3 != 0) {
LAB_7ffada82adb1:
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar4);
  }
  return param_1;
}



/***** FUNCTION thunk_FUN_7ffada82ae20 @ 7ffada82b0f0 | thunk *****/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
thunk_FUN_7ffada82ae20
          (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [16],
          ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [32];
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t _Size;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  longlong lVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  pauVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar2 = FUN_7ffada82ab40(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pauVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_7ffada94e89c & 4) == 0) || (uVar4 < 0x10)) {
          pauVar6 = (undefined1 (*) [32])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar6) {
            lVar8 = (longlong)param_3 - (longlong)param_1;
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                pcVar5 = *param_1 + 1;
                while (*pcVar5 == pcVar5[lVar8]) {
                  pcVar5 = pcVar5 + 1;
                  if ((longlong)pcVar5 - (longlong)param_1 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
              lVar8 = lVar8 + -1;
            } while (param_1 != pauVar6);
          }
        }
        else if (param_4 < 0x11) {
          uVar7 = (uint)param_4;
          uVar9 = 0x10 < uVar7;
          memcpy(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*(undefined1 (*) [16])*param_1,0xc,uVar7,0x10);
            if ((bool)uVar9) {
              param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar7)) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            uVar9 = param_1 < (undefined1 (*) [32])(param_2[-1] + 0x10);
          } while (param_1 <= (undefined1 (*) [32])(param_2[-1] + 0x10));
          bVar10 = param_2 < param_1;
          _Size = (longlong)param_2 - (longlong)param_1;
          if (_Size != 0) {
            memcpy(auStack_58,param_1,_Size);
            iVar3 = pcmpestri(auVar1,auStack_58,0xc,uVar7,(int)_Size);
            if (bVar10) {
              pauVar2 = (undefined1 (*) [32])(*param_1 + iVar3);
            }
          }
        }
        else {
          auVar1 = *param_3;
          bVar10 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar6 = (undefined1 (*) [32])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*(undefined1 (*) [16])*param_1,0xc,0x10,0x10);
            if (bVar10) {
              if (iVar3 == 0) {
LAB_7ffada82af75:
                iVar3 = memcmp(*param_1 + 0x10,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
                if (pauVar6 < param_1) {
                  return param_2;
                }
                auVar11._0_4_ = *(uint *)*param_1 ^ auVar1._0_4_;
                auVar11._4_4_ = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                auVar11._8_4_ = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                auVar11._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                if (auVar11 == (undefined1  [16])0x0) goto LAB_7ffada82af75;
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            bVar10 = param_1 < pauVar6;
          } while (param_1 <= pauVar6);
        }
      }
    }
  }
  return pauVar2;
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



/***** FUNCTION FUN_7ffada82b29c @ 7ffada82b29c | method *****/


void FUN_7ffada82b29c(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada603070();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7ffada6b39e0();
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



/***** FUNCTION atexit @ 7ffada82b640 | method *****/


/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
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



/***** FUNCTION _Init_thread_footer @ 7ffada82b858 | method *****/


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
  uVar1 = (ulonglong)_tls_index;
  DAT_7ffada94e88c = DAT_7ffada94e88c + 1;
  *param_1 = DAT_7ffada94e88c;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_7ffada94e88c;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
                    /* WARNING: Could not recover jumptable at 0x7ffada82b8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_7ffada965fc8);
  return;
}



/***** FUNCTION FUN_7ffada82b8c4 @ 7ffada82b8c4 | method *****/


void FUN_7ffada82b8c4(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_7ffada82b92c:
                    /* WARNING: Could not recover jumptable at 0x7ffada82b938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_7ffada965fd0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_7ffada94e88c;
      goto LAB_7ffada82b92c;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_7ffada965fc8,(PSRWLOCK)&DAT_7ffada965fd0,0xffffffff,0);
  } while( true );
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



/***** FUNCTION floor @ 7ffada82c63e | method *****/


double __cdecl floor(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}



/***** FUNCTION fmod @ 7ffada82c644 | method *****/


double __cdecl fmod(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x7ffada82c644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fmod(_X,_Y);
  return dVar1;
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



/***** FUNCTION Config @ EXTERNAL:00000002 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000002: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION get @ EXTERNAL:00000003 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000003: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION pop @ EXTERNAL:00000004 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000004: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ~Factory @ EXTERNAL:0000000c | destructor *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000000c: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ED_get_time @ EXTERNAL:00000016 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000016: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION set @ EXTERNAL:00000017 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000017: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION string_format @ EXTERNAL:00000022 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000022: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION format @ EXTERNAL:00000024 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000024: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ED_lua_pcall @ EXTERNAL:00000025 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000025: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION call_func @ EXTERNAL:00000026 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000026: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ED_get_ticks @ EXTERNAL:00000027 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000027: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION finish @ EXTERNAL:00000028 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000028: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION call_log @ EXTERNAL:00000029 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000029: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ~Config @ EXTERNAL:00000051 | destructor *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000051: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ED_lua_close @ EXTERNAL:00000058 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000058: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION pop @ EXTERNAL:0000005a | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000005a: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION pop @ EXTERNAL:0000005b | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000005b: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION pop @ EXTERNAL:0000005c | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000005c: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION pop @ EXTERNAL:0000005e | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000005e: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION open @ EXTERNAL:00000062 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000062: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION open @ EXTERNAL:00000063 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000063: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006d | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000006d: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ~FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006e | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000006e: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION fatal_out_of_memory @ EXTERNAL:00000071 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000071: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION GetAbsoluteModelTime @ EXTERNAL:000000d9 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000000d9: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION GetModelTime @ EXTERNAL:000000da | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000000da: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION wTime @ EXTERNAL:000000db | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000000db: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION KillMe @ EXTERNAL:000000df | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000000df: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION Coalition @ EXTERNAL:00000132 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000132: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION Type @ EXTERNAL:00000168 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000168: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION play_once @ EXTERNAL:00000169 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000169: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION update @ EXTERNAL:0000016c | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000016c: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION GetDefaultTerrain @ EXTERNAL:0000016f | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:0000016f: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION Camera @ EXTERNAL:00000215 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:00000215: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION getSubtitle @ EXTERNAL:000002f6 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002f6: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION print @ EXTERNAL:000002f7 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002f7: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION empty @ EXTERNAL:000002f8 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002f8: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION operator[] @ EXTERNAL:000002f9 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002f9: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION operator[] @ EXTERNAL:000002fa | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002fa: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION operator_double @ EXTERNAL:000002fb | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000002fb: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION SleepConditionVariableSRW @ EXTERNAL:000003be | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003be: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION ReleaseSRWLockExclusive @ EXTERNAL:000003cd | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003cd: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION AcquireSRWLockExclusive @ EXTERNAL:000003ce | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003ce: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION malloc @ EXTERNAL:000003e5 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003e5: Cannot marshal address space: EXTERNAL
 */

/***** FUNCTION free @ EXTERNAL:000003e7 | method *****/

/* DECOMPILATION FAILED: Exception while decompiling EXTERNAL:000003e7: Cannot marshal address space: EXTERNAL
 */

/*
CALL GRAPH
[d=1] FUN_7ffada666ba0 @ 7ffada666ba0 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada666ba0 @ 7ffada666ba0 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada666ba0 @ 7ffada666ba0 -> free @ 7ffada82b2d8
[d=1] get_camera @ 7ffada668690 -> get_camera @ 7ffada673b50
[d=1] FUN_7ffada666a70 @ 7ffada666a70 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada666a70 @ 7ffada666a70 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada666a70 @ 7ffada666a70 -> ~avKneeboard @ 7ffada665e50
[d=1] FUN_7ffada666a70 @ 7ffada666a70 -> free @ 7ffada82b2d8
[d=1] initialize @ 7ffada669260 -> initialize @ 7ffada6499b0
[d=1] initialize @ 7ffada669260 -> make_default_activity @ 7ffada64a1f0
[d=1] initialize @ 7ffada669260 -> ensured_Lua @ 7ffada6498d0
[d=1] initialize @ 7ffada669260 -> Config @ EXTERNAL:00000002
[d=1] initialize @ 7ffada669260 -> get @ EXTERNAL:00000003
[d=1] initialize @ 7ffada669260 -> pop @ EXTERNAL:0000005b
[d=1] initialize @ 7ffada669260 -> pop @ EXTERNAL:0000005e
[d=1] initialize @ 7ffada669260 -> to_map_units @ 7ffada66af50
[d=1] initialize @ 7ffada669260 -> init_waypoints @ 7ffada668a60
[d=1] initialize @ 7ffada669260 -> lua_pushnumber @ 7ffada82a0a9
[d=1] initialize @ 7ffada669260 -> set @ EXTERNAL:00000017
[d=1] initialize @ 7ffada669260 -> open @ EXTERNAL:00000063
[d=1] initialize @ 7ffada669260 -> Coalition @ EXTERNAL:00000132
[d=1] initialize @ 7ffada669260 -> lua_settop @ 7ffada82a043
[d=1] initialize @ 7ffada669260 -> call_func @ EXTERNAL:00000026
[d=1] initialize @ 7ffada669260 -> open @ EXTERNAL:00000062
[d=1] initialize @ 7ffada669260 -> pop @ EXTERNAL:0000005a
[d=1] initialize @ 7ffada669260 -> FUN_7ffada664310 @ 7ffada664310
[d=1] initialize @ 7ffada669260 -> FUN_7ffada664600 @ 7ffada664600
[d=1] initialize @ 7ffada669260 -> pop @ EXTERNAL:0000005c
[d=1] initialize @ 7ffada669260 -> find_available_coverage @ 7ffada668390
[d=1] initialize @ 7ffada669260 -> FUN_7ffada66a740 @ 7ffada66a740
[d=1] initialize @ 7ffada669260 -> init_zones @ 7ffada669100
[d=1] initialize @ 7ffada669260 -> listen_event @ 7ffada5f65d0
[d=1] initialize @ 7ffada669260 -> free @ EXTERNAL:000003e7
[d=1] initialize @ 7ffada669260 -> malloc @ EXTERNAL:000003e5
[d=1] initialize @ 7ffada669260 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=1] initialize @ 7ffada669260 -> listen_command @ 7ffada5f6390
[d=1] initialize @ 7ffada669260 -> pop @ EXTERNAL:00000004
[d=1] initialize @ 7ffada669260 -> ~Config @ EXTERNAL:00000051
[d=1] initialize @ 7ffada669260 -> __security_check_cookie @ 7ffada82b7d0
[d=1] release @ 7ffada64a500 -> FUN_7ffada5f21d0 @ 7ffada5f21d0
[d=1] release @ 7ffada64a500 -> KillMe @ EXTERNAL:000000df
[d=1] release @ 7ffada64a500 -> close_LuaState @ 7ffada649830
[d=1] SetCommand @ 7ffada6675f0 -> next_page @ 7ffada66a420
[d=1] SetCommand @ 7ffada6675f0 -> mark_self @ 7ffada669ef0
[d=1] SetCommand @ 7ffada6675f0 -> set_page_as_shortcut @ 7ffada66a9e0
[d=1] SetCommand @ 7ffada6675f0 -> unset_page_as_shortcut @ 7ffada66b080
[d=1] SetCommand @ 7ffada6675f0 -> ed_cockpit_set_action_digital @ 7ffada62c840
[d=1] OnCockpitEvent @ 7ffada666fe0 -> memcmp @ 7ffada82c596
[d=1] OnCockpitEvent @ 7ffada666fe0 -> FUN_7ffada668190 @ 7ffada668190
[d=1] OnCockpitEvent @ 7ffada666fe0 -> FUN_7ffada645a10 @ 7ffada645a10
[d=1] OnCockpitEvent @ 7ffada666fe0 -> print @ EXTERNAL:000002f7
[d=1] OnCockpitEvent @ 7ffada666fe0 -> operator[] @ EXTERNAL:000002fa
[d=1] OnCockpitEvent @ 7ffada666fe0 -> empty @ EXTERNAL:000002f8
[d=1] OnCockpitEvent @ 7ffada666fe0 -> operator[] @ EXTERNAL:000002f9
[d=1] OnCockpitEvent @ 7ffada666fe0 -> operator_double @ EXTERNAL:000002fb
[d=1] OnCockpitEvent @ 7ffada666fe0 -> mark_target @ 7ffada66a200
[d=1] OnCockpitEvent @ 7ffada666fe0 -> getSubtitle @ EXTERNAL:000002f6
[d=1] OnCockpitEvent @ 7ffada666fe0 -> add_note @ 7ffada667ec0
[d=1] OnCockpitEvent @ 7ffada666fe0 -> GetAbsoluteModelTime @ EXTERNAL:000000d9
[d=1] OnCockpitEvent @ 7ffada666fe0 -> fmod @ 7ffada82c644
[d=1] OnCockpitEvent @ 7ffada666fe0 -> string_format @ EXTERNAL:00000022
[d=1] OnCockpitEvent @ 7ffada666fe0 -> free @ EXTERNAL:000003e7
[d=1] OnCockpitEvent @ 7ffada666fe0 -> __security_check_cookie @ 7ffada82b7d0
[d=1] OnCockpitEvent @ 7ffada666fe0 -> FUN_7ffada82b8c4 @ 7ffada82b8c4
[d=1] OnCockpitEvent @ 7ffada666fe0 -> _Init_thread_footer @ 7ffada82b858
[d=1] checkCallbackKeyboard @ 7ffada649680 -> get_argument @ 7ffada606d80
[d=1] checkCallbackKeyboard @ 7ffada649680 -> set_argument @ 7ffada60b330
[d=1] checkCallbackKeyboard @ 7ffada649680 -> update @ 7ffada5fd2c0
[d=1] checkCallbackClickable @ 7ffada649250 -> getActionData @ 7ffada5f97a0
[d=1] checkCallbackClickable @ 7ffada649250 -> get_arg_value @ 7ffada5f9850
[d=1] checkCallbackClickable @ 7ffada649250 -> __security_check_cookie @ 7ffada82b7d0
[d=1] checkCallbackClickable @ 7ffada649250 -> instance @ 7ffada5f2310
[d=1] checkCallbackClickable @ 7ffada649250 -> getHost @ 7ffada61f5b0
[d=1] checkCallbackClickable @ 7ffada649250 -> update @ EXTERNAL:0000016c
[d=1] checkCallbackClickable @ 7ffada649250 -> play_once @ EXTERNAL:00000169
[d=1] checkCallbackClickable @ 7ffada649250 -> ED_get_time @ EXTERNAL:00000016
[d=1] register_in_script @ 7ffada64a440 -> lua_pushstring @ 7ffada82a067
[d=1] register_in_script @ 7ffada64a440 -> lua_pushlightuserdata @ 7ffada82a073
[d=1] register_in_script @ 7ffada64a440 -> lua_settable @ 7ffada82a085
[d=1] register_in_script @ 7ffada64a440 -> lua_pushcclosure @ 7ffada82a06d
[d=1] register_in_script @ 7ffada64a440 -> lua_setfield @ 7ffada82a08b
[d=1] l_register_functions @ 7ffada649e60 -> lua_pushstring @ 7ffada82a067
[d=1] l_register_functions @ 7ffada649e60 -> lua_pushcclosure @ 7ffada82a06d
[d=1] l_register_functions @ 7ffada649e60 -> lua_settable @ 7ffada82a085
[d=1] get_camera_point @ 7ffada6686c0 -> to_map_units @ 7ffada66af50
[d=1] FUN_7ffada6669e0 @ 7ffada6669e0 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada6669e0 @ 7ffada6669e0 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada6669e0 @ 7ffada6669e0 -> ~avDrawCachedObj @ 7ffada7eb570
[d=1] FUN_7ffada6669e0 @ 7ffada6669e0 -> free @ 7ffada82b2d8
[d=1] FUN_7ffada666c40 @ 7ffada666c40 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada666c40 @ 7ffada666c40 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada666c40 @ 7ffada666c40 -> ~avMovingMapPoint @ 7ffada6744d0
[d=1] FUN_7ffada666c40 @ 7ffada666c40 -> free @ 7ffada82b2d8
[d=1] check_segment @ 7ffada7f7f40 -> FUN_7ffada5f9fc0 @ 7ffada5f9fc0
[d=1] check_sphere @ 7ffada7f7f70 -> FUN_7ffada5fa0c0 @ 7ffada5fa0c0
[d=1] setName @ 7ffada66a8b0 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=1] FUN_7ffada666ccc @ 7ffada666ccc -> FUN_7ffada666c40 @ 7ffada666c40
[d=1] FUN_7ffada666cd8 @ 7ffada666cd8 -> FUN_7ffada666c40 @ 7ffada666c40
[d=1] FUN_7ffada666b10 @ 7ffada666b10 -> `eh_vector_destructor_iterator' @ 7ffada82b1d4
[d=1] FUN_7ffada666b10 @ 7ffada666b10 -> free @ 7ffada82b2e0
[d=1] FUN_7ffada666b10 @ 7ffada666b10 -> ~avKneeboardZoneObject @ 7ffada666060
[d=1] FUN_7ffada666b10 @ 7ffada666b10 -> free @ 7ffada82b2d8
[d=1] FUN_7ffada666b94 @ 7ffada666b94 -> FUN_7ffada666b10 @ 7ffada666b10
[d=1] FUN_7ffada613858 @ 7ffada613858 -> FUN_7ffada613cb0 @ 7ffada613cb0
[d=1] FUN_7ffada6682b8 @ 7ffada6682b8 -> FUN_7ffada6682d0 @ 7ffada6682d0
[d=1] ~avKneeboard @ 7ffada665e50 -> DeleteAll @ 7ffada7f6a40
[d=1] ~avKneeboard @ 7ffada665e50 -> ~SimpleOctTree @ 7ffada7f6230
[d=1] ~avKneeboard @ 7ffada665e50 -> free @ 7ffada82b2d8
[d=1] ~avKneeboard @ 7ffada665e50 -> free @ EXTERNAL:000003e7
[d=1] ~avKneeboard @ 7ffada665e50 -> FUN_7ffada667990 @ 7ffada667990
[d=1] ~avKneeboard @ 7ffada665e50 -> ~avDevice @ 7ffada648aa0
[d=1] avMovingMap @ 7ffada665a50 -> FUN_7ffada664ab0 @ 7ffada664ab0
[d=1] avKneeboard @ 7ffada6650d0 -> avDevice @ 7ffada5f1770
[d=1] avKneeboard @ 7ffada6650d0 -> FUN_7ffada664ab0 @ 7ffada664ab0
[d=1] avKneeboard @ 7ffada6650d0 -> malloc @ EXTERNAL:000003e5
[d=1] avKneeboard @ 7ffada6650d0 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=1] avKneeboard @ 7ffada6650d0 -> memmove @ 7ffada82c5a2
[d=1] avKneeboard @ 7ffada6650d0 -> FUN_7ffada62cf50 @ 7ffada62cf50
[d=1] avKneeboard @ 7ffada6650d0 -> FUN_7ffada5ef690 @ 7ffada5ef690
[d=1] avKneeboard @ 7ffada6650d0 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=1] avMovingMap @ 7ffada673810 -> Camera @ EXTERNAL:00000215
[d=2] `eh_vector_destructor_iterator' @ 7ffada82b1d4 -> _guard_dispatch_icall @ 7ffada82c750
[d=2] get_camera @ 7ffada673b50 -> GetModelTime @ EXTERNAL:000000da
[d=2] get_camera @ 7ffada673b50 -> check_camera_orientation @ 7ffada6738c0
[d=2] get_camera @ 7ffada673b50 -> check_camera_volume @ 7ffada673a40
[d=2] initialize @ 7ffada6499b0 -> open @ 7ffada7f2fd0
[d=2] initialize @ 7ffada6499b0 -> LuaDofile @ 7ffada7ed350
[d=2] make_default_activity @ 7ffada64a1f0 -> Config @ EXTERNAL:00000002
[d=2] make_default_activity @ 7ffada64a1f0 -> get @ EXTERNAL:00000003
[d=2] make_default_activity @ 7ffada64a1f0 -> pop @ EXTERNAL:0000005b
[d=2] make_default_activity @ 7ffada64a1f0 -> ~Config @ EXTERNAL:00000051
[d=2] make_default_activity @ 7ffada64a1f0 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] make_default_activity @ 7ffada64a1f0 -> wTime @ EXTERNAL:000000db
[d=2] make_default_activity @ 7ffada64a1f0 -> format @ EXTERNAL:00000024
[d=2] ensured_Lua @ 7ffada6498d0 -> open @ 7ffada7f2fd0
[d=2] to_map_units @ 7ffada66af50 -> GetDefaultTerrain @ EXTERNAL:0000016f
[d=2] to_map_units @ 7ffada66af50 -> __security_check_cookie @ 7ffada82b7d0
[d=2] init_waypoints @ 7ffada668a60 -> create_quad_tree @ 7ffada7f8000
[d=2] init_waypoints @ 7ffada668a60 -> Config @ EXTERNAL:00000002
[d=2] init_waypoints @ 7ffada668a60 -> open @ EXTERNAL:00000063
[d=2] init_waypoints @ 7ffada668a60 -> ensured_Lua @ 7ffada6498d0
[d=2] init_waypoints @ 7ffada668a60 -> open @ EXTERNAL:00000062
[d=2] init_waypoints @ 7ffada668a60 -> read_waypoint @ 7ffada802d30
[d=2] init_waypoints @ 7ffada668a60 -> read_airdrome_id @ 7ffada802b60
[d=2] init_waypoints @ 7ffada668a60 -> Type @ EXTERNAL:00000168
[d=2] init_waypoints @ 7ffada668a60 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=2] init_waypoints @ 7ffada668a60 -> free @ EXTERNAL:000003e7
[d=2] init_waypoints @ 7ffada668a60 -> to_map_units @ 7ffada66af50
[d=2] init_waypoints @ 7ffada668a60 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] init_waypoints @ 7ffada668a60 -> avMovingMapPoint @ 7ffada674330
[d=2] init_waypoints @ 7ffada668a60 -> setPoint @ 7ffada6746c0
[d=2] init_waypoints @ 7ffada668a60 -> AddObject @ 7ffada7f6520
[d=2] init_waypoints @ 7ffada668a60 -> malloc @ EXTERNAL:000003e5
[d=2] init_waypoints @ 7ffada668a60 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] init_waypoints @ 7ffada668a60 -> memmove @ 7ffada82c5a2
[d=2] init_waypoints @ 7ffada668a60 -> get @ EXTERNAL:00000003
[d=2] init_waypoints @ 7ffada668a60 -> lua_type @ 7ffada82a0d9
[d=2] init_waypoints @ 7ffada668a60 -> lua_pushnumber @ 7ffada82a0a9
[d=2] init_waypoints @ 7ffada668a60 -> ED_get_ticks @ EXTERNAL:00000027
[d=2] init_waypoints @ 7ffada668a60 -> ED_lua_pcall @ EXTERNAL:00000025
[d=2] init_waypoints @ 7ffada668a60 -> finish @ EXTERNAL:00000028
[d=2] init_waypoints @ 7ffada668a60 -> lua_tolstring @ 7ffada82a05b
[d=2] init_waypoints @ 7ffada668a60 -> call_log @ EXTERNAL:00000029
[d=2] init_waypoints @ 7ffada668a60 -> lua_settop @ 7ffada82a043
[d=2] init_waypoints @ 7ffada668a60 -> ~Config @ EXTERNAL:00000051
[d=2] init_waypoints @ 7ffada668a60 -> __security_check_cookie @ 7ffada82b7d0
[d=2] init_waypoints @ 7ffada668a60 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] FUN_7ffada664310 @ 7ffada664310 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada664310 @ 7ffada664310 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada664310 @ 7ffada664310 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada664310 @ 7ffada664310 -> free @ EXTERNAL:000003e7
[d=2] FUN_7ffada664310 @ 7ffada664310 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] FUN_7ffada664600 @ 7ffada664600 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada664600 @ 7ffada664600 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada664600 @ 7ffada664600 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada664600 @ 7ffada664600 -> free @ EXTERNAL:000003e7
[d=2] FUN_7ffada664600 @ 7ffada664600 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] find_available_coverage @ 7ffada668390 -> GetDefaultTerrain @ EXTERNAL:0000016f
[d=2] FUN_7ffada66a740 @ 7ffada66a740 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada66a740 @ 7ffada66a740 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada66a740 @ 7ffada66a740 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada66a740 @ 7ffada66a740 -> free @ EXTERNAL:000003e7
[d=2] FUN_7ffada66a740 @ 7ffada66a740 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] init_zones @ 7ffada669100 -> create_quad_tree @ 7ffada7f8000
[d=2] init_zones @ 7ffada669100 -> ensured_Lua @ 7ffada6498d0
[d=2] init_zones @ 7ffada669100 -> Config @ EXTERNAL:00000002
[d=2] init_zones @ 7ffada669100 -> open @ EXTERNAL:00000063
[d=2] init_zones @ 7ffada669100 -> open @ EXTERNAL:00000062
[d=2] init_zones @ 7ffada669100 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] init_zones @ 7ffada669100 -> avKneeboardZoneObject @ 7ffada665720
[d=2] init_zones @ 7ffada669100 -> AddObject @ 7ffada7f6520
[d=2] init_zones @ 7ffada669100 -> lua_settop @ 7ffada82a043
[d=2] init_zones @ 7ffada669100 -> ~Config @ EXTERNAL:00000051
[d=2] listen_event @ 7ffada5f65d0 -> FUN_7ffada5f29f0 @ 7ffada5f29f0
[d=2] listen_event @ 7ffada5f65d0 -> FUN_7ffada5f6770 @ 7ffada5f6770
[d=2] listen_command @ 7ffada5f6390 -> FUN_7ffada5f3cc0 @ 7ffada5f3cc0
[d=2] listen_command @ 7ffada5f6390 -> thunk_FUN_7ffada82ad30 @ 7ffada82b0e0
[d=2] listen_command @ 7ffada5f6390 -> FUN_7ffada5f6770 @ 7ffada5f6770
[d=2] __security_check_cookie @ 7ffada82b7d0 -> FUN_7ffada82bd14 @ 7ffada82bd14
[d=2] FUN_7ffada5f21d0 @ 7ffada5f21d0 -> FUN_7ffada5f1530 @ 7ffada5f1530
[d=2] FUN_7ffada5f21d0 @ 7ffada5f21d0 -> free @ EXTERNAL:000003e7
[d=2] close_LuaState @ 7ffada649830 -> lua_getfield @ 7ffada82a079
[d=2] close_LuaState @ 7ffada649830 -> lua_type @ 7ffada82a0d9
[d=2] close_LuaState @ 7ffada649830 -> ED_lua_pcall @ EXTERNAL:00000025
[d=2] close_LuaState @ 7ffada649830 -> lua_tolstring @ 7ffada82a05b
[d=2] close_LuaState @ 7ffada649830 -> FUN_7ffada5f68c0 @ 7ffada5f68c0
[d=2] close_LuaState @ 7ffada649830 -> lua_settop @ 7ffada82a043
[d=2] close_LuaState @ 7ffada649830 -> ED_lua_close @ EXTERNAL:00000058
[d=2] mark_self @ 7ffada669ef0 -> to_map_units @ 7ffada66af50
[d=2] mark_self @ 7ffada669ef0 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] mark_self @ 7ffada669ef0 -> avMovingMapPoint @ 7ffada674330
[d=2] mark_self @ 7ffada669ef0 -> GetAbsoluteModelTime @ EXTERNAL:000000d9
[d=2] mark_self @ 7ffada669ef0 -> fmod @ 7ffada82c644
[d=2] mark_self @ 7ffada669ef0 -> floor @ 7ffada82c63e
[d=2] mark_self @ 7ffada669ef0 -> FUN_7ffada6685d0 @ 7ffada6685d0
[d=2] mark_self @ 7ffada669ef0 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=2] mark_self @ 7ffada669ef0 -> setPoint @ 7ffada6746c0
[d=2] mark_self @ 7ffada669ef0 -> setRotate @ 7ffada674800
[d=2] mark_self @ 7ffada669ef0 -> AddObject @ 7ffada7f6470
[d=2] mark_self @ 7ffada669ef0 -> FUN_7ffada5f6770 @ 7ffada5f6770
[d=2] mark_self @ 7ffada669ef0 -> __security_check_cookie @ 7ffada82b7d0
[d=2] set_page_as_shortcut @ 7ffada66a9e0 -> malloc @ EXTERNAL:000003e5
[d=2] set_page_as_shortcut @ 7ffada66a9e0 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] set_page_as_shortcut @ 7ffada66a9e0 -> memmove @ 7ffada82c5a2
[d=2] set_page_as_shortcut @ 7ffada66a9e0 -> free @ EXTERNAL:000003e7
[d=2] set_page_as_shortcut @ 7ffada66a9e0 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] FUN_7ffada645a10 @ 7ffada645a10 -> FUN_7ffada82b8c4 @ 7ffada82b8c4
[d=2] FUN_7ffada645a10 @ 7ffada645a10 -> _Init_thread_footer @ 7ffada82b858
[d=2] mark_target @ 7ffada66a200 -> to_map_units @ 7ffada66af50
[d=2] mark_target @ 7ffada66a200 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] mark_target @ 7ffada66a200 -> avMovingMapPoint @ 7ffada674330
[d=2] mark_target @ 7ffada66a200 -> GetAbsoluteModelTime @ EXTERNAL:000000d9
[d=2] mark_target @ 7ffada66a200 -> fmod @ 7ffada82c644
[d=2] mark_target @ 7ffada66a200 -> floor @ 7ffada82c63e
[d=2] mark_target @ 7ffada66a200 -> FUN_7ffada6685d0 @ 7ffada6685d0
[d=2] mark_target @ 7ffada66a200 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=2] mark_target @ 7ffada66a200 -> setPoint @ 7ffada6746c0
[d=2] mark_target @ 7ffada66a200 -> AddObject @ 7ffada7f6470
[d=2] mark_target @ 7ffada66a200 -> FUN_7ffada5f6770 @ 7ffada5f6770
[d=2] mark_target @ 7ffada66a200 -> __security_check_cookie @ 7ffada82b7d0
[d=2] add_note @ 7ffada667ec0 -> FUN_7ffada603a60 @ 7ffada603a60
[d=2] add_note @ 7ffada667ec0 -> free @ EXTERNAL:000003e7
[d=2] add_note @ 7ffada667ec0 -> FUN_7ffada6647d0 @ 7ffada6647d0
[d=2] add_note @ 7ffada667ec0 -> FUN_7ffada5f0b10 @ 7ffada5f0b10
[d=2] add_note @ 7ffada667ec0 -> FUN_7ffada5ef690 @ 7ffada5ef690
[d=2] add_note @ 7ffada667ec0 -> string_format @ EXTERNAL:00000022
[d=2] add_note @ 7ffada667ec0 -> thunk_FUN_7ffada82ae20 @ 7ffada82b0f0
[d=2] add_note @ 7ffada667ec0 -> FUN_7ffada66a530 @ 7ffada66a530
[d=2] add_note @ 7ffada667ec0 -> add_new_page_code @ 7ffada667a40
[d=2] add_note @ 7ffada667ec0 -> __security_check_cookie @ 7ffada82b7d0
[d=2] FUN_7ffada82b8c4 @ 7ffada82b8c4 -> AcquireSRWLockExclusive @ EXTERNAL:000003ce
[d=2] FUN_7ffada82b8c4 @ 7ffada82b8c4 -> SleepConditionVariableSRW @ EXTERNAL:000003be
[d=2] _Init_thread_footer @ 7ffada82b858 -> AcquireSRWLockExclusive @ EXTERNAL:000003ce
[d=2] _Init_thread_footer @ 7ffada82b858 -> ReleaseSRWLockExclusive @ EXTERNAL:000003cd
[d=2] set_argument @ 7ffada60b330 -> SetArgument @ 7ffada614550
[d=2] update @ 7ffada5fd2c0 -> force_update @ 7ffada5f92a0
[d=2] update @ 7ffada5fd2c0 -> update @ 7ffada5fd2c0
[d=2] instance @ 7ffada5f2310 -> FUN_7ffada82b8c4 @ 7ffada82b8c4
[d=2] instance @ 7ffada5f2310 -> ccSound @ 7ffada5f1910
[d=2] instance @ 7ffada5f2310 -> atexit @ 7ffada82b640
[d=2] instance @ 7ffada5f2310 -> _Init_thread_footer @ 7ffada82b858
[d=2] getHost @ 7ffada61f5b0 -> FUN_7ffada5f31a0 @ 7ffada5f31a0
[d=2] getHost @ 7ffada61f5b0 -> memcmp @ 7ffada82c596
[d=2] getHost @ 7ffada61f5b0 -> free @ EXTERNAL:000003e7
[d=2] getHost @ 7ffada61f5b0 -> __security_check_cookie @ 7ffada82b7d0
[d=2] ~avDrawCachedObj @ 7ffada7eb570 -> reset_draw_objects @ 7ffada7eb5b0
[d=2] ~avDrawCachedObj @ 7ffada7eb570 -> free @ EXTERNAL:000003e7
[d=2] ~avMovingMapPoint @ 7ffada6744d0 -> free @ EXTERNAL:000003e7
[d=2] ~avMovingMapPoint @ 7ffada6744d0 -> ~FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006e
[d=2] ~avMovingMapPoint @ 7ffada6744d0 -> ~avDrawCachedObj @ 7ffada7eb570
[d=2] ~avMovingMapPoint @ 7ffada6744d0 -> ~SimpleOctTreeLoad @ 7ffada7f62a0
[d=2] FUN_7ffada5f9fc0 @ 7ffada5f9fc0 -> FUN_7ffada5f9230 @ 7ffada5f9230
[d=2] FUN_7ffada5f9fc0 @ 7ffada5f9fc0 -> FUN_7ffada5f9de0 @ 7ffada5f9de0
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> memcpy @ 7ffada82c59c
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> free @ EXTERNAL:000003e7
[d=2] FUN_7ffada5f0b10 @ 7ffada5f0b10 -> FUN_7ffada5f0ac0 @ 7ffada5f0ac0
[d=2] ~avKneeboardZoneObject @ 7ffada666060 -> free @ EXTERNAL:000003e7
[d=2] ~avKneeboardZoneObject @ 7ffada666060 -> ~avDrawCachedObj @ 7ffada7eb570
[d=2] ~avKneeboardZoneObject @ 7ffada666060 -> ~SimpleOctTreeLoad @ 7ffada7f62a0
[d=2] FUN_7ffada613cb0 @ 7ffada613cb0 -> ~Factory @ EXTERNAL:0000000c
[d=2] FUN_7ffada613cb0 @ 7ffada613cb0 -> free @ 7ffada82b2d8
[d=2] FUN_7ffada6682d0 @ 7ffada6682d0 -> FUN_7ffada82b29c @ 7ffada82b29c
[d=2] FUN_7ffada6682d0 @ 7ffada6682d0 -> avKneeboard @ 7ffada6655c0
[d=2] DeleteAll @ 7ffada7f6a40 -> DeleteAll @ 7ffada7f6aa0
[d=2] DeleteAll @ 7ffada7f6a40 -> ~SimpleOctTreeNode @ 7ffada7f62d0
[d=2] DeleteAll @ 7ffada7f6a40 -> free @ 7ffada82b2d8
[d=2] DeleteAll @ 7ffada7f6a40 -> FUN_7ffada5f0c40 @ 7ffada5f0c40
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> ~SimpleOctTreeNode @ 7ffada7f62d0
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> free @ 7ffada82b2d8
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> free @ EXTERNAL:000003e7
[d=2] ~SimpleOctTree @ 7ffada7f6230 -> FUN_7ffada5efbc0 @ 7ffada5efbc0
[d=2] FUN_7ffada667990 @ 7ffada667990 -> free @ EXTERNAL:000003e7
[d=2] ~avDevice @ 7ffada648aa0 -> KillMe @ EXTERNAL:000000df
[d=2] ~avDevice @ 7ffada648aa0 -> close_LuaState @ 7ffada649830
[d=2] ~avDevice @ 7ffada648aa0 -> FUN_7ffada5f1590 @ 7ffada5f1590
[d=2] ~avDevice @ 7ffada648aa0 -> free @ EXTERNAL:000003e7
[d=2] ~avDevice @ 7ffada648aa0 -> FUN_7ffada5f14c0 @ 7ffada5f14c0
[d=2] avDevice @ 7ffada5f1770 -> FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006d
[d=2] avDevice @ 7ffada5f1770 -> FUN_7ffada5ef690 @ 7ffada5ef690
[d=2] avDevice @ 7ffada5f1770 -> malloc @ EXTERNAL:000003e5
[d=2] avDevice @ 7ffada5f1770 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] avDevice @ 7ffada5f1770 -> FUN_7ffada5f10d0 @ 7ffada5f10d0
[d=2] avDevice @ 7ffada5f1770 -> FUN_7ffada5f1180 @ 7ffada5f1180
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> memmove @ 7ffada82c5a2
[d=2] FUN_7ffada62cf50 @ 7ffada62cf50 -> FUN_7ffada5f0ae0 @ 7ffada5f0ae0
[d=2] FUN_7ffada5ef690 @ 7ffada5ef690 -> malloc @ EXTERNAL:000003e5
[d=2] FUN_7ffada5ef690 @ 7ffada5ef690 -> fatal_out_of_memory @ EXTERNAL:00000071
[d=2] FUN_7ffada5ef690 @ 7ffada5ef690 -> memcpy @ 7ffada82c59c
[d=2] FUN_7ffada5ef690 @ 7ffada5ef690 -> FUN_7ffada5f0ac0 @ 7ffada5f0ac0
[d=2] FUN_7ffada5f0ae0 @ 7ffada5f0ae0 -> _Xlength_error @ 7ffada82a0f1

RTTI
[
  {
    "address": "7ffada87c5b8",
    "signature": 1,
    "offset": 0,
    "cd_offset": 0,
    "type_descriptor": "7ffada955c58",
    "type_descriptor_info": {
      "address": "7ffada955c58",
      "raw_name": ".?AVavMovingMap@cockpit@@",
      "name": "cockpit::avMovingMap"
    },
    "class_hierarchy": {
      "address": "7ffada87c5e0",
      "signature": 0,
      "attributes": 0,
      "num_bases": 1,
      "base_array": "7ffada87c5f8",
      "bases": [
        {
          "address": "7ffada87c608",
          "type_descriptor": "7ffada955c58",
          "type_name": "cockpit::avMovingMap",
          "raw_type_name": ".?AVavMovingMap@cockpit@@",
          "num_contained_bases": 0,
          "mdisp": 0,
          "pdisp": -1,
          "vdisp": 0,
          "attributes": 64,
          "chd": "7ffada87c5e0"
        }
      ]
    },
    "self_rva": 4638136
  }
]
*/
