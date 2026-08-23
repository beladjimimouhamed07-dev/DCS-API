#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat2d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat2d
{
public:

    // RVA: 0x1CB | Ordinal: 460
        void FXMat2d(class FX::FXMat2d const &);

    // RVA: 0x1CC | Ordinal: 461
        void FXMat2d(class FX::FXMat3d const &);

    // RVA: 0x1CD | Ordinal: 462
        void FXMat2d(class FX::FXVec2d const &, class FX::FXVec2d const &);

    // RVA: 0x1CE | Ordinal: 463
        void FXMat2d(double);

    // RVA: 0x1CF | Ordinal: 464
        void FXMat2d(double, double);

    // RVA: 0x1D0 | Ordinal: 465
        void FXMat2d(double, double, double, double);

    // RVA: 0x1D1 | Ordinal: 466
        void FXMat2d(double const *const);

    // RVA: 0x1D2 | Ordinal: 467
        void FXMat2d(void);

    // RVA: 0xC85 | Ordinal: 3206
        void det(void) const;

    // RVA: 0x184E | Ordinal: 6223
        void identity(void);

    // RVA: 0x18E6 | Ordinal: 6375
        void invert(void) const;

    // RVA: 0x1959 | Ordinal: 6490
        void isIdentity(void) const;

    // RVA: 0x27B5 | Ordinal: 10166
        void rot(double);

    // RVA: 0x27B6 | Ordinal: 10167
        void rot(double, double);

    // RVA: 0x28B0 | Ordinal: 10417
        void scale(double);

    // RVA: 0x28B1 | Ordinal: 10418
        void scale(double, double);

    // RVA: 0x28FF | Ordinal: 10496
        void set(class FX::FXMat2d const &);

    // RVA: 0x2900 | Ordinal: 10497
        void set(class FX::FXMat3d const &);

    // RVA: 0x2901 | Ordinal: 10498
        void set(class FX::FXVec2d const &, class FX::FXVec2d const &);

    // RVA: 0x2902 | Ordinal: 10499
        void set(double);

    // RVA: 0x2903 | Ordinal: 10500
        void set(double, double);

    // RVA: 0x2904 | Ordinal: 10501
        void set(double, double, double, double);

    // RVA: 0x2905 | Ordinal: 10502
        void set(double const *const);

    // RVA: 0x2EC7 | Ordinal: 11976
        void transpose(void) const;

    // RVA: 0x458 | Ordinal: 1113
        void _FXMat2d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT2D_HPP
