#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP857Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP857Codec
{
public:

    // RVA: 0x59 | Ordinal: 90
        void FXCP857Codec(class FX::FXCP857Codec const &);

    // RVA: 0x5A | Ordinal: 91
        void FXCP857Codec(void);

    // RVA: 0x99B | Ordinal: 2460
        void aliases(void) const;

    // RVA: 0x139B | Ordinal: 5020
        void getMetaClass(void) const;

    // RVA: 0x1719 | Ordinal: 5914
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDD | Ordinal: 7134
        void manufacture(void);

    // RVA: 0x1CEE | Ordinal: 7407
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2E | Ordinal: 7727
        void mibEnum(void) const;

    // RVA: 0x1E5E | Ordinal: 7775
        void mimeName(void) const;

    // RVA: 0x1EF2 | Ordinal: 7923
        void name(void) const;

    // RVA: 0x2F94 | Ordinal: 12181
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BF | Ordinal: 960
        void _FXCP857Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP857CODEC_HPP
