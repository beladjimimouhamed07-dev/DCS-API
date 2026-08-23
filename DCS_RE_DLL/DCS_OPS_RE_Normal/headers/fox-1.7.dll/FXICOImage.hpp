#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXICOImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXICOImage
{
public:

    // RVA: 0x177 | Ordinal: 376
        void FXICOImage(void);

    // RVA: 0x178 | Ordinal: 377
        void FXICOImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x13F5 | Ordinal: 5110
        void getMetaClass(void) const;

    // RVA: 0x1774 | Ordinal: 6005
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B63 | Ordinal: 7012
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C33 | Ordinal: 7220
        void manufacture(void);

    // RVA: 0x288F | Ordinal: 10384
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x430 | Ordinal: 1073
        void _FXICOImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICOIMAGE_HPP
