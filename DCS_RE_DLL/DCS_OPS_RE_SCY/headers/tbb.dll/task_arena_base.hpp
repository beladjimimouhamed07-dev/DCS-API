#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: task_arena_base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace interface7 {
namespace internal {

class task_arena_base
{
public:

    // RVA: 0x4A | Ordinal: 75
        void internal_attach(void);

    // RVA: 0x62 | Ordinal: 99
        void internal_current_slot(void);

    // RVA: 0x6F | Ordinal: 112
        void internal_enqueue(class tbb::task &, __int64) const;

    // RVA: 0x70 | Ordinal: 113
        void internal_execute(class tbb::interface7::internal::delegate_base &) const;

    // RVA: 0x78 | Ordinal: 121
        void internal_initialize(void);

    // RVA: 0x7B | Ordinal: 124
        void internal_max_concurrency(class tbb::interface7::task_arena const *);

    // RVA: 0x9A | Ordinal: 155
        void internal_terminate(void);

    // RVA: 0xA8 | Ordinal: 169
        void internal_wait(void) const;
};

} // namespace internal
} // namespace interface7
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_TASK_ARENA_BASE_HPP
