#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: DepthResolver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class DepthResolver
{
public:

    // RVA: 0x12 | Ordinal: 19
        void DepthResolver(class deferredShading::DepthResolver &&);

    // RVA: 0x13 | Ordinal: 20
        void DepthResolver(class deferredShading::DepthResolver const &);

    // RVA: 0x14 | Ordinal: 21
        void DepthResolver(void);

    // RVA: 0x139 | Ordinal: 314
        void copy(class render::Texture);

    // RVA: 0x1D3 | Ordinal: 468
        void init(enum render::MSAA_ENUM);

    // RVA: 0x23E | Ordinal: 575
        void release(void);

    // RVA: 0x26D | Ordinal: 622
        void resolve(class render::Texture);

    // RVA: 0x270 | Ordinal: 625
        void resolveWithStencil(class render::Texture);

    // RVA: 0x2CA | Ordinal: 715
        void upscale(class render::Texture, class osg::Vec4f const &, class render::Texture);

    // RVA: 0x66 | Ordinal: 103
        void _DepthResolver(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_DEPTHRESOLVER_HPP
