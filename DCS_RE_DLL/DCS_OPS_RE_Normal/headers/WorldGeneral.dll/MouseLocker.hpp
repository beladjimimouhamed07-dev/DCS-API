#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MouseLocker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MouseLocker
{
public:

    // RVA: 0x11B | Ordinal: 284
        void MouseLocker(class MouseLocker const &);

    // RVA: 0x11C | Ordinal: 285
        void MouseLocker(void);

    // RVA: 0xA5A | Ordinal: 2651
        void lock(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xA5C | Ordinal: 2653
        void lockAllEvents(void);

    // RVA: 0xC39 | Ordinal: 3130
        void unlock(bool);

    // RVA: 0x28A | Ordinal: 651
        void _MouseLocker(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_MOUSELOCKER_HPP
