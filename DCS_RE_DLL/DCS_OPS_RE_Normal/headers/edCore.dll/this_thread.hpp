#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: this_thread
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class this_thread
{
public:

    // RVA: 0x37A | Ordinal: 891
        void set(struct ed::thread::ThreadInfo const &);

    // RVA: 0x395 | Ordinal: 918
        void set_affinity_mask(unsigned __int64);

    // RVA: 0x39C | Ordinal: 925
        void set_ideal_core(unsigned char);

    // RVA: 0x39F | Ordinal: 928
        void set_memory_priority(enum ed::thread::MemoryPriority);

    // RVA: 0x3A1 | Ordinal: 930
        void set_name(char const *);

    // RVA: 0x3A5 | Ordinal: 934
        void set_throttling(enum ed::thread::Throttling);

    // RVA: 0x3AB | Ordinal: 940
        void sleep(double);

    // RVA: 0x41B | Ordinal: 1052
        void yield(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_THIS_THREAD_HPP
