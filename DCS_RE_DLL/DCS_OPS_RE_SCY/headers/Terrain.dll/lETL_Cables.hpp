#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lETL_Cables
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lETL_Cables
{
public:

    // RVA: 0x42 | Ordinal: 67
        void AttachPos(bool, int, class osg::Vec3f &);

    // RVA: 0x43 | Ordinal: 68
        void CableCount(void);

    // RVA: 0x44 | Ordinal: 69
        void CableExists(int);

    // RVA: 0x45 | Ordinal: 70
        void CheckCableShapeIntersection(int, class ISceneObject const &, struct wsCollisionData &);

    // RVA: 0x46 | Ordinal: 71
        void CheckGroundIntersection(void);

    // RVA: 0x47 | Ordinal: 72
        void CheckShapeIntersection(class ISceneObject const &, bool);

    // RVA: 0x4A | Ordinal: 75
        void CreateDynamicData(void);

    // RVA: 0x4E | Ordinal: 79
        void CreateGShape(void);

    // RVA: 0x51 | Ordinal: 82
        void CreateWire(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, int, bool);

    // RVA: 0x52 | Ordinal: 83
        void CutCable(int);

    // RVA: 0x63 | Ordinal: 100
        void LocalBox(double);

    // RVA: 0x67 | Ordinal: 104
        void ReinitState(void);

    // RVA: 0x4 | Ordinal: 5
        void lETL_Cables(class lETL_Cables const &);

    // RVA: 0x5 | Ordinal: 6
        void lETL_Cables(void);

    // RVA: 0x7B | Ordinal: 124
        void setLinkedObjects(struct ed::array<unsigned int, 2> const &);

    // RVA: 0x18 | Ordinal: 25
        void _lETL_Cables(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LETL_CABLES_HPP
