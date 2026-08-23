#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FlapInAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FlapInAD
{
public:

    // RVA: 0x12 | Ordinal: 19
        void FlapInAD(class EagleFM::FW190::FlapInAD &&);

    // RVA: 0x13 | Ordinal: 20
        void FlapInAD(class EagleFM::FW190::FlapInAD const &);

    // RVA: 0x14 | Ordinal: 21
        void FlapInAD(double);

    // RVA: 0x50 | Ordinal: 81
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x1F | Ordinal: 32
        void _FlapInAD(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FLAPINAD_HPP
