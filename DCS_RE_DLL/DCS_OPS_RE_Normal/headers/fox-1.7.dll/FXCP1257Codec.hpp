#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1257Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1257Codec
{
public:

    // RVA: 0x4B | Ordinal: 76
        void FXCP1257Codec(class FX::FXCP1257Codec const &);

    // RVA: 0x4C | Ordinal: 77
        void FXCP1257Codec(void);

    // RVA: 0x994 | Ordinal: 2453
        void aliases(void) const;

    // RVA: 0x1394 | Ordinal: 5013
        void getMetaClass(void) const;

    // RVA: 0x1712 | Ordinal: 5907
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD6 | Ordinal: 7127
        void manufacture(void);

    // RVA: 0x1CE7 | Ordinal: 7400
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E27 | Ordinal: 7720
        void mibEnum(void) const;

    // RVA: 0x1E57 | Ordinal: 7768
        void mimeName(void) const;

    // RVA: 0x1EEB | Ordinal: 7916
        void name(void) const;

    // RVA: 0x2F8D | Ordinal: 12174
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B8 | Ordinal: 953
        void _FXCP1257Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1257CODEC_HPP
