#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: VectorData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace vd5 {

class VectorData
{
public:

    // RVA: 0x2D | Ordinal: 46
        void VectorData(class vd5::VectorData const &);

    // RVA: 0x2E | Ordinal: 47
        void VectorData(void);

    // RVA: 0x138 | Ordinal: 313
        void addAutoPointInst(class vd5::Vertex, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x136 | Ordinal: 311
        void addAutoPointInst1(class vd5::Vertex, struct vd5::SplineInstTip, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x137 | Ordinal: 312
        void addAutoPointInst2(class vd5::Vertex, struct vd5::SplineInstTip, struct vd5::SplineInstTip, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x139 | Ordinal: 314
        void addAutoPointInstN(class vd5::Vertex, class ed::vector<struct vd5::SplineInstTip, class ed::allocator<struct vd5::SplineInstTip>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x144 | Ordinal: 325
        void addMeshInstance(class vd5::MeshInst const &);

    // RVA: 0x145 | Ordinal: 326
        void addMeshInstance(struct assets::lMeshAsset *, class osg::Matrixd const &);

    // RVA: 0x148 | Ordinal: 329
        void addPointInstance(class vd5::PointInst const &);

    // RVA: 0x14E | Ordinal: 335
        void addSplineInstance(class vd5::SplineInst const &);

    // RVA: 0x156 | Ordinal: 343
        void addVert(class osg::Vec3d const &, struct assets::lPointAsset *);

    // RVA: 0x157 | Ordinal: 344
        void addVert(class osg::Vec3d const &, struct assets::lSplineAsset *);

    // RVA: 0x158 | Ordinal: 345
        void addVert(class osg::Vec3d const &, enum vd5::enVertexType);

    // RVA: 0x162 | Ordinal: 355
        void applyMeshAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(int, class vd5::MeshInst const &)> *);

    // RVA: 0x17F | Ordinal: 384
        void bindPointFragment(class vd5::Vertex, class vd5::PointInst *, int);

    // RVA: 0x180 | Ordinal: 385
        void bindPointToSplineTip(int, int, int, int);

    // RVA: 0x182 | Ordinal: 387
        void bindSplineVertex(class vd5::Vertex, class vd5::SplineInst *, int);

    // RVA: 0x1C3 | Ordinal: 452
        void checkIntersections(class std::function<void __cdecl(struct vd5::VectorData::EdgeInfo const &, struct vd5::VectorData::EdgeInfo const &)> *);

    // RVA: 0x1EA | Ordinal: 491
        void createMesh(struct assets::lMeshAsset *) const;

    // RVA: 0x1EC | Ordinal: 493
        void createPoint(struct assets::lPointAsset *) const;

    // RVA: 0x1EE | Ordinal: 495
        void createSpline(class vd5::SplineInst const &) const;

    // RVA: 0x1EF | Ordinal: 496
        void createSpline(struct assets::lSplineAsset *) const;

    // RVA: 0x241 | Ordinal: 578
        void edgeSplineSegment(struct offshore::Edge32) const;

    // RVA: 0x242 | Ordinal: 579
        void edgeStaticSegment(struct offshore::Edge32) const;

    // RVA: 0x2EA | Ordinal: 747
        void getEdgeList(void) const;

    // RVA: 0x2EB | Ordinal: 748
        void getEdgeSpatial(void) const;

    // RVA: 0x37E | Ordinal: 895
        void getPolygonQuadTree(void) const;

    // RVA: 0x3C9 | Ordinal: 970
        void getSplinesEdges(void) const;

    // RVA: 0x3CE | Ordinal: 975
        void getStaticSegmentEdges(void) const;

    // RVA: 0x412 | Ordinal: 1043
        void getVertexQuadTree(void) const;

    // RVA: 0x437 | Ordinal: 1080
        void invalidateSpatials(void);

    // RVA: 0x47C | Ordinal: 1149
        void load(class ed::basic_string<char> const &);

    // RVA: 0x47D | Ordinal: 1150
        void load(char const *);

    // RVA: 0x4B2 | Ordinal: 1203
        void markMeshDeleted(int);

    // RVA: 0x4B3 | Ordinal: 1204
        void markPointDeleted(int);

    // RVA: 0x4B4 | Ordinal: 1205
        void markSplineDeleted(int);

    // RVA: 0x4B8 | Ordinal: 1209
        void mergeSplines(class std::function<bool __cdecl(struct vd5::SplineInstTip const &, struct vd5::SplineInstTip const &)> *);

    // RVA: 0x4BA | Ordinal: 1211
        void mesh(void);

    // RVA: 0x4BB | Ordinal: 1212
        void mesh(void) const;

    // RVA: 0x4BC | Ordinal: 1213
        void meshInstance(int);

    // RVA: 0x4D9 | Ordinal: 1242
        void pointInstance(int);

    // RVA: 0x4DA | Ordinal: 1243
        void pointInstance(int) const;

    // RVA: 0x4DC | Ordinal: 1245
        void pointsCount(void) const;

    // RVA: 0x509 | Ordinal: 1290
        void queryPointOfVertex(class vd5::Vertex) const;

    // RVA: 0x53A | Ordinal: 1339
        void save(class ed::basic_string<char> const &);

    // RVA: 0x53B | Ordinal: 1340
        void save(char const *);

    // RVA: 0x561 | Ordinal: 1378
        void segmentDistanceToVD(class osg::Vec3d const &, class osg::Vec3d const &, double) const;

    // RVA: 0x563 | Ordinal: 1380
        void serialize(class io::Stream &);

    // RVA: 0x58B | Ordinal: 1420
        void setVert(class vd5::Vertex, class osg::Vec3d);

    // RVA: 0x593 | Ordinal: 1428
        void splineInstance(int);

    // RVA: 0x594 | Ordinal: 1429
        void splineInstance(int) const;

    // RVA: 0x595 | Ordinal: 1430
        void splinesCount(void) const;

    // RVA: 0x5B7 | Ordinal: 1464
        void toScene(int, struct offshore::Scene &, int, class std::function<bool __cdecl(enum assets::enAssetClass, int)> *) const;

    // RVA: 0x5BC | Ordinal: 1469
        void triangulate(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x5BF | Ordinal: 1472
        void unbindPointFragment(class vd5::Vertex, class vd5::PointInst *, int);

    // RVA: 0x5C0 | Ordinal: 1473
        void unbindSplineVertex(class vd5::Vertex, class vd5::SplineInst *, int);

    // RVA: 0x5CD | Ordinal: 1486
        void vert(class vd5::Vertex) const;

    // RVA: 0x5CF | Ordinal: 1488
        void vertName(class vd5::Vertex) const;

    // RVA: 0x5D4 | Ordinal: 1493
        void weld(double);

    // RVA: 0x5C | Ordinal: 93
        void _VectorData(void);
};

} // namespace vd5

// DCS_OPS_RE_EDTERRAIN4.DLL_VECTORDATA_HPP
