#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXICOIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXICOIcon
{
public:

    // RVA: 0x175 | Ordinal: 374
        void FXICOIcon(void);

    // RVA: 0x176 | Ordinal: 375
        void FXICOIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x13F4 | Ordinal: 5109
        void getMetaClass(void) const;

    // RVA: 0x1773 | Ordinal: 6004
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B62 | Ordinal: 7011
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C32 | Ordinal: 7219
        void manufacture(void);

    // RVA: 0x288E | Ordinal: 10383
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x42F | Ordinal: 1072
        void _FXICOIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICOICON_HPP
