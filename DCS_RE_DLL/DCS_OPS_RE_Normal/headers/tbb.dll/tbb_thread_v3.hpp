#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: tbb_thread_v3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class tbb_thread_v3
{
public:

    // RVA: 0x2F | Ordinal: 48
        void detach(void);

    // RVA: 0x39 | Ordinal: 58
        void hardware_concurrency(void);

    // RVA: 0x98 | Ordinal: 153
        void internal_start(unsigned int (__cdecl *)(void *), void *);

    // RVA: 0xB8 | Ordinal: 185
        void join(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_TBB_THREAD_V3_HPP
