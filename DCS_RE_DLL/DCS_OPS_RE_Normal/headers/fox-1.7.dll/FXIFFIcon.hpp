#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIFFIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIFFIcon
{
public:

    // RVA: 0x179 | Ordinal: 378
        void FXIFFIcon(void);

    // RVA: 0x17A | Ordinal: 379
        void FXIFFIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x13F6 | Ordinal: 5111
        void getMetaClass(void) const;

    // RVA: 0x1775 | Ordinal: 6006
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B64 | Ordinal: 7013
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C34 | Ordinal: 7221
        void manufacture(void);

    // RVA: 0x2890 | Ordinal: 10385
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x431 | Ordinal: 1074
        void _FXIFFIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIFFICON_HPP
