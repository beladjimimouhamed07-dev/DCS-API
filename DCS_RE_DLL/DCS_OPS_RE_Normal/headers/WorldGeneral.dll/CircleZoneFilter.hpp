#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CircleZoneFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CircleZoneFilter
{
public:

    // RVA: 0x61 | Ordinal: 98
        void CircleZoneFilter(class AI::CircleZoneFilter &&);

    // RVA: 0x62 | Ordinal: 99
        void CircleZoneFilter(class AI::CircleZoneFilter const &);

    // RVA: 0x63 | Ordinal: 100
        void CircleZoneFilter(class osg::Vec2f const &, float, int, struct AI::AttackParam const &);

    // RVA: 0x44C | Ordinal: 1101
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x249 | Ordinal: 586
        void _CircleZoneFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CIRCLEZONEFILTER_HPP
