#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF8Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF8Codec
{
public:

    // RVA: 0x33E | Ordinal: 831
        void FXUTF8Codec(class FX::FXUTF8Codec const &);

    // RVA: 0x33F | Ordinal: 832
        void FXUTF8Codec(void);

    // RVA: 0x9AC | Ordinal: 2477
        void aliases(void) const;

    // RVA: 0x1D00 | Ordinal: 7425
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3F | Ordinal: 7744
        void mibEnum(void) const;

    // RVA: 0x1E6F | Ordinal: 7792
        void mimeName(void) const;

    // RVA: 0x1F06 | Ordinal: 7943
        void name(void) const;

    // RVA: 0x2FA6 | Ordinal: 12199
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4E3 | Ordinal: 1252
        void _FXUTF8Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF8CODEC_HPP
