#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDelegator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDelegator
{
public:

    // RVA: 0xC8 | Ordinal: 201
        void FXDelegator(class FX::FXObject *);

    // RVA: 0x11B7 | Ordinal: 4536
        void getDelegate(void) const;

    // RVA: 0x13BF | Ordinal: 5056
        void getMetaClass(void) const;

    // RVA: 0x173E | Ordinal: 5951
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C00 | Ordinal: 7169
        void manufacture(void);

    // RVA: 0x226E | Ordinal: 8815
        void onDefault(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2A4A | Ordinal: 10827
        void setDelegate(class FX::FXObject *);

    // RVA: 0x3EB | Ordinal: 1004
        void _FXDelegator(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDELEGATOR_HPP
