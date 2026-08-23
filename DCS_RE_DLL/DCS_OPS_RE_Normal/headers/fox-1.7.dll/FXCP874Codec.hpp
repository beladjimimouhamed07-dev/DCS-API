#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP874Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP874Codec
{
public:

    // RVA: 0x6B | Ordinal: 108
        void FXCP874Codec(class FX::FXCP874Codec const &);

    // RVA: 0x6C | Ordinal: 109
        void FXCP874Codec(void);

    // RVA: 0x9A4 | Ordinal: 2469
        void aliases(void) const;

    // RVA: 0x13A4 | Ordinal: 5029
        void getMetaClass(void) const;

    // RVA: 0x1722 | Ordinal: 5923
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE6 | Ordinal: 7143
        void manufacture(void);

    // RVA: 0x1CF7 | Ordinal: 7416
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E37 | Ordinal: 7736
        void mibEnum(void) const;

    // RVA: 0x1E67 | Ordinal: 7784
        void mimeName(void) const;

    // RVA: 0x1EFB | Ordinal: 7932
        void name(void) const;

    // RVA: 0x2F9D | Ordinal: 12190
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C8 | Ordinal: 969
        void _FXCP874Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP874CODEC_HPP
