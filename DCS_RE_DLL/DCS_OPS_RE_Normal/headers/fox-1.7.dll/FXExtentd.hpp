#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXExtentd
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXExtentd
{
public:

    // RVA: 0xFF | Ordinal: 256
        void FXExtentd(class FX::FXExtentd const &);

    // RVA: 0x100 | Ordinal: 257
        void FXExtentd(class FX::FXVec2d const &, class FX::FXVec2d const &);

    // RVA: 0x101 | Ordinal: 258
        void FXExtentd(class FX::FXVec2d const &);

    // RVA: 0x102 | Ordinal: 259
        void FXExtentd(double, double);

    // RVA: 0x103 | Ordinal: 260
        void FXExtentd(double, double, double, double);

    // RVA: 0x104 | Ordinal: 261
        void FXExtentd(void);

    // RVA: 0x9ED | Ordinal: 2542
        void area(void) const;

    // RVA: 0xAB0 | Ordinal: 2737
        void center(void) const;

    // RVA: 0xB56 | Ordinal: 2903
        void contains(class FX::FXExtentd const &) const;

    // RVA: 0xB57 | Ordinal: 2904
        void contains(class FX::FXVec2d const &) const;

    // RVA: 0xB58 | Ordinal: 2905
        void contains(double, double) const;

    // RVA: 0xB93 | Ordinal: 2964
        void corner(int) const;

    // RVA: 0xCC9 | Ordinal: 3274
        void diagonal(void) const;

    // RVA: 0xCCD | Ordinal: 3278
        void diameter(void) const;

    // RVA: 0xDEB | Ordinal: 3564
        void empty(void) const;

    // RVA: 0x1821 | Ordinal: 6178
        void height(void) const;

    // RVA: 0x1863 | Ordinal: 6244
        void include(class FX::FXExtentd const &);

    // RVA: 0x1864 | Ordinal: 6245
        void include(class FX::FXVec2d const &);

    // RVA: 0x1865 | Ordinal: 6246
        void include(double, double);

    // RVA: 0x1B9E | Ordinal: 7071
        void longest(void) const;

    // RVA: 0x26D9 | Ordinal: 9946
        void radius(void) const;

    // RVA: 0x28F5 | Ordinal: 10486
        void set(class FX::FXExtentd const &);

    // RVA: 0x28F6 | Ordinal: 10487
        void set(class FX::FXVec2d const &, class FX::FXVec2d const &);

    // RVA: 0x28F7 | Ordinal: 10488
        void set(class FX::FXVec2d const &);

    // RVA: 0x28F8 | Ordinal: 10489
        void set(double, double);

    // RVA: 0x28F9 | Ordinal: 10490
        void set(double, double, double, double);

    // RVA: 0x2DF0 | Ordinal: 11761
        void shortest(void) const;

    // RVA: 0x2FC7 | Ordinal: 12232
        void width(void) const;

    // RVA: 0x404 | Ordinal: 1029
        void _FXExtentd(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXEXTENTD_HPP
