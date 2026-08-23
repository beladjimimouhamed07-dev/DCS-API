#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MeshInst
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace vd5 {

class MeshInst
{
public:

    // RVA: 0xD | Ordinal: 14
        void MeshInst(class vd5::MeshInst &&);

    // RVA: 0xE | Ordinal: 15
        void MeshInst(class vd5::MeshInst const &);

    // RVA: 0xF | Ordinal: 16
        void MeshInst(void);

    // RVA: 0x176 | Ordinal: 375
        void asset(void) const;

    // RVA: 0x365 | Ordinal: 870
        void getParentMetaInst(void) const;

    // RVA: 0x37F | Ordinal: 896
        void getPolygons(void) const;

    // RVA: 0x3BC | Ordinal: 957
        void getSourceNode(void) const;

    // RVA: 0x3F2 | Ordinal: 1011
        void getTransform(void) const;

    // RVA: 0x56F | Ordinal: 1392
        void setInstanceArea(struct offshore::Mesh const &);

    // RVA: 0x57E | Ordinal: 1407
        void setParentMetaInst(int);

    // RVA: 0x587 | Ordinal: 1416
        void setTransform(class osg::Matrixd const &);

    // RVA: 0x5B4 | Ordinal: 1461
        void toScene(int, struct offshore::Scene &, int) const;

    // RVA: 0x53 | Ordinal: 84
        void _MeshInst(void);
};

} // namespace vd5

// DCS_OPS_RE_EDTERRAIN4.DLL_MESHINST_HPP
