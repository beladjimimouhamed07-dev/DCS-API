#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: BombingRunway
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class BombingRunway
{
public:

    // RVA: 0x4F | Ordinal: 80
        void BombingRunway(class AI::BombingRunway &&);

    // RVA: 0x50 | Ordinal: 81
        void BombingRunway(class AI::BombingRunway const &);

    // RVA: 0x51 | Ordinal: 82
        void BombingRunway(void);

    // RVA: 0x68D | Ordinal: 1678
        void clone(void) const;

    // RVA: 0x6FA | Ordinal: 1787
        void create(void);

    // RVA: 0x7E0 | Ordinal: 2017
        void getCategory(void) const;

    // RVA: 0x879 | Ordinal: 2170
        void getName(void) const;

    // RVA: 0x9F9 | Ordinal: 2554
        void load(class Lua::Config &);

    // RVA: 0xAC3 | Ordinal: 2756
        void params(void) const;

    // RVA: 0x243 | Ordinal: 580
        void _BombingRunway(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_BOMBINGRUNWAY_HPP
