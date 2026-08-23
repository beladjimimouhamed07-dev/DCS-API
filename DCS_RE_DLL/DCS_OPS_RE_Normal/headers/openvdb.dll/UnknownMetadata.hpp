#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: UnknownMetadata
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class UnknownMetadata
{
public:

    // RVA: 0x39C | Ordinal: 925
        void UnknownMetadata(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x56E | Ordinal: 1391
        void asBool(void) const;

    // RVA: 0x5E9 | Ordinal: 1514
        void copy(class openvdb::v9_0::Metadata const &);

    // RVA: 0x5EA | Ordinal: 1515
        void copy(void) const;

    // RVA: 0x86B | Ordinal: 2156
        void readValue(class std::basic_istream<char, struct std::char_traits<char>> &, unsigned int);

    // RVA: 0x94D | Ordinal: 2382
        void setValue(class std::vector<unsigned char, class std::allocator<unsigned char>> const &);

    // RVA: 0x96C | Ordinal: 2413
        void size(void) const;

    // RVA: 0x983 | Ordinal: 2436
        void str(void) const;

    // RVA: 0x9C0 | Ordinal: 2497
        void typeName(void) const;

    // RVA: 0x9D1 | Ordinal: 2514
        void value(void) const;

    // RVA: 0xA1B | Ordinal: 2588
        void writeValue(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3FF | Ordinal: 1024
        void _UnknownMetadata(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_UNKNOWNMETADATA_HPP
