#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: BinaryFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class BinaryFile
{
public:

    // RVA: 0x38 | Ordinal: 57
        void BinaryFile(class edvfs::IFile *);

    // RVA: 0x1FE | Ordinal: 511
        void getName(void) const;

    // RVA: 0x200 | Ordinal: 513
        void getOffset(void) const;

    // RVA: 0x312 | Ordinal: 787
        void read(void *, unsigned __int64);

    // RVA: 0x316 | Ordinal: 791
        void readCachedString(void);

    // RVA: 0x36B | Ordinal: 876
        void seek(unsigned __int64);

    // RVA: 0xAA | Ordinal: 171
        void _BinaryFile(void);
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_BINARYFILE_HPP
