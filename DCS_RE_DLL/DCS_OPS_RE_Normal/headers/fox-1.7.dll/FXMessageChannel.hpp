#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMessageChannel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMessageChannel
{
public:

    // RVA: 0x224 | Ordinal: 549
        void FXMessageChannel(void);

    // RVA: 0x225 | Ordinal: 550
        void FXMessageChannel(class FX::FXApp *);

    // RVA: 0x1015 | Ordinal: 4118
        void getApp(void) const;

    // RVA: 0x1421 | Ordinal: 5154
        void getMetaClass(void) const;

    // RVA: 0x17A1 | Ordinal: 6050
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C5E | Ordinal: 7263
        void manufacture(void);

    // RVA: 0x1D05 | Ordinal: 7430
        void message(class FX::FXObject *, unsigned int, void const *, int);

    // RVA: 0x240A | Ordinal: 9227
        void onMessage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x46E | Ordinal: 1135
        void _FXMessageChannel(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMESSAGECHANNEL_HPP
