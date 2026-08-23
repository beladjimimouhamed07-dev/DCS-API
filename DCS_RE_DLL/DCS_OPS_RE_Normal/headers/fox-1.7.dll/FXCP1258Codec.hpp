#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1258Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1258Codec
{
public:

    // RVA: 0x4D | Ordinal: 78
        void FXCP1258Codec(class FX::FXCP1258Codec const &);

    // RVA: 0x4E | Ordinal: 79
        void FXCP1258Codec(void);

    // RVA: 0x995 | Ordinal: 2454
        void aliases(void) const;

    // RVA: 0x1395 | Ordinal: 5014
        void getMetaClass(void) const;

    // RVA: 0x1713 | Ordinal: 5908
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD7 | Ordinal: 7128
        void manufacture(void);

    // RVA: 0x1CE8 | Ordinal: 7401
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E28 | Ordinal: 7721
        void mibEnum(void) const;

    // RVA: 0x1E58 | Ordinal: 7769
        void mimeName(void) const;

    // RVA: 0x1EEC | Ordinal: 7917
        void name(void) const;

    // RVA: 0x2F8E | Ordinal: 12175
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B9 | Ordinal: 954
        void _FXCP1258Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1258CODEC_HPP
