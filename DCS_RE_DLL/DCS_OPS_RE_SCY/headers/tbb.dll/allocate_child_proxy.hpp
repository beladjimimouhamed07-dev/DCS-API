#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: allocate_child_proxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class allocate_child_proxy
{
public:

    // RVA: 0x1A | Ordinal: 27
        void allocate(unsigned __int64) const;

    // RVA: 0x32 | Ordinal: 51
        void free(class tbb::task &) const;
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_ALLOCATE_CHILD_PROXY_HPP
