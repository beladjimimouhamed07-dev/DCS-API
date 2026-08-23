#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderRect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderRect
{
public:

    // RVA: 0x13 | Ordinal: 20
        void RenderRect(void);

    // RVA: 0x5F | Ordinal: 96
        void discard(void);

    // RVA: 0x8C | Ordinal: 141
        void init(void);

    // RVA: 0xC2 | Ordinal: 195
        void render(class osg::RectImpl<class osg::Vec2i> const &, class osg::Vec4f const &, class osg::Vec2f const &, float);

    // RVA: 0xC3 | Ordinal: 196
        void render(class osg::Vec2f const &, class osg::Vec2f const &, class osg::Vec3f const &);

    // RVA: 0xC4 | Ordinal: 197
        void render(class osg::Vec2f const &, class osg::Vec2f const &, class osg::Vec4f const &, class osg::Vec2f const &, float);

    // RVA: 0xC5 | Ordinal: 198
        void render(class osg::Vec2i const &, class osg::Vec2i const &, class osg::Vec4f const &, class osg::Vec2f const &, float);

    // RVA: 0x30 | Ordinal: 49
        void _RenderRect(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERRECT_HPP
