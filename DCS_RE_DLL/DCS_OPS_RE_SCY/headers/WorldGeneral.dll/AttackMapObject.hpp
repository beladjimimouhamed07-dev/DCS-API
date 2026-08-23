#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttackMapObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttackMapObject
{
public:

    // RVA: 0x37 | Ordinal: 56
        void AttackMapObject(class AI::AttackMapObject &&);

    // RVA: 0x38 | Ordinal: 57
        void AttackMapObject(class AI::AttackMapObject const &);

    // RVA: 0x39 | Ordinal: 58
        void AttackMapObject(void);

    // RVA: 0x687 | Ordinal: 1672
        void clone(void) const;

    // RVA: 0x6F4 | Ordinal: 1781
        void create(void);

    // RVA: 0x7DA | Ordinal: 2011
        void getCategory(void) const;

    // RVA: 0x873 | Ordinal: 2164
        void getName(void) const;

    // RVA: 0x9F2 | Ordinal: 2547
        void load(class Lua::Config &);

    // RVA: 0xABE | Ordinal: 2751
        void params(void) const;

    // RVA: 0x23B | Ordinal: 572
        void _AttackMapObject(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACKMAPOBJECT_HPP
