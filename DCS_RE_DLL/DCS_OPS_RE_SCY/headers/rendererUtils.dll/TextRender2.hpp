#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: TextRender2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class TextRender2
{
public:

    // RVA: 0x1A | Ordinal: 27
        void TextRender2(void);

    // RVA: 0x66 | Ordinal: 103
        void discard(void);

    // RVA: 0x68 | Ordinal: 105
        void draw(class ed::basic_string<char> const &, class osg::Vec2f const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x69 | Ordinal: 106
        void draw(class ed::basic_string<char> const &, class osg::Vec2i const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x6A | Ordinal: 107
        void draw(class ed::basic_string<char> const &, class osg::Vec3f const &, class osg::Matrixd const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x6B | Ordinal: 108
        void draw(char const *, class osg::Vec2f const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x6C | Ordinal: 109
        void draw(char const *, class osg::Vec2i const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x6D | Ordinal: 110
        void draw(char const *, class osg::Vec3f const &, class osg::Matrixd const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0x75 | Ordinal: 118
        void getTextDims(char const *) const;

    // RVA: 0x95 | Ordinal: 150
        void isValid(void) const;

    // RVA: 0xD1 | Ordinal: 210
        void render(int, int, class osg::Vec2f const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0xD2 | Ordinal: 211
        void render(int, int, class osg::Vec3f const &, class osg::Matrixd const &, class osg::Vec4f const &, enum render::enTextJustify, enum render::enTextJustify, float);

    // RVA: 0xD9 | Ordinal: 218
        void setFont(class ed::basic_string<char> const &, unsigned __int64);

    // RVA: 0xDA | Ordinal: 219
        void setLetterCount(int);

    // RVA: 0xDC | Ordinal: 221
        void setShadowColor(class osg::Vec4d const &);

    // RVA: 0xDF | Ordinal: 224
        void update(class ed::basic_string<char> const &);

    // RVA: 0xE0 | Ordinal: 225
        void update(char const *);

    // RVA: 0x37 | Ordinal: 56
        void _TextRender2(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_TEXTRENDER2_HPP
