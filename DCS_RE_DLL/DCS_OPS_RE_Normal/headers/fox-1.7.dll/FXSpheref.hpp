#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSpheref
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSpheref
{
public:

    // RVA: 0x2D8 | Ordinal: 729
        void FXSpheref(class FX::FXSpheref const &);

    // RVA: 0x2D9 | Ordinal: 730
        void FXSpheref(class FX::FXRangef const &);

    // RVA: 0x2DA | Ordinal: 731
        void FXSpheref(class FX::FXVec3f const &, float);

    // RVA: 0x2DB | Ordinal: 732
        void FXSpheref(float, float, float, float);

    // RVA: 0x2DC | Ordinal: 733
        void FXSpheref(void);

    // RVA: 0x9F2 | Ordinal: 2547
        void area(void) const;

    // RVA: 0xB73 | Ordinal: 2932
        void contains(class FX::FXSpheref const &) const;

    // RVA: 0xB74 | Ordinal: 2933
        void contains(class FX::FXRangef const &) const;

    // RVA: 0xB75 | Ordinal: 2934
        void contains(class FX::FXVec3f const &) const;

    // RVA: 0xB76 | Ordinal: 2935
        void contains(float, float, float) const;

    // RVA: 0xCD2 | Ordinal: 3283
        void diameter(void) const;

    // RVA: 0xDF8 | Ordinal: 3577
        void empty(void) const;

    // RVA: 0x1875 | Ordinal: 6262
        void include(class FX::FXSpheref const &);

    // RVA: 0x1876 | Ordinal: 6263
        void include(class FX::FXRangef const &);

    // RVA: 0x1877 | Ordinal: 6264
        void include(class FX::FXVec3f const &);

    // RVA: 0x1878 | Ordinal: 6265
        void include(float, float, float);

    // RVA: 0x187D | Ordinal: 6270
        void includeInRadius(class FX::FXSpheref const &);

    // RVA: 0x187E | Ordinal: 6271
        void includeInRadius(class FX::FXRangef const &);

    // RVA: 0x187F | Ordinal: 6272
        void includeInRadius(class FX::FXVec3f const &);

    // RVA: 0x1880 | Ordinal: 6273
        void includeInRadius(float, float, float);

    // RVA: 0x18E2 | Ordinal: 6371
        void intersect(class FX::FXVec4f const &) const;

    // RVA: 0x18E3 | Ordinal: 6372
        void intersect(class FX::FXVec3f const &, class FX::FXVec3f const &) const;

    // RVA: 0x18E4 | Ordinal: 6373
        void intersect(class FX::FXVec3f const &, class FX::FXVec3f const &, float *const) const;

    // RVA: 0x294A | Ordinal: 10571
        void set(class FX::FXSpheref const &);

    // RVA: 0x294B | Ordinal: 10572
        void set(class FX::FXVec3f const &, float);

    // RVA: 0x294C | Ordinal: 10573
        void set(float, float, float, float);

    // RVA: 0x2EC2 | Ordinal: 11971
        void transform(class FX::FXMat4f const &) const;

    // RVA: 0x2F63 | Ordinal: 12132
        void volume(void) const;

    // RVA: 0x4B5 | Ordinal: 1206
        void _FXSpheref(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPHEREF_HPP
