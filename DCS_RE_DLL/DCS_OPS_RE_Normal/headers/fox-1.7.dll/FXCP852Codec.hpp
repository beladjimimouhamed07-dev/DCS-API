#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP852Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP852Codec
{
public:

    // RVA: 0x53 | Ordinal: 84
        void FXCP852Codec(class FX::FXCP852Codec const &);

    // RVA: 0x54 | Ordinal: 85
        void FXCP852Codec(void);

    // RVA: 0x998 | Ordinal: 2457
        void aliases(void) const;

    // RVA: 0x1398 | Ordinal: 5017
        void getMetaClass(void) const;

    // RVA: 0x1716 | Ordinal: 5911
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDA | Ordinal: 7131
        void manufacture(void);

    // RVA: 0x1CEB | Ordinal: 7404
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2B | Ordinal: 7724
        void mibEnum(void) const;

    // RVA: 0x1E5B | Ordinal: 7772
        void mimeName(void) const;

    // RVA: 0x1EEF | Ordinal: 7920
        void name(void) const;

    // RVA: 0x2F91 | Ordinal: 12178
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BC | Ordinal: 957
        void _FXCP852Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP852CODEC_HPP
