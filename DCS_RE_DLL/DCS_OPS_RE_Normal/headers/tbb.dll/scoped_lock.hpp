#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: scoped_lock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace queuing_mutex {

class scoped_lock
{
public:

    // RVA: 0x13 | Ordinal: 20
        void acquire(class tbb::queuing_mutex &);

    // RVA: 0x14 | Ordinal: 21
        void acquire(class tbb::queuing_rw_mutex &, bool);

    // RVA: 0x30 | Ordinal: 49
        void downgrade_to_reader(void);

    // RVA: 0x3F | Ordinal: 64
        void internal_acquire(class tbb::mutex &);

    // RVA: 0x40 | Ordinal: 65
        void internal_acquire(class tbb::recursive_mutex &);

    // RVA: 0x41 | Ordinal: 66
        void internal_acquire(class tbb::spin_mutex &);

    // RVA: 0x5A | Ordinal: 91
        void internal_construct(class tbb::interface5::reader_writer_lock &);

    // RVA: 0x68 | Ordinal: 105
        void internal_destroy(void);

    // RVA: 0x88 | Ordinal: 137
        void internal_release(void);

    // RVA: 0x9D | Ordinal: 158
        void internal_try_acquire(class tbb::mutex &);

    // RVA: 0x9E | Ordinal: 159
        void internal_try_acquire(class tbb::recursive_mutex &);

    // RVA: 0x9F | Ordinal: 160
        void internal_try_acquire(class tbb::spin_mutex &);

    // RVA: 0xC4 | Ordinal: 197
        void release(void);

    // RVA: 0xD7 | Ordinal: 216
        void try_acquire(class tbb::queuing_mutex &);

    // RVA: 0xD8 | Ordinal: 217
        void try_acquire(class tbb::queuing_rw_mutex &, bool);

    // RVA: 0xDD | Ordinal: 222
        void upgrade_to_writer(void);
};

} // namespace queuing_mutex
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_SCOPED_LOCK_HPP
