#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Math
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Math
{
public:

    // RVA: 0x11C | Ordinal: 285
        void Gauss(int, double *, double *);

    // RVA: 0x9 | Ordinal: 10
        void determinant_double_(class Math::Matrix<2, double> const &);

    // RVA: 0xA | Ordinal: 11
        void determinant_double_(class Math::Matrix<3, double> const &);

    // RVA: 0xB | Ordinal: 12
        void determinant_double_(class Math::Matrix<4, double> const &);

    // RVA: 0x6 | Ordinal: 7
        void determinant_float_(class Math::Matrix<2, float> const &);

    // RVA: 0x7 | Ordinal: 8
        void determinant_float_(class Math::Matrix<3, float> const &);

    // RVA: 0x8 | Ordinal: 9
        void determinant_float_(class Math::Matrix<4, float> const &);

    // RVA: 0x1C5 | Ordinal: 454
        void float2half(float);

    // RVA: 0x233 | Ordinal: 564
        void half2float(unsigned short);

    // RVA: 0x2EF | Ordinal: 752
        void pow(double, double);

    // RVA: 0x364 | Ordinal: 869
        void roundDec(class Math::Vector<3, double> const &, int);

    // RVA: 0x365 | Ordinal: 870
        void roundDec(double, int);

    // RVA: 0x1F | Ordinal: 32
        void slerp_double_(struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, double);

    // RVA: 0x1E | Ordinal: 31
        void slerp_float_(struct Math::Rotation3<float> const &, struct Math::Rotation3<float> const &, float);
};

// DCS_OPS_RE_EDCORE.DLL_MATH_HPP
