#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGIFIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGIFIcon
{
public:

    // RVA: 0x131 | Ordinal: 306
        void FXGIFIcon(void);

    // RVA: 0x132 | Ordinal: 307
        void FXGIFIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x13DD | Ordinal: 5086
        void getMetaClass(void) const;

    // RVA: 0x175C | Ordinal: 5981
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B60 | Ordinal: 7009
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C1C | Ordinal: 7197
        void manufacture(void);

    // RVA: 0x288C | Ordinal: 10381
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x416 | Ordinal: 1047
        void _FXGIFIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGIFICON_HPP
