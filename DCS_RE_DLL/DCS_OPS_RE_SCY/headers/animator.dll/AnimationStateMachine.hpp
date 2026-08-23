#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationStateMachine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationStateMachine
{
public:

    // RVA: 0xC | Ordinal: 13
        void AnimationStateMachine(class Animator::AnimationStateMachine const &);

    // RVA: 0xD | Ordinal: 14
        void AnimationStateMachine(class Animator::CharacterModelCookie *);

    // RVA: 0xBD | Ordinal: 190
        void change_animation_state(float, struct Animator::SceneStageDesc const &);

    // RVA: 0xBE | Ordinal: 191
        void change_speed_direction(void);

    // RVA: 0xE8 | Ordinal: 233
        void finish_animation(float);

    // RVA: 0x103 | Ordinal: 260
        void get_animation_root_path(void) const;

    // RVA: 0x111 | Ordinal: 274
        void get_command_stage(class ed::basic_string<char> const &) const;

    // RVA: 0x168 | Ordinal: 361
        void get_position(void);

    // RVA: 0x186 | Ordinal: 391
        void get_speed(void);

    // RVA: 0x188 | Ordinal: 393
        void get_speed_direction(void) const;

    // RVA: 0x18B | Ordinal: 396
        void get_state(void) const;

    // RVA: 0x1C9 | Ordinal: 458
        void register_callback(class ed::basic_string<char> const &, class std::function<void __cdecl(void)> &&);

    // RVA: 0x1D9 | Ordinal: 474
        void reset_command(void);

    // RVA: 0x1DF | Ordinal: 480
        void sceneTransitionComplete(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void scene_complite_time(void) const;

    // RVA: 0x1F5 | Ordinal: 502
        void set_command(class ed::basic_string<char> const &, float, bool);

    // RVA: 0x1F9 | Ordinal: 506
        void set_cookie(class Animator::CharacterModelCookie *);

    // RVA: 0x243 | Ordinal: 580
        void update_state(void);

    // RVA: 0x2C | Ordinal: 45
        void _AnimationStateMachine(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONSTATEMACHINE_HPP
