#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Spline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Spline
{
public:

    // RVA: 0x47 | Ordinal: 72
        void Dump(struct _iobuf *);

    // RVA: 0x9 | Ordinal: 10
        void Spline(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0xA | Ordinal: 11
        void Spline(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0xB | Ordinal: 12
        void Spline(int);

    // RVA: 0x97 | Ordinal: 152
        void addUvSet(char const *, int, int);

    // RVA: 0x9F | Ordinal: 160
        void bsplineCurvature(double) const;

    // RVA: 0xA0 | Ordinal: 161
        void bsplineCurvatureOnSegment(double, class osg::Matrixd const &) const;

    // RVA: 0xA1 | Ordinal: 162
        void bsplineNormal(double) const;

    // RVA: 0xA2 | Ordinal: 163
        void bsplinePoint(double) const;

    // RVA: 0xA3 | Ordinal: 164
        void bsplinePointOnSegment(double, class osg::Matrixd const &) const;

    // RVA: 0xA4 | Ordinal: 165
        void bsplineResolveParam(double &, int &) const;

    // RVA: 0xA5 | Ordinal: 166
        void bsplineSegmentMatrix(int) const;

    // RVA: 0xA6 | Ordinal: 167
        void bsplineTangent(double) const;

    // RVA: 0xA7 | Ordinal: 168
        void bsplineTangentOnSegment(double, class osg::Matrixd const &) const;

    // RVA: 0xEB | Ordinal: 236
        void createFromMeshVerts(struct offshore::Mesh const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xEF | Ordinal: 240
        void createSegment(class osg::Vec3d, class osg::Vec3d);

    // RVA: 0xF3 | Ordinal: 244
        void cut(struct offshore::Spline &, struct offshore::Spline &, int, class osg::Vec3d const &, double) const;

    // RVA: 0xF4 | Ordinal: 245
        void cut(struct offshore::PointOnSpline const &, struct offshore::PointOnSpline const &, struct offshore::Spline &, double) const;

    // RVA: 0xF5 | Ordinal: 246
        void cut(struct offshore::Spline &, struct offshore::Spline &, double, double) const;

    // RVA: 0xFD | Ordinal: 254
        void cutSegments(class ed::vector<int, class ed::allocator<int>> &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> &) const;

    // RVA: 0x121 | Ordinal: 290
        void findClosestPoint(class osg::Vec3d const &, int &, double &, double &) const;

    // RVA: 0x11F | Ordinal: 288
        void findClosestPoint2d(class osg::Vec3d const &, int &, double &, double &, struct offshore::PointOnSpline *, struct offshore::PointOnSpline *) const;

    // RVA: 0x137 | Ordinal: 312
        void getBoundingBox(class osg::Matrixd const &) const;

    // RVA: 0x138 | Ordinal: 313
        void getBoundingBox(void) const;

    // RVA: 0x13B | Ordinal: 316
        void getCommonEdges(struct offshore::Spline const &, class std::map<int, struct std::pair<int, bool>, struct std::less<int>, class ed::allocator<struct std::pair<int const, struct std::pair<int, bool>>>> &, double) const;

    // RVA: 0x14F | Ordinal: 336
        void getLenght(struct offshore::PointOnSpline const &, struct offshore::PointOnSpline const &) const;

    // RVA: 0x14E | Ordinal: 335
        void getLenght2d(struct offshore::PointOnSpline const &, struct offshore::PointOnSpline const &) const;

    // RVA: 0x151 | Ordinal: 338
        void getLength(void) const;

    // RVA: 0x150 | Ordinal: 337
        void getLength2d(void) const;

    // RVA: 0x152 | Ordinal: 339
        void getLengthForAllVerts(void) const;

    // RVA: 0x168 | Ordinal: 361
        void getNormal(struct offshore::PointOnSpline const &) const;

    // RVA: 0x175 | Ordinal: 374
        void getPoint(struct offshore::PointOnSpline const &) const;

    // RVA: 0x180 | Ordinal: 385
        void getRect(class osg::Matrixd const &) const;

    // RVA: 0x181 | Ordinal: 386
        void getRect(void) const;

    // RVA: 0x185 | Ordinal: 390
        void getTangent(struct offshore::PointOnSpline const &) const;

    // RVA: 0x18F | Ordinal: 400
        void getUvSet(class ed::basic_string<char> const &);

    // RVA: 0x190 | Ordinal: 401
        void getUvSet(class ed::basic_string<char> const &) const;

    // RVA: 0x1BD | Ordinal: 446
        void makeStripe(double, double, double, double, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> &, class ed::vector<int, class ed::allocator<int>> &, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x1C9 | Ordinal: 458
        void movePointOnSpline(struct offshore::PointOnSpline &, double) const;

    // RVA: 0x1C8 | Ordinal: 457
        void movePointOnSpline2d(struct offshore::PointOnSpline &, double) const;

    // RVA: 0x1CC | Ordinal: 461
        void multiply(class osg::Matrixd const &);

    // RVA: 0x1CE | Ordinal: 463
        void normalForVert(int) const;

    // RVA: 0x1F2 | Ordinal: 499
        void removeSingularSegments(void);

    // RVA: 0x1FD | Ordinal: 510
        void reverse(void);

    // RVA: 0x249 | Ordinal: 586
        void smooth(void);

    // RVA: 0x24D | Ordinal: 590
        void subdiv(int, struct offshore::Spline &) const;

    // RVA: 0x253 | Ordinal: 596
        void tangent(int) const;

    // RVA: 0x254 | Ordinal: 597
        void tangent(int, class osg::Matrixd const &) const;

    // RVA: 0x255 | Ordinal: 598
        void tangentForVert(int) const;
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_SPLINE_HPP
