#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_queue_base_v8
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_queue_base_v8
{
public:

    // RVA: 0x86 | Ordinal: 135
        void internal_push_move(void const *);

    // RVA: 0x87 | Ordinal: 136
        void internal_push_move_if_not_full(void const *);

    // RVA: 0xBC | Ordinal: 189
        void move_content(class tbb::internal::concurrent_queue_base_v8 &);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_QUEUE_BASE_V8_HPP
