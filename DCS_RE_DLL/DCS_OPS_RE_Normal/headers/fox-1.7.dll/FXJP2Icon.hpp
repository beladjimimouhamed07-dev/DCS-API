#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJP2Icon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJP2Icon
{
public:

    // RVA: 0x19B | Ordinal: 412
        void FXJP2Icon(void);

    // RVA: 0x19C | Ordinal: 413
        void FXJP2Icon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int, int);

    // RVA: 0x1402 | Ordinal: 5123
        void getMetaClass(void) const;

    // RVA: 0x1514 | Ordinal: 5397
        void getQuality(void) const;

    // RVA: 0x1782 | Ordinal: 6019
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B67 | Ordinal: 7016
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C3F | Ordinal: 7232
        void manufacture(void);

    // RVA: 0x2893 | Ordinal: 10388
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C71 | Ordinal: 11378
        void setQuality(int);

    // RVA: 0x441 | Ordinal: 1090
        void _FXJP2Icon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJP2ICON_HPP
