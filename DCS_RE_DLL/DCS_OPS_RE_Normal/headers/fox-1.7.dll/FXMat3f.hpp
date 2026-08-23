#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat3f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat3f
{
public:

    // RVA: 0x1E5 | Ordinal: 486
        void FXMat3f(class FX::FXMat3f const &);

    // RVA: 0x1E6 | Ordinal: 487
        void FXMat3f(class FX::FXMat2f const &);

    // RVA: 0x1E7 | Ordinal: 488
        void FXMat3f(class FX::FXMat4f const &);

    // RVA: 0x1E8 | Ordinal: 489
        void FXMat3f(class FX::FXQuatf const &);

    // RVA: 0x1E9 | Ordinal: 490
        void FXMat3f(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x1EA | Ordinal: 491
        void FXMat3f(float);

    // RVA: 0x1EB | Ordinal: 492
        void FXMat3f(float, float, float);

    // RVA: 0x1EC | Ordinal: 493
        void FXMat3f(float, float, float, float, float, float, float, float, float);

    // RVA: 0x1ED | Ordinal: 494
        void FXMat3f(float const *const);

    // RVA: 0x1EE | Ordinal: 495
        void FXMat3f(void);

    // RVA: 0xC88 | Ordinal: 3209
        void det(void) const;

    // RVA: 0x1851 | Ordinal: 6226
        void identity(void);

    // RVA: 0x18E9 | Ordinal: 6378
        void invert(void) const;

    // RVA: 0x195C | Ordinal: 6493
        void isIdentity(void) const;

    // RVA: 0x27BC | Ordinal: 10173
        void rot(class FX::FXQuatf const &);

    // RVA: 0x27BD | Ordinal: 10174
        void rot(class FX::FXVec3f const &, float);

    // RVA: 0x27BE | Ordinal: 10175
        void rot(class FX::FXVec3f const &, float, float);

    // RVA: 0x28B7 | Ordinal: 10424
        void scale(class FX::FXVec3f const &);

    // RVA: 0x28B8 | Ordinal: 10425
        void scale(float);

    // RVA: 0x28B9 | Ordinal: 10426
        void scale(float, float, float);

    // RVA: 0x2916 | Ordinal: 10519
        void set(class FX::FXMat3f const &);

    // RVA: 0x2917 | Ordinal: 10520
        void set(class FX::FXMat2f const &);

    // RVA: 0x2918 | Ordinal: 10521
        void set(class FX::FXMat4f const &);

    // RVA: 0x2919 | Ordinal: 10522
        void set(class FX::FXQuatf const &);

    // RVA: 0x291A | Ordinal: 10523
        void set(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x291B | Ordinal: 10524
        void set(float);

    // RVA: 0x291C | Ordinal: 10525
        void set(float, float, float);

    // RVA: 0x291D | Ordinal: 10526
        void set(float, float, float, float, float, float, float, float, float);

    // RVA: 0x291E | Ordinal: 10527
        void set(float const *const);

    // RVA: 0x2ECA | Ordinal: 11979
        void transpose(void) const;

    // RVA: 0x3002 | Ordinal: 12291
        void xrot(float);

    // RVA: 0x3003 | Ordinal: 12292
        void xrot(float, float);

    // RVA: 0x300E | Ordinal: 12303
        void yrot(float);

    // RVA: 0x300F | Ordinal: 12304
        void yrot(float, float);

    // RVA: 0x3017 | Ordinal: 12312
        void zrot(float);

    // RVA: 0x3018 | Ordinal: 12313
        void zrot(float, float);

    // RVA: 0x45B | Ordinal: 1116
        void _FXMat3f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT3F_HPP
