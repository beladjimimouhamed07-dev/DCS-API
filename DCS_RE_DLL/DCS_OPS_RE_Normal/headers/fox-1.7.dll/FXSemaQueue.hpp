#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSemaQueue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSemaQueue
{
public:

    // RVA: 0x2BF | Ordinal: 704
        void FXSemaQueue(unsigned int);

    // RVA: 0x2683 | Ordinal: 9860
        void pop(void *&);

    // RVA: 0x2684 | Ordinal: 9861
        void pop(void);

    // RVA: 0x26D5 | Ordinal: 9942
        void push(void *);

    // RVA: 0x2EE3 | Ordinal: 12004
        void trypop(void *&);

    // RVA: 0x2EE4 | Ordinal: 12005
        void trypush(void *);

    // RVA: 0x4AB | Ordinal: 1196
        void _FXSemaQueue(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSEMAQUEUE_HPP
