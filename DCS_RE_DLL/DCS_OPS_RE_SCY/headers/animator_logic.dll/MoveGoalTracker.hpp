#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: MoveGoalTracker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {
namespace CharacterMovable {

class MoveGoalTracker
{
public:

    // RVA: 0x17 | Ordinal: 24
        void MoveGoalTracker(class AnimatorLogic::CharacterMovable::MoveGoalTracker &&);

    // RVA: 0x18 | Ordinal: 25
        void MoveGoalTracker(class AnimatorLogic::CharacterMovable::MoveGoalTracker const &);

    // RVA: 0x19 | Ordinal: 26
        void MoveGoalTracker(class AnimatorLogic::CharacterMovable *);

    // RVA: 0x7B | Ordinal: 124
        void can_see_target_next_point(void) const;

    // RVA: 0xAE | Ordinal: 175
        void get_direction_to_target2d(void) const;

    // RVA: 0xB2 | Ordinal: 179
        void get_end_position(void) const;

    // RVA: 0xB1 | Ordinal: 178
        void get_end_position2d(void) const;

    // RVA: 0xDE | Ordinal: 223
        void get_start_position(void) const;

    // RVA: 0xE1 | Ordinal: 226
        void get_status(void) const;

    // RVA: 0xE5 | Ordinal: 230
        void get_target_position(void);

    // RVA: 0xE4 | Ordinal: 229
        void get_target_position2d(void) const;

    // RVA: 0x100 | Ordinal: 257
        void is_last_point(void) const;

    // RVA: 0x126 | Ordinal: 295
        void rebuild_path(void);

    // RVA: 0x13E | Ordinal: 319
        void set_end_position(class wPosition3<float> const &);

    // RVA: 0x155 | Ordinal: 342
        void set_start_position(class wPosition3<float> const &);

    // RVA: 0x15E | Ordinal: 351
        void start_tracking(class wPosition3<float> const &, class wPosition3<float> const &, class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>>);

    // RVA: 0x16C | Ordinal: 365
        void update(void);

    // RVA: 0x2D | Ordinal: 46
        void _MoveGoalTracker(void);
};

} // namespace CharacterMovable
} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_MOVEGOALTRACKER_HPP
