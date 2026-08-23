#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_queue_base_v3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_queue_base_v3
{
public:

    // RVA: 0x21 | Ordinal: 34
        void assign(class tbb::internal::concurrent_queue_base_v3 const &);

    // RVA: 0x1 | Ordinal: 2
        void concurrent_queue_base_v3(unsigned __int64);

    // RVA: 0x3E | Ordinal: 63
        void internal_abort(void);

    // RVA: 0x6E | Ordinal: 111
        void internal_empty(void) const;

    // RVA: 0x71 | Ordinal: 114
        void internal_finish_clear(void);

    // RVA: 0x7D | Ordinal: 126
        void internal_pop(void *);

    // RVA: 0x7F | Ordinal: 128
        void internal_pop_if_present(void *);

    // RVA: 0x81 | Ordinal: 130
        void internal_push(void const *);

    // RVA: 0x85 | Ordinal: 134
        void internal_push_if_not_full(void const *);

    // RVA: 0x94 | Ordinal: 149
        void internal_set_capacity(__int64, unsigned __int64);

    // RVA: 0x97 | Ordinal: 152
        void internal_size(void) const;

    // RVA: 0x9B | Ordinal: 156
        void internal_throw_exception(void) const;

    // RVA: 0x8 | Ordinal: 9
        void _concurrent_queue_base_v3(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_QUEUE_BASE_V3_HPP
