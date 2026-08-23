#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MapManager
{
public:

    // RVA: 0x5 | Ordinal: 6
        void MapManager(void);

    // RVA: 0xE | Ordinal: 15
        void addDrawObject(struct lua_State *);

    // RVA: 0xF | Ordinal: 16
        void addModel(char const *, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x10 | Ordinal: 17
        void addObject2(struct lua_State *);

    // RVA: 0x11 | Ordinal: 18
        void addObjects(struct lua_State *);

    // RVA: 0x12 | Ordinal: 19
        void clearDrawObjects(void);

    // RVA: 0x13 | Ordinal: 20
        void clearObjects2(struct lua_State *);

    // RVA: 0x14 | Ordinal: 21
        void createDrawObject(struct lua_State *);

    // RVA: 0x15 | Ordinal: 22
        void createLayers_(void);

    // RVA: 0x16 | Ordinal: 23
        void createObject2(struct lua_State *);

    // RVA: 0x17 | Ordinal: 24
        void delModel(class Entity *);

    // RVA: 0x18 | Ordinal: 25
        void deleteDrawObject(struct lua_State *);

    // RVA: 0x19 | Ordinal: 26
        void deleteObject2(struct lua_State *);

    // RVA: 0x1D | Ordinal: 30
        void findDrawObjects(class osg::Vec2d const &, double, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x1F | Ordinal: 32
        void findObjects(class osg::Vec2d const &, double, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x20 | Ordinal: 33
        void getCameraPosition(void) const;

    // RVA: 0x23 | Ordinal: 36
        void getMapType(void) const;

    // RVA: 0x24 | Ordinal: 37
        void getPointInMap(class osg::Vec2d const &) const;

    // RVA: 0x25 | Ordinal: 38
        void getResolution(void);

    // RVA: 0x26 | Ordinal: 39
        void getScale(void) const;

    // RVA: 0x27 | Ordinal: 40
        void getSceneRenderer(void);

    // RVA: 0x28 | Ordinal: 41
        void getSizeInViewport(class osg::Vec2d const &) const;

    // RVA: 0x29 | Ordinal: 42
        void getViewportPoint(class osg::Vec2d const &) const;

    // RVA: 0x2D | Ordinal: 46
        void initScene(void);

    // RVA: 0x2E | Ordinal: 47
        void isLayerVisible(class std::basic_string_view<char, struct std::char_traits<char>>) const;

    // RVA: 0x34 | Ordinal: 53
        void loadClassifier(struct lua_State *);

    // RVA: 0x38 | Ordinal: 57
        void makeParse_(class gui::GraphicCommands *);

    // RVA: 0x39 | Ordinal: 58
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x3B | Ordinal: 60
        void onIconsThemeChange(class ed::basic_string<char> const &);

    // RVA: 0x3C | Ordinal: 61
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x43 | Ordinal: 68
        void redraw_(void);

    // RVA: 0x44 | Ordinal: 69
        void removeAllDrawObjects(void);

    // RVA: 0x45 | Ordinal: 70
        void removeDrawObject(struct lua_State *);

    // RVA: 0x46 | Ordinal: 71
        void removeObject2(struct lua_State *);

    // RVA: 0x47 | Ordinal: 72
        void removeObjects(struct lua_State *);

    // RVA: 0x48 | Ordinal: 73
        void resetScene(void);

    // RVA: 0x4C | Ordinal: 77
        void setBkgColor(class osg::Vec4f const &);

    // RVA: 0x4E | Ordinal: 79
        void setCameraPosition(class osg::Vec2d const &, bool);

    // RVA: 0x60 | Ordinal: 97
        void setMapBounds(class osg::RectImpl<class osg::Vec2d> const &);

    // RVA: 0x61 | Ordinal: 98
        void setMapType(enum gui::MapManager::MAPMOD);

    // RVA: 0x6C | Ordinal: 109
        void setScale(double, bool);

    // RVA: 0x6E | Ordinal: 111
        void showLayer(class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x6F | Ordinal: 112
        void updateDrawObject(struct lua_State *);

    // RVA: 0x70 | Ordinal: 113
        void updateLayers_(void);

    // RVA: 0x71 | Ordinal: 114
        void updateObject2(struct lua_State *);

    // RVA: 0x72 | Ordinal: 115
        void widgetToMap(class osg::Vec2d const &) const;

    // RVA: 0xB | Ordinal: 12
        void _MapManager(void);
};

} // namespace gui

// DCS_OPS_RE_GUI_MAP.DLL_MAPMANAGER_HPP
