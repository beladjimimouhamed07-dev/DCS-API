#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: cockpit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cockpit
{
public:

    // RVA: 0x77D | Ordinal: 1918
        void ConstructMaterialEx(struct cockpit::indicationMaterialCreationData const &);

    // RVA: 0x77E | Ordinal: 1919
        void ConstructNamelessMaterial(class osg::Vec4f const &, char const *);

    // RVA: 0x77F | Ordinal: 1920
        void ConstructNamelessTexArrayMaterial(class osg::Vec4f const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, char const *);

    // RVA: 0x780 | Ordinal: 1921
        void ConstructNamelessTexMaterial(class osg::Vec4f const &, class ed::basic_string<char> const &, char const *);

    // RVA: 0x79A | Ordinal: 1947
        void GET_FLIR_TECHNIQUE(void);

    // RVA: 0x7BC | Ordinal: 1981
        void GetNamedMaterial(class osg::Vec4f const &, class ed::basic_string<char> const &);

    // RVA: 0x7BD | Ordinal: 1982
        void GetNamedTexMaterial(class osg::Vec4f const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x7CA | Ordinal: 1995
        void HMD_eye_test(int);

    // RVA: 0x7CB | Ordinal: 1996
        void HUD_ONLY_viewport_active(void);

    // RVA: 0x853 | Ordinal: 2132
        void QueryCustomGeometry(class Graphics::RenderObjectDyn const &);

    // RVA: 0x85D | Ordinal: 2142
        void RequiredCustomGeometry(class Graphics::RenderObjectDyn &);

    // RVA: 0x860 | Ordinal: 2145
        void SET_FLIR_TECHINIQE_DEFAULT(enum TVScreenCondition);

    // RVA: 0x1B | Ordinal: 28
        void avActuator_(void);

    // RVA: 0x1C | Ordinal: 29
        void avActuator_(class cockpit::avActuator *, double);

    // RVA: 0x1D | Ordinal: 30
        void avBasicSensor_(void);

    // RVA: 0x1E | Ordinal: 31
        void avBasicSensor_(class cockpit::avBasicSensor *, double);

    // RVA: 0x1F | Ordinal: 32
        void avDevice_(void);

    // RVA: 0x20 | Ordinal: 33
        void avDevice_(class cockpit::avDevice *, double);

    // RVA: 0x21 | Ordinal: 34
        void avLaserSpotDetector_(void);

    // RVA: 0x22 | Ordinal: 35
        void avLaserSpotDetector_(class cockpit::avLaserSpotDetector *, double);

    // RVA: 0x23 | Ordinal: 36
        void avSimpleRadar_(void);

    // RVA: 0x24 | Ordinal: 37
        void avSimpleRadar_(class cockpit::avSimpleRadar *, double);

    // RVA: 0x25 | Ordinal: 38
        void avSimpleWeaponSystem_(void);

    // RVA: 0x26 | Ordinal: 39
        void avSimpleWeaponSystem_(class cockpit::avSimpleWeaponSystem *, double);

    // RVA: 0x970 | Ordinal: 2417
        void bilinear_interpolate(class ed::vector<struct std::pair<double, class ed::vector<struct std::pair<double, double>, class ed::allocator<struct std::pair<double, double>>>>, class ed::allocator<struct std::pair<double, class ed::vector<struct std::pair<double, double>, class ed::allocator<struct std::pair<double, double>>>>>> const &, double, double);

    // RVA: 0x971 | Ordinal: 2418
        void bilinear_interpolate_2values(class ed::vector<struct std::pair<double, class ed::vector<struct std::pair<double, struct std::pair<double, double>>, class ed::allocator<struct std::pair<double, struct std::pair<double, double>>>>>, class ed::allocator<struct std::pair<double, class ed::vector<struct std::pair<double, struct std::pair<double, double>>, class ed::allocator<struct std::pair<double, struct std::pair<double, double>>>>>>> const &, double, double);

    // RVA: 0x973 | Ordinal: 2420
        void binding_context(void);

    // RVA: 0x980 | Ordinal: 2433
        void break_listen_command_by_triggers(int);

    // RVA: 0x981 | Ordinal: 2434
        void break_listen_commands(struct cockpit::genericCommandReceiver *);

    // RVA: 0x982 | Ordinal: 2435
        void break_listen_commands(class cockpit::avDevice *);

    // RVA: 0x983 | Ordinal: 2436
        void break_listen_commands(class cockpit::ccDrawable *);

    // RVA: 0x984 | Ordinal: 2437
        void break_listen_missed_commands(struct cockpit::genericCommandReceiver *);

    // RVA: 0x990 | Ordinal: 2449
        void c_LA(void);

    // RVA: 0x991 | Ordinal: 2450
        void c_draw_debug_cockpit_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> const &, class osg::Vec4f const &);

    // RVA: 0x992 | Ordinal: 2451
        void c_draw_debug_cockpit_frustum(double, class wPosition3<float> const &, class osg::Vec4f const &);

    // RVA: 0x993 | Ordinal: 2452
        void c_draw_debug_cockpit_tripod(class wPosition3<float> const &);

    // RVA: 0x994 | Ordinal: 2453
        void c_get_communicator(void);

    // RVA: 0x995 | Ordinal: 2454
        void c_get_player_crew_index(void);

    // RVA: 0x996 | Ordinal: 2455
        void c_get_scene_luminance(class Graphics::Light *);

    // RVA: 0x997 | Ordinal: 2456
        void c_get_scene_luminance_max(void);

    // RVA: 0x998 | Ordinal: 2457
        void c_get_scene_luminance_normed(void);

    // RVA: 0x999 | Ordinal: 2458
        void c_get_sun(void);

    // RVA: 0x99A | Ordinal: 2459
        void c_is_night(void);

    // RVA: 0x99B | Ordinal: 2460
        void c_mark_radar_emitter_active(bool);

    // RVA: 0x99C | Ordinal: 2461
        void c_payload(void);

    // RVA: 0x99D | Ordinal: 2462
        void c_remove_input_layer(class ed::basic_string<char> const &);

    // RVA: 0x99E | Ordinal: 2463
        void c_sensors(void);

    // RVA: 0x99F | Ordinal: 2464
        void c_set_top_input_layer(class ed::basic_string<char> const &);

    // RVA: 0x9A0 | Ordinal: 2465
        void c_start_player_crew_sync(unsigned int);

    // RVA: 0x9A1 | Ordinal: 2466
        void c_stop_player_crew_sync(void);

    // RVA: 0x9A2 | Ordinal: 2467
        void c_track_is_reading(void);

    // RVA: 0x9A3 | Ordinal: 2468
        void c_unit_is_hidden(unsigned int);

    // RVA: 0x27 | Ordinal: 40
        void ccDrawable_(void);

    // RVA: 0x28 | Ordinal: 41
        void ccDrawable_(class cockpit::ccDrawable *, double);

    // RVA: 0xACA | Ordinal: 2763
        void clear_commands_handler(void);

    // RVA: 0xACB | Ordinal: 2764
        void clear_commands_handler_for_context(class cockpit::ccCockpitContext *);

    // RVA: 0xAE8 | Ordinal: 2793
        void compose_command(unsigned int, float);

    // RVA: 0xB35 | Ordinal: 2870
        void createVRTrackerGestureShared(void);

    // RVA: 0xB36 | Ordinal: 2871
        void createVRTrackerGestureUnique(void);

    // RVA: 0xB45 | Ordinal: 2886
        void create_guid(void);

    // RVA: 0xB5B | Ordinal: 2908
        void decompose_command(unsigned int &, float &, float);

    // RVA: 0xB7D | Ordinal: 2942
        void distribute_global_command(int, float);

    // RVA: 0xB7E | Ordinal: 2943
        void distribute_global_event(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB7F | Ordinal: 2944
        void distribute_missed_command(int, float);

    // RVA: 0xC26 | Ordinal: 3111
        void function_ref_exist(int &, struct lua_State *, char const *);

    // RVA: 0xE3A | Ordinal: 3643
        void getUserBox(class ISceneObject const &, class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0xE8A | Ordinal: 3723
        void get_active_viewport_index(void);

    // RVA: 0x123A | Ordinal: 4667
        void instance(void);

    // RVA: 0x12CF | Ordinal: 4816
        void itoc(int);

    // RVA: 0x1395 | Ordinal: 5014
        void listen_command(class cockpit::triggers::input_listener const &, int);

    // RVA: 0x1396 | Ordinal: 5015
        void listen_command(struct cockpit::genericCommandReceiver *, int);

    // RVA: 0x1397 | Ordinal: 5016
        void listen_command(class cockpit::avDevice *, int);

    // RVA: 0x1398 | Ordinal: 5017
        void listen_command(class cockpit::ccDrawable *, int);

    // RVA: 0x1399 | Ordinal: 5018
        void listen_command_range(class cockpit::avDevice *, int, int);

    // RVA: 0x139A | Ordinal: 5019
        void listen_command_range(class cockpit::ccDrawable *, int, int);

    // RVA: 0x139B | Ordinal: 5020
        void listen_event(class cockpit::triggers::event_listener const &, class ed::basic_string<char> const &);

    // RVA: 0x139C | Ordinal: 5021
        void listen_event(class cockpit::avDevice *, class ed::basic_string<char> const &);

    // RVA: 0x139D | Ordinal: 5022
        void listen_event(class cockpit::ccDrawable *, class ed::basic_string<char> const &);

    // RVA: 0x139E | Ordinal: 5023
        void listen_missed_command(struct cockpit::genericCommandReceiver *, int);

    // RVA: 0x13A3 | Ordinal: 5028
        void loadInterphone(class Lua::Config &, struct ICommandDialogsPanel::Interphone &);

    // RVA: 0x13A4 | Ordinal: 5029
        void loadRadio(class Lua::Config &, struct ICommandDialogsPanel::Radio &);

    // RVA: 0x13EF | Ordinal: 5104
        void makeElementsTree(class cockpit::ccMainPanelAccessor *, char const *, class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x1565 | Ordinal: 5478
        void readIndexArray(struct lua_State *, int, class ed::vector<unsigned short, class ed::allocator<unsigned short>> &);

    // RVA: 0x1567 | Ordinal: 5480
        void readVector(struct lua_State *, int, class osg::Vec3f &);

    // RVA: 0x1566 | Ordinal: 5479
        void readVector4(struct lua_State *, int, class osg::Vec4f &);

    // RVA: 0x1568 | Ordinal: 5481
        void readVectorArray(struct lua_State *, int, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x156B | Ordinal: 5484
        void read_airdrome_id(class Lua::Config &);

    // RVA: 0x1A | Ordinal: 27
        void read_raw_number_double_(struct lua_State *, int, int, ...);

    // RVA: 0x19 | Ordinal: 26
        void read_raw_number_float_(struct lua_State *, int, int, ...);

    // RVA: 0x18 | Ordinal: 25
        void read_raw_number_int_(struct lua_State *, int, int, ...);

    // RVA: 0x1576 | Ordinal: 5495
        void read_raw_string(struct lua_State *, int, int, ...);

    // RVA: 0x1577 | Ordinal: 5496
        void read_waypoint(struct Waypoint &, class Lua::Config &);

    // RVA: 0x1645 | Ordinal: 5702
        void round(double);

    // RVA: 0x1646 | Ordinal: 5703
        void roundf(float);
};

// DCS_OPS_RE_COCKPITBASE.DLL_COCKPIT_HPP
