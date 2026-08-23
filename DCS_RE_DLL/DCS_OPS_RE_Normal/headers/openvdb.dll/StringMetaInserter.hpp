#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: StringMetaInserter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class StringMetaInserter
{
public:

    // RVA: 0x37E | Ordinal: 895
        void StringMetaInserter(class openvdb::v9_0::points::StringMetaInserter &&);

    // RVA: 0x37F | Ordinal: 896
        void StringMetaInserter(class openvdb::v9_0::MetaMap &);

    // RVA: 0x380 | Ordinal: 897
        void StringMetaInserter(class openvdb::v9_0::points::StringMetaInserter const &);

    // RVA: 0x709 | Ordinal: 1802
        void hasIndex(unsigned int) const;

    // RVA: 0x70A | Ordinal: 1803
        void hasKey(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x73A | Ordinal: 1851
        void insert(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int);

    // RVA: 0x895 | Ordinal: 2198
        void resetCache(void);

    // RVA: 0x3F6 | Ordinal: 1015
        void _StringMetaInserter(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STRINGMETAINSERTER_HPP
