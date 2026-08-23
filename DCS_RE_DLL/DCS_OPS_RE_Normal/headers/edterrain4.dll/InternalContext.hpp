#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: InternalContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InternalContext
{
public:

    // RVA: 0x38A | Ordinal: 907
        void getRemovedRouteVehicles(void) const;

    // RVA: 0x38B | Ordinal: 908
        void getRemovedRoutes(void) const;

    // RVA: 0x39E | Ordinal: 927
        void getSceneGeometry(int, int *) const;

    // RVA: 0x3A6 | Ordinal: 935
        void getSceneObjectType(int, int) const;

    // RVA: 0x462 | Ordinal: 1123
        void isSceneGeometryNeedUpdate(int, int) const;

    // RVA: 0x469 | Ordinal: 1130
        void isSurfaceSceneObjectsNeedUpdate(void);

    // RVA: 0x507 | Ordinal: 1288
        void queryDestructingObjectsCB(class osg::Polytope const &, class std::function<void __cdecl(unsigned int, class osg::Matrixd const &, float)>);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_INTERNALCONTEXT_HPP
