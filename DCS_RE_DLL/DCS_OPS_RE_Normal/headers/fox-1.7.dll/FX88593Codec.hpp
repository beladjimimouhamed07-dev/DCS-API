#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX88593Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX88593Codec
{
public:

    // RVA: 0x1A | Ordinal: 27
        void FX88593Codec(class FX::FX88593Codec const &);

    // RVA: 0x1B | Ordinal: 28
        void FX88593Codec(void);

    // RVA: 0x986 | Ordinal: 2439
        void aliases(void) const;

    // RVA: 0x137D | Ordinal: 4990
        void getMetaClass(void) const;

    // RVA: 0x16FB | Ordinal: 5884
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BBF | Ordinal: 7104
        void manufacture(void);

    // RVA: 0x1CD9 | Ordinal: 7386
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E19 | Ordinal: 7706
        void mibEnum(void) const;

    // RVA: 0x1E49 | Ordinal: 7754
        void mimeName(void) const;

    // RVA: 0x1EDD | Ordinal: 7902
        void name(void) const;

    // RVA: 0x2F7F | Ordinal: 12160
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x39D | Ordinal: 926
        void _FX88593Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX88593CODEC_HPP
