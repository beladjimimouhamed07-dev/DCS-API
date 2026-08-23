#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: NegativeFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class NegativeFilter
{
public:

    // RVA: 0x128 | Ordinal: 297
        void NegativeFilter(class AI::NegativeFilter &&);

    // RVA: 0x129 | Ordinal: 298
        void NegativeFilter(class AI::NegativeFilter const &);

    // RVA: 0x12A | Ordinal: 299
        void NegativeFilter(int, struct AI::AttackParam const &);

    // RVA: 0x455 | Ordinal: 1110
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x290 | Ordinal: 657
        void _NegativeFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_NEGATIVEFILTER_HPP
