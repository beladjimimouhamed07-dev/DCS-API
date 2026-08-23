#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: StringAttributeWriteHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class StringAttributeWriteHandle
{
public:

    // RVA: 0x377 | Ordinal: 888
        void StringAttributeWriteHandle(class openvdb::v9_0::points::StringAttributeWriteHandle &&);

    // RVA: 0x378 | Ordinal: 889
        void StringAttributeWriteHandle(class openvdb::v9_0::points::AttributeArray &, class openvdb::v9_0::MetaMap const &, bool);

    // RVA: 0x379 | Ordinal: 890
        void StringAttributeWriteHandle(class openvdb::v9_0::points::StringAttributeWriteHandle const &);

    // RVA: 0x56C | Ordinal: 1389
        void array(void);

    // RVA: 0x5C2 | Ordinal: 1475
        void collapse(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x5C3 | Ordinal: 1476
        void collapse(void);

    // RVA: 0x5C5 | Ordinal: 1478
        void compact(void);

    // RVA: 0x5D5 | Ordinal: 1494
        void contains(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x5F7 | Ordinal: 1528
        void create(class openvdb::v9_0::points::AttributeArray &, class openvdb::v9_0::MetaMap const &, bool);

    // RVA: 0x647 | Ordinal: 1608
        void expand(bool);

    // RVA: 0x64F | Ordinal: 1616
        void fill(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x69C | Ordinal: 1693
        void getIndex(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x894 | Ordinal: 2197
        void resetCache(void);

    // RVA: 0x8C0 | Ordinal: 2241
        void set(unsigned int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x8C1 | Ordinal: 2242
        void set(unsigned int, unsigned int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x3F4 | Ordinal: 1013
        void _StringAttributeWriteHandle(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STRINGATTRIBUTEWRITEHANDLE_HPP
