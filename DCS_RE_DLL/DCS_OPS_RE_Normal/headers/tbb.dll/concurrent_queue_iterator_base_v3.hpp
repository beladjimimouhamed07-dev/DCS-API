#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_queue_iterator_base_v3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_queue_iterator_base_v3
{
public:

    // RVA: 0x18 | Ordinal: 25
        void advance(void);

    // RVA: 0x23 | Ordinal: 36
        void assign(class tbb::internal::concurrent_queue_iterator_base_v3 const &);

    // RVA: 0x3 | Ordinal: 4
        void concurrent_queue_iterator_base_v3(class tbb::internal::concurrent_queue_base_v3 const &);

    // RVA: 0x4 | Ordinal: 5
        void concurrent_queue_iterator_base_v3(class tbb::internal::concurrent_queue_base_v3 const &, unsigned __int64);

    // RVA: 0xA | Ordinal: 11
        void _concurrent_queue_iterator_base_v3(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_QUEUE_ITERATOR_BASE_V3_HPP
