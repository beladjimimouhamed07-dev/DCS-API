#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avKneeboard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avKneeboard
{
public:

    // RVA: 0x836 | Ordinal: 2103
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x888 | Ordinal: 2185
        void SetCommand(int, float);

    // RVA: 0x91F | Ordinal: 2336
        void add_new_page_code(class ed::basic_string<char> const &);

    // RVA: 0x920 | Ordinal: 2337
        void add_new_page_picture_name(class ed::basic_string<char> const &);

    // RVA: 0x921 | Ordinal: 2338
        void add_new_page_picture_ptr(class render::Texture const &);

    // RVA: 0x922 | Ordinal: 2339
        void add_note(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x143 | Ordinal: 324
        void avKneeboard(class cockpit::avKneeboard const &);

    // RVA: 0x144 | Ordinal: 325
        void avKneeboard(void);

    // RVA: 0xA69 | Ordinal: 2666
        void check_camera_position(void);

    // RVA: 0xA6A | Ordinal: 2667
        void check_camera_scale(void);

    // RVA: 0xB62 | Ordinal: 2915
        void default_storage_bounds(void);

    // RVA: 0xBF9 | Ordinal: 3066
        void find_available_coverage(struct cockpit::kneeboard_map_page &) const;

    // RVA: 0xBFA | Ordinal: 3067
        void find_duplicate(class osg::Vec3d const &, unsigned int);

    // RVA: 0xBFC | Ordinal: 3069
        void find_page_number_by_id_(int);

    // RVA: 0xC19 | Ordinal: 3098
        void form_page_id_for_indicator(void) const;

    // RVA: 0xECC | Ordinal: 3789
        void get_camera_point(void) const;

    // RVA: 0xED4 | Ordinal: 3797
        void get_change_counter(void) const;

    // RVA: 0xFB4 | Ordinal: 4021
        void get_map(void) const;

    // RVA: 0xFB6 | Ordinal: 4023
        void get_map_rotation(double &);

    // RVA: 0xFE3 | Ordinal: 4068
        void get_notes(void) const;

    // RVA: 0xFEC | Ordinal: 4077
        void get_page_data(void) const;

    // RVA: 0xFED | Ordinal: 4078
        void get_page_id(void) const;

    // RVA: 0xFEE | Ordinal: 4079
        void get_page_number(void) const;

    // RVA: 0xFEF | Ordinal: 4080
        void get_page_shortcut(unsigned int);

    // RVA: 0xFF0 | Ordinal: 4081
        void get_pages_count(void) const;

    // RVA: 0x105C | Ordinal: 4189
        void get_route(void) const;

    // RVA: 0x1091 | Ordinal: 4242
        void get_shortcuts_count(void) const;

    // RVA: 0x10B1 | Ordinal: 4274
        void get_storage(void);

    // RVA: 0x10F2 | Ordinal: 4339
        void get_volume_size(void) const;

    // RVA: 0x10FD | Ordinal: 4350
        void get_zones_storage(void);

    // RVA: 0x1182 | Ordinal: 4483
        void init_waypoints(void);

    // RVA: 0x1187 | Ordinal: 4488
        void init_zones(void);

    // RVA: 0x11CC | Ordinal: 4557
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x13FF | Ordinal: 5120
        void mark_self(void);

    // RVA: 0x1400 | Ordinal: 5121
        void mark_target(class osg::Vec3d const &);

    // RVA: 0x1425 | Ordinal: 5158
        void next_page(void);

    // RVA: 0x1490 | Ordinal: 5265
        void page_data_by_page_id_(unsigned int);

    // RVA: 0x1491 | Ordinal: 5266
        void page_id_from_indicator_page(unsigned int) const;

    // RVA: 0x14EF | Ordinal: 5360
        void post_initialize(void);

    // RVA: 0x151B | Ordinal: 5404
        void prev_page(void);

    // RVA: 0x1614 | Ordinal: 5653
        void reserve_new_page(void);

    // RVA: 0x18FC | Ordinal: 6397
        void set_page_as_shortcut(unsigned int);

    // RVA: 0x18FD | Ordinal: 6398
        void set_page_from_shortcut(unsigned int);

    // RVA: 0x18FE | Ordinal: 6399
        void set_page_id_from_indicator(unsigned int);

    // RVA: 0x1964 | Ordinal: 6501
        void set_user_charts_count(unsigned int);

    // RVA: 0x1A47 | Ordinal: 6728
        void to_map_units(class osg::Vec3d const &) const;

    // RVA: 0x1A80 | Ordinal: 6785
        void unset_page_as_shortcut(unsigned int);

    // RVA: 0x1ABB | Ordinal: 6844
        void update(void);

    // RVA: 0x1B50 | Ordinal: 6993
        void update_change_counter(void);

    // RVA: 0x1B91 | Ordinal: 7058
        void use_T4_render(void) const;

    // RVA: 0x31C | Ordinal: 797
        void _avKneeboard(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVKNEEBOARD_HPP
