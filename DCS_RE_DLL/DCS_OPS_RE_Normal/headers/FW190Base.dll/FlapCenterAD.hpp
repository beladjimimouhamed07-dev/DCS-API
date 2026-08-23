#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FlapCenterAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FlapCenterAD
{
public:

    // RVA: 0xF | Ordinal: 16
        void FlapCenterAD(class EagleFM::FW190::FlapCenterAD &&);

    // RVA: 0x10 | Ordinal: 17
        void FlapCenterAD(class EagleFM::FW190::FlapCenterAD const &);

    // RVA: 0x11 | Ordinal: 18
        void FlapCenterAD(double);

    // RVA: 0x4F | Ordinal: 80
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x1E | Ordinal: 31
        void _FlapCenterAD(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FLAPCENTERAD_HPP
