#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: PagedInputStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace compression {

class PagedInputStream
{
public:

    // RVA: 0x354 | Ordinal: 853
        void PagedInputStream(class openvdb::v9_0::compression::PagedInputStream &&);

    // RVA: 0x355 | Ordinal: 854
        void PagedInputStream(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x356 | Ordinal: 855
        void PagedInputStream(class openvdb::v9_0::compression::PagedInputStream const &);

    // RVA: 0x357 | Ordinal: 856
        void PagedInputStream(void);

    // RVA: 0x602 | Ordinal: 1539
        void createHandle(__int64);

    // RVA: 0x69D | Ordinal: 1694
        void getInputStream(void);

    // RVA: 0x848 | Ordinal: 2121
        void read(class std::unique_ptr<class openvdb::v9_0::compression::PageHandle, struct std::default_delete<class openvdb::v9_0::compression::PageHandle>> &, __int64, bool);

    // RVA: 0x8F7 | Ordinal: 2296
        void setInputStream(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x928 | Ordinal: 2345
        void setSizeOnly(bool);

    // RVA: 0x96D | Ordinal: 2414
        void sizeOnly(void) const;

    // RVA: 0x3E9 | Ordinal: 1002
        void _PagedInputStream(void);
};

} // namespace compression
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_PAGEDINPUTSTREAM_HPP
