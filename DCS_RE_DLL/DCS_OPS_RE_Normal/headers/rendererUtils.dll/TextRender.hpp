#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: TextRender
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class TextRender
{
public:

    // RVA: 0x1B | Ordinal: 28
        void TextRender(void);

    // RVA: 0x67 | Ordinal: 104
        void discard(void);

    // RVA: 0x6E | Ordinal: 111
        void draw(class ed::basic_string<char> const &, class osg::Vec4f const &, class osg::Vec2f const &, enum render::enTextJustify, enum render::enTextJustify);

    // RVA: 0x6F | Ordinal: 112
        void draw(class ed::basic_string<char> const &, class osg::Vec4f const &, class osg::Vec3f const &, class osg::Matrixd const &, enum render::enTextJustify, enum render::enTextJustify);

    // RVA: 0x76 | Ordinal: 119
        void getTextDims(class ed::basic_string<char> const &);

    // RVA: 0x97 | Ordinal: 152
        void open(char const *, char const *);

    // RVA: 0x98 | Ordinal: 153
        void open(char const *);

    // RVA: 0x38 | Ordinal: 57
        void _TextRender(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_TEXTRENDER_HPP
