#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: SplineInst
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace vd5 {

class SplineInst
{
public:

    // RVA: 0x22 | Ordinal: 35
        void SplineInst(class vd5::SplineInst &&);

    // RVA: 0x23 | Ordinal: 36
        void SplineInst(class vd5::SplineInst const &);

    // RVA: 0x24 | Ordinal: 37
        void SplineInst(void);

    // RVA: 0x155 | Ordinal: 342
        void addVert(class vd5::Vertex);

    // RVA: 0x179 | Ordinal: 378
        void asset(void) const;

    // RVA: 0x17D | Ordinal: 382
        void back(void) const;

    // RVA: 0x280 | Ordinal: 641
        void front(void) const;

    // RVA: 0x2A7 | Ordinal: 680
        void getBoundingBox(void) const;

    // RVA: 0x3AB | Ordinal: 940
        void getSegmentEdge(int, struct offshore::Edge32 &) const;

    // RVA: 0x3AC | Ordinal: 941
        void getSegmentPos(int, class osg::Vec3d &, class osg::Vec3d &) const;

    // RVA: 0x3BE | Ordinal: 959
        void getSourceNode(void) const;

    // RVA: 0x3EC | Ordinal: 1005
        void getTipPointInstance(int) const;

    // RVA: 0x40C | Ordinal: 1037
        void getVert(int) const;

    // RVA: 0x40D | Ordinal: 1038
        void getVert(int, class vd5::Vertex &) const;

    // RVA: 0x40E | Ordinal: 1039
        void getVertPos(int) const;

    // RVA: 0x415 | Ordinal: 1046
        void getVisibleDetails(void) const;

    // RVA: 0x4C6 | Ordinal: 1223
        void normalForSegment(int) const;

    // RVA: 0x4C7 | Ordinal: 1224
        void normalForVert(int) const;

    // RVA: 0x562 | Ordinal: 1379
        void segmentsCount(void) const;

    // RVA: 0x582 | Ordinal: 1411
        void setSourceNode(int);

    // RVA: 0x58C | Ordinal: 1421
        void setVerts(class ed::vector<class vd5::Vertex, class ed::allocator<class vd5::Vertex>> const &);

    // RVA: 0x58E | Ordinal: 1423
        void setVisibleDetails(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x5AE | Ordinal: 1455
        void tangentForSegment(int) const;

    // RVA: 0x5AF | Ordinal: 1456
        void tangentForVert(int) const;

    // RVA: 0x5B6 | Ordinal: 1463
        void toScene(int, struct offshore::Scene &, int) const;

    // RVA: 0x5BA | Ordinal: 1467
        void toSpline(struct offshore::Spline &, bool) const;

    // RVA: 0x5CE | Ordinal: 1487
        void vertCount(void) const;

    // RVA: 0x58 | Ordinal: 89
        void _SplineInst(void);
};

} // namespace vd5

// DCS_OPS_RE_EDTERRAIN4.DLL_SPLINEINST_HPP
