#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: reader_writer_lock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace interface5 {

class reader_writer_lock
{
public:

    // RVA: 0x58 | Ordinal: 89
        void internal_construct(void);

    // RVA: 0x66 | Ordinal: 103
        void internal_destroy(void);

    // RVA: 0xB9 | Ordinal: 186
        void lock(void);

    // RVA: 0xBA | Ordinal: 187
        void lock_read(void);

    // RVA: 0xD9 | Ordinal: 218
        void try_lock(void);

    // RVA: 0xDA | Ordinal: 219
        void try_lock_read(void);

    // RVA: 0xDC | Ordinal: 221
        void unlock(void);
};

} // namespace interface5
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_READER_WRITER_LOCK_HPP
