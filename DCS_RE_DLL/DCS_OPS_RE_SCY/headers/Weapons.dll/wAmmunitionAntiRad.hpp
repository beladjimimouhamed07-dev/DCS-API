#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionAntiRad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionAntiRad
{
public:

    // RVA: 0x543 | Ordinal: 1348
        void netTargetInfo(struct AmmunitionAntiRadTargetInfoMessage const &);

    // RVA: 0x636 | Ordinal: 1591
        void setTargetInfo(int, class wsType *);

    // RVA: 0x35 | Ordinal: 54
        void wAmmunitionAntiRad(void);

    // RVA: 0x6C | Ordinal: 109
        void _wAmmunitionAntiRad(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONANTIRAD_HPP
