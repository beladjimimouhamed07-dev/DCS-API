#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FlowRotorModel2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FlowRotorModel2
{
public:

    // RVA: 0x7D | Ordinal: 126
        void FlowRotorModel2(class EagleFM::DynamicBody *, class EagleFM::PlaneAD *);

    // RVA: 0x48C | Ordinal: 1165
        void doSimulate(void);

    // RVA: 0x599 | Ordinal: 1434
        void getInductiveVelocity(double, bool) const;

    // RVA: 0x6D4 | Ordinal: 1749
        void getVindAvr(void) const;

    // RVA: 0x717 | Ordinal: 1816
        void init(struct EagleFM::FlowRotorModelInit const &);

    // RVA: 0x829 | Ordinal: 2090
        void setControl(double, double, double, double);

    // RVA: 0x1A1 | Ordinal: 418
        void _FlowRotorModel2(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FLOWROTORMODEL2_HPP
