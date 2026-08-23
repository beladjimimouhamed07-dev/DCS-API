#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88594Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88594Codec
{
public:

    // RVA: 0x1C | Ordinal: 29
        void FX88594Codec(class FX::FX88594Codec const &);

    // RVA: 0x1D | Ordinal: 30
        void FX88594Codec(void);

    // RVA: 0x987 | Ordinal: 2440
        void aliases(void) const;

    // RVA: 0x137E | Ordinal: 4991
        void getMetaClass(void) const;

    // RVA: 0x16FC | Ordinal: 5885
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC0 | Ordinal: 7105
        void manufacture(void);

    // RVA: 0x1CDA | Ordinal: 7387
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1A | Ordinal: 7707
        void mibEnum(void) const;

    // RVA: 0x1E4A | Ordinal: 7755
        void mimeName(void) const;

    // RVA: 0x1EDE | Ordinal: 7903
        void name(void) const;

    // RVA: 0x2F80 | Ordinal: 12161
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x39E | Ordinal: 927
        void _FX88594Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88594CODEC_HPP
