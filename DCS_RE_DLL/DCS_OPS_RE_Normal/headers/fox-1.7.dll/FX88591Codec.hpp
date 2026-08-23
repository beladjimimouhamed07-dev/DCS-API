#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88591Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88591Codec
{
public:

    // RVA: 0x16 | Ordinal: 23
        void FX88591Codec(class FX::FX88591Codec const &);

    // RVA: 0x17 | Ordinal: 24
        void FX88591Codec(void);

    // RVA: 0x984 | Ordinal: 2437
        void aliases(void) const;

    // RVA: 0x137B | Ordinal: 4988
        void getMetaClass(void) const;

    // RVA: 0x16F9 | Ordinal: 5882
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BBD | Ordinal: 7102
        void manufacture(void);

    // RVA: 0x1CD7 | Ordinal: 7384
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E17 | Ordinal: 7704
        void mibEnum(void) const;

    // RVA: 0x1E47 | Ordinal: 7752
        void mimeName(void) const;

    // RVA: 0x1EDB | Ordinal: 7900
        void name(void) const;

    // RVA: 0x2F7D | Ordinal: 12158
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x39B | Ordinal: 924
        void _FX88591Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88591CODEC_HPP
