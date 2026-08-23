#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: PointInst
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace vd5 {

class PointInst
{
public:

    // RVA: 0x17 | Ordinal: 24
        void PointInst(class vd5::PointInst const &);

    // RVA: 0x18 | Ordinal: 25
        void PointInst(void);

    // RVA: 0x178 | Ordinal: 377
        void asset(void) const;

    // RVA: 0x2C1 | Ordinal: 706
        void getConnectedSpline(int, int *) const;

    // RVA: 0x2C7 | Ordinal: 712
        void getContourVerts(int, int) const;

    // RVA: 0x2F8 | Ordinal: 761
        void getFragmentContour(int, int) const;

    // RVA: 0x2F9 | Ordinal: 762
        void getFragmentVert(int) const;

    // RVA: 0x3BD | Ordinal: 958
        void getSourceNode(void) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void getTransform(void) const;

    // RVA: 0x567 | Ordinal: 1384
        void setContourVerts(int, int, class ed::vector<class vd5::Vertex, class ed::allocator<class vd5::Vertex>> const &);

    // RVA: 0x56E | Ordinal: 1391
        void setFragmentVert(int, class vd5::Vertex);

    // RVA: 0x588 | Ordinal: 1417
        void setTransform(class osg::Matrixd const &);

    // RVA: 0x5B5 | Ordinal: 1462
        void toScene(int, struct offshore::Scene &, int) const;

    // RVA: 0x56 | Ordinal: 87
        void _PointInst(void);
};

} // namespace vd5

// DCS_OPS_RE_EDTERRAIN4.DLL_POINTINST_HPP
