#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXKOI8RCodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXKOI8RCodec
{
public:

    // RVA: 0x1A8 | Ordinal: 425
        void FXKOI8RCodec(class FX::FXKOI8RCodec const &);

    // RVA: 0x1A9 | Ordinal: 426
        void FXKOI8RCodec(void);

    // RVA: 0x9A5 | Ordinal: 2470
        void aliases(void) const;

    // RVA: 0x1406 | Ordinal: 5127
        void getMetaClass(void) const;

    // RVA: 0x1786 | Ordinal: 6023
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C43 | Ordinal: 7236
        void manufacture(void);

    // RVA: 0x1CF8 | Ordinal: 7417
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E38 | Ordinal: 7737
        void mibEnum(void) const;

    // RVA: 0x1E68 | Ordinal: 7785
        void mimeName(void) const;

    // RVA: 0x1EFE | Ordinal: 7935
        void name(void) const;

    // RVA: 0x2F9E | Ordinal: 12191
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x447 | Ordinal: 1096
        void _FXKOI8RCodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXKOI8RCODEC_HPP
