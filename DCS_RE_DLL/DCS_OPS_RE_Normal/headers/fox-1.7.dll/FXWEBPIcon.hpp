#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXWEBPIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXWEBPIcon
{
public:

    // RVA: 0x379 | Ordinal: 890
        void FXWEBPIcon(void);

    // RVA: 0x37A | Ordinal: 891
        void FXWEBPIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1472 | Ordinal: 5235
        void getMetaClass(void) const;

    // RVA: 0x17F2 | Ordinal: 6131
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B79 | Ordinal: 7034
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CAD | Ordinal: 7342
        void manufacture(void);

    // RVA: 0x28A5 | Ordinal: 10406
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4F1 | Ordinal: 1266
        void _FXWEBPIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXWEBPICON_HPP
