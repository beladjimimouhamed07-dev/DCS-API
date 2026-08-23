#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: PostEffects.dll
// Class: PostEffectBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace PostEffects {

class PostEffectBase
{
public:

    // RVA: 0x5 | Ordinal: 6
        void PostEffectBase(class PostEffects::PostEffectBase const &);

    // RVA: 0x6 | Ordinal: 7
        void PostEffectBase(void);

    // RVA: 0x15 | Ordinal: 22
        void addMSAAShaderDefine(class render::Texture const &, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> &);

    // RVA: 0x16 | Ordinal: 23
        void addMSAAShaderDefine(enum render::MSAA_ENUM, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> &);

    // RVA: 0x1B | Ordinal: 28
        void build(enum PostEffects::PostEffectType);

    // RVA: 0x1D | Ordinal: 30
        void buildFrameBuffer(class render::FrameBuffer &, char const *, int, int, enum render::FMT_ENUM);

    // RVA: 0x20 | Ordinal: 33
        void drawQuad(class render::Shader *, int);

    // RVA: 0x21 | Ordinal: 34
        void enable(bool);

    // RVA: 0x22 | Ordinal: 35
        void init(struct PostEffects::Initializer const &);

    // RVA: 0x23 | Ordinal: 36
        void isEnabled(void);

    // RVA: 0x24 | Ordinal: 37
        void release(void);

    // RVA: 0x26 | Ordinal: 39
        void setParamsList(int, char *&);

    // RVA: 0xB | Ordinal: 12
        void _PostEffectBase(void);
};

} // namespace PostEffects

// DCS_OPS_RE_POSTEFFECTS.DLL_POSTEFFECTBASE_HPP
