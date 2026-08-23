#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIFFImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIFFImage
{
public:

    // RVA: 0x17B | Ordinal: 380
        void FXIFFImage(void);

    // RVA: 0x17C | Ordinal: 381
        void FXIFFImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x13F7 | Ordinal: 5112
        void getMetaClass(void) const;

    // RVA: 0x1776 | Ordinal: 6007
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B65 | Ordinal: 7014
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C35 | Ordinal: 7222
        void manufacture(void);

    // RVA: 0x2891 | Ordinal: 10386
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x432 | Ordinal: 1075
        void _FXIFFImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIFFIMAGE_HPP
