#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: export5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class export5
{
public:

    // RVA: 0x16E | Ordinal: 367
        void applySurfaceTypes(struct offshore::Scene &, int, class ed::basic_string<char> const &);

    // RVA: 0x189 | Ordinal: 394
        void buildEdges(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> const &, class ed::basic_string<char>, class std::map<struct offshore::Edge32, struct export5::EdgePolys, struct std::less<struct offshore::Edge32>, class ed::allocator<struct std::pair<struct offshore::Edge32 const, struct export5::EdgePolys>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x199 | Ordinal: 410
        void buildRoadNetworkByVD5(class assets::lLinked &, enum export5::RoadNetworkType, struct landscape4::lRoadNetwork &);

    // RVA: 0x1A0 | Ordinal: 417
        void buildSplineClosedBorder(struct assets::lLinked::SplineInstance const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct offshore::Spline &, double);

    // RVA: 0x1A1 | Ordinal: 418
        void buildSplineDetails(struct offshore::Spline const &, struct assets::lSplineAsset const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<struct assets::lLinked::SceneObject, class ed::allocator<struct assets::lLinked::SceneObject>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);

    // RVA: 0x1C6 | Ordinal: 455
        void checkMeshBordersIntersections(struct offshore::Mesh const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1F3 | Ordinal: 500
        void cutBySquares(struct offshore::Mesh const &, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> const &, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> const &, class ed::vector<struct export5::Square, class ed::allocator<struct export5::Square>> &, class std::map<int, class ed::deque<int, class ed::allocator<int>>, struct std::less<int>, class ed::allocator<struct std::pair<int const, class ed::deque<int, class ed::allocator<int>>>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x253 | Ordinal: 596
        void extractRoutes(class assets::lLinked &, struct offshore::Scene &, int);

    // RVA: 0x258 | Ordinal: 601
        void fillSurfaceHoles(struct offshore::Mesh const &, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> const &, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> const &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> &, class ed::list<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x26F | Ordinal: 624
        void findNearestMeshPoint2d(struct offshore::Mesh const &, class osg::Vec3d const &, class osg::Vec3d &, class offshore::PolygonQuadTreeBase<struct offshore::Polygon> &, double, class std::function<bool __cdecl(struct offshore::Mesh const &, int, struct offshore::Polygon const &)> *);

    // RVA: 0x42B | Ordinal: 1068
        void instanceMeshAsset(struct assets::lLinked::MeshInstance const &, int, struct offshore::Scene &, int, bool, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Mesh const &, class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &);

    // RVA: 0x42C | Ordinal: 1069
        void instanceMeshData(class assets::lLinked const &, struct offshore::Scene &, int, bool, bool, struct offshore::Scene *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::MeshInstance const &)> *, struct offshore::Mesh *);

    // RVA: 0x42D | Ordinal: 1070
        void instancePointAsset(struct assets::lLinked::PointInstance const &, int, struct offshore::Scene &, int, class export5::RebindMesh *, class ed::vector<int, class ed::allocator<int>> *, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x42E | Ordinal: 1071
        void instanceSplineAsset(struct assets::lLinked::SplineInstance &, int, struct offshore::Scene &, int, class assets::lLinked const *, class export5::RebindMesh *, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> *, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> *, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x430 | Ordinal: 1073
        void instanceVectorData2(class assets::lLinked const &, struct offshore::Scene &, int, class export5::RebindMesh *, class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &)> *, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> *, bool);

    // RVA: 0x4F8 | Ordinal: 1273
        void prepareMesh(struct offshore::Mesh &, struct landscape4::MaterialAlias *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x5A8 | Ordinal: 1449
        void surfaceCutIn(struct offshore::Mesh &, class ed::deque<struct offshore::Mesh, class ed::allocator<struct offshore::Mesh>> const &, class assets::lLinked const &, struct offshore::Scene &, class ed::vector<class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>>, class ed::allocator<class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_EXPORT5_HPP
