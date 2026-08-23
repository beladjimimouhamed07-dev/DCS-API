#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCalendar
{
public:

    // RVA: 0x6F | Ordinal: 112
        void FXCalendar(void);

    // RVA: 0x70 | Ordinal: 113
        void FXCalendar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xA77 | Ordinal: 2680
        void calendarView(void) const;

    // RVA: 0xBA3 | Ordinal: 2980
        void create(void);

    // RVA: 0xCDB | Ordinal: 3292
        void disable(void);

    // RVA: 0xDFF | Ordinal: 3584
        void enable(void);

    // RVA: 0x1036 | Ordinal: 4151
        void getBackColor(void) const;

    // RVA: 0x1070 | Ordinal: 4209
        void getCalendarFont(void) const;

    // RVA: 0x1071 | Ordinal: 4210
        void getCalendarStyle(void) const;

    // RVA: 0x10D2 | Ordinal: 4307
        void getCurrentDate(void) const;

    // RVA: 0x10DF | Ordinal: 4320
        void getCurrentMonth(void) const;

    // RVA: 0x1104 | Ordinal: 4357
        void getDayColor(void) const;

    // RVA: 0x11FD | Ordinal: 4606
        void getFirstDay(void) const;

    // RVA: 0x1253 | Ordinal: 4692
        void getHeaderFont(void) const;

    // RVA: 0x13A6 | Ordinal: 5031
        void getMetaClass(void) const;

    // RVA: 0x14D7 | Ordinal: 5336
        void getOtherDayColor(void) const;

    // RVA: 0x14D9 | Ordinal: 5338
        void getOtherWeekendColor(void) const;

    // RVA: 0x1652 | Ordinal: 5715
        void getTitleBackColor(void) const;

    // RVA: 0x1655 | Ordinal: 5718
        void getTitleColor(void) const;

    // RVA: 0x1658 | Ordinal: 5721
        void getTodayColor(void) const;

    // RVA: 0x16B3 | Ordinal: 5812
        void getWeekendColor(void) const;

    // RVA: 0x1724 | Ordinal: 5925
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BE8 | Ordinal: 7145
        void manufacture(void);

    // RVA: 0x1FF7 | Ordinal: 8184
        void onCmdDate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20EC | Ordinal: 8429
        void onCmdMonth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FD | Ordinal: 8446
        void onCmdNextMonth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FE | Ordinal: 8447
        void onCmdNextYear(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2118 | Ordinal: 8473
        void onCmdPrevMonth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2119 | Ordinal: 8474
        void onCmdPrevYear(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214C | Ordinal: 8525
        void onCmdSelectMonth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2315 | Ordinal: 8982
        void onFwdToTarget(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2317 | Ordinal: 8984
        void onFwdToView(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x299B | Ordinal: 10652
        void setBackColor(unsigned int);

    // RVA: 0x29CE | Ordinal: 10703
        void setCalendarFont(class FX::FXFont *);

    // RVA: 0x29CF | Ordinal: 10704
        void setCalendarStyle(unsigned int);

    // RVA: 0x2A0C | Ordinal: 10765
        void setCurrentDate(class FX::FXDate, bool);

    // RVA: 0x2A1A | Ordinal: 10779
        void setCurrentMonth(int, bool);

    // RVA: 0x2A3F | Ordinal: 10816
        void setDayColor(unsigned int);

    // RVA: 0x2A91 | Ordinal: 10898
        void setFirstDay(int);

    // RVA: 0x2AD3 | Ordinal: 10964
        void setFrameStyle(unsigned int);

    // RVA: 0x2AFA | Ordinal: 11003
        void setHeaderFont(class FX::FXFont *);

    // RVA: 0x2C3B | Ordinal: 11324
        void setOtherDayColor(unsigned int);

    // RVA: 0x2C3D | Ordinal: 11326
        void setOtherWeekendColor(unsigned int);

    // RVA: 0x2D94 | Ordinal: 11669
        void setTitleBackColor(unsigned int);

    // RVA: 0x2D97 | Ordinal: 11672
        void setTitleColor(unsigned int);

    // RVA: 0x2D9A | Ordinal: 11675
        void setTodayColor(unsigned int);

    // RVA: 0x2DD4 | Ordinal: 11733
        void setWeekendColor(unsigned int);

    // RVA: 0x3CA | Ordinal: 971
        void _FXCalendar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCALENDAR_HPP
