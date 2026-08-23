#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX885914Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX885914Codec
{
public:

    // RVA: 0x10 | Ordinal: 17
        void FX885914Codec(class FX::FX885914Codec const &);

    // RVA: 0x11 | Ordinal: 18
        void FX885914Codec(void);

    // RVA: 0x981 | Ordinal: 2434
        void aliases(void) const;

    // RVA: 0x1378 | Ordinal: 4985
        void getMetaClass(void) const;

    // RVA: 0x16F6 | Ordinal: 5879
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BBA | Ordinal: 7099
        void manufacture(void);

    // RVA: 0x1CD4 | Ordinal: 7381
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E14 | Ordinal: 7701
        void mibEnum(void) const;

    // RVA: 0x1E44 | Ordinal: 7749
        void mimeName(void) const;

    // RVA: 0x1ED8 | Ordinal: 7897
        void name(void) const;

    // RVA: 0x2F7A | Ordinal: 12155
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x398 | Ordinal: 921
        void _FX885914Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX885914CODEC_HPP
