#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: SymmetricPlaneAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class SymmetricPlaneAD
{
public:

    // RVA: 0x384 | Ordinal: 901
        void AoAandAoBtoAzandIEl(double, double, class Math::Vector<3, double> *, double *, double *, double *);

    // RVA: 0x13F | Ordinal: 320
        void SymmetricPlaneAD(class EagleFM::SymmetricPlaneAD &&);

    // RVA: 0x140 | Ordinal: 321
        void SymmetricPlaneAD(class EagleFM::SymmetricPlaneAD const &);

    // RVA: 0x141 | Ordinal: 322
        void SymmetricPlaneAD(double, class ed::basic_string<char> const &, double);

    // RVA: 0x142 | Ordinal: 323
        void SymmetricPlaneAD(void);

    // RVA: 0x3D7 | Ordinal: 984
        void calcADKoeff(double, double, double, double *, double *, double *, double *);

    // RVA: 0x3E7 | Ordinal: 1000
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x4FE | Ordinal: 1279
        void getChordQuarter(void) const;

    // RVA: 0x72E | Ordinal: 1839
        void init(double, double *, double *, double *);

    // RVA: 0x792 | Ordinal: 1939
        void loadBank(class ed::basic_string<char> const &, double);

    // RVA: 0x1DE | Ordinal: 479
        void _SymmetricPlaneAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SYMMETRICPLANEAD_HPP
