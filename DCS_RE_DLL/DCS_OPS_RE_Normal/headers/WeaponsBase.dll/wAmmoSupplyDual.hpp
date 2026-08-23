#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAmmoSupplyDual
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmoSupplyDual
{
public:

    // RVA: 0x110 | Ordinal: 273
        void discharge(void);

    // RVA: 0x144 | Ordinal: 325
        void getCenterOfMass(void);

    // RVA: 0x145 | Ordinal: 326
        void getChain(void) const;

    // RVA: 0x146 | Ordinal: 327
        void getChainAmmoMass(unsigned int, unsigned int) const;

    // RVA: 0x14D | Ordinal: 334
        void getCurrentShell(void) const;

    // RVA: 0x18F | Ordinal: 400
        void getInitialMass(void) const;

    // RVA: 0x190 | Ordinal: 401
        void getInitialRoundsCount(void) const;

    // RVA: 0x195 | Ordinal: 406
        void getMass(void) const;

    // RVA: 0x198 | Ordinal: 409
        void getMassEmpty(void) const;

    // RVA: 0x1B2 | Ordinal: 435
        void getRoundsCount(void) const;

    // RVA: 0x1B3 | Ordinal: 436
        void getRoundsCountInChain(int) const;

    // RVA: 0x1B4 | Ordinal: 437
        void getShellByName(class ed::basic_string<char> const &) const;

    // RVA: 0x1B5 | Ordinal: 438
        void getShellDescriptor(int) const;

    // RVA: 0x203 | Ordinal: 516
        void isEmpty(void);

    // RVA: 0x22F | Ordinal: 560
        void popNextShell(void);

    // RVA: 0x233 | Ordinal: 564
        void prepareBurst(class Mail::Stream &);

    // RVA: 0x23A | Ordinal: 571
        void reset(float);

    // RVA: 0x241 | Ordinal: 578
        void setAmmoCount(int, int);

    // RVA: 0x242 | Ordinal: 579
        void setAmmoCount(int);

    // RVA: 0x24D | Ordinal: 590
        void setChain(int);

    // RVA: 0x2A4 | Ordinal: 677
        void switchChain(void);

    // RVA: 0x15 | Ordinal: 22
        void wAmmoSupplyDual(class wAmmoSupplyDual const &);

    // RVA: 0x16 | Ordinal: 23
        void wAmmoSupplyDual(class wAmmoSupplyDualDescriptor const *, class Lua::Loader *);

    // RVA: 0x50 | Ordinal: 81
        void _wAmmoSupplyDual(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAMMOSUPPLYDUAL_HPP
