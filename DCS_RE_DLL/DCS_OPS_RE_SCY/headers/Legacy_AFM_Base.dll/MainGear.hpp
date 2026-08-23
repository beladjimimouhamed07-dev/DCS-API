#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: MainGear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class MainGear
{
public:

    // RVA: 0x3C1 | Ordinal: 962
        void Create(void);

    // RVA: 0x414 | Ordinal: 1045
        void Destroy(void);

    // RVA: 0x45C | Ordinal: 1117
        void Instance(void);

    // RVA: 0x8A | Ordinal: 139
        void MainGear(void);

    // RVA: 0x8B | Ordinal: 140
        void MainGear(class AFM::MainGear &&);

    // RVA: 0x8C | Ordinal: 141
        void MainGear(class AFM::MainGear const &);

    // RVA: 0x51A | Ordinal: 1307
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x130 | Ordinal: 305
        void _MainGear(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_MAINGEAR_HPP
