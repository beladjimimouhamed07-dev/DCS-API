#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX885910Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX885910Codec
{
public:

    // RVA: 0xA | Ordinal: 11
        void FX885910Codec(class FX::FX885910Codec const &);

    // RVA: 0xB | Ordinal: 12
        void FX885910Codec(void);

    // RVA: 0x97E | Ordinal: 2431
        void aliases(void) const;

    // RVA: 0x1375 | Ordinal: 4982
        void getMetaClass(void) const;

    // RVA: 0x16F3 | Ordinal: 5876
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BB7 | Ordinal: 7096
        void manufacture(void);

    // RVA: 0x1CD1 | Ordinal: 7378
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E11 | Ordinal: 7698
        void mibEnum(void) const;

    // RVA: 0x1E41 | Ordinal: 7746
        void mimeName(void) const;

    // RVA: 0x1ED5 | Ordinal: 7894
        void name(void) const;

    // RVA: 0x2F77 | Ordinal: 12152
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x395 | Ordinal: 918
        void _FX885910Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX885910CODEC_HPP
