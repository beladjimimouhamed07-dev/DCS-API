#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: MovePathTracker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {
namespace CharacterMovable {

class MovePathTracker
{
public:

    // RVA: 0x1A | Ordinal: 27
        void MovePathTracker(class AnimatorLogic::CharacterMovable::MovePathTracker &&);

    // RVA: 0x1B | Ordinal: 28
        void MovePathTracker(class AnimatorLogic::CharacterMovable::MovePathTracker const &);

    // RVA: 0x1C | Ordinal: 29
        void MovePathTracker(class AnimatorLogic::CharacterMovable *);

    // RVA: 0x7C | Ordinal: 125
        void can_see_target_next_point(void) const;

    // RVA: 0x8F | Ordinal: 144
        void find_path_to_target(class osg::Vec2f);

    // RVA: 0x93 | Ordinal: 148
        void get_agent_position(void) const;

    // RVA: 0xAF | Ordinal: 176
        void get_direction_to_target(void) const;

    // RVA: 0xE2 | Ordinal: 227
        void get_status(void) const;

    // RVA: 0xE3 | Ordinal: 228
        void get_target_point(void) const;

    // RVA: 0x101 | Ordinal: 258
        void is_last_target(void) const;

    // RVA: 0x130 | Ordinal: 305
        void reset_progress(void);

    // RVA: 0x16D | Ordinal: 366
        void update(void);

    // RVA: 0x2E | Ordinal: 47
        void _MovePathTracker(void);
};

} // namespace CharacterMovable
} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_MOVEPATHTRACKER_HPP
