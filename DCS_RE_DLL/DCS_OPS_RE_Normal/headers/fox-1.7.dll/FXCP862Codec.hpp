#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP862Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP862Codec
{
public:

    // RVA: 0x5F | Ordinal: 96
        void FXCP862Codec(class FX::FXCP862Codec const &);

    // RVA: 0x60 | Ordinal: 97
        void FXCP862Codec(void);

    // RVA: 0x99E | Ordinal: 2463
        void aliases(void) const;

    // RVA: 0x139E | Ordinal: 5023
        void getMetaClass(void) const;

    // RVA: 0x171C | Ordinal: 5917
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE0 | Ordinal: 7137
        void manufacture(void);

    // RVA: 0x1CF1 | Ordinal: 7410
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E31 | Ordinal: 7730
        void mibEnum(void) const;

    // RVA: 0x1E61 | Ordinal: 7778
        void mimeName(void) const;

    // RVA: 0x1EF5 | Ordinal: 7926
        void name(void) const;

    // RVA: 0x2F97 | Ordinal: 12184
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C2 | Ordinal: 963
        void _FXCP862Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP862CODEC_HPP
