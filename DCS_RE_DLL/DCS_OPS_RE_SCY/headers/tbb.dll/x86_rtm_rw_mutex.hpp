#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: x86_rtm_rw_mutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace interface8 {
namespace internal {

class x86_rtm_rw_mutex
{
public:

    // RVA: 0x44 | Ordinal: 69
        void internal_acquire_reader(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &, bool);

    // RVA: 0x47 | Ordinal: 72
        void internal_acquire_writer(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &, bool);

    // RVA: 0x5E | Ordinal: 95
        void internal_construct(void);

    // RVA: 0x6D | Ordinal: 110
        void internal_downgrade(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &);

    // RVA: 0x8B | Ordinal: 140
        void internal_release(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &);

    // RVA: 0xA4 | Ordinal: 165
        void internal_try_acquire_writer(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &);

    // RVA: 0xA7 | Ordinal: 168
        void internal_upgrade(class tbb::interface8::internal::x86_rtm_rw_mutex::scoped_lock &);
};

} // namespace internal
} // namespace interface8
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_X86_RTM_RW_MUTEX_HPP
