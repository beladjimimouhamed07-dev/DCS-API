#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88599Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88599Codec
{
public:

    // RVA: 0x26 | Ordinal: 39
        void FX88599Codec(class FX::FX88599Codec const &);

    // RVA: 0x27 | Ordinal: 40
        void FX88599Codec(void);

    // RVA: 0x98C | Ordinal: 2445
        void aliases(void) const;

    // RVA: 0x1383 | Ordinal: 4996
        void getMetaClass(void) const;

    // RVA: 0x1701 | Ordinal: 5890
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC5 | Ordinal: 7110
        void manufacture(void);

    // RVA: 0x1CDF | Ordinal: 7392
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1F | Ordinal: 7712
        void mibEnum(void) const;

    // RVA: 0x1E4F | Ordinal: 7760
        void mimeName(void) const;

    // RVA: 0x1EE3 | Ordinal: 7908
        void name(void) const;

    // RVA: 0x2F85 | Ordinal: 12166
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3A3 | Ordinal: 932
        void _FX88599Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88599CODEC_HPP
