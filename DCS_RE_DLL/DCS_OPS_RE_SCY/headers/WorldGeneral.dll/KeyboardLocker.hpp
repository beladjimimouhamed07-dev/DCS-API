#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: KeyboardLocker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class KeyboardLocker
{
public:

    // RVA: 0x104 | Ordinal: 261
        void KeyboardLocker(class KeyboardLocker const &);

    // RVA: 0x105 | Ordinal: 262
        void KeyboardLocker(void);

    // RVA: 0xA59 | Ordinal: 2650
        void lock(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xA5B | Ordinal: 2652
        void lockAllEvents(void);

    // RVA: 0xC38 | Ordinal: 3129
        void unlock(bool);

    // RVA: 0x280 | Ordinal: 641
        void _KeyboardLocker(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_KEYBOARDLOCKER_HPP
