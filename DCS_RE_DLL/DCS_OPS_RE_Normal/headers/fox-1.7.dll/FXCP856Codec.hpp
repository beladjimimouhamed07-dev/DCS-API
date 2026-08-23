#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP856Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP856Codec
{
public:

    // RVA: 0x57 | Ordinal: 88
        void FXCP856Codec(class FX::FXCP856Codec const &);

    // RVA: 0x58 | Ordinal: 89
        void FXCP856Codec(void);

    // RVA: 0x99A | Ordinal: 2459
        void aliases(void) const;

    // RVA: 0x139A | Ordinal: 5019
        void getMetaClass(void) const;

    // RVA: 0x1718 | Ordinal: 5913
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDC | Ordinal: 7133
        void manufacture(void);

    // RVA: 0x1CED | Ordinal: 7406
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2D | Ordinal: 7726
        void mibEnum(void) const;

    // RVA: 0x1E5D | Ordinal: 7774
        void mimeName(void) const;

    // RVA: 0x1EF1 | Ordinal: 7922
        void name(void) const;

    // RVA: 0x2F93 | Ordinal: 12180
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BE | Ordinal: 959
        void _FXCP856Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP856CODEC_HPP
