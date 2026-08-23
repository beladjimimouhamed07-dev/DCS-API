#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lAnimal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lAnimal
{
public:

    // RVA: 0x53 | Ordinal: 84
        void Degrade(bool);

    // RVA: 0x5F | Ordinal: 96
        void Init(struct LandObjectInitData const &);

    // RVA: 0x6B | Ordinal: 108
        void UpdateSound(float, float &);

    // RVA: 0x0 | Ordinal: 1
        void lAnimal(void);

    // RVA: 0x16 | Ordinal: 23
        void _lAnimal(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LANIMAL_HPP
