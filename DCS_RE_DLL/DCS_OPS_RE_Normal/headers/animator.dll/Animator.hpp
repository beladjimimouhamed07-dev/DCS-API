#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: Animator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Animator
{
public:

    // RVA: 0x6E | Ordinal: 111
        void Pos3_from_hor_dir(class osg::Vec3f const &);

    // RVA: 0xAE | Ordinal: 175
        void add_debug_name_filter(class ed::basic_string<char> const &);

    // RVA: 0xB2 | Ordinal: 179
        void angle_between_vectors(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0xB8 | Ordinal: 185
        void blend_matrices(class osg::Matrixf const &, class osg::Matrixf const &, float);

    // RVA: 0xBF | Ordinal: 192
        void clamp(float, float, float);

    // RVA: 0xCE | Ordinal: 207
        void debug_filter(class ed::basic_string<char> const &, int, char const *, ...);

    // RVA: 0xDB | Ordinal: 220
        void draw_anim_explorer(class ed::vector<class std::tuple<int, class ed::basic_string<char>, class osg::Vec3f, class osg::Vec3f, class osg::Vec3f, class osg::Vec3f, class osg::Vec2f>, class ed::allocator<class std::tuple<int, class ed::basic_string<char>, class osg::Vec3f, class osg::Vec3f, class osg::Vec3f, class osg::Vec3f, class osg::Vec2f>>> &, float);

    // RVA: 0xDC | Ordinal: 221
        void draw_axis(class osg::Matrixd const &, float, unsigned int);

    // RVA: 0xE0 | Ordinal: 225
        void draw_segment(class osg::Vec3f const &, class osg::Vec3f const &, class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0xE1 | Ordinal: 226
        void draw_segment(float, class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0xFF | Ordinal: 256
        void get_animation_manager(char const *);

    // RVA: 0x12C | Ordinal: 301
        void get_heading(class wPosition3<float> const &);

    // RVA: 0x12D | Ordinal: 302
        void get_heading(class osg::Vec3f const &);

    // RVA: 0x137 | Ordinal: 312
        void get_line_intersection(class osg::Vec2f const &, class osg::Vec2f const &, class osg::Vec2f const &, class osg::Vec2f const &, class osg::Vec2f &);

    // RVA: 0x138 | Ordinal: 313
        void get_line_intersection(float, float, float, float, float, float, float, float, float *, float *);

    // RVA: 0x13E | Ordinal: 319
        void get_model_time(void);

    // RVA: 0x17F | Ordinal: 384
        void get_server_animation_id(class ed::basic_string<char> const &, int);

    // RVA: 0x193 | Ordinal: 404
        void get_translation(class aiMatrix4x4t<float> const &);

    // RVA: 0x1A4 | Ordinal: 421
        void init_animation_managers(void);

    // RVA: 0x1A6 | Ordinal: 423
        void invert(class osg::Matrixf const &);

    // RVA: 0x1A7 | Ordinal: 424
        void lerp(class osg::Matrixf const &, class osg::Matrixf const &, double);

    // RVA: 0x1A8 | Ordinal: 425
        void limit_vector(class osg::Vec3f const &, float);

    // RVA: 0x1AF | Ordinal: 432
        void log(char const *, ...);

    // RVA: 0x1B0 | Ordinal: 433
        void make_matrix(class osg::Vec3f const &, class osg::Quatf const &);

    // RVA: 0x1B4 | Ordinal: 437
        void odprintf(char const *, ...);

    // RVA: 0x1BB | Ordinal: 444
        void print_Vec3f(class osg::Vec3f const &, class ed::basic_string<char> const &);

    // RVA: 0x1BC | Ordinal: 445
        void print_matrix(class osg::Matrixf const &, class ed::basic_string<char> const &);

    // RVA: 0x1D3 | Ordinal: 468
        void render_marker(class osg::Matrixf, class osg::Matrixf const &, float);

    // RVA: 0x1D4 | Ordinal: 469
        void render_marker(class osg::Matrixf, class osg::Vec3f const &, float);

    // RVA: 0x1E1 | Ordinal: 482
        void serialize_animation_names(class Mail::Writer &);

    // RVA: 0x205 | Ordinal: 518
        void set_heading(class wPosition3<float> &, float);

    // RVA: 0x208 | Ordinal: 521
        void set_log_callback(class std::function<void __cdecl(char const *)> const &);

    // RVA: 0x219 | Ordinal: 538
        void set_time_callback(class std::function<double __cdecl(void)> const &);

    // RVA: 0x21A | Ordinal: 539
        void set_translation(class aiMatrix4x4t<float> &, class osg::Vec3f const &);

    // RVA: 0x21D | Ordinal: 542
        void slerp(class osg::Vec4f const &, class osg::Vec4f const &, float);

    // RVA: 0x226 | Ordinal: 551
        void toEulerianAngle(class aiQuaterniont<float> const &, float &, float &, float &);

    // RVA: 0x227 | Ordinal: 552
        void toEulerianAngle(class Quaternion const &, float &, float &, float &);

    // RVA: 0x228 | Ordinal: 553
        void toEulerianAngle(class osg::Quatf const &, float &, float &, float &);

    // RVA: 0x229 | Ordinal: 554
        void to_Matrixf(class aiMatrix4x4t<float> const &);

    // RVA: 0x22A | Ordinal: 555
        void to_Position3(class osg::Matrixf const &);

    // RVA: 0x22B | Ordinal: 556
        void to_Position3(class osg::Vec2f const &, float);

    // RVA: 0x22C | Ordinal: 557
        void to_Position3(class osg::Vec3f const &, float);

    // RVA: 0x22D | Ordinal: 558
        void to_Position3(class osg::Vec4f const &);

    // RVA: 0x22E | Ordinal: 559
        void to_Vec3f(class aiVector3t<float> const &);

    // RVA: 0x22F | Ordinal: 560
        void to_Vec3f(class osg::Vec2f const &);

    // RVA: 0x230 | Ordinal: 561
        void to_Vec4f(class aiQuaterniont<float> const &);

    // RVA: 0x231 | Ordinal: 562
        void to_position3(class aiMatrix4x4t<float> const &);
};

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATOR_HPP
