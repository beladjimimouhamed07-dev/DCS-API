#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationController
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationController
{
public:

    // RVA: 0x8 | Ordinal: 9
        void AnimationController(class Animator::AnimationController const &);

    // RVA: 0x9 | Ordinal: 10
        void AnimationController(class Animator::CharacterModelCookie *);

    // RVA: 0x97 | Ordinal: 152
        void _process_path(struct Animator::AnimationGraph::GraphQuery &, char const *, float);

    // RVA: 0xBC | Ordinal: 189
        void change_animation_state(float, class ed::basic_string<char> const &, bool);

    // RVA: 0xE7 | Ordinal: 232
        void finish_animation(float);

    // RVA: 0x118 | Ordinal: 281
        void get_current_state_name(float);

    // RVA: 0x119 | Ordinal: 282
        void get_current_state_start_duration(float);

    // RVA: 0x140 | Ordinal: 321
        void get_movement_shift(float);

    // RVA: 0x17A | Ordinal: 379
        void get_route_end_time(void);

    // RVA: 0x17B | Ordinal: 380
        void get_route_flag(void);

    // RVA: 0x1B3 | Ordinal: 436
        void move(float, float, float, float, float);

    // RVA: 0x222 | Ordinal: 547
        void stop(float);

    // RVA: 0x223 | Ordinal: 548
        void stop_move(void);

    // RVA: 0x232 | Ordinal: 563
        void turn(float, float);

    // RVA: 0x236 | Ordinal: 567
        void update(float, bool);

    // RVA: 0x29 | Ordinal: 42
        void _AnimationController(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONCONTROLLER_HPP
