#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wDamageArea
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDamageArea
{
public:

    // RVA: 0x2A3 | Ordinal: 676
        void changeLife(float, bool *);

    // RVA: 0x60E | Ordinal: 1551
        void setLife(float, bool *);

    // RVA: 0x49 | Ordinal: 74
        void wDamageArea(class wDamageArea const &);

    // RVA: 0x4A | Ordinal: 75
        void wDamageArea(class wWeaponSystemManager *);

    // RVA: 0x7B | Ordinal: 124
        void _wDamageArea(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WDAMAGEAREA_HPP
