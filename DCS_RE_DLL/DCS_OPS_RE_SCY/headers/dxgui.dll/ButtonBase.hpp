#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ButtonBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ButtonBase
{
public:

    // RVA: 0x3B | Ordinal: 60
        void ButtonBase(void);

    // RVA: 0x189 | Ordinal: 394
        void changeState_(void);

    // RVA: 0x39D | Ordinal: 926
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3EA | Ordinal: 1003
        void getInteractiveState(void) const;

    // RVA: 0x68E | Ordinal: 1679
        void onFocusChanged_(bool);

    // RVA: 0x6BB | Ordinal: 1724
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6CC | Ordinal: 1741
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x6D9 | Ordinal: 1754
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6E7 | Ordinal: 1768
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6FD | Ordinal: 1790
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x70D | Ordinal: 1806
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x71F | Ordinal: 1824
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x72B | Ordinal: 1836
        void onMouseReleased(void);

    // RVA: 0x730 | Ordinal: 1841
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_BUTTONBASE_HPP
