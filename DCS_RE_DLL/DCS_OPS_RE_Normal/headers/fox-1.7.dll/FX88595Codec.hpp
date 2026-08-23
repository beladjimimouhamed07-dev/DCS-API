#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88595Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88595Codec
{
public:

    // RVA: 0x1E | Ordinal: 31
        void FX88595Codec(class FX::FX88595Codec const &);

    // RVA: 0x1F | Ordinal: 32
        void FX88595Codec(void);

    // RVA: 0x988 | Ordinal: 2441
        void aliases(void) const;

    // RVA: 0x137F | Ordinal: 4992
        void getMetaClass(void) const;

    // RVA: 0x16FD | Ordinal: 5886
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BC1 | Ordinal: 7106
        void manufacture(void);

    // RVA: 0x1CDB | Ordinal: 7388
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E1B | Ordinal: 7708
        void mibEnum(void) const;

    // RVA: 0x1E4B | Ordinal: 7756
        void mimeName(void) const;

    // RVA: 0x1EDF | Ordinal: 7904
        void name(void) const;

    // RVA: 0x2F81 | Ordinal: 12162
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x39F | Ordinal: 928
        void _FX88595Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88595CODEC_HPP
