#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Mesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Mesh
{
public:

    // RVA: 0x42 | Ordinal: 67
        void BuildEdgeList(class std::map<struct offshore::Edge32, class ed::list<int, class ed::allocator<int>>, struct std::less<struct offshore::Edge32>, class ed::allocator<struct std::pair<struct offshore::Edge32 const, class ed::list<int, class ed::allocator<int>>>>> &, class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0x43 | Ordinal: 68
        void CalculateBariCoord(class ed::vector<int, class ed::allocator<int>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class ed::vector<double, class ed::allocator<double>>, class ed::allocator<class ed::vector<double, class ed::allocator<double>>>> &);

    // RVA: 0x44 | Ordinal: 69
        void CalculateBariCoord(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class ed::vector<double, class ed::allocator<double>>, class ed::allocator<class ed::vector<double, class ed::allocator<double>>>> &);

    // RVA: 0x1 | Ordinal: 2
        void Mesh(void);

    // RVA: 0x66 | Ordinal: 103
        void _append(struct offshore::Mesh const &);

    // RVA: 0x73 | Ordinal: 116
        void addEdgeDataSet(char const *, int);

    // RVA: 0x76 | Ordinal: 119
        void addFilledPolygonDataSet(char const *, double);

    // RVA: 0x77 | Ordinal: 120
        void addFilledUvSet(char const *, class osg::Vec2d const &);

    // RVA: 0x78 | Ordinal: 121
        void addFilledUvSet(char const *, class osg::Vec3d const &);

    // RVA: 0x79 | Ordinal: 122
        void addFilledUvSet(char const *, class osg::Vec4d const &);

    // RVA: 0x7A | Ordinal: 123
        void addFilledUvSet(char const *, double);

    // RVA: 0x85 | Ordinal: 134
        void addPolygonDataSet(char const *, int);

    // RVA: 0x8C | Ordinal: 141
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x8D | Ordinal: 142
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &);

    // RVA: 0x8E | Ordinal: 143
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<float, class ed::allocator<float>> const &);

    // RVA: 0x8F | Ordinal: 144
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x90 | Ordinal: 145
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &);

    // RVA: 0x91 | Ordinal: 146
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec2i, class ed::allocator<class osg::Vec2i>> const &);

    // RVA: 0x92 | Ordinal: 147
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x93 | Ordinal: 148
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> const &);

    // RVA: 0x94 | Ordinal: 149
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec4d, class ed::allocator<class osg::Vec4d>> const &);

    // RVA: 0x95 | Ordinal: 150
        void addUvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec4i, class ed::allocator<class osg::Vec4i>> const &);

    // RVA: 0x96 | Ordinal: 151
        void addUvSet(char const *, int);

    // RVA: 0x98 | Ordinal: 153
        void append(struct offshore::Mesh const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<int, class ed::allocator<int>> *, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x9A | Ordinal: 155
        void appendMany(struct offshore::Scene &, class ed::vector<int, class ed::allocator<int>> &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x9B | Ordinal: 156
        void appendVertex(struct offshore::Mesh &, int);

    // RVA: 0x9C | Ordinal: 157
        void applyManifolds(int, bool);

    // RVA: 0x9D | Ordinal: 158
        void assembleFaces(class ed::vector<struct offshore::Face, class ed::allocator<struct offshore::Face>> &) const;

    // RVA: 0x9E | Ordinal: 159
        void assembleUniqueVertices(class std::function<void __cdecl(int, int)>);

    // RVA: 0xA9 | Ordinal: 170
        void buildBordersList(class ed::list<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class ed::vector<int, class ed::allocator<int>> const *, class std::function<bool __cdecl(struct offshore::Edge32)> *) const;

    // RVA: 0xA8 | Ordinal: 169
        void buildBordersList2(class ed::list<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class ed::vector<int, class ed::allocator<int>> const *, class std::function<bool __cdecl(struct offshore::Edge32)> *) const;

    // RVA: 0xAA | Ordinal: 171
        void buildBordersListOld(class ed::list<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0xAB | Ordinal: 172
        void buildEdgeList(class std::map<struct offshore::Edge32, class ed::vector<int, class ed::allocator<int>>, struct std::less<struct offshore::Edge32>, class ed::allocator<struct std::pair<struct offshore::Edge32 const, class ed::vector<int, class ed::allocator<int>>>>> &) const;

    // RVA: 0xAC | Ordinal: 173
        void buildEdgeList(class ed::vector<struct std::pair<struct offshore::Edge32, class ed::vector<int, class ed::allocator<int>>>, class ed::allocator<struct std::pair<struct offshore::Edge32, class ed::vector<int, class ed::allocator<int>>>>> &) const;

    // RVA: 0xAD | Ordinal: 174
        void buildIsolatedVerts(class ed::set<int, struct std::less<int>, class ed::allocator<int>> &) const;

    // RVA: 0xAE | Ordinal: 175
        void buildIsolatedVerts(class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0xAF | Ordinal: 176
        void buildManifoldsForUvSet(struct offshore::uvSet &, bool, double);

    // RVA: 0xB1 | Ordinal: 178
        void buildNormals(bool);

    // RVA: 0xB2 | Ordinal: 179
        void buildOpenVertexList(class ed::vector<int, class ed::allocator<int>> &, class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0xB3 | Ordinal: 180
        void buildPolygonNeighbourList(class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xB4 | Ordinal: 181
        void buildPolygonNeighbourListByVertices(class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &);

    // RVA: 0xB5 | Ordinal: 182
        void buildPolygonNeighbourListByVertices(class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &);

    // RVA: 0xB7 | Ordinal: 184
        void buildPolygonsOfVerticesList(class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xB8 | Ordinal: 185
        void buildPolygonsOfVerticesList(class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xBA | Ordinal: 187
        void buildTangentSpace(struct offshore::uvSet const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &);

    // RVA: 0xBB | Ordinal: 188
        void buildTangentSpace(int, int, struct offshore::uvSet const &, class osg::Vec3d &, class osg::Vec3d &, class osg::Vec3d &) const;

    // RVA: 0xBC | Ordinal: 189
        void buildVertexList(class ed::vector<int, class ed::allocator<int>> &, class ed::vector<int, class ed::allocator<int>> const &) const;

    // RVA: 0xBE | Ordinal: 191
        void buildVertsNeighbourList(class ed::vector<class ed::list<int, class ed::allocator<int>>, class ed::allocator<class ed::list<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xBF | Ordinal: 192
        void buildVertsNeighbourList(class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xC0 | Ordinal: 193
        void calcFaceCentroid(struct offshore::Face &);

    // RVA: 0xC1 | Ordinal: 194
        void calcFaceNormal(struct offshore::Face const &) const;

    // RVA: 0xC2 | Ordinal: 195
        void calcManifoldForUvSet(struct offshore::uvSet const &, double &, bool);

    // RVA: 0xC3 | Ordinal: 196
        void calcPolygonCentroid(struct offshore::Polygon &);

    // RVA: 0xC4 | Ordinal: 197
        void calcPolygonNormal(struct offshore::Polygon const &) const;

    // RVA: 0xC6 | Ordinal: 199
        void center(class ed::vector<int, class ed::allocator<int>> &, class osg::Matrixd const &) const;

    // RVA: 0xC7 | Ordinal: 200
        void center(class osg::Matrixd const &) const;

    // RVA: 0xC8 | Ordinal: 201
        void center(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void clear(void);

    // RVA: 0xD3 | Ordinal: 212
        void clearAndFreeMemory(void);

    // RVA: 0xD7 | Ordinal: 216
        void connectedSubmeshes(class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &) const;

    // RVA: 0xE1 | Ordinal: 226
        void copyMappingFrom(struct offshore::Mesh &, struct offshore::uvSet &, struct offshore::uvSet &, class osg::Matrixd const &);

    // RVA: 0xE2 | Ordinal: 227
        void copyMappingFrom(struct offshore::Mesh &, class osg::Matrixd const &);

    // RVA: 0xE6 | Ordinal: 231
        void createBox(class osg::BoundingBoxImpl<class osg::Vec3d> const &);

    // RVA: 0xE7 | Ordinal: 232
        void createBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0xE8 | Ordinal: 233
        void createBox(class osg::Vec3d const &, double, double, double);

    // RVA: 0xE9 | Ordinal: 234
        void createCircle(class osg::Vec3d const &, double, class osg::Vec3d);

    // RVA: 0xEA | Ordinal: 235
        void createEllipsoid(int, double, double, double);

    // RVA: 0xEC | Ordinal: 237
        void createFrustum(class osg::Matrixf const &, float, float);

    // RVA: 0xED | Ordinal: 238
        void createPlane(class osg::Vec3d const &, class osg::Vec3d const &, double);

    // RVA: 0xEE | Ordinal: 239
        void createQuad(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0xF0 | Ordinal: 241
        void createSphere(class osg::Vec3d const &, double);

    // RVA: 0xF1 | Ordinal: 242
        void createUnitCube(int);

    // RVA: 0xF2 | Ordinal: 243
        void createUnitSphere(int);

    // RVA: 0x100 | Ordinal: 257
        void deleteSingularPolygons(double, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x108 | Ordinal: 265
        void duplicatePolygon(int);

    // RVA: 0x109 | Ordinal: 266
        void duplicateVertex(int);

    // RVA: 0x111 | Ordinal: 274
        void extractIsolatedMeshes(class ed::vector<struct offshore::Mesh, class ed::allocator<struct offshore::Mesh>> &, class ed::set<int, struct std::less<int>, class ed::allocator<int>> *);

    // RVA: 0x112 | Ordinal: 275
        void extractIsolatedParts(class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class ed::set<int, struct std::less<int>, class ed::allocator<int>> *) const;

    // RVA: 0x114 | Ordinal: 277
        void extractPolygons(class ed::vector<int, class ed::allocator<int>> const &, struct offshore::Mesh &, bool, bool, bool, bool, class ed::vector<int, class ed::allocator<int>> *, class ed::vector<int, class ed::allocator<int>> *, bool, bool) const;

    // RVA: 0x115 | Ordinal: 278
        void extractPolygons(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, struct offshore::Mesh &, bool, bool, bool, bool, class ed::vector<int, class ed::allocator<int>> *, class ed::vector<int, class ed::allocator<int>> *, bool, bool) const;

    // RVA: 0x113 | Ordinal: 276
        void extractPolygons2(class ed::vector<int, class ed::allocator<int>> const &, struct offshore::Mesh &, bool, bool, bool, bool, class ed::vector<int, class ed::allocator<int>> *, class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class ed::allocator<struct std::pair<int const, int>>> *, bool, bool) const;

    // RVA: 0x11B | Ordinal: 284
        void filter(class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x11C | Ordinal: 285
        void filter(class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x11D | Ordinal: 286
        void filter(class ed::vector<bool, class ed::allocator<bool>> const &, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x11E | Ordinal: 287
        void filterVerts(class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &, class ed::vector<int, class ed::allocator<int>> *, class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x127 | Ordinal: 296
        void findPolygonsOfVertex(int, class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x129 | Ordinal: 298
        void flip(struct offshore::Edge32 const &, int, int, struct offshore::Edge32 &);

    // RVA: 0x12A | Ordinal: 299
        void floodFillPolygons(class ed::vector<int, class ed::allocator<int>> &, class std::map<struct offshore::Edge32, class ed::vector<int, class ed::allocator<int>>, struct std::less<struct offshore::Edge32>, class ed::allocator<struct std::pair<struct offshore::Edge32 const, class ed::vector<int, class ed::allocator<int>>>>> const &, class std::function<bool __cdecl(int, int, struct offshore::Edge32 const &)> *, int) const;

    // RVA: 0x12B | Ordinal: 300
        void fromUVSpace(class osg::Matrixd const &, struct offshore::uvSet const &, class osg::Matrixd &, struct offshore::PointOnMesh *) const;

    // RVA: 0x12C | Ordinal: 301
        void getArea2d(class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x12D | Ordinal: 302
        void getArea2d(void) const;

    // RVA: 0x130 | Ordinal: 305
        void getBoundingBox(class ed::vector<int, class ed::allocator<int>> const &, class osg::Matrixd const &) const;

    // RVA: 0x131 | Ordinal: 306
        void getBoundingBox(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, class osg::Matrixd const &) const;

    // RVA: 0x132 | Ordinal: 307
        void getBoundingBox(class osg::Matrixd const &) const;

    // RVA: 0x133 | Ordinal: 308
        void getBoundingBox(void) const;

    // RVA: 0x149 | Ordinal: 330
        void getEdgeDataSet(char const *);

    // RVA: 0x14A | Ordinal: 331
        void getEdgeDataSet(char const *) const;

    // RVA: 0x167 | Ordinal: 360
        void getNormal(struct offshore::PointOnMesh const &) const;

    // RVA: 0x169 | Ordinal: 362
        void getOpenEdges(class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0x16A | Ordinal: 363
        void getOpenVerts(class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0x174 | Ordinal: 373
        void getPoint(struct offshore::PointOnMesh const &) const;

    // RVA: 0x176 | Ordinal: 375
        void getPolyArea2d(int) const;

    // RVA: 0x177 | Ordinal: 376
        void getPolyArea3d(int) const;

    // RVA: 0x178 | Ordinal: 377
        void getPolygonDataSet(class ed::basic_string<char> const &);

    // RVA: 0x179 | Ordinal: 378
        void getPolygonDataSet(char const *);

    // RVA: 0x17A | Ordinal: 379
        void getPolygonDataSet(class ed::basic_string<char> const &) const;

    // RVA: 0x17B | Ordinal: 380
        void getPolygonDataSet(char const *) const;

    // RVA: 0x17C | Ordinal: 381
        void getPolygonsOfEdge(struct offshore::Edge32 const &);

    // RVA: 0x17D | Ordinal: 382
        void getPolygonsOfEdge(struct offshore::Edge32 const &, class ed::vector<struct offshore::Mesh::PolygonsOfEdgeResult, class ed::allocator<struct offshore::Mesh::PolygonsOfEdgeResult>> &);

    // RVA: 0x17E | Ordinal: 383
        void getRect(class osg::Matrixd const &) const;

    // RVA: 0x17F | Ordinal: 384
        void getRect(void) const;

    // RVA: 0x186 | Ordinal: 391
        void getTemplateMesh(void);

    // RVA: 0x187 | Ordinal: 392
        void getUV(struct offshore::PointOnMesh const &, struct offshore::uvSet const *, double *) const;

    // RVA: 0x18B | Ordinal: 396
        void getUvSet(class ed::basic_string<char> const &);

    // RVA: 0x18C | Ordinal: 397
        void getUvSet(char const *);

    // RVA: 0x18D | Ordinal: 398
        void getUvSet(class ed::basic_string<char> const &) const;

    // RVA: 0x18E | Ordinal: 399
        void getUvSet(char const *) const;

    // RVA: 0x191 | Ordinal: 402
        void getUvSetIndex(class ed::basic_string<char> const &) const;

    // RVA: 0x192 | Ordinal: 403
        void getUvSetNumberByName(char const *) const;

    // RVA: 0x194 | Ordinal: 405
        void getVertexTriangles(int, class ed::list<struct offshore::Mesh::VertexTriangle, class ed::allocator<struct offshore::Mesh::VertexTriangle>> &);

    // RVA: 0x195 | Ordinal: 406
        void hasSingularPolygons(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *) const;

    // RVA: 0x1A9 | Ordinal: 426
        void isEmpty(void) const;

    // RVA: 0x1AB | Ordinal: 428
        void isNaN(class ed::vector<struct offshore::Error, class ed::allocator<struct offshore::Error>> &) const;

    // RVA: 0x1AF | Ordinal: 432
        void isPointInside(class osg::Vec3d const &, int *, int *, class osg::Vec3d *, class ed::vector<int, class ed::allocator<int>> const *) const;

    // RVA: 0x1B4 | Ordinal: 437
        void isSingularFace(int, int, int);

    // RVA: 0x1B6 | Ordinal: 439
        void isValid(class ed::vector<struct offshore::Error, class ed::allocator<struct offshore::Error>> &) const;

    // RVA: 0x1B9 | Ordinal: 442
        void isValidPolygons(void) const;

    // RVA: 0x1C2 | Ordinal: 451
        void match(struct offshore::Mesh const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &) const;

    // RVA: 0x1CA | Ordinal: 459
        void multiply(class osg::Matrixd const &);

    // RVA: 0x1EB | Ordinal: 492
        void removeDublicatedPolygons(class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x1EC | Ordinal: 493
        void removeEdges(class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<class ed::compact_vector<int, 2>, class ed::allocator<class ed::compact_vector<int, 2>>> *);

    // RVA: 0x1ED | Ordinal: 494
        void removeIsolatedVerts(class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *);

    // RVA: 0x1F3 | Ordinal: 500
        void removeUnusedData(void);

    // RVA: 0x1F4 | Ordinal: 501
        void removeUvSet(char const *);

    // RVA: 0x1FE | Ordinal: 511
        void reversePolygons(void);

    // RVA: 0x204 | Ordinal: 517
        void save(class ed::basic_string<char> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x205 | Ordinal: 518
        void save(char const *, char const *) const;

    // RVA: 0x20A | Ordinal: 523
        void segIntersection(class osg::Vec3d const &, class osg::Vec3d const &, class ed::vector<struct offshore::PointOnMesh, class ed::allocator<struct offshore::PointOnMesh>> &, double) const;

    // RVA: 0x20B | Ordinal: 524
        void segIntersection(class osg::Vec3d const &, class osg::Vec3d const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, double) const;

    // RVA: 0x209 | Ordinal: 522
        void segIntersection2D(class osg::Vec3d const &, class osg::Vec3d const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, double) const;

    // RVA: 0x235 | Ordinal: 566
        void setSingleBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x236 | Ordinal: 567
        void setSinglePolygon(struct offshore::Polygon const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x237 | Ordinal: 568
        void setSinglePolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x238 | Ordinal: 569
        void setSinglePolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &);

    // RVA: 0x24B | Ordinal: 588
        void sortPolygonsOfVert(int, class ed::list<int, class ed::allocator<int>> const &, class ed::vector<int, class ed::allocator<int>> &, class ed::vector<int, class ed::allocator<int>> *, bool) const;

    // RVA: 0x24E | Ordinal: 591
        void subdivEdges(class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> *);

    // RVA: 0x24F | Ordinal: 592
        void subdivLinear(void);

    // RVA: 0x250 | Ordinal: 593
        void subdivLinear(unsigned __int64);

    // RVA: 0x251 | Ordinal: 594
        void swap(struct offshore::Mesh &);

    // RVA: 0x256 | Ordinal: 599
        void toUVSpace(class osg::Matrixd const &, struct offshore::uvSet const &, class osg::Matrixd &) const;

    // RVA: 0x258 | Ordinal: 601
        void triCount(void) const;

    // RVA: 0x25A | Ordinal: 603
        void triangulateAllPoly(class ed::vector<int, class ed::allocator<int>> *);

    // RVA: 0x263 | Ordinal: 612
        void weld(double, double);

    // RVA: 0x266 | Ordinal: 615
        void weldBorders(double, double, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *);

    // RVA: 0x267 | Ordinal: 616
        void weldExcludeBorders(double, double, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *);

    // RVA: 0x268 | Ordinal: 617
        void weldOnly(double, double);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_MESH_HPP
