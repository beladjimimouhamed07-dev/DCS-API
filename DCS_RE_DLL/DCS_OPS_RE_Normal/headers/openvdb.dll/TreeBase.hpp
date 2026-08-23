#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: TreeBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace tree {

class TreeBase
{
public:

    // RVA: 0x388 | Ordinal: 905
        void TreeBase(class openvdb::v9_0::tree::TreeBase const &);

    // RVA: 0x389 | Ordinal: 906
        void TreeBase(void);

    // RVA: 0x678 | Ordinal: 1657
        void getBackgroundValue(void) const;

    // RVA: 0x7CD | Ordinal: 1998
        void memUsage(void) const;

    // RVA: 0x82F | Ordinal: 2096
        void print(class std::basic_ostream<char, struct std::char_traits<char>> &, int) const;

    // RVA: 0x868 | Ordinal: 2153
        void readTopology(class std::basic_istream<char, struct std::char_traits<char>> &, bool);

    // RVA: 0xA18 | Ordinal: 2585
        void writeTopology(class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0x3FA | Ordinal: 1019
        void _TreeBase(void);
};

} // namespace tree
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_TREEBASE_HPP
