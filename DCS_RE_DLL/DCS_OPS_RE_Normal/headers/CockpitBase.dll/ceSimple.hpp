#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceSimple
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceSimple
{
public:

    // RVA: 0x841 | Ordinal: 2114
        void OnFirstTime(void);

    // RVA: 0x952 | Ordinal: 2387
        void apply(void);

    // RVA: 0x242 | Ordinal: 579
        void ceSimple(class cockpit::ceSimple const &);

    // RVA: 0x243 | Ordinal: 580
        void ceSimple(void);

    // RVA: 0xA14 | Ordinal: 2581
        void changeGeometryChildrenStat(void);

    // RVA: 0xA9D | Ordinal: 2718
        void class_name(void) const;

    // RVA: 0xB24 | Ordinal: 2853
        void copy(void);

    // RVA: 0xB8E | Ordinal: 2959
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0xD6C | Ordinal: 3437
        void getName(void) const;

    // RVA: 0xE48 | Ordinal: 3657
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xECB | Ordinal: 3788
        void get_camera_orient(class Graphics::Camera const &, bool);

    // RVA: 0xED5 | Ordinal: 3798
        void get_children_ref(void);

    // RVA: 0xF21 | Ordinal: 3874
        void get_draw_level(void) const;

    // RVA: 0xF53 | Ordinal: 3924
        void get_geometry_children_ref(void);

    // RVA: 0xF55 | Ordinal: 3926
        void get_geometry_hosts(void);

    // RVA: 0xF7C | Ordinal: 3965
        void get_init_pos(void);

    // RVA: 0xF83 | Ordinal: 3972
        void get_isDraw(void) const;

    // RVA: 0xFE8 | Ordinal: 4073
        void get_orient(void);

    // RVA: 0xFF3 | Ordinal: 4084
        void get_params(void) const;

    // RVA: 0xFF5 | Ordinal: 4086
        void get_params_ref(void);

    // RVA: 0x101D | Ordinal: 4126
        void get_position(void) const;

    // RVA: 0x1021 | Ordinal: 4130
        void get_position_ref(void);

    // RVA: 0x1058 | Ordinal: 4185
        void get_root(void);

    // RVA: 0x105A | Ordinal: 4187
        void get_rootName(void) const;

    // RVA: 0x106E | Ordinal: 4207
        void get_screenspace_plane(class Graphics::Camera const &);

    // RVA: 0x10E1 | Ordinal: 4322
        void get_use_root_params(void);

    // RVA: 0x10FC | Ordinal: 4349
        void get_z_enable_mat_param(void);

    // RVA: 0x1104 | Ordinal: 4357
        void getparent(void);

    // RVA: 0x12AF | Ordinal: 4784
        void is_collimated(void) const;

    // RVA: 0x13C1 | Ordinal: 5058
        void log(class ed::basic_string<char> &, bool);

    // RVA: 0x13C3 | Ordinal: 5060
        void log_self(class ed::basic_string<char> &);

    // RVA: 0x1512 | Ordinal: 5395
        void precreate(void);

    // RVA: 0x1611 | Ordinal: 5650
        void rescale(void);

    // RVA: 0x167C | Ordinal: 5757
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17DC | Ordinal: 6109
        void setToCheckGeometry(bool);

    // RVA: 0x17F7 | Ordinal: 6136
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x1830 | Ordinal: 6193
        void set_break_update_cycle(bool);

    // RVA: 0x1848 | Ordinal: 6217
        void set_contrast(float);

    // RVA: 0x184D | Ordinal: 6222
        void set_custom_mfd_material_params(bool, bool, float, float, float);

    // RVA: 0x188E | Ordinal: 6287
        void set_forced_color(class osg::Vec3f const &);

    // RVA: 0x188F | Ordinal: 6288
        void set_forced_color(float, float, float);

    // RVA: 0x189F | Ordinal: 6304
        void set_geometry_child(class cockpit::Element *);

    // RVA: 0x18A1 | Ordinal: 6306
        void set_geometry_host(class cockpit::Element *);

    // RVA: 0x18B4 | Ordinal: 6325
        void set_isDraw(bool);

    // RVA: 0x18D3 | Ordinal: 6356
        void set_mat_params(class cockpit::ccIndicationRenderParser const &, class Graphics::RenderObject *);

    // RVA: 0x18D5 | Ordinal: 6358
        void set_mat_params_blend_state(class Graphics::RenderObject *);

    // RVA: 0x18D6 | Ordinal: 6359
        void set_material(class ed::basic_string<char> const &);

    // RVA: 0x1907 | Ordinal: 6408
        void set_position(class wPosition3<float> const &);

    // RVA: 0x190A | Ordinal: 6411
        void set_position_to_render(void);

    // RVA: 0x195B | Ordinal: 6492
        void set_use_contrast(bool);

    // RVA: 0x195E | Ordinal: 6495
        void set_use_forced_color(bool);

    // RVA: 0x1961 | Ordinal: 6498
        void set_use_root_params(bool);

    // RVA: 0x1963 | Ordinal: 6500
        void set_use_temporal_set(bool, unsigned int);

    // RVA: 0x1972 | Ordinal: 6515
        void setchild_element(class cockpit::Element *);

    // RVA: 0x1977 | Ordinal: 6520
        void setparent(class cockpit::ccIndicatorPage *);

    // RVA: 0x1979 | Ordinal: 6522
        void setparent_element(class cockpit::Element *);

    // RVA: 0x1997 | Ordinal: 6552
        void single_object_submit(class cockpit::ccIndicationRenderParser &, class Graphics::RenderObject &);

    // RVA: 0x1AF4 | Ordinal: 6901
        void update(void);

    // RVA: 0x3A0 | Ordinal: 929
        void _ceSimple(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESIMPLE_HPP
