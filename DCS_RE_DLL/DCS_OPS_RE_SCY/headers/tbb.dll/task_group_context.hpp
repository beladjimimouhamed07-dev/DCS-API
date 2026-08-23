#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: task_group_context
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class task_group_context
{
public:

    // RVA: 0x25 | Ordinal: 38
        void cancel_group_execution(void);

    // RVA: 0x26 | Ordinal: 39
        void capture_fp_settings(void);

    // RVA: 0x3A | Ordinal: 59
        void init(void);

    // RVA: 0xA9 | Ordinal: 170
        void is_group_execution_cancelled(void) const;

    // RVA: 0xC1 | Ordinal: 194
        void priority(void) const;

    // RVA: 0xC3 | Ordinal: 196
        void register_pending_exception(void);

    // RVA: 0xC6 | Ordinal: 199
        void reset(void);

    // RVA: 0xCF | Ordinal: 208
        void set_priority(enum tbb::priority_t);

    // RVA: 0xE | Ordinal: 15
        void _task_group_context(void);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_TASK_GROUP_CONTEXT_HPP
