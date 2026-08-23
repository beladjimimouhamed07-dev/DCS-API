#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: MappedFileBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class MappedFileBuffer
{
public:

    // RVA: 0x180 | Ordinal: 385
        void create(void *, void *, unsigned __int64);

    // RVA: 0x2A0 | Ordinal: 673
        void map(void);

    // RVA: 0x3EB | Ordinal: 1004
        void unmap(void);
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_MAPPEDFILEBUFFER_HPP
