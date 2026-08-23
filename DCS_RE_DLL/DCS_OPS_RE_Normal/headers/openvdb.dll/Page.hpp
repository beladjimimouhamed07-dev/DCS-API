#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Page
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace compression {

class Page
{
public:

    // RVA: 0x350 | Ordinal: 849
        void Page(void);

    // RVA: 0x59A | Ordinal: 1435
        void buffer(int) const;

    // RVA: 0x5DF | Ordinal: 1504
        void copy(class std::unique_ptr<char[], struct std::default_delete<char[]>> const &, int);

    // RVA: 0x60A | Ordinal: 1547
        void decompress(class std::unique_ptr<char[], struct std::default_delete<char[]>> const &);

    // RVA: 0x624 | Ordinal: 1573
        void doLoad(void) const;

    // RVA: 0x779 | Ordinal: 1914
        void isOutOfCore(void) const;

    // RVA: 0x79C | Ordinal: 1949
        void load(void) const;

    // RVA: 0x850 | Ordinal: 2129
        void readBuffers(class std::basic_istream<char, struct std::char_traits<char>> &, bool);

    // RVA: 0x864 | Ordinal: 2149
        void readHeader(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x9C1 | Ordinal: 2498
        void uncompressedBytes(void) const;

    // RVA: 0x3E7 | Ordinal: 1000
        void _Page(void);
};

} // namespace compression
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_PAGE_HPP
