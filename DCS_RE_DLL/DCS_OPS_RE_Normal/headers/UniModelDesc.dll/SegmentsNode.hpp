#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: SegmentsNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class SegmentsNode
{
public:

    // RVA: 0x27 | Ordinal: 40
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x35 | Ordinal: 54
        void calculateBoundingBox(void) const;

    // RVA: 0x3E | Ordinal: 63
        void canBeMerged(class model::SegmentsNode const &) const;

    // RVA: 0x9A | Ordinal: 155
        void getSegments(void);

    // RVA: 0x9B | Ordinal: 156
        void getSegments(void) const;

    // RVA: 0xD4 | Ordinal: 213
        void merge(class model::SegmentsNode const &);

    // RVA: 0xEC | Ordinal: 237
        void removeDegenerativeTriangles(void);

    // RVA: 0x132 | Ordinal: 307
        void setSegments(class ed::vector<struct model::SegmentsNode::Segment, class ed::allocator<struct model::SegmentsNode::Segment>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_SEGMENTSNODE_HPP
