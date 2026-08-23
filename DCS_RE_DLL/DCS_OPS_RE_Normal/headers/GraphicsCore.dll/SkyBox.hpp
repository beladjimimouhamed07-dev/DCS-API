#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SkyBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class SkyBox
{
public:

    // RVA: 0x153 | Ordinal: 340
        void draw(class osg::Matrixf const &, class render::Texture, float);

    // RVA: 0x154 | Ordinal: 341
        void draw(class osg::Matrixf const &, class osg::Vec4f);

    // RVA: 0x155 | Ordinal: 342
        void draw(class GraphicsCore::ContextBase const *, class render::Texture, float);

    // RVA: 0x1E7 | Ordinal: 488
        void init(float);

    // RVA: 0x247 | Ordinal: 584
        void release(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SKYBOX_HPP
