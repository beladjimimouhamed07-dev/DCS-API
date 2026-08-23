#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJalaliCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJalaliCalendar
{
public:

    // RVA: 0x139 | Ordinal: 314
        void QJalaliCalendar(class QJalaliCalendar &&);

    // RVA: 0x13A | Ordinal: 315
        void QJalaliCalendar(class QJalaliCalendar const &);

    // RVA: 0x13B | Ordinal: 316
        void QJalaliCalendar(void);

    // RVA: 0x947 | Ordinal: 2376
        void calendarSystem(void) const;

    // RVA: 0xC20 | Ordinal: 3105
        void dateToJulianDay(int, int, int, __int64 *) const;

    // RVA: 0xC31 | Ordinal: 3122
        void daysInMonth(int, int) const;

    // RVA: 0x1110 | Ordinal: 4369
        void isLeapYear(int) const;

    // RVA: 0x112B | Ordinal: 4396
        void isLunar(void) const;

    // RVA: 0x112F | Ordinal: 4400
        void isLuniSolar(void) const;

    // RVA: 0x11BE | Ordinal: 4543
        void isSolar(void) const;

    // RVA: 0x123C | Ordinal: 4669
        void julianDayToDate(__int64) const;

    // RVA: 0x12C8 | Ordinal: 4809
        void localeMonthData(void) const;

    // RVA: 0x12CB | Ordinal: 4812
        void localeMonthIndexData(void) const;

    // RVA: 0x1400 | Ordinal: 5121
        void name(void) const;

    // RVA: 0x328 | Ordinal: 809
        void _QJalaliCalendar(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QJALALICALENDAR_HPP
