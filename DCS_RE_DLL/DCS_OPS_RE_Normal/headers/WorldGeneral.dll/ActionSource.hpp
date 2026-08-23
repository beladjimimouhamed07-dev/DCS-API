#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActionSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ActionSource
{
public:

    // RVA: 0xF | Ordinal: 16
        void ActionSource(class TimedActionBuffer *, class ActionDispatcher *);

    // RVA: 0x79D | Ordinal: 1950
        void feedToBuffer_(class ed::vector<class InputAction, class ed::allocator<class InputAction>> const &);

    // RVA: 0x79E | Ordinal: 1951
        void feedToDispatcher_(class ed::vector<class InputAction, class ed::allocator<class InputAction>> const &);

    // RVA: 0x79F | Ordinal: 1952
        void fillAction_(class InputAction const &, struct ActionEntry &);

    // RVA: 0xAA0 | Ordinal: 2721
        void onMissionEnd(void);

    // RVA: 0xAA3 | Ordinal: 2724
        void onMissionStart(class TrackController *);

    // RVA: 0xB24 | Ordinal: 2853
        void preventControlsSynchronization(bool);

    // RVA: 0xB29 | Ordinal: 2858
        void processInput_(void);

    // RVA: 0xC28 | Ordinal: 3113
        void synchronizeControls(void);

    // RVA: 0xC3D | Ordinal: 3134
        void update(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIONSOURCE_HPP
