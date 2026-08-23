#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lOilTank
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lOilTank
{
public:

    // RVA: 0x4C | Ordinal: 77
        void CreateFires(void);

    // RVA: 0x56 | Ordinal: 87
        void Degrade(bool);

    // RVA: 0x69 | Ordinal: 106
        void ReinitState(void);

    // RVA: 0x6F | Ordinal: 112
        void getStoreType(void) const;

    // RVA: 0x76 | Ordinal: 119
        void instantiateFromSceneObject(class ISceneObject &);

    // RVA: 0x8 | Ordinal: 9
        void lOilTank(class lOilTank const &);

    // RVA: 0x9 | Ordinal: 10
        void lOilTank(void);

    // RVA: 0x1B | Ordinal: 28
        void _lOilTank(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LOILTANK_HPP
