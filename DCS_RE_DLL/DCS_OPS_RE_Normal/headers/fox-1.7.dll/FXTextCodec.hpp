#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTextCodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTextCodec
{
public:

    // RVA: 0x311 | Ordinal: 786
        void FXTextCodec(class FX::FXTextCodec const &);

    // RVA: 0x312 | Ordinal: 787
        void FXTextCodec(void);

    // RVA: 0x145A | Ordinal: 5211
        void getMetaClass(void) const;

    // RVA: 0x17DA | Ordinal: 6107
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CC5 | Ordinal: 7366
        void mb2utf(class FX::FXString const &) const;

    // RVA: 0x1CC6 | Ordinal: 7367
        void mb2utf(char const *) const;

    // RVA: 0x1CC7 | Ordinal: 7368
        void mb2utf(char const *, int) const;

    // RVA: 0x1CC8 | Ordinal: 7369
        void mb2utf(char *, int, class FX::FXString const &) const;

    // RVA: 0x1CC9 | Ordinal: 7370
        void mb2utf(char *, int, char const *) const;

    // RVA: 0x1CCA | Ordinal: 7371
        void mb2utf(char *, int, char const *, int) const;

    // RVA: 0x1CCD | Ordinal: 7374
        void mb2utflen(class FX::FXString const &) const;

    // RVA: 0x1CCE | Ordinal: 7375
        void mb2utflen(char const *, int) const;

    // RVA: 0x1CF9 | Ordinal: 7418
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x2F35 | Ordinal: 12086
        void utf2mb(class FX::FXString const &) const;

    // RVA: 0x2F36 | Ordinal: 12087
        void utf2mb(char const *) const;

    // RVA: 0x2F37 | Ordinal: 12088
        void utf2mb(char const *, int) const;

    // RVA: 0x2F38 | Ordinal: 12089
        void utf2mb(char *, int, class FX::FXString const &) const;

    // RVA: 0x2F39 | Ordinal: 12090
        void utf2mb(char *, int, char const *) const;

    // RVA: 0x2F3A | Ordinal: 12091
        void utf2mb(char *, int, char const *, int) const;

    // RVA: 0x2F3D | Ordinal: 12094
        void utf2mblen(class FX::FXString const &) const;

    // RVA: 0x2F3E | Ordinal: 12095
        void utf2mblen(char const *, int) const;

    // RVA: 0x2F9F | Ordinal: 12192
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4CC | Ordinal: 1229
        void _FXTextCodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTEXTCODEC_HPP
