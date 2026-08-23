#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXWEBPImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXWEBPImage
{
public:

    // RVA: 0x37B | Ordinal: 892
        void FXWEBPImage(void);

    // RVA: 0x37C | Ordinal: 893
        void FXWEBPImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1473 | Ordinal: 5236
        void getMetaClass(void) const;

    // RVA: 0x17F3 | Ordinal: 6132
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B7A | Ordinal: 7035
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CAE | Ordinal: 7343
        void manufacture(void);

    // RVA: 0x28A6 | Ordinal: 10407
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4F2 | Ordinal: 1267
        void _FXWEBPImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXWEBPIMAGE_HPP
