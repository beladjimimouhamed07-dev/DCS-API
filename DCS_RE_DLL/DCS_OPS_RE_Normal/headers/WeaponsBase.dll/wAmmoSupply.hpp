#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAmmoSupply
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmoSupply
{
public:

    // RVA: 0x131 | Ordinal: 306
        void getAmmoType(void) const;

    // RVA: 0x1AE | Ordinal: 431
        void getReloadEveryCount(void) const;

    // RVA: 0x1AF | Ordinal: 432
        void getReloadTime(void);

    // RVA: 0x1B0 | Ordinal: 433
        void getReloadingArg(void);

    // RVA: 0x1B6 | Ordinal: 439
        void getShellForSight(void) const;

    // RVA: 0x239 | Ordinal: 570
        void reset(float);

    // RVA: 0x23C | Ordinal: 573
        void resetWithLoadFactor(class Lua::Loader *);

    // RVA: 0x244 | Ordinal: 581
        void setAmmoType(unsigned int);

    // RVA: 0x285 | Ordinal: 646
        void setUnlimited(bool);

    // RVA: 0x13 | Ordinal: 20
        void wAmmoSupply(class wAmmoSupply const &);

    // RVA: 0x14 | Ordinal: 21
        void wAmmoSupply(void);

    // RVA: 0x4F | Ordinal: 80
        void _wAmmoSupply(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAMMOSUPPLY_HPP
