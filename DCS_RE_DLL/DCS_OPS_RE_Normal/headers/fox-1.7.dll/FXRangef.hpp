#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRangef
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRangef
{
public:

    // RVA: 0x284 | Ordinal: 645
        void FXRangef(class FX::FXRangef const &);

    // RVA: 0x285 | Ordinal: 646
        void FXRangef(class FX::FXSpheref const &);

    // RVA: 0x286 | Ordinal: 647
        void FXRangef(class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x287 | Ordinal: 648
        void FXRangef(class FX::FXVec3f const &);

    // RVA: 0x288 | Ordinal: 649
        void FXRangef(float, float, float);

    // RVA: 0x289 | Ordinal: 650
        void FXRangef(float, float, float, float, float, float);

    // RVA: 0x28A | Ordinal: 651
        void FXRangef(void);

    // RVA: 0x9F0 | Ordinal: 2545
        void area(void) const;

    // RVA: 0xAB3 | Ordinal: 2740
        void center(void) const;

    // RVA: 0xB66 | Ordinal: 2919
        void contains(class FX::FXRangef const &) const;

    // RVA: 0xB67 | Ordinal: 2920
        void contains(class FX::FXSpheref const &) const;

    // RVA: 0xB68 | Ordinal: 2921
        void contains(class FX::FXVec3f const &) const;

    // RVA: 0xB69 | Ordinal: 2922
        void contains(float, float, float) const;

    // RVA: 0xB96 | Ordinal: 2967
        void corner(int) const;

    // RVA: 0xC4C | Ordinal: 3149
        void depth(void) const;

    // RVA: 0xCCC | Ordinal: 3277
        void diagonal(void) const;

    // RVA: 0xCD0 | Ordinal: 3281
        void diameter(void) const;

    // RVA: 0xDF0 | Ordinal: 3569
        void empty(void) const;

    // RVA: 0x1824 | Ordinal: 6181
        void height(void) const;

    // RVA: 0x186D | Ordinal: 6254
        void include(class FX::FXRangef const &);

    // RVA: 0x186E | Ordinal: 6255
        void include(class FX::FXSpheref const &);

    // RVA: 0x186F | Ordinal: 6256
        void include(class FX::FXVec3f const &);

    // RVA: 0x1870 | Ordinal: 6257
        void include(float, float, float);

    // RVA: 0x18DC | Ordinal: 6365
        void intersect(class FX::FXVec4f const &) const;

    // RVA: 0x18DD | Ordinal: 6366
        void intersect(class FX::FXVec3f const &, class FX::FXVec3f const &) const;

    // RVA: 0x18DE | Ordinal: 6367
        void intersect(class FX::FXVec3f const &, class FX::FXVec3f const &, float *const) const;

    // RVA: 0x1BA1 | Ordinal: 7074
        void longest(void) const;

    // RVA: 0x26DC | Ordinal: 9949
        void radius(void) const;

    // RVA: 0x293C | Ordinal: 10557
        void set(class FX::FXRangef const &);

    // RVA: 0x293D | Ordinal: 10558
        void set(class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x293E | Ordinal: 10559
        void set(class FX::FXVec3f const &);

    // RVA: 0x293F | Ordinal: 10560
        void set(float, float, float);

    // RVA: 0x2940 | Ordinal: 10561
        void set(float, float, float, float, float, float);

    // RVA: 0x2DF3 | Ordinal: 11764
        void shortest(void) const;

    // RVA: 0x2EC0 | Ordinal: 11969
        void transform(class FX::FXMat4f const &) const;

    // RVA: 0x2F61 | Ordinal: 12130
        void volume(void) const;

    // RVA: 0x2FCA | Ordinal: 12235
        void width(void) const;

    // RVA: 0x491 | Ordinal: 1170
        void _FXRangef(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRANGEF_HPP
