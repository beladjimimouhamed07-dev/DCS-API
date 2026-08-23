#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRGBImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRGBImage
{
public:

    // RVA: 0x275 | Ordinal: 630
        void FXRGBImage(void);

    // RVA: 0x276 | Ordinal: 631
        void FXRGBImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1434 | Ordinal: 5173
        void getMetaClass(void) const;

    // RVA: 0x17B4 | Ordinal: 6069
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B74 | Ordinal: 7029
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C71 | Ordinal: 7282
        void manufacture(void);

    // RVA: 0x28A0 | Ordinal: 10401
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x48C | Ordinal: 1165
        void _FXRGBImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRGBIMAGE_HPP
