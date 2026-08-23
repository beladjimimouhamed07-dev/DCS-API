#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: PlaneAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class PlaneAD
{
public:

    // RVA: 0x383 | Ordinal: 900
        void AoAandAoBtoAzandIEl(double, double, class Math::Vector<3, double> *, double *, double *, double *, double *, double *);

    // RVA: 0x107 | Ordinal: 264
        void PlaneAD(class EagleFM::PlaneAD &&);

    // RVA: 0x108 | Ordinal: 265
        void PlaneAD(class EagleFM::PlaneAD const &);

    // RVA: 0x109 | Ordinal: 266
        void PlaneAD(double, double, class ed::basic_string<char> const &, double);

    // RVA: 0x10A | Ordinal: 267
        void PlaneAD(void);

    // RVA: 0x3D6 | Ordinal: 983
        void calcADKoeff(double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x3E5 | Ordinal: 998
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x4FC | Ordinal: 1277
        void getChordQuarter(void) const;

    // RVA: 0x5A8 | Ordinal: 1449
        void getK_AspectRatio(void) const;

    // RVA: 0x5EF | Ordinal: 1520
        void getOverctir(void) const;

    // RVA: 0x68C | Ordinal: 1677
        void getSkew_l_l(void) const;

    // RVA: 0x690 | Ordinal: 1681
        void getSpan(void) const;

    // RVA: 0x701 | Ordinal: 1794
        void get_mzwz(void) const;

    // RVA: 0x72A | Ordinal: 1835
        void init(double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x791 | Ordinal: 1938
        void loadBank(class ed::basic_string<char> const &, double);

    // RVA: 0x835 | Ordinal: 2102
        void setCya_daoa(double);

    // RVA: 0x88A | Ordinal: 2187
        void setK_AspectRatio(double);

    // RVA: 0x8B5 | Ordinal: 2230
        void setOvercritK(double);

    // RVA: 0x943 | Ordinal: 2372
        void set_mzwz(double);

    // RVA: 0x1CA | Ordinal: 459
        void _PlaneAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PLANEAD_HPP
