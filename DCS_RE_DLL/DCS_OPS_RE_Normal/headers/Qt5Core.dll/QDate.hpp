#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDate
{
public:

    // RVA: 0xC3 | Ordinal: 196
        void QDate(__int64);

    // RVA: 0xC4 | Ordinal: 197
        void QDate(int, int, int);

    // RVA: 0xC5 | Ordinal: 198
        void QDate(int, int, int, class QCalendar);

    // RVA: 0xC6 | Ordinal: 199
        void QDate(void);

    // RVA: 0x7EA | Ordinal: 2027
        void addDays(__int64) const;

    // RVA: 0x7FC | Ordinal: 2045
        void addMonths(int) const;

    // RVA: 0x7FD | Ordinal: 2046
        void addMonths(int, class QCalendar) const;

    // RVA: 0x81D | Ordinal: 2078
        void addYears(int) const;

    // RVA: 0x81E | Ordinal: 2079
        void addYears(int, class QCalendar) const;

    // RVA: 0xB5D | Ordinal: 2910
        void currentDate(void);

    // RVA: 0xC23 | Ordinal: 3108
        void day(class QCalendar) const;

    // RVA: 0xC24 | Ordinal: 3109
        void day(void) const;

    // RVA: 0xC28 | Ordinal: 3113
        void dayOfWeek(class QCalendar) const;

    // RVA: 0xC29 | Ordinal: 3114
        void dayOfWeek(void) const;

    // RVA: 0xC2A | Ordinal: 3115
        void dayOfYear(class QCalendar) const;

    // RVA: 0xC2B | Ordinal: 3116
        void dayOfYear(void) const;

    // RVA: 0xC2E | Ordinal: 3119
        void daysInMonth(class QCalendar) const;

    // RVA: 0xC2F | Ordinal: 3120
        void daysInMonth(void) const;

    // RVA: 0xC35 | Ordinal: 3126
        void daysInYear(class QCalendar) const;

    // RVA: 0xC36 | Ordinal: 3127
        void daysInYear(void) const;

    // RVA: 0xC38 | Ordinal: 3129
        void daysTo(class QDate const &) const;

    // RVA: 0xD37 | Ordinal: 3384
        void endOfDay(class QTimeZone const &) const;

    // RVA: 0xD38 | Ordinal: 3385
        void endOfDay(enum Qt::TimeSpec, int) const;

    // RVA: 0xEAD | Ordinal: 3758
        void fromJulianDay(__int64);

    // RVA: 0xED6 | Ordinal: 3799
        void fromString(class QString const &, class QString const &);

    // RVA: 0xED7 | Ordinal: 3800
        void fromString(class QString const &, class QString const &, class QCalendar);

    // RVA: 0xED8 | Ordinal: 3801
        void fromString(class QString const &, enum Qt::DateFormat);

    // RVA: 0xF24 | Ordinal: 3877
        void getDate(int *, int *, int *);

    // RVA: 0xF25 | Ordinal: 3878
        void getDate(int *, int *, int *) const;

    // RVA: 0x110D | Ordinal: 4366
        void isLeapYear(int);

    // RVA: 0x1147 | Ordinal: 4424
        void isNull(void) const;

    // RVA: 0x11FB | Ordinal: 4604
        void isValid(void) const;

    // RVA: 0x11FC | Ordinal: 4605
        void isValid(int, int, int);

    // RVA: 0x12D9 | Ordinal: 4826
        void longDayName(int, enum QDate::MonthNameType);

    // RVA: 0x12DA | Ordinal: 4827
        void longMonthName(int, enum QDate::MonthNameType);

    // RVA: 0x1328 | Ordinal: 4905
        void maxJd(void);

    // RVA: 0x13A8 | Ordinal: 5033
        void minJd(void);

    // RVA: 0x13BE | Ordinal: 5055
        void month(class QCalendar) const;

    // RVA: 0x13BF | Ordinal: 5056
        void month(void) const;

    // RVA: 0x1457 | Ordinal: 5208
        void nullJd(void);

    // RVA: 0x650 | Ordinal: 1617
        void operator_(class QDate const &) const;

    // RVA: 0x196D | Ordinal: 6510
        void setDate(int, int, int);

    // RVA: 0x196E | Ordinal: 6511
        void setDate(int, int, int, class QCalendar);

    // RVA: 0x1AEB | Ordinal: 6892
        void setYMD(int, int, int);

    // RVA: 0x1AF6 | Ordinal: 6903
        void shortDayName(int, enum QDate::MonthNameType);

    // RVA: 0x1AF7 | Ordinal: 6904
        void shortMonthName(int, enum QDate::MonthNameType);

    // RVA: 0x1BB3 | Ordinal: 7092
        void startOfDay(class QTimeZone const &) const;

    // RVA: 0x1BB4 | Ordinal: 7093
        void startOfDay(enum Qt::TimeSpec, int) const;

    // RVA: 0x1D60 | Ordinal: 7521
        void toJulianDay(void) const;

    // RVA: 0x1DD2 | Ordinal: 7635
        void toString(class QString const &) const;

    // RVA: 0x1DD3 | Ordinal: 7636
        void toString(class QString const &, class QCalendar) const;

    // RVA: 0x1DD4 | Ordinal: 7637
        void toString(class QStringView) const;

    // RVA: 0x1DD5 | Ordinal: 7638
        void toString(class QStringView, class QCalendar) const;

    // RVA: 0x1DD6 | Ordinal: 7639
        void toString(enum Qt::DateFormat) const;

    // RVA: 0x1DD7 | Ordinal: 7640
        void toString(enum Qt::DateFormat, class QCalendar) const;

    // RVA: 0x2003 | Ordinal: 8196
        void weekNumber(int *) const;

    // RVA: 0x2054 | Ordinal: 8277
        void year(class QCalendar) const;

    // RVA: 0x2055 | Ordinal: 8278
        void year(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QDATE_HPP
