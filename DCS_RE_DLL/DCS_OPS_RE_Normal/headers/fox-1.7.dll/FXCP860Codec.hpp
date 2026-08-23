#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP860Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP860Codec
{
public:

    // RVA: 0x5B | Ordinal: 92
        void FXCP860Codec(class FX::FXCP860Codec const &);

    // RVA: 0x5C | Ordinal: 93
        void FXCP860Codec(void);

    // RVA: 0x99C | Ordinal: 2461
        void aliases(void) const;

    // RVA: 0x139C | Ordinal: 5021
        void getMetaClass(void) const;

    // RVA: 0x171A | Ordinal: 5915
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDE | Ordinal: 7135
        void manufacture(void);

    // RVA: 0x1CEF | Ordinal: 7408
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2F | Ordinal: 7728
        void mibEnum(void) const;

    // RVA: 0x1E5F | Ordinal: 7776
        void mimeName(void) const;

    // RVA: 0x1EF3 | Ordinal: 7924
        void name(void) const;

    // RVA: 0x2F95 | Ordinal: 12182
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C0 | Ordinal: 961
        void _FXCP860Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP860CODEC_HPP
