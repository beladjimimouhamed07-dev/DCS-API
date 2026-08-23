#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: ForestSceneObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ForestSceneObject
{
public:

    // RVA: 0x7 | Ordinal: 8
        void ForestSceneObject(class ForestSceneObject &&);

    // RVA: 0x8 | Ordinal: 9
        void ForestSceneObject(class ForestSceneObject const &);

    // RVA: 0x9 | Ordinal: 10
        void ForestSceneObject(class osg::Matrixd, class model::IModel *);

    // RVA: 0x16C | Ordinal: 365
        void getModelParams(void) const;

    // RVA: 0x171 | Ordinal: 370
        void getObjectID(void) const;

    // RVA: 0x175 | Ordinal: 374
        void getObjectPosition(void) const;

    // RVA: 0x179 | Ordinal: 378
        void getObjectType(void) const;

    // RVA: 0x187 | Ordinal: 392
        void getViType(void) const;

    // RVA: 0x3E | Ordinal: 63
        void _ForestSceneObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_FORESTSCENEOBJECT_HPP
