#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP865Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP865Codec
{
public:

    // RVA: 0x65 | Ordinal: 102
        void FXCP865Codec(class FX::FXCP865Codec const &);

    // RVA: 0x66 | Ordinal: 103
        void FXCP865Codec(void);

    // RVA: 0x9A1 | Ordinal: 2466
        void aliases(void) const;

    // RVA: 0x13A1 | Ordinal: 5026
        void getMetaClass(void) const;

    // RVA: 0x171F | Ordinal: 5920
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE3 | Ordinal: 7140
        void manufacture(void);

    // RVA: 0x1CF4 | Ordinal: 7413
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E34 | Ordinal: 7733
        void mibEnum(void) const;

    // RVA: 0x1E64 | Ordinal: 7781
        void mimeName(void) const;

    // RVA: 0x1EF8 | Ordinal: 7929
        void name(void) const;

    // RVA: 0x2F9A | Ordinal: 12187
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C5 | Ordinal: 966
        void _FXCP865Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP865CODEC_HPP
