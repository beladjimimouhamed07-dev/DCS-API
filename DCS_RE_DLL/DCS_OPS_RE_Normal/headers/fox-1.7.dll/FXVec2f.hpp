#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec2f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec2f
{
public:

    // RVA: 0x35B | Ordinal: 860
        void FXVec2f(class FX::FXVec2f const &);

    // RVA: 0x35C | Ordinal: 861
        void FXVec2f(float, float);

    // RVA: 0x35D | Ordinal: 862
        void FXVec2f(float const *const);

    // RVA: 0x35E | Ordinal: 863
        void FXVec2f(void);

    // RVA: 0xAC8 | Ordinal: 2761
        void clamp(float, float);

    // RVA: 0x1A8A | Ordinal: 6795
        void length(void) const;

    // RVA: 0x1A7F | Ordinal: 6784
        void length2(void) const;

    // RVA: 0x2950 | Ordinal: 10577
        void set(class FX::FXVec2f const &);

    // RVA: 0x2951 | Ordinal: 10578
        void set(float, float);

    // RVA: 0x2952 | Ordinal: 10579
        void set(float const *const);

    // RVA: 0x4E9 | Ordinal: 1258
        void _FXVec2f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC2F_HPP
