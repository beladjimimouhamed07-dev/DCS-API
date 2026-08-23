#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoadTrafficLanes
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoadTrafficLanes
{
public:

    // RVA: 0x153 | Ordinal: 340
        void addTrafficLane(double, double);

    // RVA: 0x2BB | Ordinal: 700
        void getClosestTrafficLane(double) const;

    // RVA: 0x34F | Ordinal: 848
        void getOffsetByVelocity(double, double &) const;
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROADTRAFFICLANES_HPP
