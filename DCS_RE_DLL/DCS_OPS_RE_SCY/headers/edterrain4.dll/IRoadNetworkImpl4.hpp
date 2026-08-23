#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: IRoadNetworkImpl4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class IRoadNetworkImpl4
{
public:

    // RVA: 0x4 | Ordinal: 5
        void IRoadNetworkImpl4(class ITerrainImpl4 *, struct landscape4::lRoadNetwork *);

    // RVA: 0x1BE | Ordinal: 447
        void chainCount(void) const;

    // RVA: 0x1DE | Ordinal: 479
        void convertToPointOnRoad(struct landscape4::lPointOnRoad const &) const;

    // RVA: 0x1DD | Ordinal: 478
        void convertToPointOnRoad4(struct edterrain::PointOnRoad const &) const;

    // RVA: 0x1ED | Ordinal: 494
        void createRoute(struct edterrain::PointOnRoad const &, struct edterrain::PointOnRoad const &, class edterrain::ICheckRoadSink *) const;

    // RVA: 0x1F1 | Ordinal: 498
        void crossroadsCount(void) const;

    // RVA: 0x263 | Ordinal: 612
        void findClosestCrossroad(class osg::Vec3d const &, class edterrain::ICheckRoadSink *, double) const;

    // RVA: 0x268 | Ordinal: 617
        void findClosestPoint(class osg::Vec3d const &, struct edterrain::PointOnRoad &, class edterrain::ICheckRoadSink *, double) const;

    // RVA: 0x2B0 | Ordinal: 689
        void getChain(int) const;

    // RVA: 0x2B1 | Ordinal: 690
        void getChainName(int, int) const;

    // RVA: 0x2B2 | Ordinal: 691
        void getChainNumber(int) const;

    // RVA: 0x2D3 | Ordinal: 724
        void getCrossroad(int) const;

    // RVA: 0x2D7 | Ordinal: 728
        void getCrossroadPoint(int) const;

    // RVA: 0x367 | Ordinal: 872
        void getPoint(struct edterrain::PointOnRoad const &, class osg::Vec3d &) const;

    // RVA: 0x370 | Ordinal: 881
        void getPointOnSurface(struct edterrain::PointOnRoad const &, struct edterrain::PointOnSurface &) const;

    // RVA: 0x392 | Ordinal: 915
        void getRoad(int) const;

    // RVA: 0x4AC | Ordinal: 1197
        void loadRoute(class ed::basic_string<char> const &) const;

    // RVA: 0x524 | Ordinal: 1317
        void release(void);

    // RVA: 0x532 | Ordinal: 1331
        void roadsCount(void) const;

    // RVA: 0x55F | Ordinal: 1376
        void saveRoute(class edterrain::IRoute *, class ed::basic_string<char> const &) const;
};

// DCS_OPS_RE_EDTERRAIN4.DLL_IROADNETWORKIMPL4_HPP
