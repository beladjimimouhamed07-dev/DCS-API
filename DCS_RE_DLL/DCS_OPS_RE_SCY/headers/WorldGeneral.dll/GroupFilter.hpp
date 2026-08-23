#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: GroupFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class GroupFilter
{
public:

    // RVA: 0xE1 | Ordinal: 226
        void GroupFilter(class AI::GroupFilter &&);

    // RVA: 0xE2 | Ordinal: 227
        void GroupFilter(class AI::GroupFilter const &);

    // RVA: 0xE3 | Ordinal: 228
        void GroupFilter(class cPointerTemplate<class wControl>, int, struct AI::AttackParam const &);

    // RVA: 0xE4 | Ordinal: 229
        void GroupFilter(void);

    // RVA: 0x454 | Ordinal: 1109
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x274 | Ordinal: 629
        void _GroupFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_GROUPFILTER_HPP
