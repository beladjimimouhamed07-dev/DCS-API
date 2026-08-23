#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPtrQueue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPtrQueue
{
public:

    // RVA: 0x25D | Ordinal: 606
        void FXPtrQueue(unsigned int);

    // RVA: 0x25E | Ordinal: 607
        void FXPtrQueue(void);

    // RVA: 0x1232 | Ordinal: 4659
        void getFree(void) const;

    // RVA: 0x15B7 | Ordinal: 5560
        void getSize(void) const;

    // RVA: 0x1670 | Ordinal: 5745
        void getUsed(void) const;

    // RVA: 0x1930 | Ordinal: 6449
        void isEmpty(void) const;

    // RVA: 0x1946 | Ordinal: 6471
        void isFull(void) const;

    // RVA: 0x266D | Ordinal: 9838
        void peek(void *&);

    // RVA: 0x2681 | Ordinal: 9858
        void pop(void *&);

    // RVA: 0x2682 | Ordinal: 9859
        void pop(void);

    // RVA: 0x26D4 | Ordinal: 9941
        void push(void *);

    // RVA: 0x2CFB | Ordinal: 11516
        void setSize(unsigned int);

    // RVA: 0x486 | Ordinal: 1159
        void _FXPtrQueue(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPTRQUEUE_HPP
