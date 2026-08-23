#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: BrakeChuteAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class BrakeChuteAD
{
public:

    // RVA: 0x3A | Ordinal: 59
        void BrakeChuteAD(class EagleFM::BrakeChuteAD &&);

    // RVA: 0x3B | Ordinal: 60
        void BrakeChuteAD(class EagleFM::BrakeChuteAD const &);

    // RVA: 0x3C | Ordinal: 61
        void BrakeChuteAD(double);

    // RVA: 0x3DF | Ordinal: 992
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x18B | Ordinal: 396
        void _BrakeChuteAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BRAKECHUTEAD_HPP
