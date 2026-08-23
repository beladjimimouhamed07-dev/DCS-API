#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: task
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class task
{
public:

    // RVA: 0x27 | Ordinal: 40
        void change_group(class tbb::task_group_context &);

    // RVA: 0x2D | Ordinal: 46
        void destroy(class tbb::task &);

    // RVA: 0x63 | Ordinal: 100
        void internal_decrement_ref_count(void);

    // RVA: 0x95 | Ordinal: 150
        void internal_set_ref_count(int);

    // RVA: 0xAB | Ordinal: 172
        void is_owned_by_current_thread(void) const;

    // RVA: 0xBF | Ordinal: 192
        void note_affinity(unsigned short);

    // RVA: 0xCB | Ordinal: 204
        void self(void);

    // RVA: 0xD0 | Ordinal: 209
        void spawn_and_wait_for_all(class tbb::task_list &);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_TASK_HPP
