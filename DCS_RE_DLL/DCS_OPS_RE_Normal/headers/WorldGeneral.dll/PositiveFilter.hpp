#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: PositiveFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class PositiveFilter
{
public:

    // RVA: 0x141 | Ordinal: 322
        void PositiveFilter(class AI::PositiveFilter &&);

    // RVA: 0x142 | Ordinal: 323
        void PositiveFilter(class AI::PositiveFilter const &);

    // RVA: 0x143 | Ordinal: 324
        void PositiveFilter(int, struct AI::AttackParam const &);

    // RVA: 0x457 | Ordinal: 1112
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x299 | Ordinal: 666
        void _PositiveFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_POSITIVEFILTER_HPP
