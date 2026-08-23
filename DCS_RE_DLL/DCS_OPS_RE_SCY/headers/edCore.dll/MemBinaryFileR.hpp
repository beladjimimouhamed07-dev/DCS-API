#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: MemBinaryFileR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace io {

class MemBinaryFileR
{
public:

    // RVA: 0x6F | Ordinal: 112
        void MemBinaryFileR(class io::MemBinaryFileR &&);

    // RVA: 0x70 | Ordinal: 113
        void MemBinaryFileR(char const *, class edvfs::IVFSandbox *);

    // RVA: 0x1FF | Ordinal: 512
        void getName(void) const;

    // RVA: 0x201 | Ordinal: 514
        void getOffset(void) const;

    // RVA: 0x314 | Ordinal: 789
        void read(void *, unsigned __int64);

    // RVA: 0x317 | Ordinal: 792
        void readCachedString(void);

    // RVA: 0x36D | Ordinal: 878
        void seek(unsigned __int64);

    // RVA: 0xC5 | Ordinal: 198
        void _MemBinaryFileR(void);
};

} // namespace io

// DCS_OPS_RE_EDCORE.DLL_MEMBINARYFILER_HPP
