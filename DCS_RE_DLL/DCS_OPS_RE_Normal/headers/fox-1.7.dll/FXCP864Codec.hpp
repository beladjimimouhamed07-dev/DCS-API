#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP864Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP864Codec
{
public:

    // RVA: 0x63 | Ordinal: 100
        void FXCP864Codec(class FX::FXCP864Codec const &);

    // RVA: 0x64 | Ordinal: 101
        void FXCP864Codec(void);

    // RVA: 0x9A0 | Ordinal: 2465
        void aliases(void) const;

    // RVA: 0x13A0 | Ordinal: 5025
        void getMetaClass(void) const;

    // RVA: 0x171E | Ordinal: 5919
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE2 | Ordinal: 7139
        void manufacture(void);

    // RVA: 0x1CF3 | Ordinal: 7412
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E33 | Ordinal: 7732
        void mibEnum(void) const;

    // RVA: 0x1E63 | Ordinal: 7780
        void mimeName(void) const;

    // RVA: 0x1EF7 | Ordinal: 7928
        void name(void) const;

    // RVA: 0x2F99 | Ordinal: 12186
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C4 | Ordinal: 965
        void _FXCP864Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP864CODEC_HPP
