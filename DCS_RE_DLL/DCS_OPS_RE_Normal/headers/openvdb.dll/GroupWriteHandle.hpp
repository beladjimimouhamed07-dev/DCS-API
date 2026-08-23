#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: GroupWriteHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class GroupWriteHandle
{
public:

    // RVA: 0x32D | Ordinal: 814
        void GroupWriteHandle(class openvdb::v9_0::points::TypedAttributeArray<unsigned char, struct openvdb::v9_0::points::GroupCodec> &, unsigned char const &);

    // RVA: 0x5C1 | Ordinal: 1474
        void collapse(bool);

    // RVA: 0x5C4 | Ordinal: 1477
        void compact(void);

    // RVA: 0x8BF | Ordinal: 2240
        void set(unsigned int, bool);

    // RVA: 0x94C | Ordinal: 2381
        void setUnsafe(unsigned int, bool);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_GROUPWRITEHANDLE_HPP
