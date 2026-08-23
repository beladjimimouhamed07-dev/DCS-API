#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ToneMapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class ToneMapper
{
public:

    // RVA: 0x52 | Ordinal: 83
        void ToneMapper(class deferredShading::ToneMapper const &);

    // RVA: 0x53 | Ordinal: 84
        void ToneMapper(void);

    // RVA: 0xD9 | Ordinal: 218
        void adaptation(class render::StructuredBuffer const &, float, int, int, bool, bool, unsigned int, class render::Texture);

    // RVA: 0x136 | Ordinal: 311
        void computeLuminance(class render::Texture const &, class render::Texture &, class render::StructuredBuffer &, int);

    // RVA: 0x1EB | Ordinal: 492
        void init(enum render::MSAA_ENUM, char const *);

    // RVA: 0x1F5 | Ordinal: 502
        void isInitialized(void) const;

    // RVA: 0x230 | Ordinal: 561
        void quad(int);

    // RVA: 0x24A | Ordinal: 587
        void release(void);

    // RVA: 0x291 | Ordinal: 658
        void setPreset(int);

    // RVA: 0x2A7 | Ordinal: 680
        void simpleToneMapping(class render::Texture &, class render::StructuredBuffer &, enum deferredShading::ToneMapperMode, class render::Texture &, bool);

    // RVA: 0x2AC | Ordinal: 685
        void toneMap(class render::Texture const &, class render::Texture const &, class render::Texture const &, class render::StructuredBuffer &, struct deferredShading::ToneMapperParams const *, class render::Texture, bool);

    // RVA: 0x2C4 | Ordinal: 709
        void updateParamsCBuffer(struct deferredShading::ToneMapperUniforms &, class osg::Vec2i const &, class osg::Vec4f const &, float, float);

    // RVA: 0x2C6 | Ordinal: 711
        void updateRuntimeParameters(class osg::Vec2i const &, class osg::Vec4f const &, float, struct deferredShading::ToneMapperParams const *);

    // RVA: 0x84 | Ordinal: 133
        void _ToneMapper(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_TONEMAPPER_HPP
