#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ShellNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ShellNode
{
public:

    // RVA: 0x28 | Ordinal: 41
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x36 | Ordinal: 55
        void calculateBoundingBox(void) const;

    // RVA: 0x3F | Ordinal: 64
        void canBeMerged(class model::ShellNode const &) const;

    // RVA: 0xD5 | Ordinal: 214
        void merge(class model::ShellNode const &);

    // RVA: 0xED | Ordinal: 238
        void removeDegenerativeTriangles(void);

    // RVA: 0x11C | Ordinal: 285
        void set(struct model::VertexFormat const &, struct model::Vertices const &, struct model::Indices const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_SHELLNODE_HPP
