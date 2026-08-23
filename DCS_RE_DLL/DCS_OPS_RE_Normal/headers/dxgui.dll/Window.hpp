#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Window
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Window
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void Window(void);

    // RVA: 0x1DF | Ordinal: 480
        void clone(void) const;

    // RVA: 0x20E | Ordinal: 527
        void copyParams(class gui::Window *) const;

    // RVA: 0x542 | Ordinal: 1347
        void getTransparentForUserInput(void) const;

    // RVA: 0x5C9 | Ordinal: 1482
        void getWidgetType(void) const;

    // RVA: 0x5D7 | Ordinal: 1496
        void getZOrder(void) const;

    // RVA: 0x696 | Ordinal: 1687
        void onFocusChanged_(bool);

    // RVA: 0x7A6 | Ordinal: 1959
        void onVisibleChanged_(bool);

    // RVA: 0x7AC | Ordinal: 1965
        void onZOrderChanged_(int);

    // RVA: 0x95B | Ordinal: 2396
        void setTransparentForUserInput(bool);

    // RVA: 0x987 | Ordinal: 2440
        void setZOrder(int);

    // RVA: 0x11C | Ordinal: 285
        void _Window(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOW_HPP
