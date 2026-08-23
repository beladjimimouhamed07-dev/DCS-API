#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSphered
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSphered
{
public:

    // RVA: 0x2D3 | Ordinal: 724
        void FXSphered(class FX::FXSphered const &);

    // RVA: 0x2D4 | Ordinal: 725
        void FXSphered(class FX::FXRanged const &);

    // RVA: 0x2D5 | Ordinal: 726
        void FXSphered(class FX::FXVec3d const &, double);

    // RVA: 0x2D6 | Ordinal: 727
        void FXSphered(double, double, double, double);

    // RVA: 0x2D7 | Ordinal: 728
        void FXSphered(void);

    // RVA: 0x9F1 | Ordinal: 2546
        void area(void) const;

    // RVA: 0xB6F | Ordinal: 2928
        void contains(class FX::FXSphered const &) const;

    // RVA: 0xB70 | Ordinal: 2929
        void contains(class FX::FXRanged const &) const;

    // RVA: 0xB71 | Ordinal: 2930
        void contains(class FX::FXVec3d const &) const;

    // RVA: 0xB72 | Ordinal: 2931
        void contains(double, double, double) const;

    // RVA: 0xCD1 | Ordinal: 3282
        void diameter(void) const;

    // RVA: 0xDF7 | Ordinal: 3576
        void empty(void) const;

    // RVA: 0x1871 | Ordinal: 6258
        void include(class FX::FXSphered const &);

    // RVA: 0x1872 | Ordinal: 6259
        void include(class FX::FXRanged const &);

    // RVA: 0x1873 | Ordinal: 6260
        void include(class FX::FXVec3d const &);

    // RVA: 0x1874 | Ordinal: 6261
        void include(double, double, double);

    // RVA: 0x1879 | Ordinal: 6266
        void includeInRadius(class FX::FXSphered const &);

    // RVA: 0x187A | Ordinal: 6267
        void includeInRadius(class FX::FXRanged const &);

    // RVA: 0x187B | Ordinal: 6268
        void includeInRadius(class FX::FXVec3d const &);

    // RVA: 0x187C | Ordinal: 6269
        void includeInRadius(double, double, double);

    // RVA: 0x18DF | Ordinal: 6368
        void intersect(class FX::FXVec4d const &) const;

    // RVA: 0x18E0 | Ordinal: 6369
        void intersect(class FX::FXVec3d const &, class FX::FXVec3d const &) const;

    // RVA: 0x18E1 | Ordinal: 6370
        void intersect(class FX::FXVec3d const &, class FX::FXVec3d const &, double *const) const;

    // RVA: 0x2947 | Ordinal: 10568
        void set(class FX::FXSphered const &);

    // RVA: 0x2948 | Ordinal: 10569
        void set(class FX::FXVec3d const &, double);

    // RVA: 0x2949 | Ordinal: 10570
        void set(double, double, double, double);

    // RVA: 0x2EC1 | Ordinal: 11970
        void transform(class FX::FXMat4d const &) const;

    // RVA: 0x2F62 | Ordinal: 12131
        void volume(void) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void _FXSphered(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPHERED_HPP
