#pragma once

#include <cstdint>
#include <cstddef>

// Machine-assisted reconstruction from CockpitBase.dll
// Class: cockpit::avMovingMap

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

class cockpit_avMovingMap_RE
{
public:

    // FUN_7ffada5ef690 @ 7ffada5ef690
    // FUN_7ffada5efbc0 @ 7ffada5efbc0
    // FUN_7ffada5f0ac0 @ 7ffada5f0ac0
    // FUN_7ffada5f0ae0 @ 7ffada5f0ae0
    // FUN_7ffada5f0b10 @ 7ffada5f0b10
    // FUN_7ffada5f0c40 @ 7ffada5f0c40
    // FUN_7ffada5f10d0 @ 7ffada5f10d0
    // FUN_7ffada5f1180 @ 7ffada5f1180
    // FUN_7ffada5f14c0 @ 7ffada5f14c0
    // FUN_7ffada5f1530 @ 7ffada5f1530
    // FUN_7ffada5f1590 @ 7ffada5f1590
    // avDevice @ 7ffada5f1770
    // ccSound @ 7ffada5f1910
    // NetCrewMemberUpdateStream @ 7ffada5f2060
    // CheckNavMode @ 7ffada5f21c0
    // FUN_7ffada5f21d0 @ 7ffada5f21d0
    // ~avDate @ 7ffada5f2250
    // instance @ 7ffada5f2310
    // l_metatable_name @ 7ffada5f23a0
    // FUN_7ffada5f29f0 @ 7ffada5f29f0
    // FUN_7ffada5f31a0 @ 7ffada5f31a0
    // FUN_7ffada5f3cc0 @ 7ffada5f3cc0
    // listen_command @ 7ffada5f6390
    // listen_event @ 7ffada5f65d0
    // FUN_7ffada5f6770 @ 7ffada5f6770
    // FUN_7ffada5f68c0 @ 7ffada5f68c0
    // FUN_7ffada5f9230 @ 7ffada5f9230
    // force_update @ 7ffada5f92a0
    // getActionData @ 7ffada5f97a0
    // get_arg_value @ 7ffada5f9850
    // FUN_7ffada5f9de0 @ 7ffada5f9de0
    // FUN_7ffada5f9fc0 @ 7ffada5f9fc0
    // FUN_7ffada5fa0c0 @ 7ffada5fa0c0
    // update @ 7ffada5fd2c0
    // FUN_7ffada603a60 @ 7ffada603a60
    // get_argument @ 7ffada606d80
    // set_argument @ 7ffada60b330
    // FUN_7ffada613858 @ 7ffada613858
    // FUN_7ffada613cb0 @ 7ffada613cb0
    // FUN_7ffada614180 @ 7ffada614180
    // SetArgument @ 7ffada614550
    // FUN_7ffada614b40 @ 7ffada614b40
    // getHost @ 7ffada61f5b0
    // ed_cockpit_set_action_digital @ 7ffada62c840
    // FUN_7ffada62cf50 @ 7ffada62cf50
    // FUN_7ffada645a10 @ 7ffada645a10
    // ~avDevice @ 7ffada648aa0
    // checkCallbackClickable @ 7ffada649250
    // checkCallbackKeyboard @ 7ffada649680
    // close_LuaState @ 7ffada649830
    // ensured_Lua @ 7ffada6498d0
    // initialize @ 7ffada6499b0
    // l_register_functions @ 7ffada649e60
    // make_default_activity @ 7ffada64a1f0
    // register_in_script @ 7ffada64a440
    // release @ 7ffada64a500
    // FUN_7ffada664310 @ 7ffada664310
    // FUN_7ffada664600 @ 7ffada664600
    // FUN_7ffada6647d0 @ 7ffada6647d0
    // FUN_7ffada664ab0 @ 7ffada664ab0
    // avKneeboard @ 7ffada6650d0
    // avKneeboard @ 7ffada6655c0
    // avKneeboardZoneObject @ 7ffada665720
    // avMovingMap @ 7ffada665a50
    // ~avKneeboard @ 7ffada665e50
    // ~avKneeboardZoneObject @ 7ffada666060
    // ~avMovingMap @ 7ffada6660c0
    // FUN_7ffada6669e0 @ 7ffada6669e0
    // FUN_7ffada666a70 @ 7ffada666a70
    // FUN_7ffada666b10 @ 7ffada666b10
    // FUN_7ffada666b94 @ 7ffada666b94
    // FUN_7ffada666ba0 @ 7ffada666ba0
    // FUN_7ffada666c40 @ 7ffada666c40
    // FUN_7ffada666ccc @ 7ffada666ccc
    // FUN_7ffada666cd8 @ 7ffada666cd8
    // OnCockpitEvent @ 7ffada666fe0
    // SetCommand @ 7ffada6675f0
    // FUN_7ffada667990 @ 7ffada667990
    // add_new_page_code @ 7ffada667a40
    // add_note @ 7ffada667ec0
    // FUN_7ffada668190 @ 7ffada668190
    // FUN_7ffada6682b8 @ 7ffada6682b8
    // FUN_7ffada6682d0 @ 7ffada6682d0
    // find_available_coverage @ 7ffada668390
    // FUN_7ffada6685d0 @ 7ffada6685d0
    // get_camera @ 7ffada668690
    // get_camera_point @ 7ffada6686c0
    // get_map_rotation @ 7ffada668860
    // get_volume_size @ 7ffada6689d0
    // init_waypoints @ 7ffada668a60
    // init_zones @ 7ffada669100
    // initialize @ 7ffada669260
    // mark_self @ 7ffada669ef0
    // mark_target @ 7ffada66a200
    // next_page @ 7ffada66a420
    // FUN_7ffada66a530 @ 7ffada66a530
    // FUN_7ffada66a740 @ 7ffada66a740
    // setName @ 7ffada66a8b0
    // set_page_as_shortcut @ 7ffada66a9e0
    // to_map_units @ 7ffada66af50
    // unset_page_as_shortcut @ 7ffada66b080
    // avMovingMap @ 7ffada673810
    // check_camera_orientation @ 7ffada6738c0
    // check_camera_volume @ 7ffada673a40
    // get_camera @ 7ffada673b50
    // avMovingMapPoint @ 7ffada674330
    // ~avMovingMapPoint @ 7ffada6744d0
    // setPoint @ 7ffada6746c0
    // setRotate @ 7ffada674800
    // ~avDrawCachedObj @ 7ffada7eb570
    // reset_draw_objects @ 7ffada7eb5b0
    // LuaDofile @ 7ffada7ed350
    // open @ 7ffada7f2fd0
    // ~SimpleOctTree @ 7ffada7f6230
    // ~SimpleOctTreeLoad @ 7ffada7f62a0
    // ~SimpleOctTreeNode @ 7ffada7f62d0
    // AddObject @ 7ffada7f6470
    // AddObject @ 7ffada7f6520
    // DeleteAll @ 7ffada7f6a40
    // DeleteAll @ 7ffada7f6aa0
    // check_segment @ 7ffada7f7f40
    // check_sphere @ 7ffada7f7f70
    // create_quad_tree @ 7ffada7f8000
    // read_airdrome_id @ 7ffada802b60
    // read_waypoint @ 7ffada802d30
    // FinalRelease @ 7ffada8276ec
    // lua_settop @ 7ffada82a043
    // lua_tolstring @ 7ffada82a05b
    // lua_pushstring @ 7ffada82a067
    // lua_pushcclosure @ 7ffada82a06d
    // lua_pushlightuserdata @ 7ffada82a073
    // lua_getfield @ 7ffada82a079
    // lua_settable @ 7ffada82a085
    // lua_setfield @ 7ffada82a08b
    // lua_pushnumber @ 7ffada82a0a9
    // lua_type @ 7ffada82a0d9
    // _Xlength_error @ 7ffada82a0f1
    // thunk_FUN_7ffada82ad30 @ 7ffada82b0e0
    // thunk_FUN_7ffada82ae20 @ 7ffada82b0f0
    // `eh_vector_destructor_iterator' @ 7ffada82b1d4
    // FUN_7ffada82b29c @ 7ffada82b29c
    // free @ 7ffada82b2d8
    // free @ 7ffada82b2e0
    // atexit @ 7ffada82b640
    // __security_check_cookie @ 7ffada82b7d0
    // _Init_thread_footer @ 7ffada82b858
    // FUN_7ffada82b8c4 @ 7ffada82b8c4
    // FUN_7ffada82bd14 @ 7ffada82bd14
    // memcmp @ 7ffada82c596
    // memcpy @ 7ffada82c59c
    // memmove @ 7ffada82c5a2
    // _purecall @ 7ffada82c5a8
    // floor @ 7ffada82c63e
    // fmod @ 7ffada82c644
    // _guard_dispatch_icall @ 7ffada82c750
    // Config @ EXTERNAL:00000002
    // get @ EXTERNAL:00000003
    // pop @ EXTERNAL:00000004
    // ~Factory @ EXTERNAL:0000000c
    // ED_get_time @ EXTERNAL:00000016
    // set @ EXTERNAL:00000017
    // string_format @ EXTERNAL:00000022
    // format @ EXTERNAL:00000024
    // ED_lua_pcall @ EXTERNAL:00000025
    // call_func @ EXTERNAL:00000026
    // ED_get_ticks @ EXTERNAL:00000027
    // finish @ EXTERNAL:00000028
    // call_log @ EXTERNAL:00000029
    // ~Config @ EXTERNAL:00000051
    // ED_lua_close @ EXTERNAL:00000058
    // pop @ EXTERNAL:0000005a
    // pop @ EXTERNAL:0000005b
    // pop @ EXTERNAL:0000005c
    // pop @ EXTERNAL:0000005e
    // open @ EXTERNAL:00000062
    // open @ EXTERNAL:00000063
    // FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006d
    // ~FakeUnknown<Common::Identifiable> @ EXTERNAL:0000006e
    // fatal_out_of_memory @ EXTERNAL:00000071
    // GetAbsoluteModelTime @ EXTERNAL:000000d9
    // GetModelTime @ EXTERNAL:000000da
    // wTime @ EXTERNAL:000000db
    // KillMe @ EXTERNAL:000000df
    // Coalition @ EXTERNAL:00000132
    // Type @ EXTERNAL:00000168
    // play_once @ EXTERNAL:00000169
    // update @ EXTERNAL:0000016c
    // GetDefaultTerrain @ EXTERNAL:0000016f
    // Camera @ EXTERNAL:00000215
    // getSubtitle @ EXTERNAL:000002f6
    // print @ EXTERNAL:000002f7
    // empty @ EXTERNAL:000002f8
    // operator[] @ EXTERNAL:000002f9
    // operator[] @ EXTERNAL:000002fa
    // operator_double @ EXTERNAL:000002fb
    // SleepConditionVariableSRW @ EXTERNAL:000003be
    // ReleaseSRWLockExclusive @ EXTERNAL:000003cd
    // AcquireSRWLockExclusive @ EXTERNAL:000003ce
    // malloc @ EXTERNAL:000003e5
    // free @ EXTERNAL:000003e7

private:

    // +0x0000
    std::uint8_t field_0000[1];
    // +0x0001
    std::uint8_t field_0001[1];
    // +0x0004
    std::uint8_t field_0004[1];
    // +0x0008
    std::uint8_t field_0008[1];
    // +0x000C
    std::uint8_t field_000C[1];
    // +0x0010
    std::uint8_t field_0010[1];
    // +0x0014
    std::uint8_t field_0014[1];
    // +0x0018
    std::uint8_t field_0018[1];
    // +0x0019
    std::uint8_t field_0019[1];
    // +0x001C
    std::uint8_t field_001C[1];
    // +0x0020
    std::uint8_t field_0020[1];
    // +0x0024
    std::uint8_t field_0024[1];
    // +0x0028
    std::uint8_t field_0028[1];
    // +0x0030
    std::uint8_t field_0030[1];
    // +0x0038
    std::uint8_t field_0038[1];
    // +0x0040
    std::uint8_t field_0040[1];
    // +0x0050
    std::uint8_t field_0050[1];
    // +0x0058
    std::uint8_t field_0058[1];
    // +0x0060
    std::uint8_t field_0060[1];
    // +0x0068
    std::uint8_t field_0068[1];
    // +0x0070
    std::uint8_t field_0070[1];
    // +0x0080
    std::uint8_t field_0080[1];
    // +0x0088
    std::uint8_t field_0088[1];
    // +0x0090
    std::uint8_t field_0090[1];
    // +0x0098
    std::uint8_t field_0098[1];
    // +0x00A0
    std::uint8_t field_00A0[1];
    // +0x00D0
    std::uint8_t field_00D0[1];
    // +0x00D8
    std::uint8_t field_00D8[1];
    // +0x00E8
    std::uint8_t field_00E8[1];
    // +0x00F0
    std::uint8_t field_00F0[1];
    // +0x00F8
    std::uint8_t field_00F8[1];
    // +0x0100
    std::uint8_t field_0100[1];
    // +0x0108
    std::uint8_t field_0108[1];
    // +0x0110
    std::uint8_t field_0110[1];
    // +0x0148
    std::uint8_t field_0148[1];
    // +0x0150
    std::uint8_t field_0150[1];
    // +0x0190
    std::uint8_t field_0190[1];
    // +0x0198
    std::uint8_t field_0198[1];
    // +0x0210
    std::uint8_t field_0210[1];
    // +0x0238
    std::uint8_t field_0238[1];
    // +0x0240
    std::uint8_t field_0240[1];
    // +0x0248
    std::uint8_t field_0248[1];
    // +0x024C
    std::uint8_t field_024C[1];
    // +0x0258
    std::uint8_t field_0258[1];
    // +0x0260
    std::uint8_t field_0260[1];
    // +0x02F8
    std::uint8_t field_02F8[1];
    // +0x02FC
    std::uint8_t field_02FC[1];
    // +0x0300
    std::uint8_t field_0300[1];
    // +0x0304
    std::uint8_t field_0304[1];
    // +0x0308
    std::uint8_t field_0308[1];
    // +0x030C
    std::uint8_t field_030C[1];
    // +0x0310
    std::uint8_t field_0310[1];
    // +0x0374
    std::uint8_t field_0374[1];
    // +0x0378
    std::uint8_t field_0378[1];
    // +0x0380
    std::uint8_t field_0380[1];
    // +0x03E8
    std::uint8_t field_03E8[1];
    // +0x0408
    std::uint8_t field_0408[1];
    // +0x040C
    std::uint8_t field_040C[1];
    // +0x0428
    std::uint8_t field_0428[1];
    // +0x0468
    std::uint8_t field_0468[1];
    // +0x0470
    std::uint8_t field_0470[1];
    // +0x0480
    std::uint8_t field_0480[1];
    // +0x0488
    std::uint8_t field_0488[1];
    // +0x0498
    std::uint8_t field_0498[1];
    // +0x04E8
    std::uint8_t field_04E8[1];
};
