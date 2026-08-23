#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: scoped_lock_read
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace interface5 {
namespace reader_writer_lock {

class scoped_lock_read
{
public:

    // RVA: 0x5B | Ordinal: 92
        void internal_construct(class tbb::interface5::reader_writer_lock &);

    // RVA: 0x69 | Ordinal: 106
        void internal_destroy(void);
};

} // namespace reader_writer_lock
} // namespace interface5
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_SCOPED_LOCK_READ_HPP
