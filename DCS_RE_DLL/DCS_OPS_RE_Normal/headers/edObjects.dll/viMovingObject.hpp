#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viMovingObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viMovingObject
{
public:

    // RVA: 0xE5 | Ordinal: 230
        void GetSize(void);

    // RVA: 0x117 | Ordinal: 280
        void ScalarVelocity(void) const;

    // RVA: 0x145 | Ordinal: 326
        void VectorAngular(void) const;

    // RVA: 0x146 | Ordinal: 327
        void VectorVelocity(void) const;

    // RVA: 0x2A | Ordinal: 43
        void viMovingObject(unsigned int, class osg::Vec3f const &);

    // RVA: 0x4D | Ordinal: 78
        void _viMovingObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIMOVINGOBJECT_HPP
