#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGIFImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGIFImage
{
public:

    // RVA: 0x133 | Ordinal: 308
        void FXGIFImage(void);

    // RVA: 0x134 | Ordinal: 309
        void FXGIFImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x13DE | Ordinal: 5087
        void getMetaClass(void) const;

    // RVA: 0x175D | Ordinal: 5982
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B61 | Ordinal: 7010
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C1D | Ordinal: 7198
        void manufacture(void);

    // RVA: 0x288D | Ordinal: 10382
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x417 | Ordinal: 1048
        void _FXGIFImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGIFIMAGE_HPP
