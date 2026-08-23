#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ScrollBar
{
public:

    // RVA: 0xAD | Ordinal: 174
        void ScrollBar(void);

    // RVA: 0x18D | Ordinal: 398
        void changeValue_(double);

    // RVA: 0x205 | Ordinal: 518
        void copyParams(class gui::ScrollBar *) const;

    // RVA: 0x22B | Ordinal: 556
        void createButtons_(void);

    // RVA: 0x236 | Ordinal: 567
        void createThumb_(void);

    // RVA: 0x237 | Ordinal: 568
        void createWidgets_(void);

    // RVA: 0x23B | Ordinal: 572
        void deleteButtons_(void);

    // RVA: 0x2EE | Ordinal: 751
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x349 | Ordinal: 842
        void getDecreaseButton(void) const;

    // RVA: 0x381 | Ordinal: 898
        void getFocusedWidget(void) const;

    // RVA: 0x399 | Ordinal: 922
        void getHasButtons_(void) const;

    // RVA: 0x3AA | Ordinal: 939
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3D4 | Ordinal: 981
        void getIncreaseButton(void) const;

    // RVA: 0x477 | Ordinal: 1144
        void getPointInsideWidgets_(class osg::Vec2i const &) const;

    // RVA: 0x4EB | Ordinal: 1260
        void getSkin(void) const;

    // RVA: 0x535 | Ordinal: 1334
        void getThumb(void) const;

    // RVA: 0x75E | Ordinal: 1887
        void onRangeChanged_(double, double);

    // RVA: 0x774 | Ordinal: 1909
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x78A | Ordinal: 1931
        void onThumbPressed_(void);

    // RVA: 0x78C | Ordinal: 1933
        void onThumbReleased_(void);

    // RVA: 0x78E | Ordinal: 1935
        void onThumbValueChanged_(double);

    // RVA: 0x792 | Ordinal: 1939
        void onValueChanged_(double);

    // RVA: 0x8B2 | Ordinal: 2227
        void setHasButtons_(bool);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLBAR_HPP
