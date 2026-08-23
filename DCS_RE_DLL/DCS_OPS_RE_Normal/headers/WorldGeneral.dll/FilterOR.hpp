#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FilterOR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FilterOR
{
public:

    // RVA: 0xC5 | Ordinal: 198
        void FilterOR(class AI::FilterOR &&);

    // RVA: 0xC6 | Ordinal: 199
        void FilterOR(class AI::FilterOR const &);

    // RVA: 0xC7 | Ordinal: 200
        void FilterOR(void);

    // RVA: 0x605 | Ordinal: 1542
        void add(class AI::TargetFilter *);

    // RVA: 0x451 | Ordinal: 1106
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x452 | Ordinal: 1107
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &, struct AI::TargetFilterVisitor &) const;

    // RVA: 0xB5C | Ordinal: 2909
        void remove(class AI::TargetFilter *);

    // RVA: 0x26B | Ordinal: 620
        void _FilterOR(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FILTEROR_HPP
