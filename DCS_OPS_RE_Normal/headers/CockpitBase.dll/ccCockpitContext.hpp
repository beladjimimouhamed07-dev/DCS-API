#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccCockpitContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccCockpitContext
{
public:

    // RVA: 0x1EC | Ordinal: 493
        void ccCockpitContext(void);

    // RVA: 0xB2F | Ordinal: 2864
        void create(class ed::basic_string<char> const &);

    // RVA: 0xB37 | Ordinal: 2872
        void create_additional_services(void);

    // RVA: 0xB38 | Ordinal: 2873
        void create_all_from(class Lua::Config &);

    // RVA: 0xB39 | Ordinal: 2874
        void create_device(unsigned char, class Lua::Config &);

    // RVA: 0xB47 | Ordinal: 2888
        void create_indicator(int, class Lua::Config &);

    // RVA: 0xB87 | Ordinal: 2952
        void draw(void);

    // RVA: 0xBA1 | Ordinal: 2978
        void draw_screenspace(void);

    // RVA: 0xBA3 | Ordinal: 2980
        void draw_screenspace_with_children(void);

    // RVA: 0xBB3 | Ordinal: 2996
        void draw_update(void);

    // RVA: 0xBCB | Ordinal: 3020
        void enumerate_shapes(class std::function<void __cdecl(class Graphics::ModelInstance *, class wPosition3<double> const &, class Graphics::effectState *)>, class wPosition3<double> const &);

    // RVA: 0xBCC | Ordinal: 3021
        void enumerate_shapes(class std::function<void __cdecl(class Graphics::ModelInstance *, class wPosition3<double> const &, class Graphics::effectState *)>);

    // RVA: 0xC65 | Ordinal: 3174
        void getCockpitModelInstance(void);

    // RVA: 0xDC0 | Ordinal: 3521
        void getRenderBoundingBox(void);

    // RVA: 0xEA7 | Ordinal: 3752
        void get_argument(int);

    // RVA: 0xED7 | Ordinal: 3800
        void get_cockpit_orientation(void);

    // RVA: 0xED8 | Ordinal: 3801
        void get_cockpit_position_world_space(void);

    // RVA: 0xED9 | Ordinal: 3802
        void get_cockpit_render_position(void);

    // RVA: 0xEDA | Ordinal: 3803
        void get_cockpit_render_position_in_origin_space(void);

    // RVA: 0xEDB | Ordinal: 3804
        void get_cockpit_render_position_local(void);

    // RVA: 0xEEC | Ordinal: 3821
        void get_control_by_name(class ed::basic_string<char> const &);

    // RVA: 0xEEF | Ordinal: 3824
        void get_controls_tree(void) const;

    // RVA: 0xF23 | Ordinal: 3876
        void get_dynamic_shift(void) const;

    // RVA: 0xF24 | Ordinal: 3877
        void get_dynamic_shift_unprocessed(void);

    // RVA: 0xFF6 | Ordinal: 4087
        void get_parent(void) const;

    // RVA: 0xFF7 | Ordinal: 4088
        void get_path(void) const;

    // RVA: 0x100C | Ordinal: 4109
        void get_plugin_by_index(unsigned int);

    // RVA: 0x100D | Ordinal: 4110
        void get_plugin_by_name(class ed::basic_string<char> const &);

    // RVA: 0x107D | Ordinal: 4222
        void get_self_index(void) const;

    // RVA: 0x10F7 | Ordinal: 4344
        void get_wide_device(unsigned int);

    // RVA: 0x1181 | Ordinal: 4482
        void init_unit(class MovingObject *, char const *);

    // RVA: 0x12BC | Ordinal: 4797
        void is_main(void) const;

    // RVA: 0x1484 | Ordinal: 5253
        void once_per_frame(void);

    // RVA: 0x14A0 | Ordinal: 5281
        void parse_for_render(class Graphics::ModelParser &);

    // RVA: 0x157A | Ordinal: 5499
        void reassign_devices_from_state(class Lua::Config &);

    // RVA: 0x1587 | Ordinal: 5512
        void reg_once_per_frame_call(class std::function<void __cdecl(void)>);

    // RVA: 0x1597 | Ordinal: 5528
        void reinit_indicator(class Lua::Config &, int);

    // RVA: 0x15CF | Ordinal: 5584
        void release(void);

    // RVA: 0x1821 | Ordinal: 6178
        void set_argument(int, float);

    // RVA: 0x19D0 | Ordinal: 6609
        void start(void);

    // RVA: 0x1A7D | Ordinal: 6782
        void unreg_once_per_frame_call(unsigned int);

    // RVA: 0x1B44 | Ordinal: 6981
        void update_active_shift(void);

    // RVA: 0x376 | Ordinal: 887
        void _ccCockpitContext(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCCOCKPITCONTEXT_HPP
