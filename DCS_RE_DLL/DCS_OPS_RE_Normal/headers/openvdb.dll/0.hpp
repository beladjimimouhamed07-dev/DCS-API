#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: 0>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class _0_
{
public:

    // RVA: 0x579 | Ordinal: 1402
        void background(void) const;

    // RVA: 0x62F | Ordinal: 1584
        void empty(void) const;

    // RVA: 0x499 | Ordinal: 1178
        void operator()(class openvdb::v9_0::tree::LeafNode<float, 3> &, unsigned __int64) const;

    // RVA: 0x49A | Ordinal: 1179
        void operator()(class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>> &, unsigned __int64) const;

    // RVA: 0x49D | Ordinal: 1182
        void operator()(class openvdb::v9_0::tree::LeafNode<double, 3> &, unsigned __int64) const;

    // RVA: 0x49E | Ordinal: 1183
        void operator()(class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>> &, unsigned __int64) const;

    // RVA: 0x958 | Ordinal: 2393
        void size(void) const;
};

// DCS_OPS_RE_OPENVDB.DLL_0_HPP
