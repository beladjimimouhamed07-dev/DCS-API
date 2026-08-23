#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Metadata
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class Metadata
{
public:

    // RVA: 0x346 | Ordinal: 839
        void Metadata(void);

    // RVA: 0x5AF | Ordinal: 1456
        void clearRegistry(void);

    // RVA: 0x607 | Ordinal: 1544
        void createMetadata(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x786 | Ordinal: 1927
        void isRegisteredType(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x845 | Ordinal: 2118
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x867 | Ordinal: 2152
        void readSize(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x87A | Ordinal: 2171
        void registerType(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class openvdb::v9_0::Metadata> (__cdecl *)(void));

    // RVA: 0x9CB | Ordinal: 2508
        void unregisterType(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0xA00 | Ordinal: 2561
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0xA16 | Ordinal: 2583
        void writeSize(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3E4 | Ordinal: 997
        void _Metadata(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_METADATA_HPP
