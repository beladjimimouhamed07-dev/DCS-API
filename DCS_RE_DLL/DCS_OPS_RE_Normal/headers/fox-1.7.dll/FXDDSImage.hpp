#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDDSImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDDSImage
{
public:

    // RVA: 0xAF | Ordinal: 176
        void FXDDSImage(void);

    // RVA: 0xB0 | Ordinal: 177
        void FXDDSImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x13BC | Ordinal: 5053
        void getMetaClass(void) const;

    // RVA: 0x173A | Ordinal: 5947
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B5C | Ordinal: 7005
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BFD | Ordinal: 7166
        void manufacture(void);

    // RVA: 0x2888 | Ordinal: 10377
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x3E7 | Ordinal: 1000
        void _FXDDSImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDDSIMAGE_HPP
