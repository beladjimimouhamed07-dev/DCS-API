#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wArmour_scheme_consts
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wArmour_scheme_consts
{
public:

    // RVA: 0x33F | Ordinal: 832
        void getArmorData(class wWeaponSystem const *, class Math::Vector<3, double> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x340 | Ordinal: 833
        void getArmorData(class wWeaponSystem const *, class Math::Vector<3, double> const &, int) const;

    // RVA: 0x341 | Ordinal: 834
        void getArmorData(class wWeaponSystem const *, class Math::Vector<3, double> const &, bool) const;

    // RVA: 0x34E | Ordinal: 847
        void getAverageArmor(void) const;

    // RVA: 0x366 | Ordinal: 871
        void getCollisionPartIDByName(class ed::basic_string<char> const &) const;

    // RVA: 0x466 | Ordinal: 1127
        void get_k(class ed::vector<struct wArmour_scheme_consts::armour_scheme_sector_t, class ed::allocator<struct wArmour_scheme_consts::armour_scheme_sector_t>> const &, double) const;

    // RVA: 0x4E8 | Ordinal: 1257
        void load_armour_scheme(class Lua::Config &);

    // RVA: 0x4EA | Ordinal: 1259
        void load_part(class Lua::Config &, class ed::vector<struct wArmour_scheme_consts::armour_scheme_sector_t, class ed::allocator<struct wArmour_scheme_consts::armour_scheme_sector_t>> &);

    // RVA: 0x44 | Ordinal: 69
        void wArmour_scheme_consts(class wArmour_scheme_consts const &);

    // RVA: 0x45 | Ordinal: 70
        void wArmour_scheme_consts(void);

    // RVA: 0x78 | Ordinal: 121
        void _wArmour_scheme_consts(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WARMOUR_SCHEME_CONSTS_HPP
