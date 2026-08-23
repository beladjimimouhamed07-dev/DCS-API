#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceHint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceHint
{
public:

    // RVA: 0x94E | Ordinal: 2383
        void apply(void);

    // RVA: 0x236 | Ordinal: 567
        void ceHint(class cockpit::ceHint const &);

    // RVA: 0x237 | Ordinal: 568
        void ceHint(void);

    // RVA: 0xA97 | Ordinal: 2712
        void class_name(void) const;

    // RVA: 0xAD3 | Ordinal: 2772
        void clear_string(void);

    // RVA: 0xB1E | Ordinal: 2847
        void copy(void);

    // RVA: 0xB8D | Ordinal: 2958
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0xD6B | Ordinal: 3436
        void getName(void) const;

    // RVA: 0xE42 | Ordinal: 3651
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xF20 | Ordinal: 3873
        void get_draw_level(void) const;

    // RVA: 0xF52 | Ordinal: 3923
        void get_geometry_children_ref(void);

    // RVA: 0xF54 | Ordinal: 3925
        void get_geometry_hosts(void);

    // RVA: 0xF82 | Ordinal: 3971
        void get_isDraw(void) const;

    // RVA: 0xFF2 | Ordinal: 4083
        void get_params(void) const;

    // RVA: 0xFF4 | Ordinal: 4085
        void get_params_ref(void);

    // RVA: 0x101C | Ordinal: 4125
        void get_position(void) const;

    // RVA: 0x1020 | Ordinal: 4129
        void get_position_ref(void);

    // RVA: 0x1057 | Ordinal: 4184
        void get_root(void);

    // RVA: 0x1059 | Ordinal: 4186
        void get_rootName(void) const;

    // RVA: 0x10E0 | Ordinal: 4321
        void get_use_root_params(void);

    // RVA: 0x1103 | Ordinal: 4356
        void getparent(void);

    // RVA: 0x12AE | Ordinal: 4783
        void is_collimated(void) const;

    // RVA: 0x13C0 | Ordinal: 5057
        void log(class ed::basic_string<char> &, bool);

    // RVA: 0x1511 | Ordinal: 5394
        void precreate(void);

    // RVA: 0x17DB | Ordinal: 6108
        void setToCheckGeometry(bool);

    // RVA: 0x17F1 | Ordinal: 6130
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x182F | Ordinal: 6192
        void set_break_update_cycle(bool);

    // RVA: 0x1847 | Ordinal: 6216
        void set_contrast(float);

    // RVA: 0x188C | Ordinal: 6285
        void set_forced_color(class osg::Vec3f const &);

    // RVA: 0x188D | Ordinal: 6286
        void set_forced_color(float, float, float);

    // RVA: 0x1890 | Ordinal: 6289
        void set_formatted_string(wchar_t const *, ...);

    // RVA: 0x189E | Ordinal: 6303
        void set_geometry_child(class cockpit::Element *);

    // RVA: 0x18A0 | Ordinal: 6305
        void set_geometry_host(class cockpit::Element *);

    // RVA: 0x18B3 | Ordinal: 6324
        void set_isDraw(bool);

    // RVA: 0x1906 | Ordinal: 6407
        void set_position(class wPosition3<float> const &);

    // RVA: 0x193A | Ordinal: 6459
        void set_strcat(wchar_t const *, ...);

    // RVA: 0x193C | Ordinal: 6461
        void set_strcat_by_predefined_format(int, ...);

    // RVA: 0x193E | Ordinal: 6463
        void set_string(class ed::basic_string<wchar_t> const &);

    // RVA: 0x195A | Ordinal: 6491
        void set_use_contrast(bool);

    // RVA: 0x195D | Ordinal: 6494
        void set_use_forced_color(bool);

    // RVA: 0x1960 | Ordinal: 6497
        void set_use_root_params(bool);

    // RVA: 0x1962 | Ordinal: 6499
        void set_use_temporal_set(bool, unsigned int);

    // RVA: 0x1971 | Ordinal: 6514
        void setchild_element(class cockpit::Element *);

    // RVA: 0x1976 | Ordinal: 6519
        void setparent(class cockpit::ccIndicatorPage *);

    // RVA: 0x1978 | Ordinal: 6521
        void setparent_element(class cockpit::Element *);

    // RVA: 0x1AF3 | Ordinal: 6900
        void update(void);

    // RVA: 0x39A | Ordinal: 923
        void _ceHint(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEHINT_HPP
