#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoad
{
public:

    // RVA: 0x146 | Ordinal: 327
        void addMotionEquation(double, double, double, double, double, class ed::basic_string<char> &, double *);

    // RVA: 0x14B | Ordinal: 332
        void addRoadStopMotionEquation(class std::map<double, double, struct std::less<double>, class ed::allocator<struct std::pair<double const, double>>> const &, double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x18F | Ordinal: 400
        void buildObjectsCache(void);

    // RVA: 0x192 | Ordinal: 403
        void buildOffshoreMesh(struct offshore::Scene &, int, struct landscape4::lRoadCovering const &, struct landscape4::StripeAnchoringPoints const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x190 | Ordinal: 401
        void buildOffshoreMesh1d(struct offshore::Scene &, int, struct landscape4::lRoadCovering const &, struct landscape4::StripeAnchoringPoints const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x191 | Ordinal: 402
        void buildOffshoreMesh3d(struct offshore::Scene &, int, struct landscape4::lRoadCovering const &, struct landscape4::StripeAnchoringPoints const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x193 | Ordinal: 404
        void buildOffshoreSplineFromRoad(struct offshore::Spline &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x1B3 | Ordinal: 436
        void calculateMotionEquation(double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1B4 | Ordinal: 437
        void calculateMotionEquation(double, double, double, double, class std::map<double, double, struct std::less<double>, class ed::allocator<struct std::pair<double const, double>>> const &, bool, double, double, double, bool);

    // RVA: 0x1B5 | Ordinal: 438
        void calculateNormals(void);

    // RVA: 0x1B7 | Ordinal: 440
        void calculateRoadParts(void);

    // RVA: 0x1B8 | Ordinal: 441
        void calculateSegmentMatrixes(void);

    // RVA: 0x1B9 | Ordinal: 442
        void calculateSegments(double);

    // RVA: 0x1C7 | Ordinal: 456
        void checkOffshoreMesh(struct offshore::Mesh const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1D1 | Ordinal: 466
        void combineRoads(class ed::vector<class landscape4::lRoad, class ed::allocator<class landscape4::lRoad>> const &);

    // RVA: 0x1F5 | Ordinal: 502
        void cutRoadStopIntoRoad(double, double, bool);

    // RVA: 0x1FC | Ordinal: 509
        void derivative1(double) const;

    // RVA: 0x1FD | Ordinal: 510
        void derivative2(double) const;

    // RVA: 0x231 | Ordinal: 562
        void dumpLengthPlot(class ed::basic_string<char> const &, double);

    // RVA: 0x236 | Ordinal: 567
        void dumpRoadParts(struct offshore::Scene &, int) const;

    // RVA: 0x25E | Ordinal: 607
        void filtrate(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, double, double);

    // RVA: 0x269 | Ordinal: 618
        void findClosestPoint(class osg::Vec3d const &, int, int);

    // RVA: 0x265 | Ordinal: 614
        void findClosestPoint2(class osg::Vec3d const &, double);

    // RVA: 0x266 | Ordinal: 615
        void findClosestPoint2(class osg::Vec3d const &, double, double, double, class osg::Vec3d *);

    // RVA: 0x26B | Ordinal: 620
        void findClosestPointOnSigment(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x2BA | Ordinal: 699
        void getClosestPoint2d(class osg::Vec3d const &, int) const;

    // RVA: 0x2C9 | Ordinal: 714
        void getControlVertex(double) const;

    // RVA: 0x2DD | Ordinal: 734
        void getCurvature(double);

    // RVA: 0x2F0 | Ordinal: 753
        void getEndParam(void) const;

    // RVA: 0x2FB | Ordinal: 764
        void getFullTrafficTime(void) const;

    // RVA: 0x2FF | Ordinal: 768
        void getHeightFromRoadParts(double, class osg::Vec3d &) const;

    // RVA: 0x30A | Ordinal: 779
        void getLength(double &) const;

    // RVA: 0x30B | Ordinal: 780
        void getLength(double, double &, int) const;

    // RVA: 0x30C | Ordinal: 781
        void getLengthByTime(double);

    // RVA: 0x344 | Ordinal: 837
        void getNormal(double);

    // RVA: 0x350 | Ordinal: 849
        void getOffsetedControlVertices(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &) const;

    // RVA: 0x357 | Ordinal: 856
        void getParam(class ed::basic_string<char> const &, class ed::basic_string<char> &, class ed::basic_string<char> const &) const;

    // RVA: 0x359 | Ordinal: 858
        void getParamByLength(double, double &, int, int);

    // RVA: 0x35A | Ordinal: 859
        void getParamByLengthDirty(double, double &, double &);

    // RVA: 0x368 | Ordinal: 873
        void getPoint(double) const;

    // RVA: 0x372 | Ordinal: 883
        void getPointOnSurface(double) const;

    // RVA: 0x373 | Ordinal: 884
        void getPointOnSurface(double, struct edterrain::PointOnSurface &) const;

    // RVA: 0x390 | Ordinal: 913
        void getRightBorderFromOffshoreMesh(struct offshore::Mesh const &, struct landscape4::lRoadCovering const &, struct offshore::Spline &);

    // RVA: 0x38E | Ordinal: 911
        void getRightBorderFromOffshoreMesh1d(struct offshore::Mesh const &, struct landscape4::lRoadCovering const &, struct offshore::Spline &);

    // RVA: 0x38F | Ordinal: 912
        void getRightBorderFromOffshoreMesh3d(struct offshore::Mesh const &, struct landscape4::lRoadCovering const &, struct offshore::Spline &);

    // RVA: 0x3AD | Ordinal: 942
        void getSegmentRect(int) const;

    // RVA: 0x3AE | Ordinal: 943
        void getSegmentsCount(void) const;

    // RVA: 0x3CC | Ordinal: 973
        void getStartParam(void) const;

    // RVA: 0x3DA | Ordinal: 987
        void getSubRoadVerts(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, double, double);

    // RVA: 0x3E2 | Ordinal: 995
        void getTangent(double) const;

    // RVA: 0x3E3 | Ordinal: 996
        void getTangentOnSurface(double) const;

    // RVA: 0x3EB | Ordinal: 1004
        void getTimeForRoadWithPhase(double) const;

    // RVA: 0x45C | Ordinal: 1117
        void isParam(class ed::basic_string<char> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x45D | Ordinal: 1118
        void isParam(class ed::basic_string<char> const &, bool) const;

    // RVA: 0x45E | Ordinal: 1119
        void isParamSkippedByTraffic(double);

    // RVA: 0x40 | Ordinal: 65
        void lRoad(class landscape4::lRoad &&);

    // RVA: 0x41 | Ordinal: 66
        void lRoad(class landscape4::lRoad const &);

    // RVA: 0x42 | Ordinal: 67
        void lRoad(void);

    // RVA: 0x490 | Ordinal: 1169
        void load(class ed::basic_string<char> const &);

    // RVA: 0x4AE | Ordinal: 1199
        void makeBridge(double);

    // RVA: 0x4B1 | Ordinal: 1202
        void makeTunnel(double);

    // RVA: 0x4BF | Ordinal: 1216
        void moveParamByLength(double, double, double &, int, int);

    // RVA: 0x4C3 | Ordinal: 1220
        void move_deriv(struct landscape4::lPointOnRoad &, double);

    // RVA: 0x4D8 | Ordinal: 1241
        void placeOnSurface(void);

    // RVA: 0x4E7 | Ordinal: 1256
        void postloading(void);

    // RVA: 0x54C | Ordinal: 1357
        void save(class ed::basic_string<char> const &) const;

    // RVA: 0x573 | Ordinal: 1396
        void setMaxVelocity(double);

    // RVA: 0x577 | Ordinal: 1400
        void setOffset(float);

    // RVA: 0x578 | Ordinal: 1401
        void setOffset(float, float);

    // RVA: 0x579 | Ordinal: 1402
        void setOffsets(class ed::vector<float, class ed::allocator<float>> &);

    // RVA: 0x57C | Ordinal: 1405
        void setParam(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x57D | Ordinal: 1406
        void setParam(class ed::basic_string<char> const &, bool);

    // RVA: 0x58D | Ordinal: 1422
        void setVerts(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x591 | Ordinal: 1426
        void skipTraffic(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x596 | Ordinal: 1431
        void splitParam(double &) const;

    // RVA: 0x59D | Ordinal: 1438
        void subDivide(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, int);

    // RVA: 0x68 | Ordinal: 105
        void _lRoad(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROAD_HPP
