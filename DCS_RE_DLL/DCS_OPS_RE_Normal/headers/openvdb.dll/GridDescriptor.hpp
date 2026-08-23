#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: GridDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class GridDescriptor
{
public:

    // RVA: 0x325 | Ordinal: 806
        void GridDescriptor(class openvdb::v9_0::io::GridDescriptor const &);

    // RVA: 0x326 | Ordinal: 807
        void GridDescriptor(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool);

    // RVA: 0x327 | Ordinal: 808
        void GridDescriptor(void);

    // RVA: 0x516 | Ordinal: 1303
        void addSuffix(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int);

    // RVA: 0x679 | Ordinal: 1658
        void getBlockPos(void) const;

    // RVA: 0x682 | Ordinal: 1667
        void getEndPos(void) const;

    // RVA: 0x696 | Ordinal: 1687
        void getGridPos(void) const;

    // RVA: 0x6F0 | Ordinal: 1777
        void gridName(void) const;

    // RVA: 0x6F1 | Ordinal: 1778
        void gridType(void) const;

    // RVA: 0x73E | Ordinal: 1855
        void instanceParentName(void) const;

    // RVA: 0x764 | Ordinal: 1893
        void isInstance(void) const;

    // RVA: 0x7D5 | Ordinal: 2006
        void nameAsString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x844 | Ordinal: 2117
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x8AE | Ordinal: 2223
        void saveFloatAsHalf(void) const;

    // RVA: 0x8B6 | Ordinal: 2231
        void seekToBlocks(class std::basic_istream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8B7 | Ordinal: 2232
        void seekToBlocks(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8B8 | Ordinal: 2233
        void seekToEnd(class std::basic_istream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8B9 | Ordinal: 2234
        void seekToEnd(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8BA | Ordinal: 2235
        void seekToGrid(class std::basic_istream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8BB | Ordinal: 2236
        void seekToGrid(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x8C8 | Ordinal: 2249
        void setBlockPos(__int64);

    // RVA: 0x8DA | Ordinal: 2267
        void setEndPos(__int64);

    // RVA: 0x8F0 | Ordinal: 2289
        void setGridPos(__int64);

    // RVA: 0x8F8 | Ordinal: 2297
        void setInstanceParentName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x985 | Ordinal: 2438
        void stringAsUniqueName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x988 | Ordinal: 2441
        void stripSuffix(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x9C5 | Ordinal: 2502
        void uniqueName(void) const;

    // RVA: 0xA13 | Ordinal: 2580
        void writeHeader(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0xA17 | Ordinal: 2584
        void writeStreamPos(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3DA | Ordinal: 987
        void _GridDescriptor(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_GRIDDESCRIPTOR_HPP
