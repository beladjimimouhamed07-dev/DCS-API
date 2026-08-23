#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace io {

class File
{
public:

    // RVA: 0x2C9 | Ordinal: 714
        void open(class ed::basic_string<char> const &, enum io::File::Mode);

    // RVA: 0x2CA | Ordinal: 715
        void open(char const *, enum io::File::Mode);

    // RVA: 0x32E | Ordinal: 815
        void readall(void);

    // RVA: 0x32F | Ordinal: 816
        void readall(class ed::Ptr<class ed::SharedBuffer, struct edvfs::IBuffer::Deleter> &);

    // RVA: 0x330 | Ordinal: 817
        void readall(class ed::basic_string<char> &);

    // RVA: 0x331 | Ordinal: 818
        void readshortstring(class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x332 | Ordinal: 819
        void readstring(void);

    // RVA: 0x41A | Ordinal: 1051
        void writestring(char const *);
};

} // namespace io

// DCS_OPS_RE_EDCORE.DLL_FILE_HPP
