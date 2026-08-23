#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_queue_iterator_base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_queue_iterator_base
{
public:

    // RVA: 0x17 | Ordinal: 24
        void advance(void);

    // RVA: 0x22 | Ordinal: 35
        void assign(class tbb::internal::concurrent_queue_iterator_base const &);

    // RVA: 0x2 | Ordinal: 3
        void concurrent_queue_iterator_base(class tbb::internal::concurrent_queue_base const &);

    // RVA: 0x9 | Ordinal: 10
        void _concurrent_queue_iterator_base(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_QUEUE_ITERATOR_BASE_HPP
