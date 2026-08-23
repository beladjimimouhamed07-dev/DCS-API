#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttackTargetsInZone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttackTargetsInZone
{
public:

    // RVA: 0x3D | Ordinal: 62
        void AttackTargetsInZone(class AI::AttackTargetsInZone &&);

    // RVA: 0x3E | Ordinal: 63
        void AttackTargetsInZone(class AI::AttackTargetsInZone const &);

    // RVA: 0x3F | Ordinal: 64
        void AttackTargetsInZone(void);

    // RVA: 0x689 | Ordinal: 1674
        void clone(void) const;

    // RVA: 0x6F6 | Ordinal: 1783
        void create(void);

    // RVA: 0x7DC | Ordinal: 2013
        void getCategory(void) const;

    // RVA: 0x875 | Ordinal: 2166
        void getName(void) const;

    // RVA: 0x9F5 | Ordinal: 2550
        void load(class Lua::Config &);

    // RVA: 0xAC0 | Ordinal: 2753
        void params(void) const;

    // RVA: 0x23D | Ordinal: 574
        void _AttackTargetsInZone(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACKTARGETSINZONE_HPP
