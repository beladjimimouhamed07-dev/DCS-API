#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXXBMImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXXBMImage
{
public:

    // RVA: 0x389 | Ordinal: 906
        void FXXBMImage(void);

    // RVA: 0x38A | Ordinal: 907
        void FXXBMImage(class FX::FXApp *, unsigned char const *, unsigned char const *, unsigned int, int, int);

    // RVA: 0x1477 | Ordinal: 5240
        void getMetaClass(void) const;

    // RVA: 0x17F7 | Ordinal: 6136
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B7C | Ordinal: 7037
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CB2 | Ordinal: 7347
        void manufacture(void);

    // RVA: 0x28A8 | Ordinal: 10409
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4F8 | Ordinal: 1273
        void _FXXBMImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXXBMIMAGE_HPP
