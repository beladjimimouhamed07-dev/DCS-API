#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ControlSurfaceAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ControlSurfaceAD
{
public:

    // RVA: 0x382 | Ordinal: 899
        void AoAandAoBtoAzandIEl(double, double, class Math::Vector<3, double> *, double *, double *, double *, double *, double *);

    // RVA: 0x58 | Ordinal: 89
        void ControlSurfaceAD(class EagleFM::ControlSurfaceAD &&);

    // RVA: 0x59 | Ordinal: 90
        void ControlSurfaceAD(class EagleFM::ControlSurfaceAD const &);

    // RVA: 0x5A | Ordinal: 91
        void ControlSurfaceAD(double, class ed::basic_string<char> const &, double);

    // RVA: 0x5B | Ordinal: 92
        void ControlSurfaceAD(void);

    // RVA: 0x3D4 | Ordinal: 981
        void calcADKoeff(double, double, double, double, double *, double *, double *, double *);

    // RVA: 0x3E0 | Ordinal: 993
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x714 | Ordinal: 1813
        void init(double, double *, double *, double *, double *);

    // RVA: 0x78F | Ordinal: 1936
        void loadBank(class ed::basic_string<char> const &, double);

    // RVA: 0x194 | Ordinal: 405
        void _ControlSurfaceAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONTROLSURFACEAD_HPP
