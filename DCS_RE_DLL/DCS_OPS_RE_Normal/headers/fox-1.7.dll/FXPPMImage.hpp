#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPPMImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPPMImage
{
public:

    // RVA: 0x23D | Ordinal: 574
        void FXPPMImage(void);

    // RVA: 0x23E | Ordinal: 575
        void FXPPMImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x142A | Ordinal: 5163
        void getMetaClass(void) const;

    // RVA: 0x17AA | Ordinal: 6059
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B70 | Ordinal: 7025
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C67 | Ordinal: 7272
        void manufacture(void);

    // RVA: 0x289C | Ordinal: 10397
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x47A | Ordinal: 1147
        void _FXPPMImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPPMIMAGE_HPP
