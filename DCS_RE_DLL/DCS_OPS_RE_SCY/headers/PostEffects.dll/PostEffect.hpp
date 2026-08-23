#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: PostEffects.dll
// Class: PostEffect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace PostEffects {

class PostEffect
{
public:

    // RVA: 0x3 | Ordinal: 4
        void PostEffect(class PostEffects::PostEffect const &);

    // RVA: 0x4 | Ordinal: 5
        void PostEffect(void);

    // RVA: 0x17 | Ordinal: 24
        void apply(class render::Texture, class render::Texture, class std::initializer_list<class render::Texture> const &, class osg::Vec4f const *);

    // RVA: 0x18 | Ordinal: 25
        void apply(class render::Texture, class osg::Vec4f const *);

    // RVA: 0x19 | Ordinal: 26
        void apply(struct render::SceneRenderContext const &, class render::Texture, class render::Texture, class std::initializer_list<class render::Texture> const &, class osg::Vec4f const *);

    // RVA: 0x1A | Ordinal: 27
        void build(enum PostEffects::PostEffectType);

    // RVA: 0x25 | Ordinal: 38
        void setParams(int, ...);

    // RVA: 0xA | Ordinal: 11
        void _PostEffect(void);
};

} // namespace PostEffects

// DCS_OPS_RE_POSTEFFECTS.DLL_POSTEFFECT_HPP
