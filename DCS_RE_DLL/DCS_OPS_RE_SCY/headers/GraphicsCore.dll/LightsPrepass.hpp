#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: LightsPrepass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class LightsPrepass
{
public:

    // RVA: 0x2B | Ordinal: 44
        void LightsPrepass(class render::LightsPrepass &&);

    // RVA: 0x2C | Ordinal: 45
        void LightsPrepass(class render::LightsPrepass const &);

    // RVA: 0x2D | Ordinal: 46
        void LightsPrepass(enum render::MSAA_ENUM, class osg::Vec2i const &);

    // RVA: 0x128 | Ordinal: 297
        void cleanupLights(class render::StructuredBufferDynamic const *const, class render::Buffer const &);

    // RVA: 0x141 | Ordinal: 322
        void createBuffers(class osg::Vec2i const &);

    // RVA: 0x1BB | Ordinal: 444
        void getTiledBufferDims(class osg::Vec2i const &);

    // RVA: 0x219 | Ordinal: 538
        void mergeLightsCPU(class render::StructuredBufferDynamic const *const, class render::Buffer const &, class osg::Vec2i, class render::StructuredBufferDynamic *const);

    // RVA: 0x21A | Ordinal: 539
        void mergeLightsGPU(class render::StructuredBufferDynamic const *const, class render::Buffer const &, class render::StructuredBuffer const &, class render::StructuredBuffer const &, class render::Buffer const &);

    // RVA: 0x24D | Ordinal: 590
        void releaseBuffers(void);

    // RVA: 0x26B | Ordinal: 620
        void resetSync(void);

    // RVA: 0x2B5 | Ordinal: 694
        void update(class render::Buffer const &, int, class osg::Vec4i const &, class render::StructuredBufferDynamic const *const, struct render::LightTilesBuffer &, class render::Texture const &);

    // RVA: 0x2B6 | Ordinal: 695
        void update(class osg::Vec2i const &, class osg::Vec4i const &, class render::StructuredBufferDynamic const *const, struct render::LightTilesBuffer &, class render::Texture const &);

    // RVA: 0x2C0 | Ordinal: 705
        void updateInternal(class render::Buffer const &, int, class osg::Vec4i const &, class render::StructuredBufferDynamic const *const, struct render::LightTilesBuffer &, class render::Texture const &);

    // RVA: 0x2C9 | Ordinal: 714
        void update_OS(class osg::Vec2i const &, class osg::Vec4i const &, class render::StructuredBufferDynamic const *const, struct render::LightTilesBuffer &, class render::Texture const &);

    // RVA: 0x70 | Ordinal: 113
        void _LightsPrepass(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_LIGHTSPREPASS_HPP
