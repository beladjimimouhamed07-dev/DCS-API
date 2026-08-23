#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: task_scheduler_init
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class task_scheduler_init
{
public:

    // RVA: 0x2B | Ordinal: 44
        void default_num_threads(void);

    // RVA: 0x3B | Ordinal: 60
        void initialize(int);

    // RVA: 0x3C | Ordinal: 61
        void initialize(int, unsigned __int64);

    // RVA: 0x4B | Ordinal: 76
        void internal_blocking_terminate(bool);

    // RVA: 0xD1 | Ordinal: 210
        void terminate(void);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_TASK_SCHEDULER_INIT_HPP
