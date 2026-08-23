#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRGBIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRGBIcon
{
public:

    // RVA: 0x273 | Ordinal: 628
        void FXRGBIcon(void);

    // RVA: 0x274 | Ordinal: 629
        void FXRGBIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1433 | Ordinal: 5172
        void getMetaClass(void) const;

    // RVA: 0x17B3 | Ordinal: 6068
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B73 | Ordinal: 7028
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C70 | Ordinal: 7281
        void manufacture(void);

    // RVA: 0x289F | Ordinal: 10400
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x48B | Ordinal: 1164
        void _FXRGBIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRGBICON_HPP
