#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FigureOfRevolutionsAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FigureOfRevolutionsAD
{
public:

    // RVA: 0x385 | Ordinal: 902
        void AoAandAoBtoSAzandSAoA(double, double, class Math::Vector<3, double> *, double *, double *, double *, double *);

    // RVA: 0x76 | Ordinal: 119
        void FigureOfRevolutionsAD(class EagleFM::FigureOfRevolutionsAD &&);

    // RVA: 0x77 | Ordinal: 120
        void FigureOfRevolutionsAD(class EagleFM::FigureOfRevolutionsAD const &);

    // RVA: 0x78 | Ordinal: 121
        void FigureOfRevolutionsAD(double, class ed::basic_string<char> const &, double);

    // RVA: 0x79 | Ordinal: 122
        void FigureOfRevolutionsAD(void);

    // RVA: 0x3D5 | Ordinal: 982
        void calcADKoeff(double, double, double, double *, double *, double *);

    // RVA: 0x3E2 | Ordinal: 995
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x716 | Ordinal: 1815
        void init(double, double *, double *, double *);

    // RVA: 0x790 | Ordinal: 1937
        void loadBank(class ed::basic_string<char> const &, double);

    // RVA: 0x941 | Ordinal: 2370
        void set_mzwy(double);

    // RVA: 0x942 | Ordinal: 2371
        void set_mzwz(double);

    // RVA: 0x19F | Ordinal: 416
        void _FigureOfRevolutionsAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FIGUREOFREVOLUTIONSAD_HPP
