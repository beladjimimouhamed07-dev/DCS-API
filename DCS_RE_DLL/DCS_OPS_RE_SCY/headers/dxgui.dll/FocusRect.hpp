#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: FocusRect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class FocusRect
{
public:

    // RVA: 0x25A | Ordinal: 603
        void doRedraw(void);

    // RVA: 0x275 | Ordinal: 630
        void draw(void) const;

    // RVA: 0x335 | Ordinal: 822
        void getColor(void) const;

    // RVA: 0x3E7 | Ordinal: 1000
        void getInsets(void) const;

    // RVA: 0x62A | Ordinal: 1579
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x7CF | Ordinal: 2000
        void redraw(void);

    // RVA: 0x86D | Ordinal: 2158
        void setBounds(class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x878 | Ordinal: 2169
        void setColor(class osg::Vec4f const &);

    // RVA: 0x8CC | Ordinal: 2253
        void setInsets(class gui::Insets const &);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_FOCUSRECT_HPP
