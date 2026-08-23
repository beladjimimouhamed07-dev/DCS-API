#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: Ammo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Ammo
{
public:

    // RVA: 0x0 | Ordinal: 1
        void Ammo(class Ammo &&);

    // RVA: 0x1 | Ordinal: 2
        void Ammo(class Ammo const &);

    // RVA: 0x2 | Ordinal: 3
        void Ammo(void);

    // RVA: 0x21F | Ordinal: 544
        void add(class BasicWeaponDescriptor const *, unsigned int);

    // RVA: 0x220 | Ordinal: 545
        void add(class wAmmunitionDescriptor const *, unsigned int);

    // RVA: 0x221 | Ordinal: 546
        void add(class wShellDescriptor const *, unsigned int);

    // RVA: 0x22E | Ordinal: 559
        void add_and_get_ref(class wINamedAmmunitionDescriptor const *, unsigned int);

    // RVA: 0x265 | Ordinal: 614
        void begin(void) const;

    // RVA: 0x2D7 | Ordinal: 728
        void clear(void);

    // RVA: 0x2FB | Ordinal: 764
        void empty(void) const;

    // RVA: 0x2FE | Ordinal: 767
        void end(void) const;

    // RVA: 0x5A | Ordinal: 91
        void _Ammo(void);
};

// DCS_OPS_RE_WEAPONS.DLL_AMMO_HPP
