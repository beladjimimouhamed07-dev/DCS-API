#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Exception
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class Exception
{
public:

    // RVA: 0x31A | Ordinal: 795
        void Exception(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const *const);

    // RVA: 0x31B | Ordinal: 796
        void Exception(void);

    // RVA: 0x31C | Ordinal: 797
        void Exception(class openvdb::v9_0::Exception &&);

    // RVA: 0x31D | Ordinal: 798
        void Exception(class openvdb::v9_0::Exception const &);

    // RVA: 0x9F1 | Ordinal: 2546
        void what(void) const;

    // RVA: 0x3D7 | Ordinal: 984
        void _Exception(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_EXCEPTION_HPP
