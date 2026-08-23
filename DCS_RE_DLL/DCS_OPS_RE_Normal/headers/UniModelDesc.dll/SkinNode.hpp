#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: SkinNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class SkinNode
{
public:

    // RVA: 0x2A | Ordinal: 43
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x38 | Ordinal: 57
        void calculateBoundingBox(unsigned int) const;

    // RVA: 0x66 | Ordinal: 103
        void getControlNode(unsigned __int64) const;

    // RVA: 0x89 | Ordinal: 138
        void getNumFaces(void) const;

    // RVA: 0xEF | Ordinal: 240
        void removeDegenerativeTriangles(void);

    // RVA: 0x100 | Ordinal: 257
        void resizeControlNodes(unsigned int);

    // RVA: 0x11D | Ordinal: 286
        void set(struct model::Vertices const &, struct model::Indices const &);

    // RVA: 0x120 | Ordinal: 289
        void setBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x121 | Ordinal: 290
        void setControlNode(unsigned __int64, class ed::Ptr<class model::Node, struct model::IObjectDeleter>);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_SKINNODE_HPP
