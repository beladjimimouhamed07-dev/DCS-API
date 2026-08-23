#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapDrawObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapDrawObject
{
public:

    // RVA: 0x0 | Ordinal: 1
        void MapDrawObject(void);

    // RVA: 0x21 | Ordinal: 34
        void getId(void) const;

    // RVA: 0x22 | Ordinal: 35
        void getLayerName(void) const;

    // RVA: 0x2F | Ordinal: 48
        void load(struct lua_State *);

    // RVA: 0x3A | Ordinal: 59
        void onIconsThemeChange(void);

    // RVA: 0x40 | Ordinal: 65
        void redrawOnScale(void);

    // RVA: 0x4F | Ordinal: 80
        void setColor(class osg::Vec4f const &);

    // RVA: 0x55 | Ordinal: 86
        void setGetViewportPointFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x59 | Ordinal: 90
        void setGetViewportSizeFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x5D | Ordinal: 94
        void setId(int);

    // RVA: 0x5F | Ordinal: 96
        void setLayerName(class ed::basic_string<char> const &);

    // RVA: 0x68 | Ordinal: 105
        void setPosition(double, double);

    // RVA: 0x6 | Ordinal: 7
        void _MapDrawObject(void);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPDRAWOBJECT_HPP
