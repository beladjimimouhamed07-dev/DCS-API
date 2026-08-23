#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: FlagModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cloth {

class FlagModel
{
public:

    // RVA: 0x6 | Ordinal: 7
        void Create(char const *, char const *, struct model::ModelOptions const &);

    // RVA: 0x8 | Ordinal: 9
        void GetConnector(int);

    // RVA: 0x9 | Ordinal: 10
        void GetConnector(char const *);

    // RVA: 0xC | Ordinal: 13
        void GetLight(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0xD | Ordinal: 14
        void GetLight(class Graphics::ModelInstance &, unsigned int, class Graphics::ModelLight &) const;

    // RVA: 0x10 | Ordinal: 17
        void GetLightPosition(class Graphics::ModelInstance &, class wPosition3<float> const &, unsigned int) const;

    // RVA: 0x12 | Ordinal: 19
        void GetTexturesNames(class ed::unordered_set<class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x14 | Ordinal: 21
        void GetTexturesTexCoords(class std::unordered_map<class ed::basic_string<char>, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>>>> &) const;

    // RVA: 0x18 | Ordinal: 25
        void ParseMT2(class Graphics::ModelInstance &, unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0x1F | Ordinal: 32
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct MultCoefs>>> const &);

    // RVA: 0x27 | Ordinal: 40
        void createGraphicInstance(class ed::vector<float, class ed::allocator128<float>> const &, class model::ModelCookie *) const;

    // RVA: 0x29 | Ordinal: 42
        void create_cookie(void);

    // RVA: 0x2F | Ordinal: 48
        void enumerateSegments(class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, class osg::Vec3f const &, class osg::Vec3f const &)> const &);

    // RVA: 0x32 | Ordinal: 51
        void findCloseParts(class osg::Matrixd const &, class model::IModelParams const *, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float)> const &);

    // RVA: 0x35 | Ordinal: 54
        void getBoundingBox(int) const;

    // RVA: 0x36 | Ordinal: 55
        void getBoundingBox(void) const;

    // RVA: 0x39 | Ordinal: 58
        void getCollisionSegmentId(char const *) const;

    // RVA: 0x3B | Ordinal: 60
        void getCollisionSegmentName(unsigned __int64) const;

    // RVA: 0x3D | Ordinal: 62
        void getCollisionShellBoundingBox(unsigned __int64, class model::IModelParams const *) const;

    // RVA: 0x3F | Ordinal: 64
        void getCollisionShellId(char const *) const;

    // RVA: 0x41 | Ordinal: 66
        void getCollisionShellName(unsigned __int64) const;

    // RVA: 0x43 | Ordinal: 68
        void getConnector(unsigned int) const;

    // RVA: 0x45 | Ordinal: 70
        void getConnectorByName(char const *) const;

    // RVA: 0x48 | Ordinal: 73
        void getLight(unsigned int) const;

    // RVA: 0x4A | Ordinal: 75
        void getLightingBox(void) const;

    // RVA: 0x4C | Ordinal: 77
        void getLoadState(void) const;

    // RVA: 0x4F | Ordinal: 80
        void getMults(void);

    // RVA: 0x51 | Ordinal: 82
        void getMultsToRegister(void *);

    // RVA: 0x54 | Ordinal: 85
        void getName(void) const;

    // RVA: 0x56 | Ordinal: 87
        void getNumArguments(void) const;

    // RVA: 0x58 | Ordinal: 89
        void getNumCollisionSegments(void) const;

    // RVA: 0x5A | Ordinal: 91
        void getNumCollisionShells(void) const;

    // RVA: 0x5C | Ordinal: 93
        void getNumConnectors(void) const;

    // RVA: 0x5E | Ordinal: 95
        void getNumLights(void) const;

    // RVA: 0x62 | Ordinal: 99
        void getUsedArgs(unsigned int *) const;

    // RVA: 0x64 | Ordinal: 101
        void getUserBox(void) const;

    // RVA: 0x66 | Ordinal: 103
        void getVisArgs(unsigned __int64 &) const;

    // RVA: 0x6C | Ordinal: 109
        void reload(void);

    // RVA: 0x6E | Ordinal: 111
        void resetMults(void);

    // RVA: 0x75 | Ordinal: 118
        void testWithBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double)> const &) const;

    // RVA: 0x78 | Ordinal: 121
        void testWithModel(class osg::Matrixd const &, class model::IModelParams const *, class model::IModel &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<bool __cdecl(char const *, char const *, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Vec3f const &)> const &);

    // RVA: 0x7A | Ordinal: 123
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<void __cdecl(char const *, unsigned __int64, double, class osg::Vec3d const &)> const &);

    // RVA: 0x7B | Ordinal: 124
        void testWithSegment(class osg::Vec3d const &, class osg::Vec3d const &, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x7C | Ordinal: 125
        void testWithSegment(class osg::Vec3d const &, int, class model::IModelParams const *, class std::function<void __cdecl(unsigned int, double, class osg::Vec3d const &)> const &);

    // RVA: 0x2 | Ordinal: 3
        void _FlagModel(void);
};

} // namespace cloth

// DCS_OPS_RE_NGMODEL.DLL_FLAGMODEL_HPP
