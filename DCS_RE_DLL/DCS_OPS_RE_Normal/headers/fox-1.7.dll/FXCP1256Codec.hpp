#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1256Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1256Codec
{
public:

    // RVA: 0x49 | Ordinal: 74
        void FXCP1256Codec(class FX::FXCP1256Codec const &);

    // RVA: 0x4A | Ordinal: 75
        void FXCP1256Codec(void);

    // RVA: 0x993 | Ordinal: 2452
        void aliases(void) const;

    // RVA: 0x1393 | Ordinal: 5012
        void getMetaClass(void) const;

    // RVA: 0x1711 | Ordinal: 5906
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD5 | Ordinal: 7126
        void manufacture(void);

    // RVA: 0x1CE6 | Ordinal: 7399
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E26 | Ordinal: 7719
        void mibEnum(void) const;

    // RVA: 0x1E56 | Ordinal: 7767
        void mimeName(void) const;

    // RVA: 0x1EEA | Ordinal: 7915
        void name(void) const;

    // RVA: 0x2F8C | Ordinal: 12173
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B7 | Ordinal: 952
        void _FXCP1256Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1256CODEC_HPP
