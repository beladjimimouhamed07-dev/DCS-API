#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMat2f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMat2f
{
public:

    // RVA: 0x1D3 | Ordinal: 468
        void FXMat2f(class FX::FXMat2f const &);

    // RVA: 0x1D4 | Ordinal: 469
        void FXMat2f(class FX::FXMat3f const &);

    // RVA: 0x1D5 | Ordinal: 470
        void FXMat2f(class FX::FXVec2f const &, class FX::FXVec2f const &);

    // RVA: 0x1D6 | Ordinal: 471
        void FXMat2f(float);

    // RVA: 0x1D7 | Ordinal: 472
        void FXMat2f(float, float);

    // RVA: 0x1D8 | Ordinal: 473
        void FXMat2f(float, float, float, float);

    // RVA: 0x1D9 | Ordinal: 474
        void FXMat2f(float const *const);

    // RVA: 0x1DA | Ordinal: 475
        void FXMat2f(void);

    // RVA: 0xC86 | Ordinal: 3207
        void det(void) const;

    // RVA: 0x184F | Ordinal: 6224
        void identity(void);

    // RVA: 0x18E7 | Ordinal: 6376
        void invert(void) const;

    // RVA: 0x195A | Ordinal: 6491
        void isIdentity(void) const;

    // RVA: 0x27B7 | Ordinal: 10168
        void rot(float);

    // RVA: 0x27B8 | Ordinal: 10169
        void rot(float, float);

    // RVA: 0x28B2 | Ordinal: 10419
        void scale(float);

    // RVA: 0x28B3 | Ordinal: 10420
        void scale(float, float);

    // RVA: 0x2906 | Ordinal: 10503
        void set(class FX::FXMat2f const &);

    // RVA: 0x2907 | Ordinal: 10504
        void set(class FX::FXMat3f const &);

    // RVA: 0x2908 | Ordinal: 10505
        void set(class FX::FXVec2f const &, class FX::FXVec2f const &);

    // RVA: 0x2909 | Ordinal: 10506
        void set(float);

    // RVA: 0x290A | Ordinal: 10507
        void set(float, float);

    // RVA: 0x290B | Ordinal: 10508
        void set(float, float, float, float);

    // RVA: 0x290C | Ordinal: 10509
        void set(float const *const);

    // RVA: 0x2EC8 | Ordinal: 11977
        void transpose(void) const;

    // RVA: 0x459 | Ordinal: 1114
        void _FXMat2f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMAT2F_HPP
