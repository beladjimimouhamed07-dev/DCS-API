#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Wing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Wing
{
public:

    // RVA: 0x3E4 | Ordinal: 997
        void Create(void);

    // RVA: 0x41D | Ordinal: 1054
        void Destroy(void);

    // RVA: 0x465 | Ordinal: 1126
        void Instance(void);

    // RVA: 0xF6 | Ordinal: 247
        void Wing(void);

    // RVA: 0xF7 | Ordinal: 248
        void Wing(class AFM::Wing &&);

    // RVA: 0xF8 | Ordinal: 249
        void Wing(class AFM::Wing const &);

    // RVA: 0x525 | Ordinal: 1318
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x154 | Ordinal: 341
        void _Wing(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_WING_HPP
