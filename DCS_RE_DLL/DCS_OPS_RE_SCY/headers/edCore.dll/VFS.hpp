#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: VFS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class VFS
{
public:

    // RVA: 0x1C1 | Ordinal: 450
        void find_files(char const *, char const *, int);

    // RVA: 0x1F0 | Ordinal: 497
        void getHome(void);

    // RVA: 0xFE | Ordinal: 255
        void operator__(class VFS::File &, class ed::basic_string<char> &);

    // RVA: 0x32C | Ordinal: 813
        void read_file(char const *, class ed::Ptr<class ed::SharedBuffer, struct edvfs::IBuffer::Deleter> &);
};

// DCS_OPS_RE_EDCORE.DLL_VFS_HPP
