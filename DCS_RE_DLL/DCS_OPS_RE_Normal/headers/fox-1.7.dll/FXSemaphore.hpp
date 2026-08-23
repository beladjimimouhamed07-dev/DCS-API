#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSemaphore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSemaphore
{
public:

    // RVA: 0x2C0 | Ordinal: 705
        void FXSemaphore(int);

    // RVA: 0x269F | Ordinal: 9888
        void post(void);

    // RVA: 0x2EE5 | Ordinal: 12006
        void trywait(void);

    // RVA: 0x2F6F | Ordinal: 12144
        void wait(void);

    // RVA: 0x2F70 | Ordinal: 12145
        void wait(__int64);

    // RVA: 0x4AC | Ordinal: 1197
        void _FXSemaphore(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSEMAPHORE_HPP
