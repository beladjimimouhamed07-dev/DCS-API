#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wSmokeManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSmokeManager
{
public:

    // RVA: 0x386 | Ordinal: 903
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x46A | Ordinal: 1131
        void get_n(void) const;

    // RVA: 0x48F | Ordinal: 1168
        void init(class Lua::Config &, class MovingObject *);

    // RVA: 0x57E | Ordinal: 1407
        void popup_next(void);

    // RVA: 0x5FC | Ordinal: 1533
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x4D | Ordinal: 78
        void wSmokeManager(class wSmokeManager const &);

    // RVA: 0x4E | Ordinal: 79
        void wSmokeManager(void);

    // RVA: 0x7D | Ordinal: 126
        void _wSmokeManager(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WSMOKEMANAGER_HPP
