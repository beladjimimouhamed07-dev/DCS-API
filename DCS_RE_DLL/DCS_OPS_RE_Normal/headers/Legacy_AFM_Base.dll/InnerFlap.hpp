#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: InnerFlap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class InnerFlap
{
public:

    // RVA: 0x3BC | Ordinal: 957
        void Create(void);

    // RVA: 0x412 | Ordinal: 1043
        void Destroy(void);

    // RVA: 0x7B | Ordinal: 124
        void InnerFlap(void);

    // RVA: 0x7C | Ordinal: 125
        void InnerFlap(class AFM::InnerFlap &&);

    // RVA: 0x7D | Ordinal: 126
        void InnerFlap(class AFM::InnerFlap const &);

    // RVA: 0x45A | Ordinal: 1115
        void Instance(void);

    // RVA: 0x519 | Ordinal: 1306
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x12B | Ordinal: 300
        void _InnerFlap(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_INNERFLAP_HPP
