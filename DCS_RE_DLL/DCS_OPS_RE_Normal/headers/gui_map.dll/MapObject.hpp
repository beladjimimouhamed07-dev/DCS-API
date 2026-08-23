#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapObject
{
public:

    // RVA: 0x58 | Ordinal: 89
        void setGetViewportPointFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);

    // RVA: 0x5C | Ordinal: 93
        void setGetViewportSizeFunc(class std::function<class osg::Vec2d __cdecl(class osg::Vec2d const &)>);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPOBJECT_HPP
