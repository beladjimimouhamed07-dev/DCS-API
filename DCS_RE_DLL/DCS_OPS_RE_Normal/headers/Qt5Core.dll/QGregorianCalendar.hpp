#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QGregorianCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGregorianCalendar
{
public:

    // RVA: 0x11B | Ordinal: 284
        void QGregorianCalendar(class QGregorianCalendar &&);

    // RVA: 0x11C | Ordinal: 285
        void QGregorianCalendar(class QGregorianCalendar const &);

    // RVA: 0x11D | Ordinal: 286
        void QGregorianCalendar(void);

    // RVA: 0x945 | Ordinal: 2374
        void calendarSystem(void) const;

    // RVA: 0xC1E | Ordinal: 3103
        void dateToJulianDay(int, int, int, __int64 *) const;

    // RVA: 0x110E | Ordinal: 4367
        void isLeapYear(int) const;

    // RVA: 0x123A | Ordinal: 4667
        void julianDayToDate(__int64) const;

    // RVA: 0x123F | Ordinal: 4672
        void julianFromParts(int, int, int, __int64 *);

    // RVA: 0x1288 | Ordinal: 4745
        void leapTest(int);

    // RVA: 0x13C0 | Ordinal: 5057
        void monthLength(int, int);

    // RVA: 0x13C3 | Ordinal: 5060
        void monthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x13FE | Ordinal: 5119
        void name(void) const;

    // RVA: 0x14BF | Ordinal: 5312
        void partsFromJulian(__int64);

    // RVA: 0x1B90 | Ordinal: 7057
        void standaloneMonthName(class QLocale const &, int, int, enum QLocale::FormatType) const;

    // RVA: 0x1FA5 | Ordinal: 8102
        void validParts(int, int, int);

    // RVA: 0x2002 | Ordinal: 8195
        void weekDayOfJulian(__int64);

    // RVA: 0x31E | Ordinal: 799
        void _QGregorianCalendar(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QGREGORIANCALENDAR_HPP
