#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: spin_rw_mutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class spin_rw_mutex
{
public:

    // RVA: 0x42 | Ordinal: 67
        void internal_acquire_reader(class tbb::spin_rw_mutex *);

    // RVA: 0x45 | Ordinal: 70
        void internal_acquire_writer(class tbb::spin_rw_mutex *);

    // RVA: 0x6B | Ordinal: 108
        void internal_downgrade(class tbb::spin_rw_mutex *);

    // RVA: 0x7A | Ordinal: 123
        void internal_itt_releasing(class tbb::spin_rw_mutex *);

    // RVA: 0x8C | Ordinal: 141
        void internal_release_reader(class tbb::spin_rw_mutex *);

    // RVA: 0x8E | Ordinal: 143
        void internal_release_writer(class tbb::spin_rw_mutex *);

    // RVA: 0xA0 | Ordinal: 161
        void internal_try_acquire_reader(class tbb::spin_rw_mutex *);

    // RVA: 0xA2 | Ordinal: 163
        void internal_try_acquire_writer(class tbb::spin_rw_mutex *);

    // RVA: 0xA5 | Ordinal: 166
        void internal_upgrade(class tbb::spin_rw_mutex *);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_SPIN_RW_MUTEX_HPP
