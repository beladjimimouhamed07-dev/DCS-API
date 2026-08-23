#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: RecoveryTanker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class RecoveryTanker
{
public:

    // RVA: 0x144 | Ordinal: 325
        void RecoveryTanker(class AI::RecoveryTanker &&);

    // RVA: 0x145 | Ordinal: 326
        void RecoveryTanker(class AI::RecoveryTanker const &);

    // RVA: 0x146 | Ordinal: 327
        void RecoveryTanker(void);

    // RVA: 0x6BD | Ordinal: 1726
        void clone(void) const;

    // RVA: 0x72E | Ordinal: 1839
        void create(void);

    // RVA: 0x804 | Ordinal: 2053
        void getCategory(void) const;

    // RVA: 0x8A9 | Ordinal: 2218
        void getName(void) const;

    // RVA: 0xA2C | Ordinal: 2605
        void load(class Lua::Config &);

    // RVA: 0x29A | Ordinal: 667
        void _RecoveryTanker(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_RECOVERYTANKER_HPP
