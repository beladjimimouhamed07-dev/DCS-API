#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88598Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88598Codec
{
public:

    // RVA: 0x24 | Ordinal: 37
        void FX88598Codec(class FX::FX88598Codec const &);

    // RVA: 0x25 | Ordinal: 38
        void FX88598Codec(void);

    // RVA: 0x98B | Ordinal: 2444
        void aliases(void) const;

    // RVA: 0x1382 | Ordinal: 4995
        void getMetaClass(void) const;

    // RVA: 0x1700 | Ordinal: 5889
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC4 | Ordinal: 7109
        void manufacture(void);

    // RVA: 0x1CDE | Ordinal: 7391
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1E | Ordinal: 7711
        void mibEnum(void) const;

    // RVA: 0x1E4E | Ordinal: 7759
        void mimeName(void) const;

    // RVA: 0x1EE2 | Ordinal: 7907
        void name(void) const;

    // RVA: 0x2F84 | Ordinal: 12165
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3A2 | Ordinal: 931
        void _FX88598Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88598CODEC_HPP
