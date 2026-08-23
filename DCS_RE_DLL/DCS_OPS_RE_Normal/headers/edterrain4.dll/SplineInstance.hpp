#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: SplineInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lLinked {

class SplineInstance
{
public:

    // RVA: 0x25 | Ordinal: 38
        void SplineInstance(void);

    // RVA: 0x168 | Ordinal: 361
        void applyNoise(struct offshore::Mesh &, class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &);

    // RVA: 0x19E | Ordinal: 415
        void buildSceneObjects(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> const *, bool);

    // RVA: 0x2BE | Ordinal: 703
        void getConnectDirection(int, int) const;

    // RVA: 0x2BF | Ordinal: 704
        void getConnectVertex(int, int) const;

    // RVA: 0x353 | Ordinal: 852
        void getOppositePoint(int, int *) const;

    // RVA: 0x501 | Ordinal: 1282
        void projectPointToGeometry(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &, double &);

    // RVA: 0x5A2 | Ordinal: 1443
        void subdivSplineInstance(class ed::vector<struct assets::lLinked::PointInstance, class ed::allocator<struct assets::lLinked::PointInstance>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<double, class ed::allocator<double>> &, class ed::vector<int, class ed::allocator<int>> *, bool) const;
};

} // namespace lLinked
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_SPLINEINSTANCE_HPP
