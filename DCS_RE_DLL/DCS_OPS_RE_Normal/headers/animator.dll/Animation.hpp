#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: Animation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class Animation
{
public:

    // RVA: 0x3 | Ordinal: 4
        void Animation(class Animator::Animation const &);

    // RVA: 0x4 | Ordinal: 5
        void Animation(class Animator::AnimationManager *, class ed::basic_string<char> const &, int);

    // RVA: 0x74 | Ordinal: 117
        void _apply(float, struct Animator::TransitionParams, struct Animator::ShaderAnimation &, class std::function<float __cdecl(class ed::basic_string<char> const &)>);

    // RVA: 0x8A | Ordinal: 139
        void _get_matrix(float, class osg::Vec2f, class osg::Vec3f, class std::function<class std::tuple<class osg::Quatf, class osg::Vec3f> __cdecl(int, float, class osg::Vec3f)>) const;

    // RVA: 0x9F | Ordinal: 160
        void _root_request(int, float, class osg::Vec3f) const;

    // RVA: 0xB3 | Ordinal: 180
        void apply(float, class std::unordered_map<class ed::basic_string<char>, float, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class std::allocator<struct std::pair<class ed::basic_string<char> const, float>>> const &, struct Animator::TransitionParams, struct Animator::ShaderAnimation &);

    // RVA: 0xB4 | Ordinal: 181
        void apply(float, class Animator::IPropertyHolder *, struct Animator::TransitionParams, struct Animator::ShaderAnimation &);

    // RVA: 0x10A | Ordinal: 267
        void get_blendspace_id(void);

    // RVA: 0x120 | Ordinal: 289
        void get_defaults(void) const;

    // RVA: 0x124 | Ordinal: 293
        void get_duration(struct Animator::ShaderAnimation const &) const;

    // RVA: 0x125 | Ordinal: 294
        void get_duration(class osg::Vec2f const &) const;

    // RVA: 0x126 | Ordinal: 295
        void get_duration(class Animator::IPropertyHolder *) const;

    // RVA: 0x12E | Ordinal: 303
        void get_id(void);

    // RVA: 0x141 | Ordinal: 322
        void get_name(void);

    // RVA: 0x146 | Ordinal: 327
        void get_node_matrix(float, struct Animator::ShaderAnimation const &, int) const;

    // RVA: 0x156 | Ordinal: 343
        void get_num_cycles(float, class Animator::CharacterModelCookie *) const;

    // RVA: 0x159 | Ordinal: 346
        void get_num_points(void);

    // RVA: 0x15B | Ordinal: 348
        void get_override(float) const;

    // RVA: 0x15E | Ordinal: 351
        void get_point(int);

    // RVA: 0x16F | Ordinal: 368
        void get_root_end(struct Animator::ShaderAnimation const &) const;

    // RVA: 0x170 | Ordinal: 369
        void get_root_end(class Animator::IPropertyHolder *) const;

    // RVA: 0x171 | Ordinal: 370
        void get_root_matrix(float, struct Animator::ShaderAnimation const &, bool) const;

    // RVA: 0x172 | Ordinal: 371
        void get_root_matrix(float, class osg::Vec2f, class osg::Vec3f) const;

    // RVA: 0x179 | Ordinal: 378
        void get_root_start(struct Animator::ShaderAnimation const &) const;

    // RVA: 0x17C | Ordinal: 381
        void get_route_plan(float, float) const;

    // RVA: 0x17D | Ordinal: 382
        void get_route_plan(class Animator::IPropertyHolder *) const;

    // RVA: 0x184 | Ordinal: 389
        void get_speed(float, struct Animator::ShaderAnimation const &) const;

    // RVA: 0x195 | Ordinal: 406
        void get_weights(float, float, class boost::container::small_vector_base<float, class ed::allocator<float>, void> &) const;

    // RVA: 0x196 | Ordinal: 407
        void get_x_axis_name(void) const;

    // RVA: 0x197 | Ordinal: 408
        void get_x_bounds(void) const;

    // RVA: 0x198 | Ordinal: 409
        void get_y_axis_name(void) const;

    // RVA: 0x199 | Ordinal: 410
        void get_y_bounds(void) const;

    // RVA: 0x19A | Ordinal: 411
        void gui(class Animator::CharacterModelCookie *);

    // RVA: 0x1A9 | Ordinal: 426
        void load(class Lua::Config &);

    // RVA: 0x1C1 | Ordinal: 450
        void processing_type(void) const;

    // RVA: 0x1F3 | Ordinal: 500
        void set_buffer_shift(int);

    // RVA: 0x240 | Ordinal: 577
        void update_processing_type(enum Animator::EAnimationProcessingType, int);

    // RVA: 0x241 | Ordinal: 578
        void update_properties(float, struct Animator::ShaderAnimation &, class Animator::IPropertyHolder *);

    // RVA: 0x26 | Ordinal: 39
        void _Animation(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATION_HPP
