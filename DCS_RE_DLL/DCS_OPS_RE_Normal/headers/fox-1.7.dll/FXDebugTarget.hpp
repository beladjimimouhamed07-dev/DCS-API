#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDebugTarget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDebugTarget
{
public:

    // RVA: 0xC7 | Ordinal: 200
        void FXDebugTarget(void);

    // RVA: 0x13BE | Ordinal: 5055
        void getMetaClass(void) const;

    // RVA: 0x173D | Ordinal: 5950
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BFF | Ordinal: 7168
        void manufacture(void);

    // RVA: 0x2409 | Ordinal: 9226
        void onMessage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x3EA | Ordinal: 1003
        void _FXDebugTarget(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDEBUGTARGET_HPP
