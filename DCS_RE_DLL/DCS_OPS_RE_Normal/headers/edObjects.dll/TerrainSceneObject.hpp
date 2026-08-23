#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: TerrainSceneObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TerrainSceneObject
{
public:

    // RVA: 0x1F | Ordinal: 32
        void TerrainSceneObject(class TerrainSceneObject &&);

    // RVA: 0x20 | Ordinal: 33
        void TerrainSceneObject(class TerrainSceneObject const &);

    // RVA: 0x21 | Ordinal: 34
        void TerrainSceneObject(unsigned int);

    // RVA: 0x16E | Ordinal: 367
        void getModelParams(void) const;

    // RVA: 0x173 | Ordinal: 372
        void getObjectID(void) const;

    // RVA: 0x177 | Ordinal: 376
        void getObjectPosition(void) const;

    // RVA: 0x17B | Ordinal: 380
        void getObjectType(void) const;

    // RVA: 0x189 | Ordinal: 394
        void getViType(void) const;

    // RVA: 0x47 | Ordinal: 72
        void _TerrainSceneObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_TERRAINSCENEOBJECT_HPP
