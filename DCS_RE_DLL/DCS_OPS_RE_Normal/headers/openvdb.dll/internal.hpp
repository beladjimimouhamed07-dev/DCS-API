#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: internal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class internal
{
public:

    // RVA: 0x471 | Ordinal: 1138
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::internal::half);

    // RVA: 0x470 | Ordinal: 1137
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::internal::half &);

    // RVA: 0x830 | Ordinal: 2097
        void printBits(class std::basic_ostream<char, struct std::char_traits<char>> &, float);

    // RVA: 0x831 | Ordinal: 2098
        void printBits(class std::basic_ostream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::internal::half);

    // RVA: 0x832 | Ordinal: 2099
        void printBits(char *const, float);

    // RVA: 0x833 | Ordinal: 2100
        void printBits(char *const, class openvdb::v9_0::math::internal::half);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_INTERNAL_HPP
