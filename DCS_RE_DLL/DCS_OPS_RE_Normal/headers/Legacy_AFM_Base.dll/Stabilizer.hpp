#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Stabilizer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Stabilizer
{
public:

    // RVA: 0x3D8 | Ordinal: 985
        void Create(void);

    // RVA: 0x41A | Ordinal: 1051
        void Destroy(void);

    // RVA: 0x462 | Ordinal: 1123
        void Instance(void);

    // RVA: 0xCF | Ordinal: 208
        void Stabilizer(void);

    // RVA: 0xD0 | Ordinal: 209
        void Stabilizer(class AFM::Stabilizer &&);

    // RVA: 0xD1 | Ordinal: 210
        void Stabilizer(class AFM::Stabilizer const &);

    // RVA: 0x521 | Ordinal: 1314
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x147 | Ordinal: 328
        void _Stabilizer(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_STABILIZER_HPP
