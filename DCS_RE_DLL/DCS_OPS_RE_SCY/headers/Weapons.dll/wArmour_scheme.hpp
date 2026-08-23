#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wArmour_scheme
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wArmour_scheme
{
public:

    // RVA: 0x2D3 | Ordinal: 724
        void cleanup(void);

    // RVA: 0x33D | Ordinal: 830
        void getArmorData(class Math::Vector<3, double> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x33E | Ordinal: 831
        void getArmorData(class Math::Vector<3, double> const &, int) const;

    // RVA: 0x34D | Ordinal: 846
        void getAverageArmor(void) const;

    // RVA: 0x365 | Ordinal: 870
        void getCollisionPartIDByName(class ed::basic_string<char> const &) const;

    // RVA: 0x644 | Ordinal: 1605
        void set_ws(class wWeaponSystem *);

    // RVA: 0x41 | Ordinal: 66
        void wArmour_scheme(class wArmour_scheme &&);

    // RVA: 0x42 | Ordinal: 67
        void wArmour_scheme(class wArmour_scheme const &);

    // RVA: 0x43 | Ordinal: 68
        void wArmour_scheme(class wArmour_scheme_consts *);
};

// DCS_OPS_RE_WEAPONS.DLL_WARMOUR_SCHEME_HPP
