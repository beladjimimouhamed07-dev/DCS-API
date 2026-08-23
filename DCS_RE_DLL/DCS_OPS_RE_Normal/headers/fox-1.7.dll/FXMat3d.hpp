#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat3d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat3d
{
public:

    // RVA: 0x1DB | Ordinal: 476
        void FXMat3d(class FX::FXMat3d const &);

    // RVA: 0x1DC | Ordinal: 477
        void FXMat3d(class FX::FXMat2d const &);

    // RVA: 0x1DD | Ordinal: 478
        void FXMat3d(class FX::FXMat4d const &);

    // RVA: 0x1DE | Ordinal: 479
        void FXMat3d(class FX::FXQuatd const &);

    // RVA: 0x1DF | Ordinal: 480
        void FXMat3d(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x1E0 | Ordinal: 481
        void FXMat3d(double);

    // RVA: 0x1E1 | Ordinal: 482
        void FXMat3d(double, double, double);

    // RVA: 0x1E2 | Ordinal: 483
        void FXMat3d(double, double, double, double, double, double, double, double, double);

    // RVA: 0x1E3 | Ordinal: 484
        void FXMat3d(double const *const);

    // RVA: 0x1E4 | Ordinal: 485
        void FXMat3d(void);

    // RVA: 0xC87 | Ordinal: 3208
        void det(void) const;

    // RVA: 0x1850 | Ordinal: 6225
        void identity(void);

    // RVA: 0x18E8 | Ordinal: 6377
        void invert(void) const;

    // RVA: 0x195B | Ordinal: 6492
        void isIdentity(void) const;

    // RVA: 0x27B9 | Ordinal: 10170
        void rot(class FX::FXQuatd const &);

    // RVA: 0x27BA | Ordinal: 10171
        void rot(class FX::FXVec3d const &, double);

    // RVA: 0x27BB | Ordinal: 10172
        void rot(class FX::FXVec3d const &, double, double);

    // RVA: 0x28B4 | Ordinal: 10421
        void scale(class FX::FXVec3d const &);

    // RVA: 0x28B5 | Ordinal: 10422
        void scale(double);

    // RVA: 0x28B6 | Ordinal: 10423
        void scale(double, double, double);

    // RVA: 0x290D | Ordinal: 10510
        void set(class FX::FXMat3d const &);

    // RVA: 0x290E | Ordinal: 10511
        void set(class FX::FXMat2d const &);

    // RVA: 0x290F | Ordinal: 10512
        void set(class FX::FXMat4d const &);

    // RVA: 0x2910 | Ordinal: 10513
        void set(class FX::FXQuatd const &);

    // RVA: 0x2911 | Ordinal: 10514
        void set(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x2912 | Ordinal: 10515
        void set(double);

    // RVA: 0x2913 | Ordinal: 10516
        void set(double, double, double);

    // RVA: 0x2914 | Ordinal: 10517
        void set(double, double, double, double, double, double, double, double, double);

    // RVA: 0x2915 | Ordinal: 10518
        void set(double const *const);

    // RVA: 0x2EC9 | Ordinal: 11978
        void transpose(void) const;

    // RVA: 0x3000 | Ordinal: 12289
        void xrot(double);

    // RVA: 0x3001 | Ordinal: 12290
        void xrot(double, double);

    // RVA: 0x300C | Ordinal: 12301
        void yrot(double);

    // RVA: 0x300D | Ordinal: 12302
        void yrot(double, double);

    // RVA: 0x3015 | Ordinal: 12310
        void zrot(double);

    // RVA: 0x3016 | Ordinal: 12311
        void zrot(double, double);

    // RVA: 0x45A | Ordinal: 1115
        void _FXMat3d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT3D_HPP
