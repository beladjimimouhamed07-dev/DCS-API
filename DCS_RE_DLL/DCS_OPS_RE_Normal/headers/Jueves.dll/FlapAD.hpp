#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: FlapAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace aerodynamics {

class FlapAD
{
public:

    // RVA: 0x24 | Ordinal: 37
        void FlapAD(class EagleFM::dcswwii::aerodynamics::FlapAD &&);

    // RVA: 0x25 | Ordinal: 38
        void FlapAD(class EagleFM::dcswwii::aerodynamics::FlapAD const &);

    // RVA: 0x26 | Ordinal: 39
        void FlapAD(double, double, double, class ed::basic_string<char>, double);

    // RVA: 0x27 | Ordinal: 40
        void FlapAD(double, class ed::basic_string<char>, double);

    // RVA: 0x2D7 | Ordinal: 728
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x404 | Ordinal: 1029
        void initLiftDistortion(double, double);

    // RVA: 0xF1 | Ordinal: 242
        void _FlapAD(void);
};

} // namespace aerodynamics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_FLAPAD_HPP
