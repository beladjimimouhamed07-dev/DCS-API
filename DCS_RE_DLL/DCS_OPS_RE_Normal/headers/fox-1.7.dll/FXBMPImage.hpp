#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBMPImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBMPImage
{
public:

    // RVA: 0x32 | Ordinal: 51
        void FXBMPImage(void);

    // RVA: 0x33 | Ordinal: 52
        void FXBMPImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1388 | Ordinal: 5001
        void getMetaClass(void) const;

    // RVA: 0x1706 | Ordinal: 5895
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B57 | Ordinal: 7000
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BCA | Ordinal: 7115
        void manufacture(void);

    // RVA: 0x2883 | Ordinal: 10372
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x3AB | Ordinal: 940
        void _FXBMPImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBMPIMAGE_HPP
