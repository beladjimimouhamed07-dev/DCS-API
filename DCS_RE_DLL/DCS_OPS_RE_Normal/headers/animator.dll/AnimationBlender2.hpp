#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationBlender2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationBlender2
{
public:

    // RVA: 0x5 | Ordinal: 6
        void AnimationBlender2(void);

    // RVA: 0x73 | Ordinal: 116
        void _add_clip(int);

    // RVA: 0x75 | Ordinal: 118
        void _apply_clip(int, int);

    // RVA: 0x76 | Ordinal: 119
        void _apply_properties(struct Animator::AnimationBlender2::Clip *);

    // RVA: 0x83 | Ordinal: 132
        void _draw_clip(struct Animator::AnimationBlender2::Clip *, int);

    // RVA: 0x84 | Ordinal: 133
        void _draw_drag_ctrl(char const *, char const *, float *, class std::function<void __cdecl(struct Animator::AnimationBlender2::Clip *, float, float)>, float, float);

    // RVA: 0x85 | Ordinal: 134
        void _get_clip_matrix(struct Animator::AnimationBlender2::Clip *, float);

    // RVA: 0x88 | Ordinal: 137
        void _get_instance_position(float);

    // RVA: 0x96 | Ordinal: 151
        void _match_pose(float, int);

    // RVA: 0x9A | Ordinal: 155
        void _remove_clip(int);

    // RVA: 0x9B | Ordinal: 156
        void _render_skeleton(class osg::Matrixf const &, class osg::Matrixf const &);

    // RVA: 0x9C | Ordinal: 157
        void _render_skeleton(float, int, class osg::Vec4f const &, class osg::Matrixf const &, class osg::Matrixf const &, bool);

    // RVA: 0xA0 | Ordinal: 161
        void _set_clip(int);

    // RVA: 0xAB | Ordinal: 172
        void _update_cookie(void);

    // RVA: 0xAC | Ordinal: 173
        void _update_timeline(void);

    // RVA: 0x167 | Ordinal: 360
        void get_position(void);

    // RVA: 0x19B | Ordinal: 412
        void gui(class osg::Matrixf);

    // RVA: 0x1CE | Ordinal: 463
        void render(class osg::Matrixf);

    // RVA: 0x1F8 | Ordinal: 505
        void set_cookie(class Animator::CharacterModelCookie *);

    // RVA: 0x27 | Ordinal: 40
        void _AnimationBlender2(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONBLENDER2_HPP
