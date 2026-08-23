#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88596Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88596Codec
{
public:

    // RVA: 0x20 | Ordinal: 33
        void FX88596Codec(class FX::FX88596Codec const &);

    // RVA: 0x21 | Ordinal: 34
        void FX88596Codec(void);

    // RVA: 0x989 | Ordinal: 2442
        void aliases(void) const;

    // RVA: 0x1380 | Ordinal: 4993
        void getMetaClass(void) const;

    // RVA: 0x16FE | Ordinal: 5887
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC2 | Ordinal: 7107
        void manufacture(void);

    // RVA: 0x1CDC | Ordinal: 7389
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1C | Ordinal: 7709
        void mibEnum(void) const;

    // RVA: 0x1E4C | Ordinal: 7757
        void mimeName(void) const;

    // RVA: 0x1EE0 | Ordinal: 7905
        void name(void) const;

    // RVA: 0x2F82 | Ordinal: 12163
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3A0 | Ordinal: 929
        void _FX88596Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88596CODEC_HPP
