#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP869Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP869Codec
{
public:

    // RVA: 0x69 | Ordinal: 106
        void FXCP869Codec(class FX::FXCP869Codec const &);

    // RVA: 0x6A | Ordinal: 107
        void FXCP869Codec(void);

    // RVA: 0x9A3 | Ordinal: 2468
        void aliases(void) const;

    // RVA: 0x13A3 | Ordinal: 5028
        void getMetaClass(void) const;

    // RVA: 0x1721 | Ordinal: 5922
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE5 | Ordinal: 7142
        void manufacture(void);

    // RVA: 0x1CF6 | Ordinal: 7415
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E36 | Ordinal: 7735
        void mibEnum(void) const;

    // RVA: 0x1E66 | Ordinal: 7783
        void mimeName(void) const;

    // RVA: 0x1EFA | Ordinal: 7931
        void name(void) const;

    // RVA: 0x2F9C | Ordinal: 12189
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C7 | Ordinal: 968
        void _FXCP869Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP869CODEC_HPP
