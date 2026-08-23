#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lStandartStructure
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lStandartStructure
{
public:

    // RVA: 0x41 | Ordinal: 66
        void AddFire(float, class osg::Vec3f const &, bool, char const *, float);

    // RVA: 0x4B | Ordinal: 76
        void CreateDynamicData(void);

    // RVA: 0x4D | Ordinal: 78
        void CreateFires(void);

    // RVA: 0x50 | Ordinal: 81
        void CreateSmokeCloud(void);

    // RVA: 0x59 | Ordinal: 90
        void Degrade(bool);

    // RVA: 0x5C | Ordinal: 93
        void FallDown(void);

    // RVA: 0x5D | Ordinal: 94
        void GetDrawArguments(void);

    // RVA: 0x5E | Ordinal: 95
        void GetModel(void);

    // RVA: 0x61 | Ordinal: 98
        void IsFallInProgress(void);

    // RVA: 0x65 | Ordinal: 102
        void Position(double);

    // RVA: 0x66 | Ordinal: 103
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x12 | Ordinal: 19
        void lStandartStructure(class lStandartStructure const &);

    // RVA: 0x13 | Ordinal: 20
        void lStandartStructure(void);

    // RVA: 0x20 | Ordinal: 33
        void _lStandartStructure(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LSTANDARTSTRUCTURE_HPP
