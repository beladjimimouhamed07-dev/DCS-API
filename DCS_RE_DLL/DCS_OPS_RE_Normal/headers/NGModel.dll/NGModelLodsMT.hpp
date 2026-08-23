#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: NGModelLodsMT
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class NGModelLodsMT
{
public:

    // RVA: 0x7 | Ordinal: 8
        void Create(char const *, char const *, struct model::ModelOptions const &);

    // RVA: 0x5 | Ordinal: 6
        void Create2(char const *, char const *, struct model::ModelOptions const &);

    // RVA: 0xA | Ordinal: 11
        void GetConnector(int);

    // RVA: 0xB | Ordinal: 12
        void GetConnector(char const *);

    // RVA: 0xE | Ordinal: 15
        void GetLight(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0xF | Ordinal: 16
        void GetLight(class Graphics::ModelInstance &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0x11 | Ordinal: 18
        void GetLightPosition(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int) const;

    // RVA: 0x13 | Ordinal: 20
        void GetTexturesNames(class ed::unordered_set<class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x15 | Ordinal: 22
        void GetTexturesTexCoords(class std::unordered_map<class ed::basic_string<char>, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>>>> &) const;

    // RVA: 0x17 | Ordinal: 24
        void Parse(class Graphics::ModelInstance &, class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x1A | Ordinal: 27
        void ParseMT(class Graphics::ModelInstance &, struct render::CollectionInfo const *, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0x19 | Ordinal: 26
        void ParseMT2(class Graphics::ModelInstance &, unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0x21 | Ordinal: 34
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct MultCoefs>>> const &);

    // RVA: 0x28 | Ordinal: 41
        void createGraphicInstance(class ed::vector<float, class ed::allocator128<float>> const &, class model::ModelCookie *) const;

    // RVA: 0x2A | Ordinal: 43
        void create_cookie(void);

    // RVA: 0x30 | Ordinal: 49
        void enumerateSegments(class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, class osg::Vec3f const &, class osg::Vec3f const &)> const &);

    // RVA: 0x33 | Ordinal: 52
        void findCloseParts(class osg::Matrixd const &, class model::IModelParams const *, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float)> const &);

    // RVA: 0x31 | Ordinal: 50
        void findCloseParts2(class osg::Matrixd const &, class model::IModelParams const *, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float, class osg::Vec3d const &)> const &);

    // RVA: 0x37 | Ordinal: 56
        void getBoundingBox(int) const;

    // RVA: 0x38 | Ordinal: 57
        void getBoundingBox(void) const;

    // RVA: 0x3A | Ordinal: 59
        void getCollisionSegmentId(char const *) const;

    // RVA: 0x3C | Ordinal: 61
        void getCollisionSegmentName(unsigned __int64) const;

    // RVA: 0x3E | Ordinal: 63
        void getCollisionShellBoundingBox(unsigned __int64, class model::IModelParams const *) const;

    // RVA: 0x40 | Ordinal: 65
        void getCollisionShellId(char const *) const;

    // RVA: 0x42 | Ordinal: 67
        void getCollisionShellName(unsigned __int64) const;

    // RVA: 0x44 | Ordinal: 69
        void getConnector(unsigned int) const;

    // RVA: 0x46 | Ordinal: 71
        void getConnectorByName(char const *) const;

    // RVA: 0x47 | Ordinal: 72
        void getFirstLod(void) const;

    // RVA: 0x49 | Ordinal: 74
        void getLight(unsigned int) const;

    // RVA: 0x4B | Ordinal: 76
        void getLightingBox(void) const;

    // RVA: 0x4D | Ordinal: 78
        void getLoadState(void) const;

    // RVA: 0x50 | Ordinal: 81
        void getMults(void);

    // RVA: 0x52 | Ordinal: 83
        void getMultsToRegister(void *);

    // RVA: 0x55 | Ordinal: 86
        void getName(void) const;

    // RVA: 0x57 | Ordinal: 88
        void getNumArguments(void) const;

    // RVA: 0x59 | Ordinal: 90
        void getNumCollisionSegments(void) const;

    // RVA: 0x5B | Ordinal: 92
        void getNumCollisionShells(void) const;

    // RVA: 0x5D | Ordinal: 94
        void getNumConnectors(void) const;

    // RVA: 0x5F | Ordinal: 96
        void getNumLights(void) const;

    // RVA: 0x63 | Ordinal: 100
        void getUsedArgs(unsigned int *) const;

    // RVA: 0x65 | Ordinal: 102
        void getUserBox(void) const;

    // RVA: 0x67 | Ordinal: 104
        void getVisArgs(unsigned __int64 &) const;

    // RVA: 0x6D | Ordinal: 110
        void reload(void);

    // RVA: 0x6F | Ordinal: 112
        void resetMults(void);

    // RVA: 0x76 | Ordinal: 119
        void testWithBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double)> const &) const;

    // RVA: 0x77 | Ordinal: 120
        void testWithCone(class osg::Matrixd const &, class model::IModelParams const *, class osg::Matrixd const &, float, float, class ed::span<struct model::Cone const, -1>, class std::function<void __cdecl(char const *, unsigned __int64, class osg::Vec3d const &, float, float, float)> const &);

    // RVA: 0x79 | Ordinal: 122
        void testWithModel(class osg::Matrixd const &, class model::IModelParams const *, class model::IModel &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<bool __cdecl(char const *, char const *, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Vec3f const &)> const &);

    // RVA: 0x7D | Ordinal: 126
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, unsigned __int64, double, class osg::Vec3d const &)> const &);

    // RVA: 0x7E | Ordinal: 127
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x7F | Ordinal: 128
        void testWithSegment(class osg::Vec3d const &, int, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x4 | Ordinal: 5
        void _NGModelLodsMT(void);
};

} // namespace model

// DCS_OPS_RE_NGMODEL.DLL_NGMODELLODSMT_HPP
