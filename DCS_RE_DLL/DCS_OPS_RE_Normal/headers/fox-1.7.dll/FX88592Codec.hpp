#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88592Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88592Codec
{
public:

    // RVA: 0x18 | Ordinal: 25
        void FX88592Codec(class FX::FX88592Codec const &);

    // RVA: 0x19 | Ordinal: 26
        void FX88592Codec(void);

    // RVA: 0x985 | Ordinal: 2438
        void aliases(void) const;

    // RVA: 0x137C | Ordinal: 4989
        void getMetaClass(void) const;

    // RVA: 0x16FA | Ordinal: 5883
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BBE | Ordinal: 7103
        void manufacture(void);

    // RVA: 0x1CD8 | Ordinal: 7385
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E18 | Ordinal: 7705
        void mibEnum(void) const;

    // RVA: 0x1E48 | Ordinal: 7753
        void mimeName(void) const;

    // RVA: 0x1EDC | Ordinal: 7901
        void name(void) const;

    // RVA: 0x2F7E | Ordinal: 12159
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x39C | Ordinal: 925
        void _FX88592Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88592CODEC_HPP
