#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: model
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class model
{
public:

    // RVA: 0x21 | Ordinal: 34
        void appendIndices(struct model::Indices &, unsigned int, struct model::Indices const &);

    // RVA: 0x22 | Ordinal: 35
        void appendVertices(struct model::Vertices &, struct model::Vertices const &);

    // RVA: 0x2B | Ordinal: 44
        void applyMatrix(struct model::Vertices &, class osg::Matrixd const &, int);

    // RVA: 0x2D | Ordinal: 46
        void applyTransformToMesh(class model::RootNode *);

    // RVA: 0x39 | Ordinal: 58
        void calculateBoundingBox(class model::RootNode const *);

    // RVA: 0x3A | Ordinal: 59
        void calculateLightBox(class model::RootNode const *);

    // RVA: 0x40 | Ordinal: 65
        void checkOnZeroNormals(class model::RootNode *);

    // RVA: 0x46 | Ordinal: 71
        void cloneTransformTree(class model::Node const *, class ed::vector<class std::tuple<class ed::Ptr<class model::Node, struct model::IObjectDeleter>, class model::Node const *>, class ed::allocator<class std::tuple<class ed::Ptr<class model::Node, struct model::IObjectDeleter>, class model::Node const *>>> &);

    // RVA: 0x4A | Ordinal: 75
        void convertGeometryToGShell(class model::RootNode *);

    // RVA: 0x51 | Ordinal: 82
        void extractSubMesh(struct model::Indices &, struct model::Vertices const &);

    // RVA: 0x52 | Ordinal: 83
        void extremlyOptimizeMeshes(class model::RootNode *, float);

    // RVA: 0x55 | Ordinal: 86
        void fixNormalMap(struct model::VertexFormat &, struct model::TexCoordsChannels const &, struct model::Indices const &, struct model::Vertices &);

    // RVA: 0x56 | Ordinal: 87
        void fixNormalMap(struct model::VertexFormat const &, struct model::TexCoordsChannels const &, unsigned int, unsigned int const *, float *);

    // RVA: 0x57 | Ordinal: 88
        void fixZeroNormals(class model::RootNode *);

    // RVA: 0x59 | Ordinal: 90
        void generateTangentChannel(enum model::va::VertexAttribute, enum model::tex::TexChannel, struct model::TexCoordsChannels const &, struct model::Indices const &, struct model::Vertices &);

    // RVA: 0x5E | Ordinal: 95
        void getArgumentsList(class model::Node const *);

    // RVA: 0x81 | Ordinal: 130
        void getModelStat(class model::RootNode const *);

    // RVA: 0xBC | Ordinal: 189
        void isTriangleDegenerative(unsigned int, unsigned int, unsigned int, struct model::Vertices const &, float);

    // RVA: 0xD7 | Ordinal: 216
        void mergeNodes(class model::RootNode *);

    // RVA: 0xD8 | Ordinal: 217
        void mirrorGeometry(class model::RootNode *);

    // RVA: 0xD9 | Ordinal: 218
        void moveCollisionFromLods(class model::RootNode *);

    // RVA: 0xDA | Ordinal: 219
        void numberNodeConverter(class model::RootNode *);

    // RVA: 0xDF | Ordinal: 224
        void optimizeTextureChannels(class model::RootNode *, float, unsigned int &);

    // RVA: 0xE0 | Ordinal: 225
        void optimizeTransformations(class model::RootNode *);

    // RVA: 0xE9 | Ordinal: 234
        void removeCollisionShells(class model::RootNode *);

    // RVA: 0xEA | Ordinal: 235
        void removeConnectors(class model::RootNode *);

    // RVA: 0xF0 | Ordinal: 241
        void removeDegenerativeTriangles(struct model::Indices &);

    // RVA: 0xF1 | Ordinal: 242
        void removeEmptyRenderNodes(class model::RootNode *);

    // RVA: 0xF2 | Ordinal: 243
        void removeLights(class model::RootNode *);

    // RVA: 0xF3 | Ordinal: 244
        void removeRenderNodes(class model::RootNode *, class std::function<bool __cdecl(class ed::Ptr<class model::BaseRenderNode, struct model::IObjectDeleter>)>);

    // RVA: 0xF4 | Ordinal: 245
        void removeRenderables(class model::RootNode *);

    // RVA: 0xF5 | Ordinal: 246
        void removeShellNodes(class model::RootNode *, class std::function<bool __cdecl(class model::BaseShellNode const *)>);

    // RVA: 0xF7 | Ordinal: 248
        void removeUnusedTextureChannels(struct model::Vertices &, struct model::VertexFormat &, struct model::TexCoordsChannels const &);

    // RVA: 0xF8 | Ordinal: 249
        void removeUnusedVertices(struct model::Vertices &, struct model::Indices &);

    // RVA: 0xF9 | Ordinal: 250
        void removeUnusedVertices(class model::RootNode *);

    // RVA: 0xFA | Ordinal: 251
        void renderNodeToShellNode(class model::RenderNode *);

    // RVA: 0xFB | Ordinal: 252
        void reorderTexChannels(class std::unordered_map<enum model::va::VertexAttribute, enum model::va::VertexAttribute, struct std::hash<enum model::va::VertexAttribute>, struct std::equal_to<enum model::va::VertexAttribute>, class ed::allocator<struct std::pair<enum model::va::VertexAttribute const, enum model::va::VertexAttribute>>> const &, struct model::Vertices &, struct model::VertexFormat &);

    // RVA: 0xFC | Ordinal: 253
        void replaceMatrixIndexInVertices(struct model::Vertices &, int, int);

    // RVA: 0xFD | Ordinal: 254
        void replaceRenderNode(class model::RootNode *, class ed::Ptr<class model::BaseRenderNode, struct model::IObjectDeleter>, class model::BaseRenderNode *);

    // RVA: 0xFE | Ordinal: 255
        void rescaleAnimationKeys(class model::RootNode *, double);

    // RVA: 0x135 | Ordinal: 310
        void skinNodeToShellSkin(class model::SkinNode const *);

    // RVA: 0x136 | Ordinal: 311
        void splitFakeOmniLightsNode(class ed::Ptr<class model::FakeOmniLightsNode, struct model::IObjectDeleter>);

    // RVA: 0x137 | Ordinal: 312
        void splitFakeSpotLightsNode(class ed::Ptr<class model::FakeSpotLightsNode, struct model::IObjectDeleter>);

    // RVA: 0x138 | Ordinal: 313
        void splitRenderNode(class model::RenderNode const *);

    // RVA: 0x139 | Ordinal: 314
        void splitRenderNodeByDamageArgument(class model::RenderNode const *);

    // RVA: 0x13A | Ordinal: 315
        void splitRenderNodes(class model::RootNode *);
};

// DCS_OPS_RE_UNIMODELDESC.DLL_MODEL_HPP
