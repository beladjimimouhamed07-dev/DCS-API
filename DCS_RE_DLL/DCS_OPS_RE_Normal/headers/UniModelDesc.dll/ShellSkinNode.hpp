#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ShellSkinNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ShellSkinNode
{
public:

    // RVA: 0x29 | Ordinal: 42
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x37 | Ordinal: 56
        void calculateBoundingBox(void) const;

    // RVA: 0x65 | Ordinal: 102
        void getControlNode(unsigned __int64) const;

    // RVA: 0x88 | Ordinal: 137
        void getNumFaces(void) const;

    // RVA: 0xD6 | Ordinal: 215
        void merge(class model::BaseNode const &);

    // RVA: 0xEE | Ordinal: 239
        void removeDegenerativeTriangles(void);

    // RVA: 0xFF | Ordinal: 256
        void resizeControlNodes(unsigned int);

    // RVA: 0x11F | Ordinal: 288
        void setBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_SHELLSKINNODE_HPP
