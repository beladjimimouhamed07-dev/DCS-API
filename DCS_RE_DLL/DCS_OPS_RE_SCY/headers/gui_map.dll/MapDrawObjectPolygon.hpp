#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapDrawObjectPolygon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapDrawObjectPolygon
{
public:

    // RVA: 0x2 | Ordinal: 3
        void MapDrawObjectPolygon(void);

    // RVA: 0x1A | Ordinal: 27
        void draw(void) const;

    // RVA: 0x2A | Ordinal: 43
        void hitTest(class osg::Vec2d const &, double) const;

    // RVA: 0x31 | Ordinal: 50
        void load(struct lua_State *);

    // RVA: 0x35 | Ordinal: 54
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x3D | Ordinal: 62
        void redraw(void);

    // RVA: 0x41 | Ordinal: 66
        void redrawOnScale(void);

    // RVA: 0x4A | Ordinal: 75
        void setAngle(double);

    // RVA: 0x50 | Ordinal: 81
        void setColor(class osg::Vec4f const &);

    // RVA: 0x52 | Ordinal: 83
        void setFillColor(class osg::Vec4f const &);

    // RVA: 0x56 | Ordinal: 87
        void setGetViewportPointFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x5A | Ordinal: 91
        void setGetViewportSizeFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x62 | Ordinal: 99
        void setOutline(int, class ed::basic_string<char> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x64 | Ordinal: 101
        void setPoints(class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> &&);

    // RVA: 0x65 | Ordinal: 102
        void setPoints(class ed::span<class osg::Vec2d, -1>);

    // RVA: 0x69 | Ordinal: 106
        void setPosition(double, double);

    // RVA: 0x8 | Ordinal: 9
        void _MapDrawObjectPolygon(void);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPDRAWOBJECTPOLYGON_HPP
