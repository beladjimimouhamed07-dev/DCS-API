#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP855Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP855Codec
{
public:

    // RVA: 0x55 | Ordinal: 86
        void FXCP855Codec(class FX::FXCP855Codec const &);

    // RVA: 0x56 | Ordinal: 87
        void FXCP855Codec(void);

    // RVA: 0x999 | Ordinal: 2458
        void aliases(void) const;

    // RVA: 0x1399 | Ordinal: 5018
        void getMetaClass(void) const;

    // RVA: 0x1717 | Ordinal: 5912
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDB | Ordinal: 7132
        void manufacture(void);

    // RVA: 0x1CEC | Ordinal: 7405
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2C | Ordinal: 7725
        void mibEnum(void) const;

    // RVA: 0x1E5C | Ordinal: 7773
        void mimeName(void) const;

    // RVA: 0x1EF0 | Ordinal: 7921
        void name(void) const;

    // RVA: 0x2F92 | Ordinal: 12179
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BD | Ordinal: 958
        void _FXCP855Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP855CODEC_HPP
