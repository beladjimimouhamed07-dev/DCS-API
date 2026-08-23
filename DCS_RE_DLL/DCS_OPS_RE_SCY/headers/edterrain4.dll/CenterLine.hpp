#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: CenterLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lPointAsset {

class CenterLine
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CenterLine(void);

    // RVA: 0x195 | Ordinal: 406
        void buildPolyline(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, float) const;

    // RVA: 0x204 | Ordinal: 517
        void dump(bool);

    // RVA: 0x267 | Ordinal: 616
        void findClosestPoint(class osg::Vec3d const &) const;

    // RVA: 0x2A5 | Ordinal: 678
        void getBoundingBox(void) const;

    // RVA: 0x2DC | Ordinal: 733
        void getCurvature(struct edterrain::PointOnRoad const &) const;

    // RVA: 0x2EF | Ordinal: 752
        void getEndCrossroad(void) const;

    // RVA: 0x2F1 | Ordinal: 754
        void getEndPoint(void) const;

    // RVA: 0x308 | Ordinal: 777
        void getLength(struct edterrain::PointOnRoad const &, struct edterrain::PointOnRoad const &) const;

    // RVA: 0x309 | Ordinal: 778
        void getLength(void) const;

    // RVA: 0x358 | Ordinal: 857
        void getParamByLength(double) const;

    // RVA: 0x366 | Ordinal: 871
        void getPoint(struct edterrain::PointOnRoad const &) const;

    // RVA: 0x36F | Ordinal: 880
        void getPointOnSurface(struct edterrain::PointOnRoad const &, struct edterrain::PointOnSurface &) const;

    // RVA: 0x3CB | Ordinal: 972
        void getStartCrossroad(void) const;

    // RVA: 0x3CD | Ordinal: 974
        void getStartPoint(void) const;

    // RVA: 0x3E1 | Ordinal: 994
        void getTangent(struct edterrain::PointOnRoad const &) const;

    // RVA: 0x45F | Ordinal: 1120
        void isPolyline(void) const;

    // RVA: 0x46F | Ordinal: 1136
        void isValid(int) const;

    // RVA: 0x4C0 | Ordinal: 1217
        void movePoint(struct edterrain::PointOnRoad &, double) const;

    // RVA: 0x517 | Ordinal: 1304
        void querySegments(struct edterrain::PointOnRoad const &, struct edterrain::PointOnRoad const &, class std::function<enum edterrain::enQueryObjectBehavior __cdecl(struct edterrain::PointOnRoad const &, struct edterrain::PointOnRoad const &)> &) const;

    // RVA: 0x523 | Ordinal: 1316
        void release(void);
};

} // namespace lPointAsset
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_CENTERLINE_HPP
