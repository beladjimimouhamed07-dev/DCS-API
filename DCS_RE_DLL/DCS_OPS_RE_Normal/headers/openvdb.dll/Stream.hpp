#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Stream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class Stream
{
public:

    // RVA: 0x36D | Ordinal: 878
        void Stream(class std::basic_istream<char, struct std::char_traits<char>> &, bool);

    // RVA: 0x36E | Ordinal: 879
        void Stream(class std::basic_ostream<char, struct std::char_traits<char>> &);

    // RVA: 0x36F | Ordinal: 880
        void Stream(class openvdb::v9_0::io::Stream const &);

    // RVA: 0x370 | Ordinal: 881
        void Stream(void);

    // RVA: 0x5E3 | Ordinal: 1508
        void copy(void) const;

    // RVA: 0x698 | Ordinal: 1689
        void getGrids(void);

    // RVA: 0x6B1 | Ordinal: 1714
        void getMetadata(void) const;

    // RVA: 0x85B | Ordinal: 2140
        void readGrid(class openvdb::v9_0::io::GridDescriptor const &, class std::basic_istream<char, struct std::char_traits<char>> &) const;

    // RVA: 0xA05 | Ordinal: 2566
        void write(class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0xA11 | Ordinal: 2578
        void writeGrids(class std::basic_ostream<char, struct std::char_traits<char>> &, class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::MetaMap const &) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void _Stream(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STREAM_HPP
