#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF16Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF16Codec
{
public:

    // RVA: 0x334 | Ordinal: 821
        void FXUTF16Codec(class FX::FXUTF16Codec const &);

    // RVA: 0x335 | Ordinal: 822
        void FXUTF16Codec(void);

    // RVA: 0x9A7 | Ordinal: 2472
        void aliases(void) const;

    // RVA: 0x1469 | Ordinal: 5226
        void getMetaClass(void) const;

    // RVA: 0x17E9 | Ordinal: 6122
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA4 | Ordinal: 7333
        void manufacture(void);

    // RVA: 0x1CCB | Ordinal: 7372
        void mb2utf(char *, int, char const *, int) const;

    // RVA: 0x1CCF | Ordinal: 7376
        void mb2utflen(char const *, int) const;

    // RVA: 0x1CFB | Ordinal: 7420
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3A | Ordinal: 7739
        void mibEnum(void) const;

    // RVA: 0x1E6A | Ordinal: 7787
        void mimeName(void) const;

    // RVA: 0x1F01 | Ordinal: 7938
        void name(void) const;

    // RVA: 0x2F3B | Ordinal: 12092
        void utf2mb(char *, int, char const *, int) const;

    // RVA: 0x2F3F | Ordinal: 12096
        void utf2mblen(char const *, int) const;

    // RVA: 0x2FA1 | Ordinal: 12194
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4DE | Ordinal: 1247
        void _FXUTF16Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF16CODEC_HPP
