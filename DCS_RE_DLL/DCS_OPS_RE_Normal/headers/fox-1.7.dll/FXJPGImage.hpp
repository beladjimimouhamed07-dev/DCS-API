#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJPGImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJPGImage
{
public:

    // RVA: 0x1A1 | Ordinal: 418
        void FXJPGImage(void);

    // RVA: 0x1A2 | Ordinal: 419
        void FXJPGImage(class FX::FXApp *, void const *, unsigned int, int, int, int);

    // RVA: 0x1405 | Ordinal: 5126
        void getMetaClass(void) const;

    // RVA: 0x1517 | Ordinal: 5400
        void getQuality(void) const;

    // RVA: 0x1785 | Ordinal: 6022
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6A | Ordinal: 7019
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C42 | Ordinal: 7235
        void manufacture(void);

    // RVA: 0x2896 | Ordinal: 10391
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C74 | Ordinal: 11381
        void setQuality(int);

    // RVA: 0x444 | Ordinal: 1093
        void _FXJPGImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJPGIMAGE_HPP
