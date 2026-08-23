#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP861Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP861Codec
{
public:

    // RVA: 0x5D | Ordinal: 94
        void FXCP861Codec(class FX::FXCP861Codec const &);

    // RVA: 0x5E | Ordinal: 95
        void FXCP861Codec(void);

    // RVA: 0x99D | Ordinal: 2462
        void aliases(void) const;

    // RVA: 0x139D | Ordinal: 5022
        void getMetaClass(void) const;

    // RVA: 0x171B | Ordinal: 5916
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BDF | Ordinal: 7136
        void manufacture(void);

    // RVA: 0x1CF0 | Ordinal: 7409
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E30 | Ordinal: 7729
        void mibEnum(void) const;

    // RVA: 0x1E60 | Ordinal: 7777
        void mimeName(void) const;

    // RVA: 0x1EF4 | Ordinal: 7925
        void name(void) const;

    // RVA: 0x2F96 | Ordinal: 12183
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3C1 | Ordinal: 962
        void _FXCP861Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP861CODEC_HPP
