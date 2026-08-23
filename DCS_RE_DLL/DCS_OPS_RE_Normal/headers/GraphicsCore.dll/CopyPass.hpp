#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: CopyPass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class CopyPass
{
public:

    // RVA: 0xB | Ordinal: 12
        void CopyPass(class render::CopyPass &&);

    // RVA: 0xC | Ordinal: 13
        void CopyPass(class render::CopyPass const &);

    // RVA: 0xD | Ordinal: 14
        void CopyPass(void);

    // RVA: 0xDE | Ordinal: 223
        void addColorCopyWithDepthTestAndResolvePass(class render::RenderGraph &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class osg::Vec4i const &, class osg::Vec4f const &, float);

    // RVA: 0xE0 | Ordinal: 225
        void addCopyDepthWithResolveForHMDPass(class render::RenderGraph &, class render::RenderGraphTexture, class render::Texture, class osg::Vec4i const &);

    // RVA: 0xE1 | Ordinal: 226
        void addCopyWithResolveForHMDPass(class render::RenderGraph &, class render::RenderGraphTexture, class render::Texture, class osg::Vec4i const &, class osg::Vec4f const &);

    // RVA: 0xE2 | Ordinal: 227
        void addCopyWithResolvePass(class render::RenderGraph &, class render::RenderGraphTexture, class render::RenderGraphTexture, class osg::Vec4i const &, class osg::Vec4f const &, int, float);

    // RVA: 0x14E | Ordinal: 335
        void doCopy(class render::Texture, class render::Texture, class render::Texture, class osg::Vec4i const &, class osg::Vec4f const &, int, float);

    // RVA: 0x1D0 | Ordinal: 465
        void init(void);

    // RVA: 0x63 | Ordinal: 100
        void _CopyPass(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_COPYPASS_HPP
