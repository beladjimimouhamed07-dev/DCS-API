#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Bkg
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Bkg
{
public:

    // RVA: 0x37 | Ordinal: 56
        void Bkg(void);

    // RVA: 0x1B | Ordinal: 28
        void Info_(struct lua_State *, int, struct gui::Bkg::Info &);

    // RVA: 0x25 | Ordinal: 38
        void Info_(struct lua_State *, struct gui::Bkg::Info const &);

    // RVA: 0x256 | Ordinal: 599
        void doRedraw(void);

    // RVA: 0x274 | Ordinal: 629
        void draw(void) const;

    // RVA: 0x339 | Ordinal: 826
        void getColorsToDraw(void) const;

    // RVA: 0x3E6 | Ordinal: 999
        void getInsets(void) const;

    // RVA: 0x478 | Ordinal: 1145
        void getPosition(void) const;

    // RVA: 0x4C4 | Ordinal: 1221
        void getSize(void) const;

    // RVA: 0x533 | Ordinal: 1332
        void getTexture(void) const;

    // RVA: 0x627 | Ordinal: 1576
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x7CC | Ordinal: 1997
        void redraw(void);

    // RVA: 0x84C | Ordinal: 2125
        void set(struct gui::Bkg::Info const &);

    // RVA: 0x873 | Ordinal: 2164
        void setCellColors(class ed::vector<class osg::Vec4f, class ed::allocator<class osg::Vec4f>> const &);

    // RVA: 0x88D | Ordinal: 2190
        void setDirty(bool);

    // RVA: 0x8CB | Ordinal: 2252
        void setInsets(class gui::Insets const &);

    // RVA: 0x90A | Ordinal: 2315
        void setPosition(class osg::Vec2i const &);

    // RVA: 0x928 | Ordinal: 2345
        void setSize(class osg::Vec2i const &);

    // RVA: 0x94F | Ordinal: 2384
        void setTexture(class ed::basic_string<char> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x950 | Ordinal: 2385
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0xDC | Ordinal: 221
        void _Bkg(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_BKG_HPP
