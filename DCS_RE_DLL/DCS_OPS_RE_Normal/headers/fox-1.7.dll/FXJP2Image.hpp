#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJP2Image
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJP2Image
{
public:

    // RVA: 0x19D | Ordinal: 414
        void FXJP2Image(void);

    // RVA: 0x19E | Ordinal: 415
        void FXJP2Image(class FX::FXApp *, void const *, unsigned int, int, int, int);

    // RVA: 0x1403 | Ordinal: 5124
        void getMetaClass(void) const;

    // RVA: 0x1515 | Ordinal: 5398
        void getQuality(void) const;

    // RVA: 0x1783 | Ordinal: 6020
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B68 | Ordinal: 7017
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C40 | Ordinal: 7233
        void manufacture(void);

    // RVA: 0x2894 | Ordinal: 10389
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C72 | Ordinal: 11379
        void setQuality(int);

    // RVA: 0x442 | Ordinal: 1091
        void _FXJP2Image(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJP2IMAGE_HPP
