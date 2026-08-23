#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP866Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP866Codec
{
public:

    // RVA: 0x67 | Ordinal: 104
        void FXCP866Codec(class FX::FXCP866Codec const &);

    // RVA: 0x68 | Ordinal: 105
        void FXCP866Codec(void);

    // RVA: 0x9A2 | Ordinal: 2467
        void aliases(void) const;

    // RVA: 0x13A2 | Ordinal: 5027
        void getMetaClass(void) const;

    // RVA: 0x1720 | Ordinal: 5921
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE4 | Ordinal: 7141
        void manufacture(void);

    // RVA: 0x1CF5 | Ordinal: 7414
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E35 | Ordinal: 7734
        void mibEnum(void) const;

    // RVA: 0x1E65 | Ordinal: 7782
        void mimeName(void) const;

    // RVA: 0x1EF9 | Ordinal: 7930
        void name(void) const;

    // RVA: 0x2F9B | Ordinal: 12188
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C6 | Ordinal: 967
        void _FXCP866Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP866CODEC_HPP
