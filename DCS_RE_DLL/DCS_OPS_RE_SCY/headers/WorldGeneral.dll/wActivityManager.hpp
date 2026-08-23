#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wActivityManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wActivityManager
{
public:

    // RVA: 0x606 | Ordinal: 1543
        void addActivity(class cPointerTemplate<class wTime>);

    // RVA: 0x671 | Ordinal: 1650
        void clear(void);

    // RVA: 0xB5D | Ordinal: 2910
        void removeActivity(class cPointerTemplate<class wTime>);

    // RVA: 0x1DF | Ordinal: 480
        void wActivityManager(class wActivityManager const &);

    // RVA: 0x1E0 | Ordinal: 481
        void wActivityManager(void);

    // RVA: 0x2CE | Ordinal: 719
        void _wActivityManager(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WACTIVITYMANAGER_HPP
