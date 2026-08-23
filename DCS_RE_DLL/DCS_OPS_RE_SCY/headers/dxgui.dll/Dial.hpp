#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Dial
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Dial
{
public:

    // RVA: 0x5A | Ordinal: 91
        void Dial(void);

    // RVA: 0x18C | Ordinal: 397
        void changeValue_(double);

    // RVA: 0x1B6 | Ordinal: 439
        void clone(void) const;

    // RVA: 0x1F3 | Ordinal: 500
        void copyParams(class gui::Dial *) const;

    // RVA: 0x2E8 | Ordinal: 745
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x314 | Ordinal: 789
        void getArrow(void) const;

    // RVA: 0x345 | Ordinal: 838
        void getCyclic(void) const;

    // RVA: 0x37E | Ordinal: 895
        void getFocusedWidget(void) const;

    // RVA: 0x3A1 | Ordinal: 930
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void getInteractiveState(void) const;

    // RVA: 0x46C | Ordinal: 1133
        void getPageStep(void) const;

    // RVA: 0x485 | Ordinal: 1158
        void getRange(double &, double &) const;

    // RVA: 0x4D2 | Ordinal: 1235
        void getSkin(void) const;

    // RVA: 0x50A | Ordinal: 1291
        void getStep(void) const;

    // RVA: 0x54B | Ordinal: 1356
        void getValue(void) const;

    // RVA: 0x5A5 | Ordinal: 1446
        void getWidgetType(void) const;

    // RVA: 0x6C2 | Ordinal: 1731
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6EB | Ordinal: 1772
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x701 | Ordinal: 1794
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x711 | Ordinal: 1810
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x723 | Ordinal: 1828
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x734 | Ordinal: 1845
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x74C | Ordinal: 1869
        void onPageStepChanged_(double);

    // RVA: 0x75B | Ordinal: 1884
        void onRangeChanged_(double, double);

    // RVA: 0x76D | Ordinal: 1902
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x77E | Ordinal: 1919
        void onStepChanged_(double);

    // RVA: 0x790 | Ordinal: 1937
        void onValueChanged_(double);

    // RVA: 0x887 | Ordinal: 2184
        void setCyclic(bool);

    // RVA: 0x8FB | Ordinal: 2300
        void setPageStep(double);

    // RVA: 0x90F | Ordinal: 2320
        void setRange(double, double);

    // RVA: 0x932 | Ordinal: 2355
        void setStep(double);

    // RVA: 0x95F | Ordinal: 2400
        void setValue(double);

    // RVA: 0x9C8 | Ordinal: 2505
        void updateArrowAngle_(class osg::Vec2i const &);

    // RVA: 0x9C9 | Ordinal: 2506
        void updateArrowPosition_(void);

    // RVA: 0x9CA | Ordinal: 2507
        void updateArrow_(void);

    // RVA: 0xA1A | Ordinal: 2587
        void validatePageStep_(double) const;

    // RVA: 0xA1D | Ordinal: 2590
        void validateRange_(double, double) const;

    // RVA: 0xA27 | Ordinal: 2600
        void validateStep_(double) const;

    // RVA: 0xA2D | Ordinal: 2606
        void validateValue_(double) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_DIAL_HPP
