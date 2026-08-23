#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: LoadingShip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class LoadingShip
{
public:

    // RVA: 0x10B | Ordinal: 268
        void LoadingShip(class AI::LoadingShip &&);

    // RVA: 0x10C | Ordinal: 269
        void LoadingShip(class AI::LoadingShip const &);

    // RVA: 0x10D | Ordinal: 270
        void LoadingShip(void);

    // RVA: 0x6B5 | Ordinal: 1718
        void clone(void) const;

    // RVA: 0x724 | Ordinal: 1829
        void create(void);

    // RVA: 0x8A0 | Ordinal: 2209
        void getName(void) const;

    // RVA: 0xA22 | Ordinal: 2595
        void load(class Lua::Config &);

    // RVA: 0xAE6 | Ordinal: 2791
        void params(void) const;

    // RVA: 0x283 | Ordinal: 644
        void _LoadingShip(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_LOADINGSHIP_HPP
