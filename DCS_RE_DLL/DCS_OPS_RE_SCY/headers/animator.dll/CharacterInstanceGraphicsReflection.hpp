#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: CharacterInstanceGraphicsReflection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class CharacterInstanceGraphicsReflection
{
public:

    // RVA: 0x10 | Ordinal: 17
        void CharacterInstanceGraphicsReflection(class std::unique_ptr<class model::ModelCookie, struct model::ModelCookieDeleter> &&);

    // RVA: 0x11 | Ordinal: 18
        void CharacterInstanceGraphicsReflection(class Animator::CharacterInstanceGraphicsReflection const &);

    // RVA: 0x65 | Ordinal: 102
        void GetDrawArguments(void);

    // RVA: 0x66 | Ordinal: 103
        void GetPosition(void);

    // RVA: 0xC5 | Ordinal: 198
        void collectRenderables(unsigned int, struct render::CollectionInfo const **const, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **const, struct render::ILightProbeSampler &);

    // RVA: 0x239 | Ordinal: 570
        void updateGraphicInstance(class wPosition3<float> const &, class osg::Vec3d const &, class Mail::Message const &, double);

    // RVA: 0x23A | Ordinal: 571
        void updateGraphicModel(class Mail::Message const &);

    // RVA: 0x2E | Ordinal: 47
        void _CharacterInstanceGraphicsReflection(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_CHARACTERINSTANCEGRAPHICSREFLECTION_HPP
