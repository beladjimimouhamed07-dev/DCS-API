#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationBlender
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationBlender
{
public:

    // RVA: 0x6 | Ordinal: 7
        void AnimationBlender(class Animator::AnimationBlender const &);

    // RVA: 0x7 | Ordinal: 8
        void AnimationBlender(void);

    // RVA: 0x127 | Ordinal: 296
        void get_edit_mode(void);

    // RVA: 0x1A0 | Ordinal: 417
        void init(char const *);

    // RVA: 0x1A5 | Ordinal: 422
        void initialized(void);

    // RVA: 0x1CF | Ordinal: 464
        void render(void);

    // RVA: 0x1D5 | Ordinal: 470
        void render_skeleton(class osg::Matrixf);

    // RVA: 0x225 | Ordinal: 550
        void sync_phase(void);

    // RVA: 0x23B | Ordinal: 572
        void update_controls(void);

    // RVA: 0x245 | Ordinal: 582
        void validate_transition(void);

    // RVA: 0x28 | Ordinal: 41
        void _AnimationBlender(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONBLENDER_HPP
