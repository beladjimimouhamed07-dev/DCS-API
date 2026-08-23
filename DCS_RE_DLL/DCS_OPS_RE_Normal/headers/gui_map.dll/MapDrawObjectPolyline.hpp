#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapDrawObjectPolyline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapDrawObjectPolyline
{
public:

    // RVA: 0x3 | Ordinal: 4
        void MapDrawObjectPolyline(void);

    // RVA: 0x1B | Ordinal: 28
        void draw(void) const;

    // RVA: 0x2B | Ordinal: 44
        void hitTest(class osg::Vec2d const &, double) const;

    // RVA: 0x32 | Ordinal: 51
        void load(struct lua_State *);

    // RVA: 0x36 | Ordinal: 55
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x3E | Ordinal: 63
        void redraw(void);

    // RVA: 0x42 | Ordinal: 67
        void redrawOnScale(void);

    // RVA: 0x51 | Ordinal: 82
        void setColor(class osg::Vec4f const &);

    // RVA: 0x57 | Ordinal: 88
        void setGetViewportPointFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x5B | Ordinal: 92
        void setGetViewportSizeFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x63 | Ordinal: 100
        void setOutline(int, class ed::basic_string<char> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x66 | Ordinal: 103
        void setPoints(class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> &&, bool);

    // RVA: 0x67 | Ordinal: 104
        void setPoints(class ed::span<class osg::Vec2d, -1>, bool);

    // RVA: 0x6A | Ordinal: 107
        void setPosition(double, double);

    // RVA: 0x9 | Ordinal: 10
        void _MapDrawObjectPolyline(void);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPDRAWOBJECTPOLYLINE_HPP
