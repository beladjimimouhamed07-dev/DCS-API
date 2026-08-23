#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRex
{
public:

    // RVA: 0x2A2 | Ordinal: 675
        void FXRex(class FX::FXRex const &);

    // RVA: 0x2A3 | Ordinal: 676
        void FXRex(class FX::FXString const &, int, enum FX::FXRex::Error *);

    // RVA: 0x2A4 | Ordinal: 677
        void FXRex(char const *, int, enum FX::FXRex::Error *);

    // RVA: 0x2A5 | Ordinal: 678
        void FXRex(void);

    // RVA: 0x9B8 | Ordinal: 2489
        void amatch(class FX::FXString const &, int, int, int *, int *, int) const;

    // RVA: 0x9B9 | Ordinal: 2490
        void amatch(char const *, int, int, int, int *, int *, int) const;

    // RVA: 0xAD6 | Ordinal: 2775
        void clear(void);

    // RVA: 0xDF3 | Ordinal: 3572
        void empty(void) const;

    // RVA: 0x11E5 | Ordinal: 4582
        void getError(enum FX::FXRex::Error);

    // RVA: 0x2660 | Ordinal: 9825
        void parse(class FX::FXString const &, int);

    // RVA: 0x2661 | Ordinal: 9826
        void parse(char const *, int);

    // RVA: 0x28CB | Ordinal: 10444
        void search(class FX::FXString const &, int, int, int, int *, int *, int) const;

    // RVA: 0x28CC | Ordinal: 10445
        void search(char const *, int, int, int, int, int *, int *, int) const;

    // RVA: 0x2E6D | Ordinal: 11886
        void substitute(class FX::FXString const &, int *, int *, class FX::FXString const &, int);

    // RVA: 0x2E6E | Ordinal: 11887
        void substitute(class FX::FXString const &, int *, int *, char const *, int);

    // RVA: 0x2E6F | Ordinal: 11888
        void substitute(char const *, int, int *, int *, char const *, int);

    // RVA: 0x2E70 | Ordinal: 11889
        void substitute(char const *, int, int *, int *, class FX::FXString const &, int);

    // RVA: 0x49B | Ordinal: 1180
        void _FXRex(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREX_HPP
