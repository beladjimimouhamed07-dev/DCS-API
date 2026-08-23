#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AerodynamicBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AerodynamicBody
{
public:

    // RVA: 0xC | Ordinal: 13
        void AerodynamicBody(class EagleFM::AerodynamicBody const &);

    // RVA: 0xD | Ordinal: 14
        void AerodynamicBody(void);

    // RVA: 0x3DE | Ordinal: 991
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x4CC | Ordinal: 1229
        void getArea(void) const;

    // RVA: 0x4FB | Ordinal: 1276
        void getChordQuarter(void) const;

    // RVA: 0x808 | Ordinal: 2057
        void setArea(double);

    // RVA: 0x17A | Ordinal: 379
        void _AerodynamicBody(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AERODYNAMICBODY_HPP
