#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: gui_map.dll
// Class: MapDrawObjectTextBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MapDrawObjectTextBox
{
public:

    // RVA: 0x4 | Ordinal: 5
        void MapDrawObjectTextBox(void);

    // RVA: 0x1C | Ordinal: 29
        void draw(void) const;

    // RVA: 0x2C | Ordinal: 45
        void hitTest(class osg::Vec2d const &, double) const;

    // RVA: 0x33 | Ordinal: 52
        void load(struct lua_State *);

    // RVA: 0x37 | Ordinal: 56
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x3F | Ordinal: 64
        void redraw(void);

    // RVA: 0x4B | Ordinal: 76
        void setAngle(double);

    // RVA: 0x4D | Ordinal: 78
        void setBorderThickness(int);

    // RVA: 0x53 | Ordinal: 84
        void setFillColor(class osg::Vec4f const &);

    // RVA: 0x54 | Ordinal: 85
        void setFont(class ed::basic_string<char> const &, int);

    // RVA: 0x6D | Ordinal: 110
        void setText(class ed::basic_string<char> const &);

    // RVA: 0xA | Ordinal: 11
        void _MapDrawObjectTextBox(void);
};

// DCS_OPS_RE_GUI_MAP.DLL_MAPDRAWOBJECTTEXTBOX_HPP
