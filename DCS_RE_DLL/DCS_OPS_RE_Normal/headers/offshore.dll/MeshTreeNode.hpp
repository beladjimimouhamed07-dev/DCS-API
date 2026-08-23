#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: MeshTreeNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {
namespace MeshesTree {

class MeshTreeNode
{
public:

    // RVA: 0x2 | Ordinal: 3
        void MeshTreeNode(struct offshore::Mesh const &);

    // RVA: 0x3 | Ordinal: 4
        void MeshTreeNode(void);

    // RVA: 0x101 | Ordinal: 258
        void deleteTrees(void);

    // RVA: 0x19D | Ordinal: 414
        void insertAwaitingNodes(void);

    // RVA: 0x1A0 | Ordinal: 417
        void intersect(struct offshore::MeshesTree::MeshTreeNode const &, struct offshore::Edge32 &, struct offshore::Edge32 &, bool &, class osg::Vec3d &, double) const;

    // RVA: 0x1A1 | Ordinal: 418
        void intersect(struct offshore::MeshesTree::MeshTreeNode const &, double) const;

    // RVA: 0x1CF | Ordinal: 464
        void pointInsideMesh(class osg::Vec3d const &, double) const;

    // RVA: 0x20E | Ordinal: 527
        void selectOpenEdges(class osg::RectImpl<class osg::Vec2f> const &, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x20F | Ordinal: 528
        void selectPolygons(class osg::RectImpl<class osg::Vec2f> const &, class ed::vector<int, class ed::allocator<int>> &) const;
};

} // namespace MeshesTree
} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_MESHTREENODE_HPP
