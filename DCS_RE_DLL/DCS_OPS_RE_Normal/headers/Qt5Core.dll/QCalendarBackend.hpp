#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCalendarBackend
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCalendarBackend
{
public:

    // RVA: 0x6F | Ordinal: 112
        void QCalendarBackend(class QString const &, enum QCalendar::System);

    // RVA: 0x70 | Ordinal: 113
        void QCalendarBackend(class QCalendarBackend const &);

    // RVA: 0x8CF | Ordinal: 2256
        void availableCalendars(void);

    // RVA: 0x944 | Ordinal: 2373
        void calendarSystem(void) const;

    // RVA: 0xC1D | Ordinal: 3102
        void dateTimeToString(class QStringView, class QDateTime const &, class QDate const &, class QTime const &, class QLocale const &) const;

    // RVA: 0xC27 | Ordinal: 3112
        void dayOfWeek(__int64) const;

    // RVA: 0xC34 | Ordinal: 3125
        void daysInYear(int) const;

    // RVA: 0xEA6 | Ordinal: 3751
        void fromEnum(enum QCalendar::System);

    // RVA: 0xEBD | Ordinal: 3774
        void fromName(class QLatin1String);

    // RVA: 0xEBE | Ordinal: 3775
        void fromName(class QStringView);

    // RVA: 0xF7C | Ordinal: 3965
        void hasYearZero(void) const;

    // RVA: 0x10A1 | Ordinal: 4258
        void isDateValid(int, int, int) const;

    // RVA: 0x116D | Ordinal: 4462
        void isProleptic(void) const;

    // RVA: 0x132C | Ordinal: 4909
        void maximumDaysInMonth(void) const;

    // RVA: 0x132F | Ordinal: 4912
        void maximumMonthsInYear(void) const;

    // RVA: 0x13AA | Ordinal: 5035
        void minimumDaysInMonth(void) const;

    // RVA: 0x13C2 | Ordinal: 5059
        void monthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x13C6 | Ordinal: 5063
        void monthsInYear(int) const;

    // RVA: 0x1767 | Ordinal: 5992
        void registerAlias(class QString const &);

    // RVA: 0x1B8F | Ordinal: 7056
        void standaloneMonthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x1B93 | Ordinal: 7060
        void standaloneWeekDayName(class QLocale const &, int, enum QLocale::FormatType) const;

    // RVA: 0x2001 | Ordinal: 8194
        void weekDayName(class QLocale const &, int, enum QLocale::FormatType) const;

    // RVA: 0x2EE | Ordinal: 751
        void _QCalendarBackend(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCALENDARBACKEND_HPP
