#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXExtentf
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXExtentf
{
public:

    // RVA: 0x105 | Ordinal: 262
        void FXExtentf(class FX::FXExtentf const &);

    // RVA: 0x106 | Ordinal: 263
        void FXExtentf(class FX::FXVec2f const &, class FX::FXVec2f const &);

    // RVA: 0x107 | Ordinal: 264
        void FXExtentf(class FX::FXVec2f const &);

    // RVA: 0x108 | Ordinal: 265
        void FXExtentf(float, float);

    // RVA: 0x109 | Ordinal: 266
        void FXExtentf(float, float, float, float);

    // RVA: 0x10A | Ordinal: 267
        void FXExtentf(void);

    // RVA: 0x9EE | Ordinal: 2543
        void area(void) const;

    // RVA: 0xAB1 | Ordinal: 2738
        void center(void) const;

    // RVA: 0xB59 | Ordinal: 2906
        void contains(class FX::FXExtentf const &) const;

    // RVA: 0xB5A | Ordinal: 2907
        void contains(class FX::FXVec2f const &) const;

    // RVA: 0xB5B | Ordinal: 2908
        void contains(float, float) const;

    // RVA: 0xB94 | Ordinal: 2965
        void corner(int) const;

    // RVA: 0xCCA | Ordinal: 3275
        void diagonal(void) const;

    // RVA: 0xCCE | Ordinal: 3279
        void diameter(void) const;

    // RVA: 0xDEC | Ordinal: 3565
        void empty(void) const;

    // RVA: 0x1822 | Ordinal: 6179
        void height(void) const;

    // RVA: 0x1866 | Ordinal: 6247
        void include(class FX::FXExtentf const &);

    // RVA: 0x1867 | Ordinal: 6248
        void include(class FX::FXVec2f const &);

    // RVA: 0x1868 | Ordinal: 6249
        void include(float, float);

    // RVA: 0x1B9F | Ordinal: 7072
        void longest(void) const;

    // RVA: 0x26DA | Ordinal: 9947
        void radius(void) const;

    // RVA: 0x28FA | Ordinal: 10491
        void set(class FX::FXExtentf const &);

    // RVA: 0x28FB | Ordinal: 10492
        void set(class FX::FXVec2f const &, class FX::FXVec2f const &);

    // RVA: 0x28FC | Ordinal: 10493
        void set(class FX::FXVec2f const &);

    // RVA: 0x28FD | Ordinal: 10494
        void set(float, float);

    // RVA: 0x28FE | Ordinal: 10495
        void set(float, float, float, float);

    // RVA: 0x2DF1 | Ordinal: 11762
        void shortest(void) const;

    // RVA: 0x2FC8 | Ordinal: 12233
        void width(void) const;

    // RVA: 0x405 | Ordinal: 1030
        void _FXExtentf(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXEXTENTF_HPP
