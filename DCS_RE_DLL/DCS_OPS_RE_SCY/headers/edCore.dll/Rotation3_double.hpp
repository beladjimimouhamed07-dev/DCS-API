#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Rotation3<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Math {

class Rotation3_double_
{
public:

    // RVA: 0x1CF | Ordinal: 464
        void fromMatrix(class Math::Matrix<3, double> const &);

    // RVA: 0x1E5 | Ordinal: 486
        void getAngleAxis(double &, class Math::Vector<3, double> &) const;

    // RVA: 0x1E7 | Ordinal: 488
        void getBasis(double *, double *, double *) const;

    // RVA: 0x216 | Ordinal: 535
        void getYawPitchRoll(double &, double &, double &) const;

    // RVA: 0x270 | Ordinal: 625
        void invert(void);

    // RVA: 0x272 | Ordinal: 627
        void inverted(void) const;

    // RVA: 0x2BD | Ordinal: 702
        void normalize(void);

    // RVA: 0x2C2 | Ordinal: 707
        void normalized(void) const;

    // RVA: 0x37C | Ordinal: 893
        void setAngleAxis(double, class Math::Vector<3, double> const &);

    // RVA: 0x381 | Ordinal: 898
        void setEulerAngles(enum Math::RotationOrder, class Math::Vector<3, double> const &);

    // RVA: 0x386 | Ordinal: 903
        void setFromTo(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x393 | Ordinal: 916
        void setYawPitchRoll(double, double, double);
};

} // namespace Math

// DCS_OPS_RE_EDCORE.DLL_ROTATION3_DOUBLE_HPP
