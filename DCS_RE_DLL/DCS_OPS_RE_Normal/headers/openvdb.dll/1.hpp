#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: 1>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class _1_
{
public:

    // RVA: 0x578 | Ordinal: 1401
        void background(void) const;

    // RVA: 0x62E | Ordinal: 1583
        void empty(void) const;

    // RVA: 0x497 | Ordinal: 1176
        void operator()(class openvdb::v9_0::tree::LeafNode<float, 3> &, unsigned __int64) const;

    // RVA: 0x498 | Ordinal: 1177
        void operator()(class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>> &, unsigned __int64) const;

    // RVA: 0x49B | Ordinal: 1180
        void operator()(class openvdb::v9_0::tree::LeafNode<double, 3> &, unsigned __int64) const;

    // RVA: 0x49C | Ordinal: 1181
        void operator()(class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>> &, unsigned __int64) const;

    // RVA: 0x957 | Ordinal: 2392
        void size(void) const;
};

// DCS_OPS_RE_OPENVDB.DLL_1_HPP
