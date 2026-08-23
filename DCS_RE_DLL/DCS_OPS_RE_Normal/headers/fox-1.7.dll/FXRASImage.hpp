#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRASImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRASImage
{
public:

    // RVA: 0x271 | Ordinal: 626
        void FXRASImage(void);

    // RVA: 0x272 | Ordinal: 627
        void FXRASImage(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x1432 | Ordinal: 5171
        void getMetaClass(void) const;

    // RVA: 0x17B2 | Ordinal: 6067
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B72 | Ordinal: 7027
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C6F | Ordinal: 7280
        void manufacture(void);

    // RVA: 0x289E | Ordinal: 10399
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x48A | Ordinal: 1163
        void _FXRASImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRASIMAGE_HPP
