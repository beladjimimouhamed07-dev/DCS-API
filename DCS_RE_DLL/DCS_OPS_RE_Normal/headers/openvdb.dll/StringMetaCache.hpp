#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: StringMetaCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class StringMetaCache
{
public:

    // RVA: 0x37A | Ordinal: 891
        void StringMetaCache(class openvdb::v9_0::points::StringMetaCache &&);

    // RVA: 0x37B | Ordinal: 892
        void StringMetaCache(class openvdb::v9_0::points::StringMetaCache const &);

    // RVA: 0x37C | Ordinal: 893
        void StringMetaCache(class openvdb::v9_0::MetaMap const &);

    // RVA: 0x37D | Ordinal: 894
        void StringMetaCache(void);

    // RVA: 0x63D | Ordinal: 1598
        void empty(void) const;

    // RVA: 0x739 | Ordinal: 1850
        void insert(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int);

    // RVA: 0x79F | Ordinal: 1952
        void map(void) const;

    // RVA: 0x893 | Ordinal: 2196
        void reset(class openvdb::v9_0::MetaMap const &);

    // RVA: 0x96B | Ordinal: 2412
        void size(void) const;

    // RVA: 0x3F5 | Ordinal: 1014
        void _StringMetaCache(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STRINGMETACACHE_HPP
