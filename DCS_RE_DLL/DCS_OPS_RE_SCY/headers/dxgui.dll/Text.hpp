#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Text
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Text
{
public:

    // RVA: 0x1D | Ordinal: 30
        void Info_(struct lua_State *, int, struct gui::Text::Info &);

    // RVA: 0x27 | Ordinal: 40
        void Info_(struct lua_State *, struct gui::Text::Info const &);

    // RVA: 0xC4 | Ordinal: 197
        void Text(void);

    // RVA: 0x15F | Ordinal: 352
        void calcLineHeight(void) const;

    // RVA: 0x171 | Ordinal: 370
        void calcSize(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class osg::Vec2i const &) const;

    // RVA: 0x265 | Ordinal: 614
        void doRedraw(void);

    // RVA: 0x286 | Ordinal: 647
        void draw(class osg::Vec4f const &) const;

    // RVA: 0x287 | Ordinal: 648
        void draw(void) const;

    // RVA: 0x30B | Ordinal: 780
        void getAlign(void) const;

    // RVA: 0x318 | Ordinal: 793
        void getBkgColor(void) const;

    // RVA: 0x319 | Ordinal: 794
        void getBlurColor(void) const;

    // RVA: 0x337 | Ordinal: 824
        void getColor(void) const;

    // RVA: 0x3E9 | Ordinal: 1002
        void getInsets(void) const;

    // RVA: 0x420 | Ordinal: 1057
        void getLineCount(void) const;

    // RVA: 0x423 | Ordinal: 1060
        void getLineHeight(void) const;

    // RVA: 0x427 | Ordinal: 1064
        void getLineThroughColor(void) const;

    // RVA: 0x428 | Ordinal: 1065
        void getLineThroughHeight(void) const;

    // RVA: 0x429 | Ordinal: 1066
        void getLineThroughOffset(void) const;

    // RVA: 0x4C0 | Ordinal: 1217
        void getShadowColor(void) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void getShadowOffset(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void getTextLines(void) const;

    // RVA: 0x549 | Ordinal: 1354
        void getUseEllipsis(void) const;

    // RVA: 0x5D4 | Ordinal: 1493
        void getWrapping(void) const;

    // RVA: 0x630 | Ordinal: 1585
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x631 | Ordinal: 1586
        void make(class gui::GraphicCommands *, class osg::Vec4f const &) const;

    // RVA: 0x7D4 | Ordinal: 2005
        void redraw(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class osg::Vec2i const &, bool);

    // RVA: 0x858 | Ordinal: 2137
        void set(struct gui::Text::Info const &);

    // RVA: 0x861 | Ordinal: 2146
        void setAlign(class gui::Align2 const &);

    // RVA: 0x86A | Ordinal: 2155
        void setBkgColor(class osg::Vec4f const &);

    // RVA: 0x86C | Ordinal: 2157
        void setBlurColor(class osg::Vec4f const &);

    // RVA: 0x87A | Ordinal: 2171
        void setColor(class osg::Vec4f const &);

    // RVA: 0x893 | Ordinal: 2196
        void setDirty(bool);

    // RVA: 0x8AA | Ordinal: 2219
        void setFont(class ed::basic_string<char> const &, int, enum uiBaseFont::Blur);

    // RVA: 0x8CE | Ordinal: 2255
        void setInsets(class gui::Insets const &);

    // RVA: 0x8D9 | Ordinal: 2266
        void setLineHeight(int);

    // RVA: 0x8DA | Ordinal: 2267
        void setLineThroughColor(class osg::Vec4f const &);

    // RVA: 0x8DB | Ordinal: 2268
        void setLineThroughHeight(int);

    // RVA: 0x8DC | Ordinal: 2269
        void setLineThroughOffset(int);

    // RVA: 0x925 | Ordinal: 2342
        void setShadowColor(class osg::Vec4f const &);

    // RVA: 0x926 | Ordinal: 2343
        void setShadowOffset(class osg::Vec2i const &);

    // RVA: 0x95D | Ordinal: 2398
        void setUseEllipsis(bool);

    // RVA: 0x984 | Ordinal: 2437
        void setWrapping(bool);

    // RVA: 0x11A | Ordinal: 283
        void _Text(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TEXT_HPP
