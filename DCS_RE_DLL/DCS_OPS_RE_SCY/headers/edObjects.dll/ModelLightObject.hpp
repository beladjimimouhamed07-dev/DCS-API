#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: ModelLightObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ModelLightObject
{
public:

    // RVA: 0xD7 | Ordinal: 216
        void GetPoint(void);

    // RVA: 0xDC | Ordinal: 221
        void GetPosition(void);

    // RVA: 0xE3 | Ordinal: 228
        void GetSize(void);

    // RVA: 0xE7 | Ordinal: 232
        void Init(class viObjectShape *, unsigned int);

    // RVA: 0x1A | Ordinal: 27
        void ModelLightObject(void);

    // RVA: 0x108 | Ordinal: 265
        void PrepareFrame(class osg::Vec3d const &);

    // RVA: 0x13F | Ordinal: 320
        void Update(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_MODELLIGHTOBJECT_HPP
