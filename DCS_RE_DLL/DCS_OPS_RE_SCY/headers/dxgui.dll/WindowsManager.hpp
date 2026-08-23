#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WindowsManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class WindowsManager
{
public:

    // RVA: 0x182 | Ordinal: 387
        void captureMouse(class gui::WidgetHandler *);

    // RVA: 0x2F3 | Ordinal: 756
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x2F6 | Ordinal: 759
        void findWindowAtPoint(class osg::Vec2i const &) const;

    // RVA: 0x2F8 | Ordinal: 761
        void forceTooltipText(class ed::basic_string<wchar_t> const &, class gui::skin::TooltipSkin const *, int);

    // RVA: 0x300 | Ordinal: 769
        void get(int);

    // RVA: 0x308 | Ordinal: 777
        void getActiveWindow(void) const;

    // RVA: 0x34F | Ordinal: 848
        void getDefaultTooltipSkin(void) const;

    // RVA: 0x39C | Ordinal: 925
        void getHasCursorWindow(void) const;

    // RVA: 0x3B0 | Ordinal: 945
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &);

    // RVA: 0x53F | Ordinal: 1344
        void getTooltipText(void) const;

    // RVA: 0x5DA | Ordinal: 1499
        void handleTabButton(void);

    // RVA: 0x7A9 | Ordinal: 1962
        void onWindowCursorChanged(class gui::WindowBase *);

    // RVA: 0x7C1 | Ordinal: 1986
        void prepareTooltip(void);

    // RVA: 0x7F6 | Ordinal: 2039
        void releaseMouse(class gui::WidgetHandler *);

    // RVA: 0x88C | Ordinal: 2189
        void setDefaultTooltipSkin(class gui::skin::TooltipSkin const *);

    // RVA: 0x980 | Ordinal: 2433
        void setWindowTransparentForUserInput(class gui::Window *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOWSMANAGER_HPP
