#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lLinked
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lLinked
{
public:

    // RVA: 0x154 | Ordinal: 341
        void addUnderBridgeSeparators(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x15E | Ordinal: 351
        void applyAliases(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x161 | Ordinal: 354
        void applyMaxSegmentLength(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x163 | Ordinal: 356
        void applyMeshAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::MeshInstance const &)> const *, class std::function<bool __cdecl(int, struct offshore::Mesh const &)> const *, struct offshore::Mesh *, class std::map<struct offshore::Edge32, struct std::pair<int, int>, struct std::less<struct offshore::Edge32>, class ed::allocator<struct std::pair<struct offshore::Edge32 const, struct std::pair<int, int>>>> *, class ed::vector<int, class ed::allocator<int>> *, struct offshore::Scene *, bool, bool);

    // RVA: 0x164 | Ordinal: 357
        void applyMetaAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene &, struct offshore::Scene *);

    // RVA: 0x166 | Ordinal: 359
        void applyMetaAssetsWithVD(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene &, struct offshore::Scene *);

    // RVA: 0x165 | Ordinal: 358
        void applyMetaAssetsWithVD2(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene &, struct offshore::Scene *);

    // RVA: 0x167 | Ordinal: 360
        void applyNoCutinAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene &, int, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> const *);

    // RVA: 0x16C | Ordinal: 365
        void applySplinesMeshSubAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &)> const *, struct offshore::Mesh *, struct offshore::Scene *);

    // RVA: 0x16D | Ordinal: 366
        void applySubAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x17C | Ordinal: 381
        void assignPointsSceneObjectsIDs(void);

    // RVA: 0x181 | Ordinal: 386
        void bindSeparators(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x18E | Ordinal: 399
        void buildMeshDetails(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::MeshInstance const &)> const *, class std::function<bool __cdecl(struct assets::lLinked::SceneObject const &)> const *, struct offshore::Mesh *);

    // RVA: 0x194 | Ordinal: 405
        void buildPointDetails(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &)> const *, bool);

    // RVA: 0x19A | Ordinal: 411
        void buildRoadsStripe(struct offshore::Scene &, int) const;

    // RVA: 0x1A2 | Ordinal: 419
        void buildSplineDetails(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> const *, bool);

    // RVA: 0x1A3 | Ordinal: 420
        void buildSplineInstances(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1A4 | Ordinal: 421
        void buildSplinesBorderEdges(struct offshore::Scene &, struct offshore::Mesh &);

    // RVA: 0x1B6 | Ordinal: 439
        void calculateParamSplineInstances(void);

    // RVA: 0x1BF | Ordinal: 448
        void check(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1C1 | Ordinal: 450
        void checkCurvature(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1C2 | Ordinal: 451
        void checkCutinFullLinking(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &) const;

    // RVA: 0x1C4 | Ordinal: 453
        void checkIntersections(class ed::set<int, struct std::less<int>, class ed::allocator<int>> &, class ed::set<struct offshore::Edge32, struct std::less<struct offshore::Edge32>, class ed::allocator<struct offshore::Edge32>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene *, bool);

    // RVA: 0x1C5 | Ordinal: 454
        void checkIntersections(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int, int &)> const *, class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &)> const *, class std::function<void __cdecl(int, int)> const *, struct offshore::Scene *, bool);

    // RVA: 0x1C8 | Ordinal: 457
        void checkSplineBinding(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1CD | Ordinal: 462
        void clear(int);

    // RVA: 0x1F4 | Ordinal: 501
        void cutCycledSplines(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1F6 | Ordinal: 503
        void degrade2d(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1F7 | Ordinal: 504
        void deleteMeshInstances(class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &);

    // RVA: 0x1F8 | Ordinal: 505
        void deletePointInstances(class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &);

    // RVA: 0x1F9 | Ordinal: 506
        void deleteSplineInstances(class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &);

    // RVA: 0x200 | Ordinal: 513
        void divideAreaByVoronoiDiagram(class ed::vector<struct assets::lLinked::MeshInstance, class ed::allocator<struct assets::lLinked::MeshInstance>> &, class ed::vector<int, class ed::allocator<int>> const &, class offshore::PolygonQuadTreeBase<struct offshore::Polygon> &, class ed::vector<struct std::pair<int, class osg::Vec3d>, class ed::allocator<struct std::pair<int, class osg::Vec3d>>> &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> &, class ed::vector<struct offshore::Mesh, class ed::allocator<struct offshore::Mesh>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene *, int);

    // RVA: 0x21C | Ordinal: 541
        void dump(class ed::basic_string<char> &);

    // RVA: 0x25A | Ordinal: 603
        void filter(class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &)> const *, class std::function<bool __cdecl(struct assets::lLinked::SplineInstance const &, int)> const *, class std::function<bool __cdecl(struct assets::lLinked::MeshInstance const &)> const *);

    // RVA: 0x25B | Ordinal: 604
        void filterSeparators(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x25C | Ordinal: 605
        void filterSplineByStaticAssets(class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> const &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> &);

    // RVA: 0x25D | Ordinal: 606
        void filterSplineByVectorData(class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> const &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> &, double, bool);

    // RVA: 0x25F | Ordinal: 608
        void findAutoCrosses(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x274 | Ordinal: 629
        void fitEnds(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x276 | Ordinal: 631
        void fitSplinesToAnchors(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x277 | Ordinal: 632
        void fitSplinesToStaticAnchors(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);

    // RVA: 0x285 | Ordinal: 646
        void generateLod(int, class assets::lLinked &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x286 | Ordinal: 647
        void generatePolygonsMatchColorInstances(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x29F | Ordinal: 672
        void getBindToSplineVertex(int, struct assets::lLinked::SplineInstance::BindToSplineVertex &);

    // RVA: 0x2A0 | Ordinal: 673
        void getBindToSplineVertexPosition(struct assets::lLinked::SplineInstance::BindToSplineVertex const &, class osg::Vec3d &);

    // RVA: 0x2A9 | Ordinal: 682
        void getBoundingBox(void);

    // RVA: 0x2C2 | Ordinal: 707
        void getConnectedSpline(int, int, int &, int *);

    // RVA: 0x2C3 | Ordinal: 708
        void getConnectedSplines(int, int, class ed::vector<struct std::pair<int, int>, class ed::allocator<struct std::pair<int, int>>> &);

    // RVA: 0x315 | Ordinal: 790
        void getLsa5PointBox(int, int);

    // RVA: 0x36E | Ordinal: 879
        void getPointOnMesh(class osg::Vec3d &, struct offshore::PointOnMesh &);

    // RVA: 0x3C4 | Ordinal: 965
        void getSplineOfEdge(struct offshore::Edge32, int &, int &) const;

    // RVA: 0x3C7 | Ordinal: 968
        void getSplineSegmentBox(int, int);

    // RVA: 0x3C8 | Ordinal: 969
        void getSplineVertex(int, int) const;

    // RVA: 0x426 | Ordinal: 1063
        void initStaticAssetQuadTree(void);

    // RVA: 0x434 | Ordinal: 1077
        void intersection(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x44C | Ordinal: 1101
        void isEmpty(void);

    // RVA: 0x48B | Ordinal: 1164
        void load(class ed::basic_string<char> const &);

    // RVA: 0x48C | Ordinal: 1165
        void load(char const *);

    // RVA: 0x4A9 | Ordinal: 1194
        void loadNode(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool, class osg::Matrixd);

    // RVA: 0x4AD | Ordinal: 1198
        void loadSplineNode(struct offshore::Scene &, int, struct assets::lSplineAsset *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool, class osg::Matrixd);

    // RVA: 0x4AF | Ordinal: 1200
        void makeEdgeSeparator(struct offshore::Edge32 const &, struct assets::lSplineAsset *);

    // RVA: 0x4B9 | Ordinal: 1210
        void mergeTwoRoadsWithSameType(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x4BD | Ordinal: 1214
        void meshesToScene(struct offshore::Scene &, int);

    // RVA: 0x4C1 | Ordinal: 1218
        void moveSplineEndsToAnchors(void);

    // RVA: 0x4C2 | Ordinal: 1219
        void moveSplineEndsToLsa5Points(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x527 | Ordinal: 1320
        void removeDuplicatedSegments(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x52D | Ordinal: 1326
        void reset(void);

    // RVA: 0x52E | Ordinal: 1327
        void resetPolygons(void);

    // RVA: 0x547 | Ordinal: 1352
        void save(class ed::basic_string<char> const &);

    // RVA: 0x548 | Ordinal: 1353
        void save(char const *);

    // RVA: 0x570 | Ordinal: 1393
        void setLoadNodeCallback(class std::function<void __cdecl(enum assets::enAssetClass, int)> const *);

    // RVA: 0x571 | Ordinal: 1394
        void setLoadNodeFilter(class std::function<bool __cdecl(class assets::lAsset const &)> const *);

    // RVA: 0x597 | Ordinal: 1432
        void statInstanceCount(void) const;

    // RVA: 0x598 | Ordinal: 1433
        void staticPointInstanceToScene(struct offshore::Scene &, int, bool, bool);

    // RVA: 0x5A3 | Ordinal: 1444
        void subdivSplineInstances(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);

    // RVA: 0x5B8 | Ordinal: 1465
        void toScene(struct offshore::Scene &, int, bool, bool);

    // RVA: 0x5B9 | Ordinal: 1466
        void toScene(int, struct offshore::Scene &, int, class std::function<bool __cdecl(enum assets::enAssetClass, int)> const *);

    // RVA: 0x5BD | Ordinal: 1470
        void triangulate(int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, unsigned int, struct offshore::Scene *, class std::function<bool __cdecl(enum assets::enAssetClass, int)> const *, class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &, struct assets::lPointAsset const &, int)> const *, bool);

    // RVA: 0x5BE | Ordinal: 1471
        void triangulateLakes(class ed::set<unsigned int, struct std::less<unsigned int>, class ed::allocator<unsigned int>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene *, class ed::set<int, struct std::less<int>, class ed::allocator<int>> *);

    // RVA: 0x5D5 | Ordinal: 1494
        void weldTails(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x64 | Ordinal: 101
        void _lLinked(void);
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LLINKED_HPP
