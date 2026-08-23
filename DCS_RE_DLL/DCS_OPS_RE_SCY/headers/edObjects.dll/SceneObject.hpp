#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: SceneObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SceneObject
{
public:

    // RVA: 0x1E | Ordinal: 31
        void SceneObject(unsigned int);

    // RVA: 0x16D | Ordinal: 366
        void getModelParams(void) const;

    // RVA: 0x172 | Ordinal: 371
        void getObjectID(void) const;

    // RVA: 0x176 | Ordinal: 375
        void getObjectPosition(void) const;

    // RVA: 0x17A | Ordinal: 379
        void getObjectType(void) const;

    // RVA: 0x188 | Ordinal: 393
        void getViType(void) const;

    // RVA: 0x18D | Ordinal: 398
        void get_Registered(void);

    // RVA: 0x46 | Ordinal: 71
        void _SceneObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_SCENEOBJECT_HPP
