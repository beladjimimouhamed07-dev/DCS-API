#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: PostEffects.dll
// Class: PostEffectPipeline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace PostEffects {

class PostEffectPipeline
{
public:

    // RVA: 0x7 | Ordinal: 8
        void PostEffectPipeline(class PostEffects::PostEffectPipeline const &);

    // RVA: 0x8 | Ordinal: 9
        void PostEffectPipeline(void);

    // RVA: 0x1C | Ordinal: 29
        void build(void);

    // RVA: 0x1F | Ordinal: 32
        void copyToRenderTarget(class render::Texture, class osg::Vec4i const &, class osg::Vec4f const *, bool, enum render::MSAA_ENUM);

    // RVA: 0xC | Ordinal: 13
        void _PostEffectPipeline(void);
};

} // namespace PostEffects

// DCS_OPS_RE_POSTEFFECTS.DLL_POSTEFFECTPIPELINE_HPP
