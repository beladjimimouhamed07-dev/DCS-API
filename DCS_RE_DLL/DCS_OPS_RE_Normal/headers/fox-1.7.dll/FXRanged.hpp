#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRanged
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRanged
{
public:

    // RVA: 0x27D | Ordinal: 638
        void FXRanged(class FX::FXRanged const &);

    // RVA: 0x27E | Ordinal: 639
        void FXRanged(class FX::FXSphered const &);

    // RVA: 0x27F | Ordinal: 640
        void FXRanged(class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x280 | Ordinal: 641
        void FXRanged(class FX::FXVec3d const &);

    // RVA: 0x281 | Ordinal: 642
        void FXRanged(double, double, double);

    // RVA: 0x282 | Ordinal: 643
        void FXRanged(double, double, double, double, double, double);

    // RVA: 0x283 | Ordinal: 644
        void FXRanged(void);

    // RVA: 0x9EF | Ordinal: 2544
        void area(void) const;

    // RVA: 0xAB2 | Ordinal: 2739
        void center(void) const;

    // RVA: 0xB62 | Ordinal: 2915
        void contains(class FX::FXRanged const &) const;

    // RVA: 0xB63 | Ordinal: 2916
        void contains(class FX::FXSphered const &) const;

    // RVA: 0xB64 | Ordinal: 2917
        void contains(class FX::FXVec3d const &) const;

    // RVA: 0xB65 | Ordinal: 2918
        void contains(double, double, double) const;

    // RVA: 0xB95 | Ordinal: 2966
        void corner(int) const;

    // RVA: 0xC4B | Ordinal: 3148
        void depth(void) const;

    // RVA: 0xCCB | Ordinal: 3276
        void diagonal(void) const;

    // RVA: 0xCCF | Ordinal: 3280
        void diameter(void) const;

    // RVA: 0xDEF | Ordinal: 3568
        void empty(void) const;

    // RVA: 0x1823 | Ordinal: 6180
        void height(void) const;

    // RVA: 0x1869 | Ordinal: 6250
        void include(class FX::FXRanged const &);

    // RVA: 0x186A | Ordinal: 6251
        void include(class FX::FXSphered const &);

    // RVA: 0x186B | Ordinal: 6252
        void include(class FX::FXVec3d const &);

    // RVA: 0x186C | Ordinal: 6253
        void include(double, double, double);

    // RVA: 0x18D9 | Ordinal: 6362
        void intersect(class FX::FXVec4d const &) const;

    // RVA: 0x18DA | Ordinal: 6363
        void intersect(class FX::FXVec3d const &, class FX::FXVec3d const &) const;

    // RVA: 0x18DB | Ordinal: 6364
        void intersect(class FX::FXVec3d const &, class FX::FXVec3d const &, double *const) const;

    // RVA: 0x1BA0 | Ordinal: 7073
        void longest(void) const;

    // RVA: 0x26DB | Ordinal: 9948
        void radius(void) const;

    // RVA: 0x2937 | Ordinal: 10552
        void set(class FX::FXRanged const &);

    // RVA: 0x2938 | Ordinal: 10553
        void set(class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x2939 | Ordinal: 10554
        void set(class FX::FXVec3d const &);

    // RVA: 0x293A | Ordinal: 10555
        void set(double, double, double);

    // RVA: 0x293B | Ordinal: 10556
        void set(double, double, double, double, double, double);

    // RVA: 0x2DF2 | Ordinal: 11763
        void shortest(void) const;

    // RVA: 0x2EBF | Ordinal: 11968
        void transform(class FX::FXMat4d const &) const;

    // RVA: 0x2F60 | Ordinal: 12129
        void volume(void) const;

    // RVA: 0x2FC9 | Ordinal: 12234
        void width(void) const;

    // RVA: 0x490 | Ordinal: 1169
        void _FXRanged(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRANGED_HPP
