#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: offshore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class offshore
{
public:

    // RVA: 0x6A | Ordinal: 107
        void adaptiveSubdiv(struct offshore::Spline const &, struct offshore::Spline &, double, int, class ed::vector<double, class ed::allocator<double>> const *, class ed::vector<double, class ed::allocator<double>> *, class ed::vector<int, class ed::allocator<int>> *, bool);

    // RVA: 0x69 | Ordinal: 106
        void adaptiveSubdiv2(struct offshore::Spline const &, struct offshore::Spline &, double, int, class ed::vector<double, class ed::allocator<double>> const *, class ed::vector<double, class ed::allocator<double>> *, class ed::vector<int, class ed::allocator<int>> *, bool);

    // RVA: 0xB6 | Ordinal: 183
        void buildPolygonQuadTree(class offshore::PolygonQuadTreeBase<struct offshore::Polygon> &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> const &);

    // RVA: 0xB9 | Ordinal: 186
        void buildSegmentQuadTree(class ed::SegmentQuadTree &, struct offshore::Mesh &);

    // RVA: 0xBD | Ordinal: 190
        void buildVertexPolygonAdjacency(struct offshore::Mesh &);

    // RVA: 0xC5 | Ordinal: 198
        void cameraCalibration(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &, class osg::Matrixd &, class osg::Matrixd &, double &, class ed::vector<double, class ed::allocator<double>> *);

    // RVA: 0xCA | Ordinal: 203
        void changeTail(struct offshore::Spline &, class osg::Vec3d const &, class osg::Vec3d const &, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0xD5 | Ordinal: 214
        void closedSplineToMesh(struct offshore::Spline const &, struct offshore::Mesh &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0xD6 | Ordinal: 215
        void computeUV(class osg::Vec3d const &, int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> const &, struct offshore::uvSet &);

    // RVA: 0xD8 | Ordinal: 217
        void constrainedDelaunayTriangulation(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> &, class ed::vector<struct offshore::Face, class ed::allocator<struct offshore::Face>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> *);

    // RVA: 0xD9 | Ordinal: 218
        void constrainedDelaunayTriangulation(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> *);

    // RVA: 0xDA | Ordinal: 219
        void constrainedDelaunayTriangulationMerge(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<struct offshore::Face, class ed::allocator<struct offshore::Face>> &, double, double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *, bool, class ed::set<int, struct std::less<int>, class ed::allocator<int>> *);

    // RVA: 0xDB | Ordinal: 220
        void constrainedDelaunayTriangulationMerge(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> &, double, double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *, bool, class ed::set<int, struct std::less<int>, class ed::allocator<int>> *);

    // RVA: 0xDC | Ordinal: 221
        void contains2d(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d const &, double);

    // RVA: 0xFE | Ordinal: 255
        void cutTail(struct offshore::Spline &, class osg::Vec3d const &, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x106 | Ordinal: 263
        void divideEdges(struct offshore::Mesh &, class ed::set<struct offshore::Edge32, struct std::less<struct offshore::Edge32>, class ed::allocator<struct offshore::Edge32>> const &);

    // RVA: 0x120 | Ordinal: 289
        void findClosestPoint2d(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d const &, int &, double &, double &, struct offshore::PointOnSpline *, struct offshore::PointOnSpline *);

    // RVA: 0x123 | Ordinal: 292
        void findMeshPolyUnderSegments(struct offshore::Mesh &, class ed::vector<struct ed::Segment, class ed::allocator<struct ed::Segment>> const &, class ed::set<unsigned int, struct std::less<unsigned int>, class ed::allocator<unsigned int>> &, double);

    // RVA: 0x148 | Ordinal: 329
        void getDistances2d(struct offshore::Spline const &, class ed::vector<double, class ed::allocator<double>> &);

    // RVA: 0x155 | Ordinal: 342
        void getMeshCount(struct offshore::Scene &);

    // RVA: 0x183 | Ordinal: 388
        void getSegmentByDistance(class ed::vector<double, class ed::allocator<double>> const &, double, double);

    // RVA: 0x1B1 | Ordinal: 434
        void isPointInsideMesh(class osg::Vec3d const &, struct offshore::Mesh const &, int &, int &, class osg::Vec3d &, double);

    // RVA: 0x1BC | Ordinal: 445
        void loadConstrainedDelaunayTriangulationInput(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> &);

    // RVA: 0x1C5 | Ordinal: 454
        void meshesIntersects(struct offshore::Mesh const &, struct offshore::Mesh const &, double);

    // RVA: 0x1C6 | Ordinal: 455
        void meshesIntersects(struct offshore::Mesh const &, class osg::Matrixd const &, struct offshore::Mesh const &, class osg::Matrixd const &, double);

    // RVA: 0x1D0 | Ordinal: 465
        void projectPoint(class osg::Vec3d &, class offshore::PolygonQuadTreeBase<struct offshore::Polygon> &);

    // RVA: 0x1E3 | Ordinal: 484
        void refineDelaunay(struct offshore::Mesh &, class ed::set<struct offshore::Edge32, struct std::less<struct offshore::Edge32>, class ed::allocator<struct offshore::Edge32>> const &);

    // RVA: 0x1EF | Ordinal: 496
        void removePolygons(struct offshore::Mesh &, class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &);

    // RVA: 0x1F0 | Ordinal: 497
        void removePolygons(struct offshore::uvSet &, class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &);

    // RVA: 0x200 | Ordinal: 513
        void roughCutInSpline(struct offshore::Mesh &, class ed::vector<struct offshore::SegmentSpline, class ed::allocator<struct offshore::SegmentSpline>> &, class ed::vector<unsigned char, class ed::allocator<unsigned char>> &, double, class std::function<void __cdecl(int)> *);

    // RVA: 0x201 | Ordinal: 514
        void roughCutInSpline(struct offshore::Mesh &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> &, double, class std::function<void __cdecl(int)> *);

    // RVA: 0x202 | Ordinal: 515
        void ruppertRefine(struct offshore::Mesh &, class ed::set<struct offshore::Edge32, struct std::less<struct offshore::Edge32>, class ed::allocator<struct offshore::Edge32>> const &, class std::function<double __cdecl(struct offshore::TriangleInfo &)> &, class std::function<double __cdecl(struct offshore::EdgeInfo &)> &);

    // RVA: 0x203 | Ordinal: 516
        void ruppertRefine(struct offshore::Mesh &, class ed::set<struct offshore::Edge32, struct std::less<struct offshore::Edge32>, class ed::allocator<struct offshore::Edge32>> const &, double, double);

    // RVA: 0x208 | Ordinal: 521
        void saveConstrainedDelaunayTriangulationInput(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &);

    // RVA: 0x210 | Ordinal: 529
        void selfIntersects(struct offshore::Spline const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, double);

    // RVA: 0x25B | Ordinal: 604
        void triangulatePolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<int, class ed::allocator<int>> &, class ed::compact_vector<struct offshore::Face, 1> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x25C | Ordinal: 605
        void triangulatePolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<int, class ed::allocator<int>> &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x260 | Ordinal: 609
        void vectorizeIntMatrix(class ed::matrixMN<signed char> &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> &, bool, class std::function<void __cdecl(struct offshore::Scene &, class ed::basic_string<char>)> *);

    // RVA: 0x264 | Ordinal: 613
        void weldAndSnap(class ed::vector<struct offshore::Mesh *, class ed::allocator<struct offshore::Mesh *>> &, double, double, double, class ed::vector<struct offshore::Error, class ed::allocator<struct offshore::Error>> &, bool, bool);

    // RVA: 0x265 | Ordinal: 614
        void weldAndSnap(class ed::vector<struct offshore::Spline *, class ed::allocator<struct offshore::Spline *>> &, double, double, double, class ed::vector<struct offshore::Error, class ed::allocator<struct offshore::Error>> &, bool, bool);
};

// DCS_OPS_RE_OFFSHORE.DLL_OFFSHORE_HPP
