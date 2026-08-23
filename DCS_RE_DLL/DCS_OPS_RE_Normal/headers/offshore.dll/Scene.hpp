#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Scene
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Scene
{
public:

    // RVA: 0x40 | Ordinal: 65
        void AddExisting(struct offshore::Scene &, int, int);

    // RVA: 0x41 | Ordinal: 66
        void AddMaterial(struct offshore::Material const &);

    // RVA: 0x45 | Ordinal: 70
        void Clear(void);

    // RVA: 0x46 | Ordinal: 71
        void Dump(struct _iobuf *, int);

    // RVA: 0x48 | Ordinal: 73
        void FindNodeByName(class ed::basic_string<char> const &);

    // RVA: 0x4A | Ordinal: 75
        void LoadNCheck(class ed::basic_string<char> const &, class osg::BoundingBoxImpl<class osg::Vec3f> *);

    // RVA: 0x4B | Ordinal: 76
        void LoadNCheck(char const *, class osg::BoundingBoxImpl<class osg::Vec3f> *);

    // RVA: 0x4C | Ordinal: 77
        void Node(int);

    // RVA: 0x4D | Ordinal: 78
        void Node(int) const;

    // RVA: 0x4E | Ordinal: 79
        void NodeBoundingBox(int, class osg::Matrixd const &);

    // RVA: 0x4F | Ordinal: 80
        void NodeChilds(int);

    // RVA: 0x50 | Ordinal: 81
        void NodeChildsBoundingBox(int);

    // RVA: 0x51 | Ordinal: 82
        void NodeChildsCount(int, bool);

    // RVA: 0x52 | Ordinal: 83
        void NodeColor(int, class osg::Vec3f &);

    // RVA: 0x53 | Ordinal: 84
        void NodeMaterial(int);

    // RVA: 0x54 | Ordinal: 85
        void NodeMaterialIndex(int);

    // RVA: 0x55 | Ordinal: 86
        void NodeName(int, bool) const;

    // RVA: 0x56 | Ordinal: 87
        void NodeParams(int);

    // RVA: 0x57 | Ordinal: 88
        void NodeParent(int) const;

    // RVA: 0x58 | Ordinal: 89
        void NodeRoot(void);

    // RVA: 0x59 | Ordinal: 90
        void NodeShapeIndex(int) const;

    // RVA: 0x5A | Ordinal: 91
        void NodeTransform(int, bool) const;

    // RVA: 0x5B | Ordinal: 92
        void NodeType(int) const;

    // RVA: 0x5C | Ordinal: 93
        void NodeVerts(int);

    // RVA: 0x5E | Ordinal: 95
        void ParentTransform(int);

    // RVA: 0x5F | Ordinal: 96
        void QueryShapesOld(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int, int);

    // RVA: 0x61 | Ordinal: 98
        void SaveNCheck(class ed::basic_string<char> const &);

    // RVA: 0x62 | Ordinal: 99
        void SaveNCheck(char const *);

    // RVA: 0x6 | Ordinal: 7
        void Scene(bool);

    // RVA: 0x63 | Ordinal: 100
        void SetNoneNode(int, bool);

    // RVA: 0x65 | Ordinal: 102
        void Update(void);

    // RVA: 0x71 | Ordinal: 114
        void addCameraNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Camera const &);

    // RVA: 0x74 | Ordinal: 117
        void addExisting(struct offshore::Scene &, int, int, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *, bool);

    // RVA: 0x75 | Ordinal: 118
        void addExistingExclusive(struct offshore::Scene &, int, int, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> *, bool);

    // RVA: 0x7C | Ordinal: 125
        void addInstance(class ed::basic_string<char> const &, class osg::Vec3d const &, float);

    // RVA: 0x7D | Ordinal: 126
        void addInstanceNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, class ed::basic_string<char> const &);

    // RVA: 0x7E | Ordinal: 127
        void addInstanceNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, int);

    // RVA: 0x7F | Ordinal: 128
        void addLightNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Light const &);

    // RVA: 0x80 | Ordinal: 129
        void addMaterial(struct offshore::Material const &);

    // RVA: 0x81 | Ordinal: 130
        void addMeshNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Mesh const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x82 | Ordinal: 131
        void addMeshNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Mesh const &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);

    // RVA: 0x83 | Ordinal: 132
        void addMeshTransformNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Mesh const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x84 | Ordinal: 133
        void addPointsNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Points const &);

    // RVA: 0x86 | Ordinal: 135
        void addRootNode(void);

    // RVA: 0x87 | Ordinal: 136
        void addSkinMeshNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::SkinMesh const &);

    // RVA: 0x88 | Ordinal: 137
        void addSplineNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Spline const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x89 | Ordinal: 138
        void addSplineNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Spline const &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);

    // RVA: 0x8A | Ordinal: 139
        void addSplineTransformNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, struct offshore::Spline const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x8B | Ordinal: 140
        void addTransformNode(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, class osg::Matrixd const &);

    // RVA: 0xCD | Ordinal: 206
        void cleanUp(void);

    // RVA: 0xCE | Ordinal: 207
        void clear3dsMaxData(void);

    // RVA: 0xD4 | Ordinal: 213
        void clearAndFreeMemory(void);

    // RVA: 0xE3 | Ordinal: 228
        void copyMeshNode(struct offshore::Scene &, int, int);

    // RVA: 0xE4 | Ordinal: 229
        void copyNode(struct offshore::Scene &, int, int, class osg::Matrixd const &);

    // RVA: 0xE5 | Ordinal: 230
        void copySplineNode(struct offshore::Scene &, int, int);

    // RVA: 0x110 | Ordinal: 273
        void errorCount(void) const;

    // RVA: 0x122 | Ordinal: 291
        void findInstanceByName(class ed::basic_string<char> const &);

    // RVA: 0x124 | Ordinal: 293
        void findNodeByName(class ed::basic_string<char> const &);

    // RVA: 0x125 | Ordinal: 294
        void findNodeByName(class ed::basic_string<char> const &, int, bool, bool) const;

    // RVA: 0x126 | Ordinal: 295
        void findNodesByName(class ed::basic_string<char> const &, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x136 | Ordinal: 311
        void getBoundingBox(void);

    // RVA: 0x153 | Ordinal: 340
        void getMaterial(int);

    // RVA: 0x154 | Ordinal: 341
        void getMaterial(int) const;

    // RVA: 0x157 | Ordinal: 344
        void getNodeParam(int, class ed::basic_string<char> const &) const;

    // RVA: 0x158 | Ordinal: 345
        void getNodeParam(int, class ed::basic_string<char> const &, int &) const;

    // RVA: 0x159 | Ordinal: 346
        void getNodeParam(int, class ed::basic_string<char> const &, unsigned int &) const;

    // RVA: 0x15A | Ordinal: 347
        void getNodeParam(int, class ed::basic_string<char> const &, double &) const;

    // RVA: 0x15B | Ordinal: 348
        void getNodeParam(int, class ed::basic_string<char> const &, class ed::basic_string<char> &) const;

    // RVA: 0x15C | Ordinal: 349
        void getNodeParam(int, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x15D | Ordinal: 350
        void getNodeParam(int, class ed::basic_string<char> const &, class osg::Matrixd &) const;

    // RVA: 0x15E | Ordinal: 351
        void getNodeParam(int, class ed::basic_string<char> const &, class osg::Vec3d &) const;

    // RVA: 0x15F | Ordinal: 352
        void getNodeParam(int, class ed::basic_string<char> const &, class osg::Vec4d &) const;

    // RVA: 0x160 | Ordinal: 353
        void getNodeParam(int, class ed::basic_string<char> const &, unsigned __int64 &) const;

    // RVA: 0x161 | Ordinal: 354
        void getNodeParam(int, class ed::basic_string<char> const &, bool &) const;

    // RVA: 0x162 | Ordinal: 355
        void getNodeParamIterateParents(int, class ed::basic_string<char> const &) const;

    // RVA: 0x163 | Ordinal: 356
        void getNodeParamIterateParents(int, class ed::basic_string<char> const &, int &) const;

    // RVA: 0x164 | Ordinal: 357
        void getNodeParams(int) const;

    // RVA: 0x165 | Ordinal: 358
        void getNodeParams(int, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> &) const;

    // RVA: 0x166 | Ordinal: 359
        void getNodeParams(int, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &) const;

    // RVA: 0x171 | Ordinal: 370
        void getParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> &) const;

    // RVA: 0x182 | Ordinal: 387
        void getRootNode(void);

    // RVA: 0x193 | Ordinal: 404
        void getVertexCount(void);

    // RVA: 0x19B | Ordinal: 412
        void inplaceInstances(int);

    // RVA: 0x1AA | Ordinal: 427
        void isEmpty(void) const;

    // RVA: 0x1AC | Ordinal: 429
        void isNaN(class ed::vector<struct offshore::Error, class ed::allocator<struct offshore::Error>> &);

    // RVA: 0x1AD | Ordinal: 430
        void isNodesMergable(int, int) const;

    // RVA: 0x1BA | Ordinal: 443
        void load(class ed::basic_string<char> const &, class osg::BoundingBoxImpl<class osg::Vec3f> *);

    // RVA: 0x1BB | Ordinal: 444
        void load(char const *, class osg::BoundingBoxImpl<class osg::Vec3f> *);

    // RVA: 0x1C7 | Ordinal: 456
        void moveChildren(int, int);

    // RVA: 0x1D4 | Ordinal: 469
        void query(struct offshore::ISceneQuerySink *, int, bool);

    // RVA: 0x1D6 | Ordinal: 471
        void queryCameras(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1D7 | Ordinal: 472
        void queryDataGeneral(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, enum offshore::enType, int, int);

    // RVA: 0x1D8 | Ordinal: 473
        void queryLights(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1D9 | Ordinal: 474
        void queryMeshes(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1DA | Ordinal: 475
        void queryPoints(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1DB | Ordinal: 476
        void queryShapes(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1DC | Ordinal: 477
        void queryShapesInWorldSpace(class ed::vector<int, class ed::allocator<int>> &, int);

    // RVA: 0x1DD | Ordinal: 478
        void querySplines(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1DE | Ordinal: 479
        void queryTransforms(class ed::vector<struct std::pair<class osg::Matrixd, int>, class ed::allocator<struct std::pair<class osg::Matrixd, int>>> &, int);

    // RVA: 0x1EE | Ordinal: 495
        void removeNodeParam(int, class ed::basic_string<char> const &);

    // RVA: 0x206 | Ordinal: 519
        void save(class ed::basic_string<char> const &);

    // RVA: 0x207 | Ordinal: 520
        void save(char const *);

    // RVA: 0x211 | Ordinal: 530
        void serialize(class io::Stream &, class osg::BoundingBoxImpl<class osg::Vec3f> *);

    // RVA: 0x21B | Ordinal: 540
        void setNodeEmptyParam(int, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x21C | Ordinal: 541
        void setNodeEmptyParam(int, class ed::basic_string<char> const &, int);

    // RVA: 0x21D | Ordinal: 542
        void setNodeEmptyParam(int, class ed::basic_string<char> const &, double);

    // RVA: 0x21E | Ordinal: 543
        void setNodeMaterial(int, int);

    // RVA: 0x21F | Ordinal: 544
        void setNodeName(int, class ed::basic_string<char> const &);

    // RVA: 0x220 | Ordinal: 545
        void setNodeParam(int, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x221 | Ordinal: 546
        void setNodeParam(int, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x222 | Ordinal: 547
        void setNodeParam(int, class ed::basic_string<char> const &, class osg::Vec3d const &);

    // RVA: 0x223 | Ordinal: 548
        void setNodeParam(int, class ed::basic_string<char> const &, class osg::Vec4d const &);

    // RVA: 0x224 | Ordinal: 549
        void setNodeParam(int, class ed::basic_string<char> const &, int);

    // RVA: 0x225 | Ordinal: 550
        void setNodeParam(int, class ed::basic_string<char> const &, unsigned int);

    // RVA: 0x226 | Ordinal: 551
        void setNodeParam(int, class ed::basic_string<char> const &, double);

    // RVA: 0x227 | Ordinal: 552
        void setNodeParam(int, class ed::basic_string<char> const &, unsigned __int64);

    // RVA: 0x228 | Ordinal: 553
        void setNodeParams(int, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x229 | Ordinal: 554
        void setNodeParams(int, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);

    // RVA: 0x22A | Ordinal: 555
        void setNodeTransform(int, class osg::Matrixd const &);

    // RVA: 0x22B | Ordinal: 556
        void setNoneIrrelevantNodes(int);

    // RVA: 0x231 | Ordinal: 562
        void setParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x234 | Ordinal: 565
        void setParent(int, int);

    // RVA: 0x252 | Ordinal: 595
        void swap(struct offshore::Scene &);

    // RVA: 0x25D | Ordinal: 606
        void tryConvertAnsiCodePageToUtf8(void);

    // RVA: 0x262 | Ordinal: 611
        void warningCount(void) const;
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_SCENE_HPP
