#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DynamicCircleZoneFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DynamicCircleZoneFilter
{
public:

    // RVA: 0x94 | Ordinal: 149
        void DynamicCircleZoneFilter(class AI::DynamicCircleZoneFilter &&);

    // RVA: 0x95 | Ordinal: 150
        void DynamicCircleZoneFilter(class AI::DynamicCircleZoneFilter const &);

    // RVA: 0x96 | Ordinal: 151
        void DynamicCircleZoneFilter(class MovingObject *, float, int, struct AI::AttackParam const &);

    // RVA: 0x44E | Ordinal: 1103
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x25B | Ordinal: 604
        void _DynamicCircleZoneFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DYNAMICCIRCLEZONEFILTER_HPP
