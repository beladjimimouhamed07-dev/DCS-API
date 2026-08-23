#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Rotation3<float>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Math {

class Rotation3_float_
{
public:

    // RVA: 0x1CE | Ordinal: 463
        void fromMatrix(class Math::Matrix<3, float> const &);

    // RVA: 0x1E4 | Ordinal: 485
        void getAngleAxis(float &, class Math::Vector<3, float> &) const;

    // RVA: 0x1E6 | Ordinal: 487
        void getBasis(float *, float *, float *) const;

    // RVA: 0x215 | Ordinal: 534
        void getYawPitchRoll(float &, float &, float &) const;

    // RVA: 0x26F | Ordinal: 624
        void invert(void);

    // RVA: 0x271 | Ordinal: 626
        void inverted(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void normalize(void);

    // RVA: 0x2C1 | Ordinal: 706
        void normalized(void) const;

    // RVA: 0x37B | Ordinal: 892
        void setAngleAxis(float, class Math::Vector<3, float> const &);

    // RVA: 0x380 | Ordinal: 897
        void setEulerAngles(enum Math::RotationOrder, class Math::Vector<3, float> const &);

    // RVA: 0x385 | Ordinal: 902
        void setFromTo(class Math::Vector<3, float> const &, class Math::Vector<3, float> const &);

    // RVA: 0x392 | Ordinal: 915
        void setYawPitchRoll(float, float, float);
};

} // namespace Math

// DCS_OPS_RE_EDCORE.DLL_ROTATION3_FLOAT_HPP
