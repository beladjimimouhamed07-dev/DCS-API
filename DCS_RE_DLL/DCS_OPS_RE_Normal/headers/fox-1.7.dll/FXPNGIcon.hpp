#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPNGIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPNGIcon
{
public:

    // RVA: 0x237 | Ordinal: 568
        void FXPNGIcon(void);

    // RVA: 0x238 | Ordinal: 569
        void FXPNGIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1427 | Ordinal: 5160
        void getMetaClass(void) const;

    // RVA: 0x17A7 | Ordinal: 6056
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6D | Ordinal: 7022
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C64 | Ordinal: 7269
        void manufacture(void);

    // RVA: 0x2899 | Ordinal: 10394
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x477 | Ordinal: 1144
        void _FXPNGIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPNGICON_HPP
