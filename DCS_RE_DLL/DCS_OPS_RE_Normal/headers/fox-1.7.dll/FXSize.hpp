#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSize
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSize
{
public:

    // RVA: 0x2CC | Ordinal: 717
        void FXSize(class FX::FXSize const &);

    // RVA: 0x2CD | Ordinal: 718
        void FXSize(short, short);

    // RVA: 0x2CE | Ordinal: 719
        void FXSize(void);

    // RVA: 0xDF6 | Ordinal: 3575
        void empty(void) const;

    // RVA: 0x16EC | Ordinal: 5869
        void grow(short);

    // RVA: 0x16ED | Ordinal: 5870
        void grow(short, short);

    // RVA: 0x16EE | Ordinal: 5871
        void grow(short, short, short, short);

    // RVA: 0x2945 | Ordinal: 10566
        void set(class FX::FXSize const &);

    // RVA: 0x2946 | Ordinal: 10567
        void set(short, short);

    // RVA: 0x2E2B | Ordinal: 11820
        void shrink(short);

    // RVA: 0x2E2C | Ordinal: 11821
        void shrink(short, short);

    // RVA: 0x2E2D | Ordinal: 11822
        void shrink(short, short, short, short);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSIZE_HPP
