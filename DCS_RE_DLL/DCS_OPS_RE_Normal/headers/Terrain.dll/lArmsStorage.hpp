#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lArmsStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lArmsStorage
{
public:

    // RVA: 0x49 | Ordinal: 74
        void CreateDynamicData(void);

    // RVA: 0x54 | Ordinal: 85
        void Degrade(bool);

    // RVA: 0x6E | Ordinal: 111
        void getStoreType(void) const;

    // RVA: 0x75 | Ordinal: 118
        void instantiateFromSceneObject(class ISceneObject &);

    // RVA: 0x1 | Ordinal: 2
        void lArmsStorage(class lArmsStorage &&);

    // RVA: 0x2 | Ordinal: 3
        void lArmsStorage(class lArmsStorage const &);

    // RVA: 0x3 | Ordinal: 4
        void lArmsStorage(void);

    // RVA: 0x17 | Ordinal: 24
        void _lArmsStorage(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LARMSSTORAGE_HPP
