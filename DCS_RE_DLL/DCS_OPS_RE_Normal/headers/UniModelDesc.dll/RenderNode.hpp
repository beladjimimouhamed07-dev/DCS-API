#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: RenderNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class RenderNode
{
public:

    // RVA: 0x26 | Ordinal: 39
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x34 | Ordinal: 53
        void calculateBoundingBox(unsigned int) const;

    // RVA: 0x3D | Ordinal: 62
        void canBeMerged(class model::RenderNode const &, struct model::BaseRenderNode::OptExpl &) const;

    // RVA: 0x73 | Ordinal: 116
        void getHandles(class std::function<void __cdecl(unsigned int)>) const;

    // RVA: 0x87 | Ordinal: 136
        void getNumFaces(void) const;

    // RVA: 0xA8 | Ordinal: 169
        void getVertices(void);

    // RVA: 0xEB | Ordinal: 236
        void removeDegenerativeTriangles(void);

    // RVA: 0x11A | Ordinal: 283
        void set(struct model::Vertices const &, struct model::Indices const &);

    // RVA: 0x11B | Ordinal: 284
        void set(struct model::Vertices const &, struct model::Indices const &, class ed::vector<struct model::RenderNode::ControlNode, class ed::allocator<struct model::RenderNode::ControlNode>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_RENDERNODE_HPP
