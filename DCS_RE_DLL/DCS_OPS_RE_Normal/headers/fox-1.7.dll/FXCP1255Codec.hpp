#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1255Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1255Codec
{
public:

    // RVA: 0x47 | Ordinal: 72
        void FXCP1255Codec(class FX::FXCP1255Codec const &);

    // RVA: 0x48 | Ordinal: 73
        void FXCP1255Codec(void);

    // RVA: 0x992 | Ordinal: 2451
        void aliases(void) const;

    // RVA: 0x1392 | Ordinal: 5011
        void getMetaClass(void) const;

    // RVA: 0x1710 | Ordinal: 5905
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD4 | Ordinal: 7125
        void manufacture(void);

    // RVA: 0x1CE5 | Ordinal: 7398
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E25 | Ordinal: 7718
        void mibEnum(void) const;

    // RVA: 0x1E55 | Ordinal: 7766
        void mimeName(void) const;

    // RVA: 0x1EE9 | Ordinal: 7914
        void name(void) const;

    // RVA: 0x2F8B | Ordinal: 12172
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B6 | Ordinal: 951
        void _FXCP1255Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1255CODEC_HPP
