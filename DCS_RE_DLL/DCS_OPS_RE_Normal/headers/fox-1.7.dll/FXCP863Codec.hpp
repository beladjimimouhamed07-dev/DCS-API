#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP863Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP863Codec
{
public:

    // RVA: 0x61 | Ordinal: 98
        void FXCP863Codec(class FX::FXCP863Codec const &);

    // RVA: 0x62 | Ordinal: 99
        void FXCP863Codec(void);

    // RVA: 0x99F | Ordinal: 2464
        void aliases(void) const;

    // RVA: 0x139F | Ordinal: 5024
        void getMetaClass(void) const;

    // RVA: 0x171D | Ordinal: 5918
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE1 | Ordinal: 7138
        void manufacture(void);

    // RVA: 0x1CF2 | Ordinal: 7411
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E32 | Ordinal: 7731
        void mibEnum(void) const;

    // RVA: 0x1E62 | Ordinal: 7779
        void mimeName(void) const;

    // RVA: 0x1EF6 | Ordinal: 7927
        void name(void) const;

    // RVA: 0x2F98 | Ordinal: 12185
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C3 | Ordinal: 964
        void _FXCP863Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP863CODEC_HPP
