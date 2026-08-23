#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Archive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class Archive
{
public:

    // RVA: 0x309 | Ordinal: 778
        void Archive(class openvdb::v9_0::io::Archive const &);

    // RVA: 0x30A | Ordinal: 779
        void Archive(void);

    // RVA: 0x5C7 | Ordinal: 1480
        void compression(void) const;

    // RVA: 0x5CA | Ordinal: 1483
        void connectInstance(class openvdb::v9_0::io::GridDescriptor const &, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::shared_ptr<class openvdb::v9_0::GridBase>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::shared_ptr<class openvdb::v9_0::GridBase>>>> const &) const;

    // RVA: 0x5DA | Ordinal: 1499
        void copy(void) const;

    // RVA: 0x64A | Ordinal: 1611
        void fileVersion(void) const;

    // RVA: 0x6DE | Ordinal: 1759
        void getUniqueTag(void) const;

    // RVA: 0x703 | Ordinal: 1796
        void hasBloscCompression(void);

    // RVA: 0x71E | Ordinal: 1823
        void hasZLibCompression(void);

    // RVA: 0x736 | Ordinal: 1847
        void inputHasGridOffsets(void) const;

    // RVA: 0x750 | Ordinal: 1873
        void isDelayedLoadingEnabled(void);

    // RVA: 0x75C | Ordinal: 1885
        void isGridStatsMetadataEnabled(void) const;

    // RVA: 0x75E | Ordinal: 1887
        void isIdentical(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x765 | Ordinal: 1894
        void isInstancingEnabled(void) const;

    // RVA: 0x79A | Ordinal: 1947
        void libraryVersion(void) const;

    // RVA: 0x852 | Ordinal: 2131
        void readGrid(class std::shared_ptr<class openvdb::v9_0::GridBase>, class openvdb::v9_0::io::GridDescriptor const &, class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x853 | Ordinal: 2132
        void readGrid(class std::shared_ptr<class openvdb::v9_0::GridBase>, class openvdb::v9_0::io::GridDescriptor const &, class std::basic_istream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &);

    // RVA: 0x854 | Ordinal: 2133
        void readGrid(class std::shared_ptr<class openvdb::v9_0::GridBase>, class openvdb::v9_0::io::GridDescriptor const &, class std::basic_istream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::CoordBBox const &);

    // RVA: 0x85D | Ordinal: 2142
        void readGridCompression(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x85E | Ordinal: 2143
        void readGridCount(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x863 | Ordinal: 2148
        void readHeader(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x8CD | Ordinal: 2254
        void setCompression(unsigned int);

    // RVA: 0x8D6 | Ordinal: 2263
        void setDataCompression(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x8DC | Ordinal: 2269
        void setFormatVersion(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x8EF | Ordinal: 2288
        void setGridCompression(class std::basic_ostream<char, struct std::char_traits<char>> &, class openvdb::v9_0::GridBase const &) const;

    // RVA: 0x8F1 | Ordinal: 2290
        void setGridStatsMetadataEnabled(bool);

    // RVA: 0x8F6 | Ordinal: 2295
        void setInputHasGridOffsets(bool);

    // RVA: 0x8F9 | Ordinal: 2298
        void setInstancingEnabled(bool);

    // RVA: 0x900 | Ordinal: 2305
        void setLibraryVersion(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x9D6 | Ordinal: 2519
        void version(void) const;

    // RVA: 0x9FA | Ordinal: 2555
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &, class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, bool, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0x9FB | Ordinal: 2556
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &, class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase>>> const &, bool, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0x9FC | Ordinal: 2557
        void write(class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0xA0B | Ordinal: 2572
        void writeGrid(class openvdb::v9_0::io::GridDescriptor &, class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0xA0D | Ordinal: 2574
        void writeGridInstance(class openvdb::v9_0::io::GridDescriptor &, class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0xA12 | Ordinal: 2579
        void writeHeader(class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0x3D1 | Ordinal: 978
        void _Archive(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_ARCHIVE_HPP
