#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: MappedFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class MappedFile
{
public:

    // RVA: 0x343 | Ordinal: 836
        void MappedFile(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool);

    // RVA: 0x5AB | Ordinal: 1452
        void clearNotifier(void);

    // RVA: 0x5FC | Ordinal: 1533
        void createBuffer(void) const;

    // RVA: 0x64D | Ordinal: 1614
        void filename(void) const;

    // RVA: 0x91B | Ordinal: 2332
        void setNotifier(class std::function<void __cdecl(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)> const &);

    // RVA: 0x3E2 | Ordinal: 995
        void _MappedFile(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_MAPPEDFILE_HPP
