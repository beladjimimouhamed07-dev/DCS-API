#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: DistanceKillerManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DistanceKillerManager
{
public:

    // RVA: 0x5 | Ordinal: 6
        void DistanceKillerManager(class DistanceKillerManager const &);

    // RVA: 0x6 | Ordinal: 7
        void DistanceKillerManager(float);

    // RVA: 0x10F | Ordinal: 272
        void Register(class DistanceKiller *);

    // RVA: 0x12B | Ordinal: 300
        void SetThreshold(float);

    // RVA: 0x13A | Ordinal: 315
        void Unregister(class DistanceKiller *);

    // RVA: 0x13E | Ordinal: 319
        void Update(class osg::Vec3f const &);

    // RVA: 0x3D | Ordinal: 62
        void _DistanceKillerManager(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_DISTANCEKILLERMANAGER_HPP
