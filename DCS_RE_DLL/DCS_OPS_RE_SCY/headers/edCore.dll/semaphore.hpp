#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: semaphore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class semaphore
{
public:

    // RVA: 0x2EE | Ordinal: 751
        void post(void);

    // RVA: 0x9E | Ordinal: 159
        void semaphore(int);

    // RVA: 0x3E3 | Ordinal: 996
        void try_wait(void);

    // RVA: 0x3FC | Ordinal: 1021
        void wait(void);

    // RVA: 0x3FF | Ordinal: 1024
        void wait_for(double);

    // RVA: 0xD8 | Ordinal: 217
        void _semaphore(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_SEMAPHORE_HPP
