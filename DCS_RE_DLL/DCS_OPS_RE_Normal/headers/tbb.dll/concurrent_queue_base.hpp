#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_queue_base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_queue_base
{
public:

    // RVA: 0x0 | Ordinal: 1
        void concurrent_queue_base(unsigned __int64);

    // RVA: 0x7C | Ordinal: 125
        void internal_pop(void *);

    // RVA: 0x7E | Ordinal: 127
        void internal_pop_if_present(void *);

    // RVA: 0x80 | Ordinal: 129
        void internal_push(void const *);

    // RVA: 0x84 | Ordinal: 133
        void internal_push_if_not_full(void const *);

    // RVA: 0x93 | Ordinal: 148
        void internal_set_capacity(__int64, unsigned __int64);

    // RVA: 0x96 | Ordinal: 151
        void internal_size(void) const;

    // RVA: 0x7 | Ordinal: 8
        void _concurrent_queue_base(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_QUEUE_BASE_HPP
