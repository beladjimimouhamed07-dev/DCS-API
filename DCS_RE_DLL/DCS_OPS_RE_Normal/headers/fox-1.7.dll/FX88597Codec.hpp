#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88597Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88597Codec
{
public:

    // RVA: 0x22 | Ordinal: 35
        void FX88597Codec(class FX::FX88597Codec const &);

    // RVA: 0x23 | Ordinal: 36
        void FX88597Codec(void);

    // RVA: 0x98A | Ordinal: 2443
        void aliases(void) const;

    // RVA: 0x1381 | Ordinal: 4994
        void getMetaClass(void) const;

    // RVA: 0x16FF | Ordinal: 5888
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC3 | Ordinal: 7108
        void manufacture(void);

    // RVA: 0x1CDD | Ordinal: 7390
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1D | Ordinal: 7710
        void mibEnum(void) const;

    // RVA: 0x1E4D | Ordinal: 7758
        void mimeName(void) const;

    // RVA: 0x1EE1 | Ordinal: 7906
        void name(void) const;

    // RVA: 0x2F83 | Ordinal: 12164
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3A1 | Ordinal: 930
        void _FX88597Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88597CODEC_HPP
