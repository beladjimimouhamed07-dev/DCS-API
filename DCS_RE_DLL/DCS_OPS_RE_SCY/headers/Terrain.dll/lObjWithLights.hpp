#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lObjWithLights
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lObjWithLights
{
public:

    // RVA: 0x4F | Ordinal: 80
        void CreateLights(void);

    // RVA: 0x55 | Ordinal: 86
        void Degrade(bool);

    // RVA: 0x5B | Ordinal: 92
        void DestroyLights(void);

    // RVA: 0x60 | Ordinal: 97
        void Init(struct LandObjectInitData const &);

    // RVA: 0x68 | Ordinal: 105
        void ReinitState(void);

    // RVA: 0x6 | Ordinal: 7
        void lObjWithLights(class lObjWithLights const &);

    // RVA: 0x7 | Ordinal: 8
        void lObjWithLights(void);

    // RVA: 0x79 | Ordinal: 122
        void onStateChanged(void);

    // RVA: 0x1A | Ordinal: 27
        void _lObjWithLights(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LOBJWITHLIGHTS_HPP
