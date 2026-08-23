#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP437Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP437Codec
{
public:

    // RVA: 0x4F | Ordinal: 80
        void FXCP437Codec(class FX::FXCP437Codec const &);

    // RVA: 0x50 | Ordinal: 81
        void FXCP437Codec(void);

    // RVA: 0x996 | Ordinal: 2455
        void aliases(void) const;

    // RVA: 0x1396 | Ordinal: 5015
        void getMetaClass(void) const;

    // RVA: 0x1714 | Ordinal: 5909
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD8 | Ordinal: 7129
        void manufacture(void);

    // RVA: 0x1CE9 | Ordinal: 7402
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E29 | Ordinal: 7722
        void mibEnum(void) const;

    // RVA: 0x1E59 | Ordinal: 7770
        void mimeName(void) const;

    // RVA: 0x1EED | Ordinal: 7918
        void name(void) const;

    // RVA: 0x2F8F | Ordinal: 12176
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BA | Ordinal: 955
        void _FXCP437Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP437CODEC_HPP
