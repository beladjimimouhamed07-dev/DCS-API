#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edm2graph.dll
// Class: DCSModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edm2g {

class DCSModel
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Create(char const *, char const *, struct model::ModelOptions const &);

    // RVA: 0x2 | Ordinal: 3
        void GetConnector(int);

    // RVA: 0x3 | Ordinal: 4
        void GetConnector(char const *);

    // RVA: 0x4 | Ordinal: 5
        void GetLight(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0x5 | Ordinal: 6
        void GetLight(class Graphics::ModelInstance &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0x6 | Ordinal: 7
        void GetLightPosition(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int) const;

    // RVA: 0x7 | Ordinal: 8
        void GetTexturesNames(class ed::unordered_set<class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x8 | Ordinal: 9
        void GetTexturesTexCoords(class std::unordered_map<class ed::basic_string<char>, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>>>> &) const;

    // RVA: 0x9 | Ordinal: 10
        void Parse(class Graphics::ModelInstance &, class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0xB | Ordinal: 12
        void ParseMT(class Graphics::ModelInstance &, struct render::CollectionInfo const *, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0xA | Ordinal: 11
        void ParseMT2(class Graphics::ModelInstance &, unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0xD | Ordinal: 14
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct MultCoefs>>> const &);

    // RVA: 0x10 | Ordinal: 17
        void createGraphicInstance(class ed::vector<float, class ed::allocator128<float>> const &, class model::ModelCookie *) const;

    // RVA: 0x11 | Ordinal: 18
        void create_cookie(void);

    // RVA: 0x12 | Ordinal: 19
        void enumerateSegments(class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, class osg::Vec3f const &, class osg::Vec3f const &)> const &);

    // RVA: 0x13 | Ordinal: 20
        void findCloseParts(class osg::Matrixd const &, class model::IModelParams const *, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float)> const &);

    // RVA: 0x14 | Ordinal: 21
        void getBoundingBox(int) const;

    // RVA: 0x15 | Ordinal: 22
        void getBoundingBox(void) const;

    // RVA: 0x16 | Ordinal: 23
        void getCollisionSegmentId(char const *) const;

    // RVA: 0x17 | Ordinal: 24
        void getCollisionSegmentName(unsigned __int64) const;

    // RVA: 0x18 | Ordinal: 25
        void getCollisionShellBoundingBox(unsigned __int64, class model::IModelParams const *) const;

    // RVA: 0x19 | Ordinal: 26
        void getCollisionShellId(char const *) const;

    // RVA: 0x1A | Ordinal: 27
        void getCollisionShellName(unsigned __int64) const;

    // RVA: 0x1B | Ordinal: 28
        void getConnector(unsigned int) const;

    // RVA: 0x1C | Ordinal: 29
        void getConnectorByName(char const *) const;

    // RVA: 0x1D | Ordinal: 30
        void getLight(unsigned int) const;

    // RVA: 0x1E | Ordinal: 31
        void getLightingBox(void) const;

    // RVA: 0x1F | Ordinal: 32
        void getLoadState(void) const;

    // RVA: 0x20 | Ordinal: 33
        void getMults(void);

    // RVA: 0x21 | Ordinal: 34
        void getMultsToRegister(void *);

    // RVA: 0x22 | Ordinal: 35
        void getName(void) const;

    // RVA: 0x23 | Ordinal: 36
        void getNumArguments(void) const;

    // RVA: 0x24 | Ordinal: 37
        void getNumCollisionSegments(void) const;

    // RVA: 0x25 | Ordinal: 38
        void getNumCollisionShells(void) const;

    // RVA: 0x26 | Ordinal: 39
        void getNumConnectors(void) const;

    // RVA: 0x27 | Ordinal: 40
        void getNumLights(void) const;

    // RVA: 0x29 | Ordinal: 42
        void getUsedArgs(unsigned int *) const;

    // RVA: 0x2A | Ordinal: 43
        void getUserBox(void) const;

    // RVA: 0x2B | Ordinal: 44
        void getVisArgs(unsigned __int64 &) const;

    // RVA: 0x2C | Ordinal: 45
        void reload(void);

    // RVA: 0x2D | Ordinal: 46
        void resetMults(void);

    // RVA: 0x30 | Ordinal: 49
        void testWithBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double)> const &) const;

    // RVA: 0x31 | Ordinal: 50
        void testWithModel(class osg::Matrixd const &, class model::IModelParams const *, class model::IModel &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<bool __cdecl(char const *, char const *, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Vec3f const &)> const &);

    // RVA: 0x32 | Ordinal: 51
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, unsigned __int64, double, class osg::Vec3d const &)> const &);

    // RVA: 0x33 | Ordinal: 52
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x34 | Ordinal: 53
        void testWithSegment(class osg::Vec3d const &, int, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x0 | Ordinal: 1
        void _DCSModel(void);
};

} // namespace edm2g

// DCS_OPS_RE_EDM2GRAPH.DLL_DCSMODEL_HPP
