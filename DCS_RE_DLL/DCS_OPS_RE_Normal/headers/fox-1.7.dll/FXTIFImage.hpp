#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTIFImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTIFImage
{
public:

    // RVA: 0x301 | Ordinal: 770
        void FXTIFImage(void);

    // RVA: 0x302 | Ordinal: 771
        void FXTIFImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1096 | Ordinal: 4247
        void getCodec(void) const;

    // RVA: 0x1453 | Ordinal: 5204
        void getMetaClass(void) const;

    // RVA: 0x17D3 | Ordinal: 6100
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B78 | Ordinal: 7033
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C90 | Ordinal: 7313
        void manufacture(void);

    // RVA: 0x28A4 | Ordinal: 10405
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x29F4 | Ordinal: 10741
        void setCodec(unsigned int);

    // RVA: 0x4C4 | Ordinal: 1221
        void _FXTIFImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTIFIMAGE_HPP
