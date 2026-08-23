#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX885913Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX885913Codec
{
public:

    // RVA: 0xE | Ordinal: 15
        void FX885913Codec(class FX::FX885913Codec const &);

    // RVA: 0xF | Ordinal: 16
        void FX885913Codec(void);

    // RVA: 0x980 | Ordinal: 2433
        void aliases(void) const;

    // RVA: 0x1377 | Ordinal: 4984
        void getMetaClass(void) const;

    // RVA: 0x16F5 | Ordinal: 5878
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BB9 | Ordinal: 7098
        void manufacture(void);

    // RVA: 0x1CD3 | Ordinal: 7380
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E13 | Ordinal: 7700
        void mibEnum(void) const;

    // RVA: 0x1E43 | Ordinal: 7748
        void mimeName(void) const;

    // RVA: 0x1ED7 | Ordinal: 7896
        void name(void) const;

    // RVA: 0x2F79 | Ordinal: 12154
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x397 | Ordinal: 920
        void _FX885913Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX885913CODEC_HPP
