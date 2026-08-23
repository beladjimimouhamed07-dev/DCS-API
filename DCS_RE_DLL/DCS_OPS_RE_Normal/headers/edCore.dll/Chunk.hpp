#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Chunk
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class Chunk
{
public:

    // RVA: 0x30F | Ordinal: 784
        void rafter(unsigned __int64) const;

    // RVA: 0x310 | Ordinal: 785
        void rbefore(unsigned __int64) const;

    // RVA: 0x311 | Ordinal: 786
        void rcount(void) const;

    // RVA: 0x362 | Ordinal: 867
        void rlink(class ed::Ptr<class Mail::Chunk, struct ed::DefaultDeleter> const &);

    // RVA: 0x366 | Ordinal: 871
        void rsize(void) const;

    // RVA: 0x367 | Ordinal: 872
        void rtail(void);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_CHUNK_HPP
