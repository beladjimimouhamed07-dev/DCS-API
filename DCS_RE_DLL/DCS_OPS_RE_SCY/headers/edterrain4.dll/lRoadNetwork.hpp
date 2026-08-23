#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoadNetwork
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoadNetwork
{
public:

    // RVA: 0x13A | Ordinal: 315
        void addBridge(struct landscape4::lCrossroad const &);

    // RVA: 0x13B | Ordinal: 316
        void addCrossroad(struct landscape4::lCrossroad const &);

    // RVA: 0x13C | Ordinal: 317
        void addCrossroadType(class ed::basic_string<char> const &);

    // RVA: 0x149 | Ordinal: 330
        void addRoad(class landscape4::lRoad const &);

    // RVA: 0x14C | Ordinal: 333
        void addRoadType(class ed::basic_string<char> const &, struct landscape4::lRoadTrafficLanes const &, struct landscape4::lRoadTrafficLanes const &);

    // RVA: 0x198 | Ordinal: 409
        void buildRoadGraph(void);

    // RVA: 0x1BB | Ordinal: 444
        void canMoveAlongRoadAndTrafficLanes(struct landscape4::ICheckRoadSink *, int, double, double, double);

    // RVA: 0x1CE | Ordinal: 463
        void clear(void);

    // RVA: 0x1F0 | Ordinal: 497
        void crossroadExists(int);

    // RVA: 0x224 | Ordinal: 549
        void dump(struct offshore::Scene &, bool);

    // RVA: 0x22E | Ordinal: 559
        void dumpCrossroad(struct offshore::Scene &, int, class ed::basic_string<char> const &);

    // RVA: 0x230 | Ordinal: 561
        void dumpGraph(struct offshore::Scene &);

    // RVA: 0x264 | Ordinal: 613
        void findClosestCrossroad(class osg::Vec3d const &, int &, struct landscape4::ICheckRoadSink *, double);

    // RVA: 0x26A | Ordinal: 619
        void findClosestPoint(class osg::Vec3d const &, struct landscape4::lPointOnRoad &, struct landscape4::ICheckRoadSink *, double);

    // RVA: 0x2CA | Ordinal: 715
        void getControlVertex(struct landscape4::lPointOnRoad const &) const;

    // RVA: 0x2D4 | Ordinal: 725
        void getCrossroadDirection(int) const;

    // RVA: 0x2D8 | Ordinal: 729
        void getCrossroadPosition(int) const;

    // RVA: 0x2E4 | Ordinal: 741
        void getDeriv(struct landscape4::lPointOnRoad const &, int) const;

    // RVA: 0x369 | Ordinal: 874
        void getPoint(struct landscape4::lPointOnRoad const &) const;

    // RVA: 0x374 | Ordinal: 885
        void getPointOnSurface(struct landscape4::lPointOnRoad const &, struct edterrain::PointOnSurface &) const;

    // RVA: 0x388 | Ordinal: 905
        void getRect(void) const;

    // RVA: 0x396 | Ordinal: 919
        void getRoadFromPointToPoint(struct landscape4::lPointOnRoad const &, struct landscape4::lPointOnRoad const &, double, double, struct landscape4::ICheckRoadSink *, class ed::vector<struct std::pair<unsigned int, unsigned int>, class ed::allocator<struct std::pair<unsigned int, unsigned int>>> *);

    // RVA: 0x39B | Ordinal: 924
        void getRoadType(class ed::basic_string<char> const &) const;

    // RVA: 0x3EF | Ordinal: 1008
        void getTrafficLanes(class landscape4::lRoad const &, bool) const;

    // RVA: 0x461 | Ordinal: 1122
        void isRoadHasTrafficlanes(int);

    // RVA: 0x45 | Ordinal: 70
        void lRoadNetwork(void);

    // RVA: 0x493 | Ordinal: 1172
        void load(class io::MmfStream &);

    // RVA: 0x494 | Ordinal: 1173
        void load(class ed::basic_string<char> const &);

    // RVA: 0x495 | Ordinal: 1174
        void load(char const *);

    // RVA: 0x4E8 | Ordinal: 1257
        void postloading(void);

    // RVA: 0x531 | Ordinal: 1330
        void roadExists(int);

    // RVA: 0x54E | Ordinal: 1359
        void save(class ed::basic_string<char> const &);

    // RVA: 0x54F | Ordinal: 1360
        void save(char const *);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROADNETWORK_HPP
