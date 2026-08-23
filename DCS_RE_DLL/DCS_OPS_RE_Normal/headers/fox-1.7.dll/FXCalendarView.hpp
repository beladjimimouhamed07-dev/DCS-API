#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCalendarView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCalendarView
{
public:

    // RVA: 0x71 | Ordinal: 114
        void FXCalendarView(void);

    // RVA: 0x72 | Ordinal: 115
        void FXCalendarView(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xA80 | Ordinal: 2689
        void canFocus(void) const;

    // RVA: 0xBA4 | Ordinal: 2981
        void create(void);

    // RVA: 0xC8E | Ordinal: 3215
        void detach(void);

    // RVA: 0xCDC | Ordinal: 3293
        void disable(void);

    // RVA: 0xE00 | Ordinal: 3585
        void enable(void);

    // RVA: 0x1072 | Ordinal: 4211
        void getCalendarStyle(void) const;

    // RVA: 0x10D3 | Ordinal: 4308
        void getCurrentDate(void) const;

    // RVA: 0x10E0 | Ordinal: 4321
        void getCurrentMonth(void) const;

    // RVA: 0x1103 | Ordinal: 4356
        void getDateAt(int, int, class FX::FXDate &) const;

    // RVA: 0x1105 | Ordinal: 4358
        void getDayColor(void) const;

    // RVA: 0x110F | Ordinal: 4368
        void getDefaultHeight(void);

    // RVA: 0x1165 | Ordinal: 4454
        void getDefaultWidth(void);

    // RVA: 0x11FE | Ordinal: 4607
        void getFirstDay(void) const;

    // RVA: 0x1206 | Ordinal: 4615
        void getFont(void) const;

    // RVA: 0x13A7 | Ordinal: 5032
        void getMetaClass(void) const;

    // RVA: 0x14D8 | Ordinal: 5337
        void getOtherDayColor(void) const;

    // RVA: 0x14DA | Ordinal: 5339
        void getOtherWeekendColor(void) const;

    // RVA: 0x1590 | Ordinal: 5521
        void getSelectedDate(class FX::FXDate &) const;

    // RVA: 0x1653 | Ordinal: 5716
        void getTitleBackColor(void) const;

    // RVA: 0x1656 | Ordinal: 5719
        void getTitleColor(void) const;

    // RVA: 0x1659 | Ordinal: 5722
        void getTodayColor(void) const;

    // RVA: 0x16B4 | Ordinal: 5813
        void getWeekendColor(void) const;

    // RVA: 0x1725 | Ordinal: 5926
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A1B | Ordinal: 6684
        void killFocus(void);

    // RVA: 0x1A30 | Ordinal: 6705
        void killSelection(bool);

    // RVA: 0x1BE9 | Ordinal: 7146
        void manufacture(void);

    // RVA: 0x1CB8 | Ordinal: 7353
        void markdirty(class FX::FXDate);

    // RVA: 0x1EBD | Ordinal: 7870
        void moveFocus(class FX::FXDate);

    // RVA: 0x1F6E | Ordinal: 8047
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205C | Ordinal: 8285
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2176 | Ordinal: 8567
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D6 | Ordinal: 8663
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2243 | Ordinal: 8772
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2279 | Ordinal: 8826
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B7 | Ordinal: 8888
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DB | Ordinal: 8924
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x233F | Ordinal: 9024
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AC | Ordinal: 9133
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D4 | Ordinal: 9173
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2459 | Ordinal: 9306
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252C | Ordinal: 9517
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x28DD | Ordinal: 10462
        void selectDate(class FX::FXDate, bool);

    // RVA: 0x29D0 | Ordinal: 10705
        void setCalendarStyle(unsigned int);

    // RVA: 0x2A0D | Ordinal: 10766
        void setCurrentDate(class FX::FXDate, bool);

    // RVA: 0x2A1B | Ordinal: 10780
        void setCurrentMonth(int, bool);

    // RVA: 0x2A40 | Ordinal: 10817
        void setDayColor(unsigned int);

    // RVA: 0x2A92 | Ordinal: 10899
        void setFirstDay(int);

    // RVA: 0x2A95 | Ordinal: 10902
        void setFocus(void);

    // RVA: 0x2AAD | Ordinal: 10926
        void setFont(class FX::FXFont *);

    // RVA: 0x2C3C | Ordinal: 11325
        void setOtherDayColor(unsigned int);

    // RVA: 0x2C3E | Ordinal: 11327
        void setOtherWeekendColor(unsigned int);

    // RVA: 0x2D95 | Ordinal: 11670
        void setTitleBackColor(unsigned int);

    // RVA: 0x2D98 | Ordinal: 11673
        void setTitleColor(unsigned int);

    // RVA: 0x2D9B | Ordinal: 11676
        void setTodayColor(unsigned int);

    // RVA: 0x2DD5 | Ordinal: 11734
        void setWeekendColor(unsigned int);

    // RVA: 0x2F21 | Ordinal: 12066
        void updateview(bool);

    // RVA: 0x3CB | Ordinal: 972
        void _FXCalendarView(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCALENDARVIEW_HPP
