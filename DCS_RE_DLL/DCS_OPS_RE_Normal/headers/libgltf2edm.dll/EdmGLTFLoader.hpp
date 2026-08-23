#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: libgltf2edm.dll
// Class: EdmGLTFLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class EdmGLTFLoader
{
public:

    // RVA: 0x0 | Ordinal: 1
        void EdmGLTFLoader(class EdmGLTFLoader &&);

    // RVA: 0x1 | Ordinal: 2
        void EdmGLTFLoader(class EdmGLTFLoader const &);

    // RVA: 0x2 | Ordinal: 3
        void EdmGLTFLoader(void);

    // RVA: 0x6 | Ordinal: 7
        void ExtractArgAnimationKeys(struct EdmGLTFLoader::ArgAnimationKeys &, struct EdmGLTFLoader::BaseAnimParam &, struct tinygltf::Animation const &, int, int, bool, bool);

    // RVA: 0x7 | Ordinal: 8
        void ExtractArgNum(class ed::basic_string<char> const &, int &);

    // RVA: 0x8 | Ordinal: 9
        void ExtractConnectorName(class ed::basic_string<char> const &);

    // RVA: 0x9 | Ordinal: 10
        void GetAttribute(unsigned char const *, unsigned int);

    // RVA: 0xA | Ordinal: 11
        void GetColor3FromDoubleVec(class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0xB | Ordinal: 12
        void GetColor3FromDoubleVec(class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0xC | Ordinal: 13
        void GetColor4FromDoubleVec(class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0xD | Ordinal: 14
        void GetColor4FromDoubleVec(class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0xE | Ordinal: 15
        void GetDrawMode(int) const;

    // RVA: 0xF | Ordinal: 16
        void GetIndice(struct tinygltf::Buffer const &, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);

    // RVA: 0x10 | Ordinal: 17
        void GetIndices(struct tinygltf::Accessor const &);

    // RVA: 0x11 | Ordinal: 18
        void GetIndices(struct tinygltf::Buffer const &, struct tinygltf::BufferView const &, struct tinygltf::Accessor const &);

    // RVA: 0x12 | Ordinal: 19
        void GetLightPunctual(class nlohmann::basic_json<class std::map, class std::vector, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, __int64, unsigned __int64, double, class std::allocator, struct nlohmann::adl_serializer, class std::vector<unsigned char, class std::allocator<unsigned char>>> const &);

    // RVA: 0x13 | Ordinal: 20
        void GetLoadError(void) const;

    // RVA: 0x14 | Ordinal: 21
        void GetLoadState(void);

    // RVA: 0x15 | Ordinal: 22
        void GetLoadWarning(void) const;

    // RVA: 0x16 | Ordinal: 23
        void GetMatrices(struct tinygltf::Accessor const &);

    // RVA: 0x17 | Ordinal: 24
        void GetMatrices(struct tinygltf::Skin const &);

    // RVA: 0x18 | Ordinal: 25
        void GetNodeToAnimMap(void);

    // RVA: 0x19 | Ordinal: 26
        void GetNumPrimitives(struct tinygltf::Primitive const &);

    // RVA: 0x1A | Ordinal: 27
        void GetNumVertices(struct tinygltf::Primitive const &);

    // RVA: 0x1B | Ordinal: 28
        void GetPrimitiveErrorMsg(int) const;

    // RVA: 0x1C | Ordinal: 29
        void GetRootNode(void);

    // RVA: 0x1D | Ordinal: 30
        void GetRotationFirstKey(struct tinygltf::Accessor const &);

    // RVA: 0x1E | Ordinal: 31
        void GetRotationKeys(struct tinygltf::Accessor const &, class ed::vector<float, class ed::allocator<float>> const &, unsigned int, bool);

    // RVA: 0x1F | Ordinal: 32
        void GetScaleFirstKey(struct tinygltf::Accessor const &);

    // RVA: 0x20 | Ordinal: 33
        void GetScaleKeys(struct tinygltf::Accessor const &, class ed::vector<float, class ed::allocator<float>> const &, unsigned int, bool);

    // RVA: 0x21 | Ordinal: 34
        void GetSpecularGlossinessMat(class nlohmann::basic_json<class std::map, class std::vector, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, __int64, unsigned __int64, double, class std::allocator, struct nlohmann::adl_serializer, class std::vector<unsigned char, class std::allocator<unsigned char>>> const &);

    // RVA: 0x22 | Ordinal: 35
        void GetTimeline(struct tinygltf::Accessor const &);

    // RVA: 0x23 | Ordinal: 36
        void GetTranslationFirstKey(struct tinygltf::Accessor const &);

    // RVA: 0x24 | Ordinal: 37
        void GetTranslationKeys(struct tinygltf::Accessor const &, class ed::vector<float, class ed::allocator<float>> const &, unsigned int, bool);

    // RVA: 0x25 | Ordinal: 38
        void GetUniMaterialName(struct tinygltf::Material const &);

    // RVA: 0x26 | Ordinal: 39
        void GetVertexAttributeEnum(class ed::basic_string<char> const &);

    // RVA: 0x27 | Ordinal: 40
        void GetVertexFormat(struct tinygltf::Primitive const &);

    // RVA: 0x28 | Ordinal: 41
        void GetVertices(struct tinygltf::Primitive const &, struct model::VertexFormat const &);

    // RVA: 0x29 | Ordinal: 42
        void HaveLightExt(class nlohmann::basic_json<class std::map, class std::vector, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, __int64, unsigned __int64, double, class std::allocator, struct nlohmann::adl_serializer, class std::vector<unsigned char, class std::allocator<unsigned char>>> const &);

    // RVA: 0x2A | Ordinal: 43
        void HaveLightExt(class tinygltf::Node const &);

    // RVA: 0x2B | Ordinal: 44
        void HaveSpecularGlossinessMat(class nlohmann::basic_json<class std::map, class std::vector, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, __int64, unsigned __int64, double, class std::allocator, struct nlohmann::adl_serializer, class std::vector<unsigned char, class std::allocator<unsigned char>>> const &);

    // RVA: 0x2C | Ordinal: 45
        void IsConnectorNode(class tinygltf::Node const &);

    // RVA: 0x2D | Ordinal: 46
        void IsImageFileMime(class ed::basic_string<char> const &);

    // RVA: 0x2E | Ordinal: 47
        void IsRenderNode(class tinygltf::Node const &);

    // RVA: 0x2F | Ordinal: 48
        void IsSegmentNode(class tinygltf::Node const &);

    // RVA: 0x30 | Ordinal: 49
        void IsShellNode(class tinygltf::Node const &);

    // RVA: 0x31 | Ordinal: 50
        void LoadModel(class std::filesystem::path const &);

    // RVA: 0x32 | Ordinal: 51
        void MakeConnectorNodes(int const &);

    // RVA: 0x33 | Ordinal: 52
        void MakeDafaultTransform(class osg::Matrixd);

    // RVA: 0x34 | Ordinal: 53
        void MakeDafaultTransform(void);

    // RVA: 0x35 | Ordinal: 54
        void MakeLightNodes(int const &);

    // RVA: 0x36 | Ordinal: 55
        void MakeMaterialProperties(struct tinygltf::Material const &, class model::PropertiesSet &);

    // RVA: 0x37 | Ordinal: 56
        void MakeMatrix(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &) const;

    // RVA: 0x38 | Ordinal: 57
        void MakeMatrix(class ed::vector<double, class ed::allocator<double>> const &) const;

    // RVA: 0x39 | Ordinal: 58
        void MakeMatrix(class std::vector<double, class std::allocator<double>> const &, class std::vector<double, class std::allocator<double>> const &, class std::vector<double, class std::allocator<double>> const &) const;

    // RVA: 0x3A | Ordinal: 59
        void MakeMatrix(class std::vector<double, class std::allocator<double>> const &) const;

    // RVA: 0x3B | Ordinal: 60
        void MakeMatrix(class tinygltf::Node const &) const;

    // RVA: 0x3C | Ordinal: 61
        void MakeNoMaterialProperties(class model::PropertiesSet &);

    // RVA: 0x3D | Ordinal: 62
        void MakeNodesHierarchy(int);

    // RVA: 0x3E | Ordinal: 63
        void MakePropertySet(struct tinygltf::Primitive const &);

    // RVA: 0x3F | Ordinal: 64
        void MakeRenderNodes(int const &);

    // RVA: 0x40 | Ordinal: 65
        void MakeSegmentNodes(int const &);

    // RVA: 0x41 | Ordinal: 66
        void MakeShellNodes(int const &);

    // RVA: 0x42 | Ordinal: 67
        void MakeSingleArgAnimationNode(int, struct EdmGLTFLoader::ArgAnimationKeys const &, struct EdmGLTFLoader::BaseAnimParam const &);

    // RVA: 0x43 | Ordinal: 68
        void MakeSingleBoneNode(int, class osg::Matrixd const &);

    // RVA: 0x44 | Ordinal: 69
        void MakeSingleTransformNode(class tinygltf::Node const &);

    // RVA: 0x45 | Ordinal: 70
        void MakeTextureChannels(struct tinygltf::Material const &);

    // RVA: 0x46 | Ordinal: 71
        void MakeTextureProperties(struct tinygltf::Material const &, class model::PropertiesSet &);

    // RVA: 0x47 | Ordinal: 72
        void MaterialHasTextures(struct tinygltf::Material const &);

    // RVA: 0x48 | Ordinal: 73
        void NormalizeTimeline(class ed::vector<float, class ed::allocator<float>> &);

    // RVA: 0x49 | Ordinal: 74
        void ParseModel(void);

    // RVA: 0x4A | Ordinal: 75
        void PrimitiveSupported(int) const;

    // RVA: 0x4B | Ordinal: 76
        void SetTextureProperty(struct tinygltf::Texture const &, unsigned int, class model::PropertiesSet &);

    // RVA: 0x4C | Ordinal: 77
        void ValidateVertexAttribute(class ed::basic_string<char> const &);

    // RVA: 0x3 | Ordinal: 4
        void _EdmGLTFLoader(void);
};

// DCS_OPS_RE_LIBGLTF2EDM.DLL_EDMGLTFLOADER_HPP
