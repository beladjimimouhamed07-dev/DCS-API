#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: GPUAttachmentModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class GPUAttachmentModel
{
public:

    // RVA: 0x1B | Ordinal: 28
        void GPUAttachmentModel(char const *, char const *);

    // RVA: 0x6C | Ordinal: 109
        void Parse(class Graphics::ModelInstance &, class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x6D | Ordinal: 110
        void ParseMT2(class Graphics::ModelInstance &, unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &, class wPosition3<float> const &);

    // RVA: 0x81 | Ordinal: 130
        void _clean_indices(struct Animator::CharacterBatcher *);

    // RVA: 0x9E | Ordinal: 159
        void _resize_to_fit(void);

    // RVA: 0xB7 | Ordinal: 184
        void batch_render(struct Animator::CharacterBatcher *);

    // RVA: 0xC9 | Ordinal: 202
        void create_cookie(void);

    // RVA: 0xCC | Ordinal: 205
        void create_meshes(struct aiScene const *, class ed::vector<class std::shared_ptr<class Animator::AnimatorMeshBase>, class ed::allocator<class std::shared_ptr<class Animator::AnimatorMeshBase>>> &);

    // RVA: 0xD2 | Ordinal: 211
        void deserialize_state(class Mail::Reader &);

    // RVA: 0xD3 | Ordinal: 212
        void deserialize_state(class Mail::Message const &);

    // RVA: 0x1B5 | Ordinal: 438
        void on_add_instance(class Animator::GPUAttachmentModel *);

    // RVA: 0x1B8 | Ordinal: 441
        void parse(struct render::CollectionInfo const *, class Animator::GPUAttachmentCookie *, class wPosition3<float> const &, class render::StructuredBuffer *, class render::StructuredBuffer *);

    // RVA: 0x1C7 | Ordinal: 456
        void reflection(void);

    // RVA: 0x1D1 | Ordinal: 466
        void render(class ed::vector<int, class ed::allocator<int>> const &, class osg::Vec3f const &, int, enum render::ShadingModelEnum, class render::StructuredBuffer *, class render::StructuredBuffer *);

    // RVA: 0x33 | Ordinal: 52
        void _GPUAttachmentModel(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_GPUATTACHMENTMODEL_HPP
