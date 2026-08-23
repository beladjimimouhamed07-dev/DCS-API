#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: RouteZoneFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class RouteZoneFilter
{
public:

    // RVA: 0x155 | Ordinal: 342
        void RouteZoneFilter(class AI::RouteZoneFilter &&);

    // RVA: 0x156 | Ordinal: 343
        void RouteZoneFilter(class AI::RouteZoneFilter const &);

    // RVA: 0x157 | Ordinal: 344
        void RouteZoneFilter(float, struct Waypoint *, unsigned int, int, int, struct AI::AttackParam const &);

    // RVA: 0x9BD | Ordinal: 2494
        void isPointTooFarFromRoute_(class osg::Vec3f const &) const;

    // RVA: 0x458 | Ordinal: 1113
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x2A0 | Ordinal: 673
        void _RouteZoneFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ROUTEZONEFILTER_HPP
