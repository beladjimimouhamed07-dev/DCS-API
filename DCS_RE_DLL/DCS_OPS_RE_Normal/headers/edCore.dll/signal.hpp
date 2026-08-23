#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: signal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class signal
{
public:

    // RVA: 0x35F | Ordinal: 864
        void reset(void);

    // RVA: 0x379 | Ordinal: 890
        void set(void);

    // RVA: 0x9F | Ordinal: 160
        void signal(class ed::signal &&);

    // RVA: 0xA0 | Ordinal: 161
        void signal(bool);

    // RVA: 0x3E4 | Ordinal: 997
        void try_wait(void);

    // RVA: 0x3E6 | Ordinal: 999
        void try_wait_for(double);

    // RVA: 0x3FD | Ordinal: 1022
        void wait(void);

    // RVA: 0xD9 | Ordinal: 218
        void _signal(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_SIGNAL_HPP
