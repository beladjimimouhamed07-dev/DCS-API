#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: StringAttributeHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class StringAttributeHandle
{
public:

    // RVA: 0x374 | Ordinal: 885
        void StringAttributeHandle(class openvdb::v9_0::points::StringAttributeHandle &&);

    // RVA: 0x375 | Ordinal: 886
        void StringAttributeHandle(class openvdb::v9_0::points::StringAttributeHandle const &);

    // RVA: 0x376 | Ordinal: 887
        void StringAttributeHandle(class openvdb::v9_0::points::AttributeArray const &, class openvdb::v9_0::MetaMap const &, bool);

    // RVA: 0x56B | Ordinal: 1388
        void array(void) const;

    // RVA: 0x5F6 | Ordinal: 1527
        void create(class openvdb::v9_0::points::AttributeArray const &, class openvdb::v9_0::MetaMap const &, bool);

    // RVA: 0x66F | Ordinal: 1648
        void get(unsigned int, unsigned int) const;

    // RVA: 0x670 | Ordinal: 1649
        void get(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, unsigned int, unsigned int) const;

    // RVA: 0x705 | Ordinal: 1798
        void hasConstantStride(void) const;

    // RVA: 0x78D | Ordinal: 1934
        void isUniform(void) const;

    // RVA: 0x96A | Ordinal: 2411
        void size(void) const;

    // RVA: 0x984 | Ordinal: 2437
        void stride(void) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void _StringAttributeHandle(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STRINGATTRIBUTEHANDLE_HPP
