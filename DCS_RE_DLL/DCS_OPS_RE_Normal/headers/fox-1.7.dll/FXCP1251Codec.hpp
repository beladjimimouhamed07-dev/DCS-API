#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1251Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1251Codec
{
public:

    // RVA: 0x3F | Ordinal: 64
        void FXCP1251Codec(class FX::FXCP1251Codec const &);

    // RVA: 0x40 | Ordinal: 65
        void FXCP1251Codec(void);

    // RVA: 0x98E | Ordinal: 2447
        void aliases(void) const;

    // RVA: 0x138E | Ordinal: 5007
        void getMetaClass(void) const;

    // RVA: 0x170C | Ordinal: 5901
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD0 | Ordinal: 7121
        void manufacture(void);

    // RVA: 0x1CE1 | Ordinal: 7394
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E21 | Ordinal: 7714
        void mibEnum(void) const;

    // RVA: 0x1E51 | Ordinal: 7762
        void mimeName(void) const;

    // RVA: 0x1EE5 | Ordinal: 7910
        void name(void) const;

    // RVA: 0x2F87 | Ordinal: 12168
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B2 | Ordinal: 947
        void _FXCP1251Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1251CODEC_HPP
