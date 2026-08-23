#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec3f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec3f
{
public:

    // RVA: 0x364 | Ordinal: 869
        void FXVec3f(class FX::FXVec3f const &);

    // RVA: 0x365 | Ordinal: 870
        void FXVec3f(class FX::FXVec2f const &, float);

    // RVA: 0x366 | Ordinal: 871
        void FXVec3f(float, float, float);

    // RVA: 0x367 | Ordinal: 872
        void FXVec3f(float const *const);

    // RVA: 0x368 | Ordinal: 873
        void FXVec3f(void);

    // RVA: 0xACA | Ordinal: 2763
        void clamp(float, float);

    // RVA: 0x1A8C | Ordinal: 6797
        void length(void) const;

    // RVA: 0x1A81 | Ordinal: 6786
        void length2(void) const;

    // RVA: 0x2956 | Ordinal: 10583
        void set(class FX::FXVec3f const &);

    // RVA: 0x2957 | Ordinal: 10584
        void set(float, float, float);

    // RVA: 0x2958 | Ordinal: 10585
        void set(float const *const);

    // RVA: 0x4EB | Ordinal: 1260
        void _FXVec3f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC3F_HPP
