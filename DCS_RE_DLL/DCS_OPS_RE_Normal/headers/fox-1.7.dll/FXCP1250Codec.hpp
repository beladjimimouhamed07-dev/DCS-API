#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1250Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1250Codec
{
public:

    // RVA: 0x3D | Ordinal: 62
        void FXCP1250Codec(class FX::FXCP1250Codec const &);

    // RVA: 0x3E | Ordinal: 63
        void FXCP1250Codec(void);

    // RVA: 0x98D | Ordinal: 2446
        void aliases(void) const;

    // RVA: 0x138D | Ordinal: 5006
        void getMetaClass(void) const;

    // RVA: 0x170B | Ordinal: 5900
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BCF | Ordinal: 7120
        void manufacture(void);

    // RVA: 0x1CE0 | Ordinal: 7393
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E20 | Ordinal: 7713
        void mibEnum(void) const;

    // RVA: 0x1E50 | Ordinal: 7761
        void mimeName(void) const;

    // RVA: 0x1EE4 | Ordinal: 7909
        void name(void) const;

    // RVA: 0x2F86 | Ordinal: 12167
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B1 | Ordinal: 946
        void _FXCP1250Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1250CODEC_HPP
