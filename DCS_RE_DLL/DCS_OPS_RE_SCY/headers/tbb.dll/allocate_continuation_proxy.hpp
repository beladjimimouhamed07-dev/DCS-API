#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: allocate_continuation_proxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class allocate_continuation_proxy
{
public:

    // RVA: 0x1B | Ordinal: 28
        void allocate(unsigned __int64) const;

    // RVA: 0x33 | Ordinal: 52
        void free(class tbb::task &) const;
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_ALLOCATE_CONTINUATION_PROXY_HPP
