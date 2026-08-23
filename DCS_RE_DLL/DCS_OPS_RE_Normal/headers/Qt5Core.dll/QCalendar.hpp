#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCalendar
{
public:

    // RVA: 0x6B | Ordinal: 108
        void QCalendar(class QLatin1String);

    // RVA: 0x6C | Ordinal: 109
        void QCalendar(class QStringView);

    // RVA: 0x6D | Ordinal: 110
        void QCalendar(enum QCalendar::System);

    // RVA: 0x6E | Ordinal: 111
        void QCalendar(void);

    // RVA: 0x8CE | Ordinal: 2255
        void availableCalendars(void);

    // RVA: 0xC19 | Ordinal: 3098
        void dateFromParts(struct QCalendar::YearMonthDay const &) const;

    // RVA: 0xC1A | Ordinal: 3099
        void dateFromParts(int, int, int) const;

    // RVA: 0xC1C | Ordinal: 3101
        void dateTimeToString(class QStringView, class QDateTime const &, class QDate const &, class QTime const &, class QLocale const &) const;

    // RVA: 0xC26 | Ordinal: 3111
        void dayOfWeek(class QDate) const;

    // RVA: 0xC2D | Ordinal: 3118
        void daysInMonth(int, int) const;

    // RVA: 0xC33 | Ordinal: 3124
        void daysInYear(int) const;

    // RVA: 0xF7B | Ordinal: 3964
        void hasYearZero(void) const;

    // RVA: 0x10A0 | Ordinal: 4257
        void isDateValid(int, int, int) const;

    // RVA: 0x10FA | Ordinal: 4347
        void isGregorian(void) const;

    // RVA: 0x110C | Ordinal: 4365
        void isLeapYear(int) const;

    // RVA: 0x1129 | Ordinal: 4394
        void isLunar(void) const;

    // RVA: 0x112D | Ordinal: 4398
        void isLuniSolar(void) const;

    // RVA: 0x116C | Ordinal: 4461
        void isProleptic(void) const;

    // RVA: 0x11BC | Ordinal: 4541
        void isSolar(void) const;

    // RVA: 0x11F9 | Ordinal: 4602
        void isValid(void) const;

    // RVA: 0x132B | Ordinal: 4908
        void maximumDaysInMonth(void) const;

    // RVA: 0x132E | Ordinal: 4911
        void maximumMonthsInYear(void) const;

    // RVA: 0x13A9 | Ordinal: 5034
        void minimumDaysInMonth(void) const;

    // RVA: 0x13C1 | Ordinal: 5058
        void monthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x13C5 | Ordinal: 5062
        void monthsInYear(int) const;

    // RVA: 0x13FC | Ordinal: 5117
        void name(void) const;

    // RVA: 0x14BE | Ordinal: 5311
        void partsFromDate(class QDate) const;

    // RVA: 0x1B8E | Ordinal: 7055
        void standaloneMonthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x1B92 | Ordinal: 7059
        void standaloneWeekDayName(class QLocale const &, int, enum QLocale::FormatType) const;

    // RVA: 0x2000 | Ordinal: 8193
        void weekDayName(class QLocale const &, int, enum QLocale::FormatType) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QCALENDAR_HPP
