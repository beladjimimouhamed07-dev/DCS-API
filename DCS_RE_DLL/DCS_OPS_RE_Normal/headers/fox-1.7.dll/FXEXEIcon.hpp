#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXEXEIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXEXEIcon
{
public:

    // RVA: 0xF0 | Ordinal: 241
        void FXEXEIcon(void);

    // RVA: 0xF1 | Ordinal: 242
        void FXEXEIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x13CF | Ordinal: 5072
        void getMetaClass(void) const;

    // RVA: 0x1533 | Ordinal: 5428
        void getResId(void) const;

    // RVA: 0x1535 | Ordinal: 5430
        void getResType(void) const;

    // RVA: 0x174E | Ordinal: 5967
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B5D | Ordinal: 7006
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C0E | Ordinal: 7183
        void manufacture(void);

    // RVA: 0x2889 | Ordinal: 10378
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C8E | Ordinal: 11407
        void setResId(int);

    // RVA: 0x2C90 | Ordinal: 11409
        void setResType(int);

    // RVA: 0x3FE | Ordinal: 1023
        void _FXEXEIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXEXEICON_HPP
