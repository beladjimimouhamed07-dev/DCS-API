#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: CharacterEnvironmentManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class CharacterEnvironmentManager
{
public:

    // RVA: 0x5 | Ordinal: 6
        void CharacterEnvironmentManager(class AnimatorLogic::CharacterEnvironmentManager &&);

    // RVA: 0x6 | Ordinal: 7
        void CharacterEnvironmentManager(class AnimatorLogic::CharacterEnvironmentManager const &);

    // RVA: 0x7 | Ordinal: 8
        void CharacterEnvironmentManager(void);

    // RVA: 0xB3 | Ordinal: 180
        void get_environments(void) const;

    // RVA: 0xFD | Ordinal: 254
        void instance(void);

    // RVA: 0x167 | Ordinal: 360
        void track_environment(class AnimatorLogic::CharacterEnvironment *);

    // RVA: 0x168 | Ordinal: 361
        void untrack_environment(class AnimatorLogic::CharacterEnvironment *);

    // RVA: 0x25 | Ordinal: 38
        void _CharacterEnvironmentManager(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_CHARACTERENVIRONMENTMANAGER_HPP
