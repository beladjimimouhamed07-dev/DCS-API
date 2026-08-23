#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPCXImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPCXImage
{
public:

    // RVA: 0x235 | Ordinal: 566
        void FXPCXImage(void);

    // RVA: 0x236 | Ordinal: 567
        void FXPCXImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1426 | Ordinal: 5159
        void getMetaClass(void) const;

    // RVA: 0x17A6 | Ordinal: 6055
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6C | Ordinal: 7021
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C63 | Ordinal: 7268
        void manufacture(void);

    // RVA: 0x2898 | Ordinal: 10393
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x476 | Ordinal: 1143
        void _FXPCXImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPCXIMAGE_HPP
