#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: mutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class mutex
{
public:

    // RVA: 0x291 | Ordinal: 658
        void lock(void);

    // RVA: 0x9C | Ordinal: 157
        void mutex(class ed::mutex const &);

    // RVA: 0x9D | Ordinal: 158
        void mutex(unsigned int);

    // RVA: 0x3E2 | Ordinal: 995
        void try_lock(void);

    // RVA: 0x3EA | Ordinal: 1003
        void unlock(void);

    // RVA: 0xD7 | Ordinal: 216
        void _mutex(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_MUTEX_HPP
