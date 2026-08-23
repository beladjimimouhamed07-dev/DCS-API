#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX885911Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX885911Codec
{
public:

    // RVA: 0xC | Ordinal: 13
        void FX885911Codec(class FX::FX885911Codec const &);

    // RVA: 0xD | Ordinal: 14
        void FX885911Codec(void);

    // RVA: 0x97F | Ordinal: 2432
        void aliases(void) const;

    // RVA: 0x1376 | Ordinal: 4983
        void getMetaClass(void) const;

    // RVA: 0x16F4 | Ordinal: 5877
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BB8 | Ordinal: 7097
        void manufacture(void);

    // RVA: 0x1CD2 | Ordinal: 7379
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E12 | Ordinal: 7699
        void mibEnum(void) const;

    // RVA: 0x1E42 | Ordinal: 7747
        void mimeName(void) const;

    // RVA: 0x1ED6 | Ordinal: 7895
        void name(void) const;

    // RVA: 0x2F78 | Ordinal: 12153
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x396 | Ordinal: 919
        void _FX885911Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX885911CODEC_HPP
