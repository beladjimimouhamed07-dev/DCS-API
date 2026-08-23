#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lCrossroad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lCrossroad
{
public:

    // RVA: 0x14A | Ordinal: 331
        void addRoadConnection(int, int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, double);

    // RVA: 0x383 | Ordinal: 900
        void getPossibleOutGoingRoads(int, class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x393 | Ordinal: 916
        void getRoadConnection(int, int, bool &);

    // RVA: 0x395 | Ordinal: 918
        void getRoadDirection(int);

    // RVA: 0x397 | Ordinal: 920
        void getRoadIndex(int);

    // RVA: 0x35 | Ordinal: 54
        void lCrossroad(class ed::vector<int, class ed::allocator<int>> const &, class ed::vector<bool, class ed::allocator<bool>> const &, bool);

    // RVA: 0x36 | Ordinal: 55
        void lCrossroad(bool);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LCROSSROAD_HPP
