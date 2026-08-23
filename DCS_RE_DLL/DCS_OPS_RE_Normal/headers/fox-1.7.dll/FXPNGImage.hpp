#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPNGImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPNGImage
{
public:

    // RVA: 0x239 | Ordinal: 570
        void FXPNGImage(void);

    // RVA: 0x23A | Ordinal: 571
        void FXPNGImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1428 | Ordinal: 5161
        void getMetaClass(void) const;

    // RVA: 0x17A8 | Ordinal: 6057
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6E | Ordinal: 7023
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C65 | Ordinal: 7270
        void manufacture(void);

    // RVA: 0x289A | Ordinal: 10395
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x478 | Ordinal: 1145
        void _FXPNGImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPNGIMAGE_HPP
