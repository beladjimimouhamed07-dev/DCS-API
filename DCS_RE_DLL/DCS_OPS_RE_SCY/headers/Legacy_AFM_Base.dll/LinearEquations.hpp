#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: LinearEquations
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class LinearEquations
{
public:

    // RVA: 0x3BF | Ordinal: 960
        void Create(void);

    // RVA: 0x413 | Ordinal: 1044
        void Destroy(void);

    // RVA: 0x42C | Ordinal: 1069
        void Gauss(int, double *, double *);

    // RVA: 0x45B | Ordinal: 1116
        void Instance(void);

    // RVA: 0x84 | Ordinal: 133
        void LinearEquations(void);

    // RVA: 0x85 | Ordinal: 134
        void LinearEquations(class AFM::LinearEquations &&);

    // RVA: 0x86 | Ordinal: 135
        void LinearEquations(class AFM::LinearEquations const &);

    // RVA: 0x12E | Ordinal: 303
        void _LinearEquations(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_LINEAREQUATIONS_HPP
