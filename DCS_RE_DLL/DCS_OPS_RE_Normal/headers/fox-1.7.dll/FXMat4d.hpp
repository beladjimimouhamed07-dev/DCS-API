#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat4d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat4d
{
public:

    // RVA: 0x1EF | Ordinal: 496
        void FXMat4d(class FX::FXMat4d const &);

    // RVA: 0x1F0 | Ordinal: 497
        void FXMat4d(class FX::FXMat3d const &);

    // RVA: 0x1F1 | Ordinal: 498
        void FXMat4d(class FX::FXQuatd const &);

    // RVA: 0x1F2 | Ordinal: 499
        void FXMat4d(class FX::FXVec4d const &, class FX::FXVec4d const &, class FX::FXVec4d const &, class FX::FXVec4d const &);

    // RVA: 0x1F3 | Ordinal: 500
        void FXMat4d(double);

    // RVA: 0x1F4 | Ordinal: 501
        void FXMat4d(double, double, double, double);

    // RVA: 0x1F5 | Ordinal: 502
        void FXMat4d(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x1F6 | Ordinal: 503
        void FXMat4d(double const *const);

    // RVA: 0x1F7 | Ordinal: 504
        void FXMat4d(void);

    // RVA: 0x978 | Ordinal: 2425
        void affineInvert(void) const;

    // RVA: 0xC89 | Ordinal: 3210
        void det(void) const;

    // RVA: 0x1233 | Ordinal: 4660
        void getFrustum(double &, double &, double &, double &, double &, double &) const;

    // RVA: 0x14D5 | Ordinal: 5334
        void getOrtho(double &, double &, double &, double &, double &, double &) const;

    // RVA: 0x1852 | Ordinal: 6227
        void identity(void);

    // RVA: 0x18EA | Ordinal: 6379
        void invert(void) const;

    // RVA: 0x195D | Ordinal: 6494
        void isIdentity(void) const;

    // RVA: 0x1A76 | Ordinal: 6775
        void left(void);

    // RVA: 0x1BA2 | Ordinal: 7075
        void look(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x1F28 | Ordinal: 7977
        void normalMatrix(void) const;

    // RVA: 0x27B2 | Ordinal: 10163
        void rigidInvert(void) const;

    // RVA: 0x27BF | Ordinal: 10176
        void rot(class FX::FXMat3d const &);

    // RVA: 0x27C0 | Ordinal: 10177
        void rot(class FX::FXQuatd const &);

    // RVA: 0x27C1 | Ordinal: 10178
        void rot(class FX::FXVec3d const &, double);

    // RVA: 0x27C2 | Ordinal: 10179
        void rot(class FX::FXVec3d const &, double, double);

    // RVA: 0x28BA | Ordinal: 10427
        void scale(class FX::FXVec3d const &);

    // RVA: 0x28BB | Ordinal: 10428
        void scale(double);

    // RVA: 0x28BC | Ordinal: 10429
        void scale(double, double, double);

    // RVA: 0x291F | Ordinal: 10528
        void set(class FX::FXMat4d const &);

    // RVA: 0x2920 | Ordinal: 10529
        void set(class FX::FXMat3d const &);

    // RVA: 0x2921 | Ordinal: 10530
        void set(class FX::FXQuatd const &);

    // RVA: 0x2922 | Ordinal: 10531
        void set(class FX::FXVec4d const &, class FX::FXVec4d const &, class FX::FXVec4d const &, class FX::FXVec4d const &);

    // RVA: 0x2923 | Ordinal: 10532
        void set(double);

    // RVA: 0x2924 | Ordinal: 10533
        void set(double, double, double, double);

    // RVA: 0x2925 | Ordinal: 10534
        void set(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x2926 | Ordinal: 10535
        void set(double const *const);

    // RVA: 0x2ADA | Ordinal: 10971
        void setFrustum(double, double, double, double, double, double);

    // RVA: 0x2B71 | Ordinal: 11122
        void setInverseFrustum(double, double, double, double, double, double);

    // RVA: 0x2B73 | Ordinal: 11124
        void setInverseOrtho(double, double, double, double, double, double);

    // RVA: 0x2C39 | Ordinal: 11322
        void setOrtho(double, double, double, double, double, double);

    // RVA: 0x2EBB | Ordinal: 11964
        void trans(class FX::FXVec3d const &);

    // RVA: 0x2EBC | Ordinal: 11965
        void trans(double, double, double);

    // RVA: 0x2ECB | Ordinal: 11980
        void transpose(void) const;

    // RVA: 0x3004 | Ordinal: 12293
        void xrot(double);

    // RVA: 0x3005 | Ordinal: 12294
        void xrot(double, double);

    // RVA: 0x3010 | Ordinal: 12305
        void yrot(double);

    // RVA: 0x3011 | Ordinal: 12306
        void yrot(double, double);

    // RVA: 0x3019 | Ordinal: 12314
        void zrot(double);

    // RVA: 0x301A | Ordinal: 12315
        void zrot(double, double);

    // RVA: 0x45C | Ordinal: 1117
        void _FXMat4d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT4D_HPP
