#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: MetaMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class MetaMap
{
public:

    // RVA: 0x344 | Ordinal: 837
        void MetaMap(class openvdb::v9_0::MetaMap const &);

    // RVA: 0x345 | Ordinal: 838
        void MetaMap(void);

    // RVA: 0x58C | Ordinal: 1421
        void beginMeta(void);

    // RVA: 0x58D | Ordinal: 1422
        void beginMeta(void) const;

    // RVA: 0x5AA | Ordinal: 1451
        void clearMetadata(void);

    // RVA: 0x5EC | Ordinal: 1517
        void copyMeta(void) const;

    // RVA: 0x60B | Ordinal: 1548
        void deepCopyMeta(void) const;

    // RVA: 0x640 | Ordinal: 1601
        void endMeta(void);

    // RVA: 0x641 | Ordinal: 1602
        void endMeta(void) const;

    // RVA: 0x73B | Ordinal: 1852
        void insertMeta(class openvdb::v9_0::MetaMap const &);

    // RVA: 0x73C | Ordinal: 1853
        void insertMeta(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class openvdb::v9_0::Metadata const &);

    // RVA: 0x7CE | Ordinal: 1999
        void metaCount(void) const;

    // RVA: 0x865 | Ordinal: 2150
        void readMeta(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x87F | Ordinal: 2176
        void removeMeta(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x97C | Ordinal: 2429
        void str(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0xA14 | Ordinal: 2581
        void writeMeta(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3E3 | Ordinal: 996
        void _MetaMap(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_METAMAP_HPP
