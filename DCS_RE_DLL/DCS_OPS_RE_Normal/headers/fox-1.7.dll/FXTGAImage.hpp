#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTGAImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTGAImage
{
public:

    // RVA: 0x2FD | Ordinal: 766
        void FXTGAImage(void);

    // RVA: 0x2FE | Ordinal: 767
        void FXTGAImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1451 | Ordinal: 5202
        void getMetaClass(void) const;

    // RVA: 0x17D1 | Ordinal: 6098
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B76 | Ordinal: 7031
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C8E | Ordinal: 7311
        void manufacture(void);

    // RVA: 0x28A2 | Ordinal: 10403
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4C2 | Ordinal: 1219
        void _FXTGAImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTGAIMAGE_HPP
