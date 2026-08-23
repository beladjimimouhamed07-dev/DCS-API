#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat4f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat4f
{
public:

    // RVA: 0x1F8 | Ordinal: 505
        void FXMat4f(class FX::FXMat4f const &);

    // RVA: 0x1F9 | Ordinal: 506
        void FXMat4f(class FX::FXMat3f const &);

    // RVA: 0x1FA | Ordinal: 507
        void FXMat4f(class FX::FXQuatf const &);

    // RVA: 0x1FB | Ordinal: 508
        void FXMat4f(class FX::FXVec4f const &, class FX::FXVec4f const &, class FX::FXVec4f const &, class FX::FXVec4f const &);

    // RVA: 0x1FC | Ordinal: 509
        void FXMat4f(float);

    // RVA: 0x1FD | Ordinal: 510
        void FXMat4f(float, float, float, float);

    // RVA: 0x1FE | Ordinal: 511
        void FXMat4f(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

    // RVA: 0x1FF | Ordinal: 512
        void FXMat4f(float const *const);

    // RVA: 0x200 | Ordinal: 513
        void FXMat4f(void);

    // RVA: 0x979 | Ordinal: 2426
        void affineInvert(void) const;

    // RVA: 0xC8A | Ordinal: 3211
        void det(void) const;

    // RVA: 0x1234 | Ordinal: 4661
        void getFrustum(float &, float &, float &, float &, float &, float &) const;

    // RVA: 0x14D6 | Ordinal: 5335
        void getOrtho(float &, float &, float &, float &, float &, float &) const;

    // RVA: 0x1853 | Ordinal: 6228
        void identity(void);

    // RVA: 0x18EB | Ordinal: 6380
        void invert(void) const;

    // RVA: 0x195E | Ordinal: 6495
        void isIdentity(void) const;

    // RVA: 0x1A77 | Ordinal: 6776
        void left(void);

    // RVA: 0x1BA3 | Ordinal: 7076
        void look(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x1F29 | Ordinal: 7978
        void normalMatrix(void) const;

    // RVA: 0x27B3 | Ordinal: 10164
        void rigidInvert(void) const;

    // RVA: 0x27C3 | Ordinal: 10180
        void rot(class FX::FXMat3f const &);

    // RVA: 0x27C4 | Ordinal: 10181
        void rot(class FX::FXQuatf const &);

    // RVA: 0x27C5 | Ordinal: 10182
        void rot(class FX::FXVec3f const &, float);

    // RVA: 0x27C6 | Ordinal: 10183
        void rot(class FX::FXVec3f const &, float, float);

    // RVA: 0x28BD | Ordinal: 10430
        void scale(class FX::FXVec3f const &);

    // RVA: 0x28BE | Ordinal: 10431
        void scale(float);

    // RVA: 0x28BF | Ordinal: 10432
        void scale(float, float, float);

    // RVA: 0x2927 | Ordinal: 10536
        void set(class FX::FXMat4f const &);

    // RVA: 0x2928 | Ordinal: 10537
        void set(class FX::FXMat3f const &);

    // RVA: 0x2929 | Ordinal: 10538
        void set(class FX::FXQuatf const &);

    // RVA: 0x292A | Ordinal: 10539
        void set(class FX::FXVec4f const &, class FX::FXVec4f const &, class FX::FXVec4f const &, class FX::FXVec4f const &);

    // RVA: 0x292B | Ordinal: 10540
        void set(float);

    // RVA: 0x292C | Ordinal: 10541
        void set(float, float, float, float);

    // RVA: 0x292D | Ordinal: 10542
        void set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

    // RVA: 0x292E | Ordinal: 10543
        void set(float const *const);

    // RVA: 0x2ADB | Ordinal: 10972
        void setFrustum(float, float, float, float, float, float);

    // RVA: 0x2B72 | Ordinal: 11123
        void setInverseFrustum(float, float, float, float, float, float);

    // RVA: 0x2B74 | Ordinal: 11125
        void setInverseOrtho(float, float, float, float, float, float);

    // RVA: 0x2C3A | Ordinal: 11323
        void setOrtho(float, float, float, float, float, float);

    // RVA: 0x2EBD | Ordinal: 11966
        void trans(class FX::FXVec3f const &);

    // RVA: 0x2EBE | Ordinal: 11967
        void trans(float, float, float);

    // RVA: 0x2ECC | Ordinal: 11981
        void transpose(void) const;

    // RVA: 0x3006 | Ordinal: 12295
        void xrot(float);

    // RVA: 0x3007 | Ordinal: 12296
        void xrot(float, float);

    // RVA: 0x3012 | Ordinal: 12307
        void yrot(float);

    // RVA: 0x3013 | Ordinal: 12308
        void yrot(float, float);

    // RVA: 0x301B | Ordinal: 12316
        void zrot(float);

    // RVA: 0x301C | Ordinal: 12317
        void zrot(float, float);

    // RVA: 0x45D | Ordinal: 1118
        void _FXMat4f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT4F_HPP
