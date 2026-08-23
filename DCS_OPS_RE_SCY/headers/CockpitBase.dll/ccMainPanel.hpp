#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccMainPanel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccMainPanel
{
public:

    // RVA: 0x75C | Ordinal: 1885
        void AddExternalEffect(class cockpit::ccPanelEffect *);

    // RVA: 0x75D | Ordinal: 1886
        void AddExternalGauge(class cockpit::ccPanelGauge *);

    // RVA: 0x75E | Ordinal: 1887
        void AddInternalEffect(class cockpit::ccPanelEffect *);

    // RVA: 0x75F | Ordinal: 1888
        void AddInternalGauge(class cockpit::ccPanelGauge *);

    // RVA: 0x7A0 | Ordinal: 1953
        void GetArgument(int) const;

    // RVA: 0x7A1 | Ordinal: 1954
        void GetArgumentSafe(unsigned __int64) const;

    // RVA: 0x7B1 | Ordinal: 1970
        void GetDrawArguments(void);

    // RVA: 0x7C5 | Ordinal: 1990
        void GetPosition(void);

    // RVA: 0x83B | Ordinal: 2108
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x858 | Ordinal: 2137
        void RemoveExternalEffect(class cockpit::ccPanelEffect *);

    // RVA: 0x859 | Ordinal: 2138
        void RemoveExternalGauge(class cockpit::ccPanelGauge *);

    // RVA: 0x864 | Ordinal: 2149
        void SetArgument(int, float);

    // RVA: 0x8A7 | Ordinal: 2216
        void SetCommand(int, float);

    // RVA: 0x915 | Ordinal: 2326
        void add_VR_capture(class cockpit::clickableElementData const *, class Lua::Config &);

    // RVA: 0x916 | Ordinal: 2327
        void add_effects_from(class ed::vector<class cockpit::ccPanelEffect *, class ed::allocator<class cockpit::ccPanelEffect *>> &);

    // RVA: 0x20D | Ordinal: 526
        void ccMainPanel(void);

    // RVA: 0xA13 | Ordinal: 2580
        void changeFlashlightColor(float, float, float);

    // RVA: 0xBB4 | Ordinal: 2997
        void draw_update(void);

    // RVA: 0xBC2 | Ordinal: 3011
        void editArguments(void);

    // RVA: 0xC64 | Ordinal: 3173
        void getCockpitLocalPoint(void) const;

    // RVA: 0xC66 | Ordinal: 3175
        void getCockpitModelInstance(void);

    // RVA: 0xD0B | Ordinal: 3340
        void getInitPos(void) const;

    // RVA: 0xD34 | Ordinal: 3381
        void getLights(void);

    // RVA: 0xD37 | Ordinal: 3384
        void getLocalShakeAccel(void) const;

    // RVA: 0xD85 | Ordinal: 3462
        void getPanelShakeAccelLeftY(void) const;

    // RVA: 0xD86 | Ordinal: 3463
        void getPanelShakeAccelRightY(void) const;

    // RVA: 0xD87 | Ordinal: 3464
        void getPanelShakeAccelX(void) const;

    // RVA: 0xD88 | Ordinal: 3465
        void getPanelShakeAccelY(void) const;

    // RVA: 0xD89 | Ordinal: 3466
        void getPanelShakeAccelZ(void) const;

    // RVA: 0xD9E | Ordinal: 3487
        void getPointOfInterest(int, class osg::Vec3f &) const;

    // RVA: 0xE88 | Ordinal: 3721
        void get_active_mirror_render(void) const;

    // RVA: 0xE89 | Ordinal: 3722
        void get_active_mirror_sim(void) const;

    // RVA: 0xEF3 | Ordinal: 3828
        void get_crewman_arg_value(unsigned int);

    // RVA: 0xF9E | Ordinal: 3999
        void get_level_crewman(unsigned int);

    // RVA: 0xFA3 | Ordinal: 4004
        void get_lights_reference(unsigned int);

    // RVA: 0xFCA | Ordinal: 4043
        void get_mirrors(void) const;

    // RVA: 0xFCB | Ordinal: 4044
        void get_mirrors_camera(void) const;

    // RVA: 0xFCC | Ordinal: 4045
        void get_mirrors_camera_mi8(void) const;

    // RVA: 0x105B | Ordinal: 4188
        void get_rot_X(void) const;

    // RVA: 0x108E | Ordinal: 4239
        void get_shake_Y(void) const;

    // RVA: 0x108F | Ordinal: 4240
        void get_shake_Z(void) const;

    // RVA: 0x10BD | Ordinal: 4286
        void get_target_of_interest(void) const;

    // RVA: 0x111A | Ordinal: 4379
        void have_arcade(void) const;

    // RVA: 0x1219 | Ordinal: 4634
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x122B | Ordinal: 4652
        void initialize_mirrors(class Lua::Config &);

    // RVA: 0x1308 | Ordinal: 4873
        void l_get_argument_value(struct lua_State *);

    // RVA: 0x1315 | Ordinal: 4886
        void l_get_light_reference(struct lua_State *);

    // RVA: 0x1346 | Ordinal: 4935
        void l_metatable_name(void) const;

    // RVA: 0x136D | Ordinal: 4974
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1371 | Ordinal: 4978
        void l_set_argument_value(struct lua_State *);

    // RVA: 0x137F | Ordinal: 4992
        void l_update_arguments(struct lua_State *);

    // RVA: 0x148A | Ordinal: 5259
        void orientFlashlight(class osg::Vec3f const &);

    // RVA: 0x1492 | Ordinal: 5267
        void panel_shake_init(class Lua::Config &);

    // RVA: 0x14A1 | Ordinal: 5282
        void parse_for_render(class wPosition3<float> const &, class Graphics::ModelParser &);

    // RVA: 0x14AE | Ordinal: 5295
        void pilot_draw_level_cycle_SIDE_BY_SIDE(void);

    // RVA: 0x14AF | Ordinal: 5296
        void pilot_draw_level_cycle_SINGLE_SEATER(void);

    // RVA: 0x14B0 | Ordinal: 5297
        void pilot_draw_level_cycle_TANDEM(void);

    // RVA: 0x1509 | Ordinal: 5386
        void post_initialize(void);

    // RVA: 0x158C | Ordinal: 5517
        void register_controls_in_state(struct lua_State *);

    // RVA: 0x158D | Ordinal: 5518
        void register_gauge_controllers(struct lua_State *, int);

    // RVA: 0x1593 | Ordinal: 5524
        void register_in_script(struct lua_State *);

    // RVA: 0x15D5 | Ordinal: 5590
        void release(void);

    // RVA: 0x1683 | Ordinal: 5764
        void sendPilotDrawLevelChange(void);

    // RVA: 0x1822 | Ordinal: 6179
        void set_arguments(void);

    // RVA: 0x1823 | Ordinal: 6180
        void set_arguments_from(class ed::vector<class cockpit::ccPanelEffect *, class ed::allocator<class cockpit::ccPanelEffect *>> &);

    // RVA: 0x1824 | Ordinal: 6181
        void set_arguments_from(class ed::vector<class cockpit::ccPanelGauge *, class ed::allocator<class cockpit::ccPanelGauge *>> &);

    // RVA: 0x1A31 | Ordinal: 6706
        void testCockpitViewForRender(void) const;

    // RVA: 0x1B1C | Ordinal: 6941
        void updateLivery(void);

    // RVA: 0x1B24 | Ordinal: 6949
        void updatePanelAccelerations(double);

    // RVA: 0x1B5B | Ordinal: 7004
        void update_effect(class cockpit::ccPanelEffect *);

    // RVA: 0x1B5C | Ordinal: 7005
        void update_effects(void);

    // RVA: 0x386 | Ordinal: 903
        void _ccMainPanel(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCMAINPANEL_HPP
