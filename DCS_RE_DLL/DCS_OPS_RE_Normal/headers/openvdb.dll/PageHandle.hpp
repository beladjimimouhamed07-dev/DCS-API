#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: PageHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace compression {

class PageHandle
{
public:

    // RVA: 0x351 | Ordinal: 850
        void PageHandle(class openvdb::v9_0::compression::PageHandle &&);

    // RVA: 0x352 | Ordinal: 851
        void PageHandle(class openvdb::v9_0::compression::PageHandle const &);

    // RVA: 0x353 | Ordinal: 852
        void PageHandle(class std::shared_ptr<class openvdb::v9_0::compression::Page> const &, int, int);

    // RVA: 0x5E0 | Ordinal: 1505
        void copy(void);

    // RVA: 0x7E3 | Ordinal: 2020
        void page(void);

    // RVA: 0x847 | Ordinal: 2120
        void read(void);

    // RVA: 0x968 | Ordinal: 2409
        void size(void) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void _PageHandle(void);
};

} // namespace compression
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_PAGEHANDLE_HPP
