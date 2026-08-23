#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderMultilineText
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderMultilineText
{
public:

    // RVA: 0xE | Ordinal: 15
        void RenderMultilineText(void);

    // RVA: 0x5B | Ordinal: 92
        void discard(void);

    // RVA: 0x74 | Ordinal: 117
        void getTextDims(class ed::basic_string<char> const &) const;

    // RVA: 0xB7 | Ordinal: 184
        void render(class ed::basic_string<char> const &, class osg::Vec4f const &, class osg::Vec4f const &, class osg::Vec2f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0xB8 | Ordinal: 185
        void render(class ed::basic_string<char> const &, class osg::Vec4f const &, class osg::Vec4f const &, class osg::Vec3f const &, class osg::Matrixd const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0xD8 | Ordinal: 217
        void setFont(class ed::basic_string<char> const &, unsigned __int64);

    // RVA: 0xDB | Ordinal: 220
        void setShadowColor(class osg::Vec4d const &);

    // RVA: 0x2B | Ordinal: 44
        void _RenderMultilineText(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERMULTILINETEXT_HPP
