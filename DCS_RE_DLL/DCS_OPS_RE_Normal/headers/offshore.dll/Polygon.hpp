#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Polygon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Polygon
{
public:

    // RVA: 0x64 | Ordinal: 101
        void Triangulation(class osg::Vec3d const *);

    // RVA: 0x67 | Ordinal: 104
        void _setSingleFace(int, int, int);

    // RVA: 0x68 | Ordinal: 105
        void _setSingleQuad(int, int, int, int);

    // RVA: 0xB0 | Ordinal: 177
        void buildNormal(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0xC9 | Ordinal: 202
        void center(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, double *) const;

    // RVA: 0xDE | Ordinal: 223
        void containsEdge(int, int, bool *) const;

    // RVA: 0xDF | Ordinal: 224
        void containsVertex(int) const;

    // RVA: 0x104 | Ordinal: 261
        void distanceToPolygon2d(class osg::Vec3d const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, int &, class osg::Vec3d &, double) const;

    // RVA: 0x10B | Ordinal: 268
        void edge(int) const;

    // RVA: 0x10C | Ordinal: 269
        void edgeCount(void) const;

    // RVA: 0x116 | Ordinal: 279
        void faceContainsVertex(int, int) const;

    // RVA: 0x12E | Ordinal: 303
        void getArea2d(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x12F | Ordinal: 304
        void getArea3d(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x134 | Ordinal: 309
        void getBoundingBox(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x135 | Ordinal: 310
        void getBoundingBox(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Matrixd const &) const;

    // RVA: 0x13A | Ordinal: 315
        void getCommonEdge(struct offshore::Polygon const &, struct offshore::Polygon const &);

    // RVA: 0x13C | Ordinal: 317
        void getCommonPointsCount(struct offshore::Polygon const &, struct offshore::Polygon const &);

    // RVA: 0x14B | Ordinal: 332
        void getFaceTriangle(struct offshore::Face const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d *const) const;

    // RVA: 0x14C | Ordinal: 333
        void getFaceTriangle(int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d *const) const;

    // RVA: 0x1A7 | Ordinal: 424
        void isConvex(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x1AE | Ordinal: 431
        void isOrthogonal(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d const &, double) const;

    // RVA: 0x1B0 | Ordinal: 433
        void isPointInside(class osg::Vec3d const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, int &, class osg::Vec3d &, double) const;

    // RVA: 0x1B2 | Ordinal: 435
        void isSingular(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, double) const;

    // RVA: 0x1B3 | Ordinal: 436
        void isSingular(void) const;

    // RVA: 0x1B5 | Ordinal: 438
        void isTriangulated(void) const;

    // RVA: 0x1B7 | Ordinal: 440
        void isValid(void) const;

    // RVA: 0x1C3 | Ordinal: 452
        void mergePolygons(struct offshore::Polygon const &, struct offshore::Polygon const &, struct offshore::Edge32 const &);

    // RVA: 0x1C4 | Ordinal: 453
        void mergePolygons(struct offshore::Polygon const &, struct offshore::Polygon const &, struct offshore::Polygon &);

    // RVA: 0x1CD | Ordinal: 462
        void normal(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x3D | Ordinal: 62
        void operator_(struct offshore::Polygon const &) const;

    // RVA: 0x1E4 | Ordinal: 485
        void reindexFace(int) const;

    // RVA: 0x1E5 | Ordinal: 486
        void reindexFace(struct offshore::Face &) const;

    // RVA: 0x1F1 | Ordinal: 498
        void removeSingularFaces(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::compact_vector<unsigned int, 8> *);

    // RVA: 0x1FC | Ordinal: 509
        void reverse(void);

    // RVA: 0x1FF | Ordinal: 512
        void rotate(int);

    // RVA: 0x20C | Ordinal: 525
        void segIntersection(class osg::Vec3d const &, class osg::Vec3d const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Matrixd *, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *, class ed::vector<class osg::Vec4d, class ed::allocator<class osg::Vec4d>> *, double) const;

    // RVA: 0x259 | Ordinal: 602
        void triangulate(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x261 | Ordinal: 610
        void vertCount(void) const;
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_POLYGON_HPP
