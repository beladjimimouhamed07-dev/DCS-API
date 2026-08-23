#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccKneeboard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccKneeboard
{
public:

    // RVA: 0x83A | Ordinal: 2107
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x8A6 | Ordinal: 2215
        void SetCommand(int, float);

    // RVA: 0x959 | Ordinal: 2394
        void apply_code_as_page(class ed::basic_string<char> const &);

    // RVA: 0x95A | Ordinal: 2395
        void apply_image_as_page(char const *);

    // RVA: 0x207 | Ordinal: 520
        void ccKneeboard(class cockpit::ccKneeboard const &);

    // RVA: 0x208 | Ordinal: 521
        void ccKneeboard(void);

    // RVA: 0xA29 | Ordinal: 2602
        void chart_position(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB44 | Ordinal: 2885
        void create_elements_controllers_map(void);

    // RVA: 0xBA0 | Ordinal: 2977
        void draw_objects(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBAF | Ordinal: 2992
        void draw_temporal_set(class cockpit::Element *, unsigned int, unsigned char);

    // RVA: 0xBB1 | Ordinal: 2994
        void draw_to_render_target(void);

    // RVA: 0xC0A | Ordinal: 3083
        void flight_plan_line(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xECA | Ordinal: 3787
        void get_camera(void);

    // RVA: 0xECE | Ordinal: 3791
        void get_camera_point(void);

    // RVA: 0x106B | Ordinal: 4204
        void get_screen_condition(void);

    // RVA: 0x106D | Ordinal: 4206
        void get_screen_params(class HeapVector<struct Graphics::DynamicParam> &);

    // RVA: 0x10F9 | Ordinal: 4346
        void get_wnd(void);

    // RVA: 0x1217 | Ordinal: 4632
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x12BD | Ordinal: 4798
        void is_map_page(void);

    // RVA: 0x12DA | Ordinal: 4827
        void l_add_map_page(struct lua_State *);

    // RVA: 0x136C | Ordinal: 4973
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1598 | Ordinal: 5529
        void relative_map_position(class wPosition3<float> &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1599 | Ordinal: 5530
        void relative_map_position(class osg::Vec3f &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x15D4 | Ordinal: 5589
        void release(void);

    // RVA: 0x197B | Ordinal: 6524
        void shortcut(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A48 | Ordinal: 6729
        void to_render_target(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1AED | Ordinal: 6894
        void update(unsigned char);

    // RVA: 0x1B4E | Ordinal: 6991
        void update_camera(void);

    // RVA: 0x1B9D | Ordinal: 7070
        void visible_now(void) const;

    // RVA: 0x1BA0 | Ordinal: 7073
        void waypoint_name(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1BA1 | Ordinal: 7074
        void waypoint_position(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1BAA | Ordinal: 7083
        void zone_position(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x384 | Ordinal: 901
        void _ccKneeboard(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCKNEEBOARD_HPP
