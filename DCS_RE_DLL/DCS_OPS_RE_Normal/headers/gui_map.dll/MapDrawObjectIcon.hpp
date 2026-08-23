#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapDrawObjectIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapDrawObjectIcon
{
public:

    // RVA: 0x1 | Ordinal: 2
        void MapDrawObjectIcon(void);

    // RVA: 0x30 | Ordinal: 49
        void load(struct lua_State *);

    // RVA: 0x49 | Ordinal: 74
        void setAngle(double);

    // RVA: 0x5E | Ordinal: 95
        void setImage(class ed::basic_string<char> const &);

    // RVA: 0x6B | Ordinal: 108
        void setScale(int);

    // RVA: 0x7 | Ordinal: 8
        void _MapDrawObjectIcon(void);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPDRAWOBJECTICON_HPP
