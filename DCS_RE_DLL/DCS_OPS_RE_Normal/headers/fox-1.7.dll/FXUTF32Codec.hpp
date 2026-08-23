#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF32Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF32Codec
{
public:

    // RVA: 0x33A | Ordinal: 827
        void FXUTF32Codec(class FX::FXUTF32Codec const &);

    // RVA: 0x33B | Ordinal: 828
        void FXUTF32Codec(void);

    // RVA: 0x9AA | Ordinal: 2475
        void aliases(void) const;

    // RVA: 0x146C | Ordinal: 5229
        void getMetaClass(void) const;

    // RVA: 0x17EC | Ordinal: 6125
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA7 | Ordinal: 7336
        void manufacture(void);

    // RVA: 0x1CCC | Ordinal: 7373
        void mb2utf(char *, int, char const *, int) const;

    // RVA: 0x1CD0 | Ordinal: 7377
        void mb2utflen(char const *, int) const;

    // RVA: 0x1CFE | Ordinal: 7423
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3D | Ordinal: 7742
        void mibEnum(void) const;

    // RVA: 0x1E6D | Ordinal: 7790
        void mimeName(void) const;

    // RVA: 0x1F04 | Ordinal: 7941
        void name(void) const;

    // RVA: 0x2F3C | Ordinal: 12093
        void utf2mb(char *, int, char const *, int) const;

    // RVA: 0x2F40 | Ordinal: 12097
        void utf2mblen(char const *, int) const;

    // RVA: 0x2FA4 | Ordinal: 12197
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4E1 | Ordinal: 1250
        void _FXUTF32Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF32CODEC_HPP
