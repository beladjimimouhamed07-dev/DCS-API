#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WindowHeader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class WindowHeader
{
public:

    // RVA: 0xD5 | Ordinal: 214
        void WindowHeader(class gui::WindowBase &);

    // RVA: 0x333 | Ordinal: 820
        void getCloseButton(void);

    // RVA: 0x39A | Ordinal: 923
        void getHasCloseButton(void) const;

    // RVA: 0x3E5 | Ordinal: 998
        void getInnerState(void) const;

    // RVA: 0x4F5 | Ordinal: 1270
        void getSkin(void) const;

    // RVA: 0x57A | Ordinal: 1403
        void getVisible(void) const;

    // RVA: 0x77A | Ordinal: 1915
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x8B3 | Ordinal: 2228
        void setHasCloseButton(bool);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOWHEADER_HPP
