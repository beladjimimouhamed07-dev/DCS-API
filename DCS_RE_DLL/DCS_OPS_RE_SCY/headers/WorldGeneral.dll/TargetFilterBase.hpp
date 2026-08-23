#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TargetFilterBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TargetFilterBase
{
public:

    // RVA: 0x1A5 | Ordinal: 422
        void TargetFilterBase(class AI::TargetFilterBase &&);

    // RVA: 0x1A6 | Ordinal: 423
        void TargetFilterBase(class AI::TargetFilterBase const &);

    // RVA: 0x1A7 | Ordinal: 424
        void TargetFilterBase(int, struct AI::AttackParam const &);

    // RVA: 0x1A8 | Ordinal: 425
        void TargetFilterBase(void);

    // RVA: 0x912 | Ordinal: 2323
        void getWeaponType(void) const;

    // RVA: 0x459 | Ordinal: 1114
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &, struct AI::TargetFilterVisitor &) const;

    // RVA: 0x2B9 | Ordinal: 698
        void _TargetFilterBase(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TARGETFILTERBASE_HPP
