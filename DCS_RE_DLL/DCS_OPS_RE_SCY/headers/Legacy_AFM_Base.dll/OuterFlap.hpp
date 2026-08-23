#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: OuterFlap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class OuterFlap
{
public:

    // RVA: 0x3C5 | Ordinal: 966
        void Create(void);

    // RVA: 0x416 | Ordinal: 1047
        void Destroy(void);

    // RVA: 0x45E | Ordinal: 1119
        void Instance(void);

    // RVA: 0x96 | Ordinal: 151
        void OuterFlap(void);

    // RVA: 0x97 | Ordinal: 152
        void OuterFlap(class AFM::OuterFlap &&);

    // RVA: 0x98 | Ordinal: 153
        void OuterFlap(class AFM::OuterFlap const &);

    // RVA: 0x51C | Ordinal: 1309
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x134 | Ordinal: 309
        void _OuterFlap(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_OUTERFLAP_HPP
