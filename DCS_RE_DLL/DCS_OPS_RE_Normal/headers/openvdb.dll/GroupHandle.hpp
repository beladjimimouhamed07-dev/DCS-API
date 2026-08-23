#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: GroupHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class GroupHandle
{
public:

    // RVA: 0x32B | Ordinal: 812
        void GroupHandle(class openvdb::v9_0::points::TypedAttributeArray<unsigned char, struct openvdb::v9_0::points::GroupCodec> const &, unsigned char const &);

    // RVA: 0x32C | Ordinal: 813
        void GroupHandle(class openvdb::v9_0::points::TypedAttributeArray<unsigned char, struct openvdb::v9_0::points::GroupCodec> const &, unsigned char const &, struct openvdb::v9_0::points::GroupHandle::BitMask);

    // RVA: 0x66E | Ordinal: 1647
        void get(unsigned int) const;

    // RVA: 0x6DF | Ordinal: 1760
        void getUnsafe(unsigned int) const;

    // RVA: 0x78C | Ordinal: 1933
        void isUniform(void) const;

    // RVA: 0x967 | Ordinal: 2408
        void size(void) const;
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_GROUPHANDLE_HPP
