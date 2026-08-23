#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: MeshesTree
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class MeshesTree
{
public:

    // RVA: 0xD1 | Ordinal: 210
        void clear(void);

    // RVA: 0x19C | Ordinal: 413
        void insert(struct offshore::Mesh const &);

    // RVA: 0x19E | Ordinal: 415
        void insertAwaitingNodes(void);

    // RVA: 0x1A2 | Ordinal: 419
        void intersect(struct offshore::Mesh const &, double);

    // RVA: 0x1A3 | Ordinal: 420
        void intersect(struct offshore::MeshesTree::MeshTreeNode const &, double);

    // RVA: 0x1F5 | Ordinal: 502
        void reserve(unsigned __int64);

    // RVA: 0x20D | Ordinal: 526
        void select(class osg::RectImpl<class osg::Vec2f> const &, class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x1B | Ordinal: 28
        void _MeshesTree(void);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_MESHESTREE_HPP
