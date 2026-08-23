#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBarrier
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBarrier
{
public:

    // RVA: 0x34 | Ordinal: 53
        void FXBarrier(unsigned int);

    // RVA: 0x2730 | Ordinal: 10033
        void release(void);

    // RVA: 0x2E99 | Ordinal: 11930
        void threshold(unsigned int);

    // RVA: 0x2E9A | Ordinal: 11931
        void threshold(void) const;

    // RVA: 0x2F68 | Ordinal: 12137
        void wait(void);

    // RVA: 0x3AC | Ordinal: 941
        void _FXBarrier(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBARRIER_HPP
