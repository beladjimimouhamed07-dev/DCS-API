#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: PagedOutputStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace compression {

class PagedOutputStream
{
public:

    // RVA: 0x358 | Ordinal: 857
        void PagedOutputStream(class openvdb::v9_0::compression::PagedOutputStream &&);

    // RVA: 0x359 | Ordinal: 858
        void PagedOutputStream(class std::basic_ostream<char, struct std::char_traits<char>> &);

    // RVA: 0x35A | Ordinal: 859
        void PagedOutputStream(void);

    // RVA: 0x5C6 | Ordinal: 1479
        void compressAndWrite(char const *, unsigned __int64);

    // RVA: 0x65F | Ordinal: 1632
        void flush(void);

    // RVA: 0x6BB | Ordinal: 1724
        void getOutputStream(void);

    // RVA: 0x899 | Ordinal: 2202
        void resize(unsigned __int64);

    // RVA: 0x91C | Ordinal: 2333
        void setOutputStream(class std::basic_ostream<char, struct std::char_traits<char>> &);

    // RVA: 0x929 | Ordinal: 2346
        void setSizeOnly(bool);

    // RVA: 0x96E | Ordinal: 2415
        void sizeOnly(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void write(char const *, __int64);

    // RVA: 0x3EA | Ordinal: 1003
        void _PagedOutputStream(void);
};

} // namespace compression
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_PAGEDOUTPUTSTREAM_HPP
