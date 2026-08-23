#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PopupWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class PopupWindow
{
public:

    // RVA: 0xA4 | Ordinal: 165
        void PopupWindow(void);

    // RVA: 0x305 | Ordinal: 774
        void getActive(void) const;

    // RVA: 0x671 | Ordinal: 1650
        void onActiveChanged_(bool);

    // RVA: 0x748 | Ordinal: 1865
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x7A4 | Ordinal: 1957
        void onVisibleChanged_(bool);

    // RVA: 0x85E | Ordinal: 2143
        void setActive(bool);

    // RVA: 0x8A6 | Ordinal: 2215
        void setFocused(bool);

    // RVA: 0x110 | Ordinal: 273
        void _PopupWindow(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_POPUPWINDOW_HPP
