#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: spin_rw_mutex_v3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class spin_rw_mutex_v3
{
public:

    // RVA: 0x43 | Ordinal: 68
        void internal_acquire_reader(void);

    // RVA: 0x46 | Ordinal: 71
        void internal_acquire_writer(void);

    // RVA: 0x5D | Ordinal: 94
        void internal_construct(void);

    // RVA: 0x6C | Ordinal: 109
        void internal_downgrade(void);

    // RVA: 0x8D | Ordinal: 142
        void internal_release_reader(void);

    // RVA: 0x8F | Ordinal: 144
        void internal_release_writer(void);

    // RVA: 0xA1 | Ordinal: 162
        void internal_try_acquire_reader(void);

    // RVA: 0xA3 | Ordinal: 164
        void internal_try_acquire_writer(void);

    // RVA: 0xA6 | Ordinal: 167
        void internal_upgrade(void);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_SPIN_RW_MUTEX_V3_HPP
