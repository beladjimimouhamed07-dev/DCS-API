#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wShellAimingTableDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wShellAimingTableDescriptor
{
public:

    // RVA: 0x15B | Ordinal: 348
        void getDirectAimingDataByAngle(double, struct wShellAimingTableDescriptor::targeting_data &) const;

    // RVA: 0x15C | Ordinal: 349
        void getDirectAimingDataByDist(double, int, struct wShellAimingTableDescriptor::targeting_data &) const;

    // RVA: 0x199 | Ordinal: 410
        void getMaxDistance(void) const;

    // RVA: 0x1DB | Ordinal: 476
        void get_AA_AimingDataByHeightAndDist(double, double, struct wShellAimingTableDescriptor::targeting_data_aa &) const;

    // RVA: 0x1DC | Ordinal: 477
        void get_AA_maxDistanceByHeight(double, struct wShellAimingTableDescriptor::targeting_data_aa &) const;

    // RVA: 0x213 | Ordinal: 532
        void load(class wDatabaseLoader *);

    // RVA: 0x21C | Ordinal: 541
        void needPrecalculation(void) const;

    // RVA: 0x230 | Ordinal: 561
        void precalculate(void);

    // RVA: 0x231 | Ordinal: 562
        void precalculateAATable(void);

    // RVA: 0x232 | Ordinal: 563
        void precalculateAGTable(void);

    // RVA: 0x39 | Ordinal: 58
        void wShellAimingTableDescriptor(class wShellAimingTableDescriptor &&);

    // RVA: 0x3A | Ordinal: 59
        void wShellAimingTableDescriptor(class wShellAimingTableDescriptor const &);

    // RVA: 0x3B | Ordinal: 60
        void wShellAimingTableDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x64 | Ordinal: 101
        void _wShellAimingTableDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WSHELLAIMINGTABLEDESCRIPTOR_HPP
