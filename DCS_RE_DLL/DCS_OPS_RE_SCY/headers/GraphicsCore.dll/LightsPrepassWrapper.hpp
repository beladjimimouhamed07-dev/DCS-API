#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: LightsPrepassWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class LightsPrepassWrapper
{
public:

    // RVA: 0x2E | Ordinal: 47
        void LightsPrepassWrapper(void);

    // RVA: 0x126 | Ordinal: 295
        void checkBuffers(class osg::Vec2i const &);

    // RVA: 0x1DE | Ordinal: 479
        void init(enum render::MSAA_ENUM, class osg::Vec2i const &);

    // RVA: 0x24E | Ordinal: 591
        void releaseBuffers(void);

    // RVA: 0x266 | Ordinal: 615
        void reset(void);

    // RVA: 0x26C | Ordinal: 621
        void resizeCombinedLightsBuffers(struct render::LightCollection const &, struct render::LightsBuffers const &);

    // RVA: 0x2B7 | Ordinal: 696
        void update(struct render::LightCollection const &, class osg::Vec4i const &, class render::Texture const &, struct render::LightsBuffers const &);

    // RVA: 0x2BB | Ordinal: 700
        void updateCPULights(struct render::LightCollection const &);

    // RVA: 0x71 | Ordinal: 114
        void _LightsPrepassWrapper(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_LIGHTSPREPASSWRAPPER_HPP
