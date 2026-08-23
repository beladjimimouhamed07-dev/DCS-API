#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wGunDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace weapons_gun {

class wGunDescriptor
{
public:

    // RVA: 0x103 | Ordinal: 260
        void create(class wIGunCarriage *, class wAmmoSupply *, bool) const;

    // RVA: 0x13C | Ordinal: 317
        void getBurstCutoff(void) const;

    // RVA: 0x176 | Ordinal: 375
        void getFireDelay(int) const;

    // RVA: 0x178 | Ordinal: 377
        void getFireRate(int) const;

    // RVA: 0x18D | Ordinal: 398
        void getImpulseVectorRot(void) const;

    // RVA: 0x18E | Ordinal: 399
        void getIndexByFireDelay(double) const;

    // RVA: 0x1AD | Ordinal: 430
        void getRecoilCoeff(void) const;

    // RVA: 0x211 | Ordinal: 530
        void load(class wDatabaseLoader *);

    // RVA: 0x26 | Ordinal: 39
        void wGunDescriptor(class weapons_gun::wGunDescriptor const &);

    // RVA: 0x27 | Ordinal: 40
        void wGunDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x5B | Ordinal: 92
        void _wGunDescriptor(void);
};

} // namespace weapons_gun

// DCS_OPS_RE_WEAPONSBASE.DLL_WGUNDESCRIPTOR_HPP
