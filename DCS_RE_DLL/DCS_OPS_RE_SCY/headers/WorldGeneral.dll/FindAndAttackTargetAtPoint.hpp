#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FindAndAttackTargetAtPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FindAndAttackTargetAtPoint
{
public:

    // RVA: 0xC8 | Ordinal: 201
        void FindAndAttackTargetAtPoint(class AI::FindAndAttackTargetAtPoint &&);

    // RVA: 0xC9 | Ordinal: 202
        void FindAndAttackTargetAtPoint(class AI::FindAndAttackTargetAtPoint const &);

    // RVA: 0xCA | Ordinal: 203
        void FindAndAttackTargetAtPoint(void);

    // RVA: 0x6AD | Ordinal: 1710
        void clone(void) const;

    // RVA: 0x71A | Ordinal: 1819
        void create(void);

    // RVA: 0x7F5 | Ordinal: 2038
        void getCategory(void) const;

    // RVA: 0x898 | Ordinal: 2201
        void getName(void) const;

    // RVA: 0xA19 | Ordinal: 2586
        void load(class Lua::Config &);

    // RVA: 0xADE | Ordinal: 2783
        void params(void) const;

    // RVA: 0x26C | Ordinal: 621
        void _FindAndAttackTargetAtPoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FINDANDATTACKTARGETATPOINT_HPP
