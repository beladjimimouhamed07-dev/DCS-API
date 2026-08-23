#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FilterAND
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FilterAND
{
public:

    // RVA: 0xC2 | Ordinal: 195
        void FilterAND(class AI::FilterAND &&);

    // RVA: 0xC3 | Ordinal: 196
        void FilterAND(class AI::FilterAND const &);

    // RVA: 0xC4 | Ordinal: 197
        void FilterAND(void);

    // RVA: 0x604 | Ordinal: 1541
        void add(class AI::TargetFilter *);

    // RVA: 0x44F | Ordinal: 1104
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x450 | Ordinal: 1105
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &, struct AI::TargetFilterVisitor &) const;

    // RVA: 0xB5B | Ordinal: 2908
        void remove(class AI::TargetFilter *);

    // RVA: 0x26A | Ordinal: 619
        void _FilterAND(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FILTERAND_HPP
