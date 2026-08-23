#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccIndicator
{
public:

    // RVA: 0x7A9 | Ordinal: 1962
        void GetCurrentPage(void);

    // RVA: 0x7B8 | Ordinal: 1977
        void GetHalfHeight(void) const;

    // RVA: 0x7B9 | Ordinal: 1978
        void GetHalfWidth(void) const;

    // RVA: 0x850 | Ordinal: 2129
        void PrepareParser(void);

    // RVA: 0x856 | Ordinal: 2135
        void RegisterInScript(struct lua_State *);

    // RVA: 0x8A8 | Ordinal: 2217
        void SetCurrentPage(unsigned char);

    // RVA: 0x961 | Ordinal: 2402
        void assign_dedicated_viewport(struct cockpit::indicator_viewport const &);

    // RVA: 0x974 | Ordinal: 2421
        void blinking(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x975 | Ordinal: 2422
        void blinking_direct(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x97A | Ordinal: 2427
        void bound_by_box(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x97B | Ordinal: 2428
        void bound_by_circle(class osg::Vec3f &, float, float);

    // RVA: 0x97C | Ordinal: 2429
        void bound_by_circle(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x97D | Ordinal: 2430
        void bound_by_circle_without_root(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x9F2 | Ordinal: 2547
        void can_be_rendered_to_viewport(void) const;

    // RVA: 0x200 | Ordinal: 513
        void ccIndicator(class cockpit::ccIndicator const &);

    // RVA: 0x201 | Ordinal: 514
        void ccIndicator(void);

    // RVA: 0xA1D | Ordinal: 2590
        void change_color_when_parameter_equal_to_number(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA21 | Ordinal: 2594
        void change_texture_state_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA7A | Ordinal: 2683
        void check_page(struct cockpit::Device_Mode);

    // RVA: 0xA7D | Ordinal: 2686
        void check_purpose(int) const;

    // RVA: 0xA7E | Ordinal: 2687
        void check_purpose_update(int) const;

    // RVA: 0xAE5 | Ordinal: 2790
        void compare_parameters(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB11 | Ordinal: 2834
        void control(void);

    // RVA: 0xB34 | Ordinal: 2869
        void createNewSubset(unsigned char, class ed::basic_string<char> const &, bool);

    // RVA: 0xB42 | Ordinal: 2883
        void create_elements_controllers_map(void);

    // RVA: 0xB88 | Ordinal: 2953
        void draw(unsigned char);

    // RVA: 0xB89 | Ordinal: 2954
        void draw(void);

    // RVA: 0xB93 | Ordinal: 2964
        void draw_argument_in_range(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA2 | Ordinal: 2979
        void draw_screenspace(bool);

    // RVA: 0xBAE | Ordinal: 2991
        void draw_temporal_set(class cockpit::Element *, unsigned int, unsigned char);

    // RVA: 0xBB2 | Ordinal: 2995
        void draw_to_viewport(struct cockpit::indicator_viewport const &);

    // RVA: 0xBE3 | Ordinal: 3044
        void external_view_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xC1A | Ordinal: 3099
        void fov_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xE33 | Ordinal: 3636
        void getType(void) const;

    // RVA: 0xE4F | Ordinal: 3664
        void getViewport(void) const;

    // RVA: 0xEC9 | Ordinal: 3786
        void get_camera(void);

    // RVA: 0xECD | Ordinal: 3790
        void get_camera_point(void);

    // RVA: 0xEDF | Ordinal: 3808
        void get_collimator_default_distance_factor(void) const;

    // RVA: 0xEE0 | Ordinal: 3809
        void get_collimator_distance_factor_modifier(void) const;

    // RVA: 0xF29 | Ordinal: 3882
        void get_element_on_current_page(char const *);

    // RVA: 0xF2A | Ordinal: 3883
        void get_elements_controllers(void) const;

    // RVA: 0xF2D | Ordinal: 3886
        void get_elements_controllers_ref(void);

    // RVA: 0xF7E | Ordinal: 3967
        void get_initpos(void) const;

    // RVA: 0xFEA | Ordinal: 4075
        void get_page_by_ID(unsigned char);

    // RVA: 0xFEB | Ordinal: 4076
        void get_page_by_ID(unsigned char) const;

    // RVA: 0x101B | Ordinal: 4124
        void get_position(bool) const;

    // RVA: 0x101F | Ordinal: 4128
        void get_position_ref(bool);

    // RVA: 0x104C | Ordinal: 4173
        void get_render_purpose(bool) const;

    // RVA: 0x104D | Ordinal: 4174
        void get_render_purpose(void) const;

    // RVA: 0x104E | Ordinal: 4175
        void get_render_target(void) const;

    // RVA: 0x104F | Ordinal: 4176
        void get_render_target_always(void) const;

    // RVA: 0x106A | Ordinal: 4203
        void get_screen_condition(void);

    // RVA: 0x106C | Ordinal: 4205
        void get_screen_params(class HeapVector<struct Graphics::DynamicParam> &);

    // RVA: 0x110B | Ordinal: 4364
        void global_point_to_screen_space(class osg::Vec3d const &, float &, float &, bool);

    // RVA: 0x110C | Ordinal: 4365
        void global_point_to_screen_space(class osg::Vec3d const &, class cockpit::Element *, bool);

    // RVA: 0x1118 | Ordinal: 4377
        void has_a_purpose_assigned(int) const;

    // RVA: 0x111B | Ordinal: 4380
        void have_draggable_frame_visble(void) const;

    // RVA: 0x114D | Ordinal: 4430
        void increase_render_target_counter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x115F | Ordinal: 4448
        void initGeometry(void);

    // RVA: 0x116B | Ordinal: 4460
        void initPages(void);

    // RVA: 0x1214 | Ordinal: 4629
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x12B3 | Ordinal: 4788
        void is_draw_screenspace(void) const;

    // RVA: 0x136B | Ordinal: 4972
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1393 | Ordinal: 5012
        void line_object_set_point_using_parameters(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x13C2 | Ordinal: 5059
        void log_current_page(class ed::basic_string<char> &);

    // RVA: 0x13F6 | Ordinal: 5111
        void make_draggable_frame(char const *, int, int, int, int);

    // RVA: 0x1411 | Ordinal: 5138
        void move_element(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1413 | Ordinal: 5140
        void move_left_right_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1414 | Ordinal: 5141
        void move_up_down_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1485 | Ordinal: 5254
        void opacity_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1493 | Ordinal: 5268
        void parameter_compare_with_number(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1497 | Ordinal: 5272
        void parameter_in_range(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x14B8 | Ordinal: 5305
        void pop_purpose(void);

    // RVA: 0x1507 | Ordinal: 5384
        void post_initialize(void);

    // RVA: 0x1551 | Ordinal: 5458
        void push_purpose(int);

    // RVA: 0x15D2 | Ordinal: 5587
        void release(void);

    // RVA: 0x15E1 | Ordinal: 5602
        void remove_orientation(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x15E2 | Ordinal: 5603
        void remove_purpose(int);

    // RVA: 0x15E8 | Ordinal: 5609
        void render_purpose(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x15EA | Ordinal: 5611
        void rendered_as_part_of_scene(int);

    // RVA: 0x1643 | Ordinal: 5700
        void rotate_element(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1644 | Ordinal: 5701
        void rotate_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1658 | Ordinal: 5721
        void scale_element(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1664 | Ordinal: 5733
        void screenspace_position_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1841 | Ordinal: 6210
        void set_collimator_distance_factor_modifier(class osg::Vec3f const &);

    // RVA: 0x187A | Ordinal: 6267
        void set_draw_boolean(class cockpit::Element *, class HeapVector<struct Graphics::DynamicParam> const &, bool);

    // RVA: 0x187B | Ordinal: 6268
        void set_draw_by_enum(class cockpit::Element *, class HeapVector<struct Graphics::DynamicParam> const &, unsigned int);

    // RVA: 0x189B | Ordinal: 6300
        void set_full_view_port_coverage(struct cockpit::indicator_viewport const &);

    // RVA: 0x189C | Ordinal: 6301
        void set_geometry(struct cockpit::indicator_geometry const &);

    // RVA: 0x1921 | Ordinal: 6434
        void set_render_materials(void);

    // RVA: 0x1922 | Ordinal: 6435
        void set_render_target_always(bool);

    // RVA: 0x1A34 | Ordinal: 6709
        void text_using_parameter(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A49 | Ordinal: 6730
        void to_screen_space(class osg::Vec3d const &, float &, float &, bool);

    // RVA: 0x1A4A | Ordinal: 6731
        void to_screen_space(class osg::Vec3d const &, class cockpit::Element *, bool);

    // RVA: 0x1A69 | Ordinal: 6762
        void txt_UTF8_substr(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A6C | Ordinal: 6765
        void txt_lo_resource(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A6D | Ordinal: 6766
        void txt_lo_serialnumber(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A6E | Ordinal: 6767
        void txt_lo_version(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A72 | Ordinal: 6771
        void txt_txt_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1AE8 | Ordinal: 6889
        void update(unsigned char);

    // RVA: 0x1AE9 | Ordinal: 6890
        void update(void);

    // RVA: 0x1B69 | Ordinal: 7018
        void update_geometry(void);

    // RVA: 0x1B7A | Ordinal: 7035
        void update_position(int, struct cockpit::indicator_viewport const *);

    // RVA: 0x380 | Ordinal: 897
        void _ccIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCINDICATOR_HPP
