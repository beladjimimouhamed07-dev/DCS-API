#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Image
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Image
{
public:

    // RVA: 0x83 | Ordinal: 132
        void Image(void);

    // RVA: 0x1C | Ordinal: 29
        void Info_(struct lua_State *, int, struct gui::Image::Info &);

    // RVA: 0x26 | Ordinal: 39
        void Info_(struct lua_State *, struct gui::Image::Info const &);

    // RVA: 0x25D | Ordinal: 606
        void doRedraw(void);

    // RVA: 0x282 | Ordinal: 643
        void draw(class osg::Vec4f const &) const;

    // RVA: 0x283 | Ordinal: 644
        void draw(void) const;

    // RVA: 0x30A | Ordinal: 779
        void getAlign(void) const;

    // RVA: 0x336 | Ordinal: 823
        void getColor(void) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void getInsets(void) const;

    // RVA: 0x479 | Ordinal: 1146
        void getPosition(void) const;

    // RVA: 0x494 | Ordinal: 1173
        void getResizeToFill(void) const;

    // RVA: 0x4C5 | Ordinal: 1222
        void getSize(void) const;

    // RVA: 0x534 | Ordinal: 1333
        void getTexture(void) const;

    // RVA: 0x53A | Ordinal: 1339
        void getTileHorizontally(void) const;

    // RVA: 0x53B | Ordinal: 1340
        void getTileVertically(void) const;

    // RVA: 0x54A | Ordinal: 1355
        void getUserTexSampler(void) const;

    // RVA: 0x62C | Ordinal: 1581
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x62D | Ordinal: 1582
        void make(class gui::GraphicCommands *, class osg::Vec4f const &) const;

    // RVA: 0x7D2 | Ordinal: 2003
        void redraw(class osg::Vec2i const &);

    // RVA: 0x857 | Ordinal: 2136
        void set(struct gui::Image::Info const &);

    // RVA: 0x860 | Ordinal: 2145
        void setAlign(class gui::Align2 const &);

    // RVA: 0x879 | Ordinal: 2170
        void setColor(class osg::Vec4f const &);

    // RVA: 0x890 | Ordinal: 2193
        void setDirty(bool);

    // RVA: 0x8CD | Ordinal: 2254
        void setInsets(class gui::Insets const &);

    // RVA: 0x919 | Ordinal: 2330
        void setResizeToFill(bool);

    // RVA: 0x929 | Ordinal: 2346
        void setSize(class osg::Vec2i const &);

    // RVA: 0x951 | Ordinal: 2386
        void setTexture(class ed::basic_string<char> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x952 | Ordinal: 2387
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>, bool);

    // RVA: 0x956 | Ordinal: 2391
        void setTileHorizontally(bool);

    // RVA: 0x957 | Ordinal: 2392
        void setTileVertically(bool);

    // RVA: 0x95E | Ordinal: 2399
        void setUserTexSampler(int);

    // RVA: 0xFC | Ordinal: 253
        void _Image(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_IMAGE_HPP
