#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wBombSightDataDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBombSightDataDescriptor
{
public:

    // RVA: 0x13B | Ordinal: 316
        void getBombletCharTime(void);

    // RVA: 0x147 | Ordinal: 328
        void getCharTime(double, double);

    // RVA: 0x148 | Ordinal: 329
        void getChuteCharTime(void);

    // RVA: 0x149 | Ordinal: 330
        void getChuteCutTime(void);

    // RVA: 0x14A | Ordinal: 331
        void getChuteOpenTime(void);

    // RVA: 0x165 | Ordinal: 358
        void getEjectVelocity(void);

    // RVA: 0x1C7 | Ordinal: 456
        void getType(void);

    // RVA: 0x1DA | Ordinal: 475
        void getWindCoefficient(void);

    // RVA: 0x210 | Ordinal: 529
        void load(class wDatabaseLoader *);

    // RVA: 0x1D | Ordinal: 30
        void wBombSightDataDescriptor(class wBombSightDataDescriptor &&);

    // RVA: 0x1E | Ordinal: 31
        void wBombSightDataDescriptor(class wBombSightDataDescriptor const &);

    // RVA: 0x1F | Ordinal: 32
        void wBombSightDataDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x56 | Ordinal: 87
        void _wBombSightDataDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WBOMBSIGHTDATADESCRIPTOR_HPP
