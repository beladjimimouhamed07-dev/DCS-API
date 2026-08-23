#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class File
{
public:

    // RVA: 0x31E | Ordinal: 799
        void File(class openvdb::v9_0::io::File const &);

    // RVA: 0x31F | Ordinal: 800
        void File(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x320 | Ordinal: 801
        void File(char const *, int);

    // RVA: 0x58E | Ordinal: 1423
        void beginName(void) const;

    // RVA: 0x5B3 | Ordinal: 1460
        void close(void);

    // RVA: 0x5DD | Ordinal: 1502
        void copy(void) const;

    // RVA: 0x5EB | Ordinal: 1516
        void copyMaxBytes(void) const;

    // RVA: 0x600 | Ordinal: 1537
        void createGrid(class openvdb::v9_0::io::GridDescriptor const &) const;

    // RVA: 0x642 | Ordinal: 1603
        void endName(void) const;

    // RVA: 0x648 | Ordinal: 1609
        void fileMetadata(void);

    // RVA: 0x649 | Ordinal: 1610
        void fileMetadata(void) const;

    // RVA: 0x64C | Ordinal: 1613
        void filename(void) const;

    // RVA: 0x652 | Ordinal: 1619
        void findDescriptor(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x697 | Ordinal: 1688
        void getGrids(void) const;

    // RVA: 0x6B0 | Ordinal: 1713
        void getMetadata(void) const;

    // RVA: 0x6C0 | Ordinal: 1729
        void getSize(void) const;

    // RVA: 0x6EC | Ordinal: 1773
        void gridDescriptors(void);

    // RVA: 0x6ED | Ordinal: 1774
        void gridDescriptors(void) const;

    // RVA: 0x707 | Ordinal: 1800
        void hasGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x737 | Ordinal: 1848
        void inputStream(void) const;

    // RVA: 0x778 | Ordinal: 1913
        void isOpen(void) const;

    // RVA: 0x7DF | Ordinal: 2016
        void open(bool, class std::function<void __cdecl(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)> const &);

    // RVA: 0x84E | Ordinal: 2127
        void readAllGridMetadata(void);

    // RVA: 0x855 | Ordinal: 2134
        void readGrid(class openvdb::v9_0::io::GridDescriptor const &) const;

    // RVA: 0x856 | Ordinal: 2135
        void readGrid(class openvdb::v9_0::io::GridDescriptor const &, class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &) const;

    // RVA: 0x857 | Ordinal: 2136
        void readGrid(class openvdb::v9_0::io::GridDescriptor const &, class openvdb::v9_0::math::CoordBBox const &) const;

    // RVA: 0x858 | Ordinal: 2137
        void readGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x859 | Ordinal: 2138
        void readGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &);

    // RVA: 0x85A | Ordinal: 2139
        void readGrid(char const *, int);

    // RVA: 0x85C | Ordinal: 2141
        void readGridByName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &);

    // RVA: 0x85F | Ordinal: 2144
        void readGridDescriptors(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x860 | Ordinal: 2145
        void readGridMetadata(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x861 | Ordinal: 2146
        void readGridPartial(class openvdb::v9_0::io::GridDescriptor const &, bool) const;

    // RVA: 0x862 | Ordinal: 2147
        void readGridPartial(class std::shared_ptr<class openvdb::v9_0::GridBase>, class std::basic_istream<char, struct std::char_traits<char>> &, bool, bool) const;

    // RVA: 0x8A0 | Ordinal: 2209
        void retrieveCachedGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x8D0 | Ordinal: 2257
        void setCopyMaxBytes(unsigned __int64);

    // RVA: 0x9FF | Ordinal: 2560
        void write(class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0xA10 | Ordinal: 2577
        void writeGrids(class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0x3D8 | Ordinal: 985
        void _File(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_FILE_HPP
