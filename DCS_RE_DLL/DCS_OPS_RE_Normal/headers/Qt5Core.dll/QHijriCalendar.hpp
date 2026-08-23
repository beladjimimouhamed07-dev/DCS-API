#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QHijriCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QHijriCalendar
{
public:

    // RVA: 0x11F | Ordinal: 288
        void QHijriCalendar(class QString const &, enum QCalendar::System);

    // RVA: 0x120 | Ordinal: 289
        void QHijriCalendar(class QHijriCalendar &&);

    // RVA: 0x121 | Ordinal: 290
        void QHijriCalendar(class QHijriCalendar const &);

    // RVA: 0xC30 | Ordinal: 3121
        void daysInMonth(int, int) const;

    // RVA: 0xC37 | Ordinal: 3128
        void daysInYear(int) const;

    // RVA: 0x112A | Ordinal: 4395
        void isLunar(void) const;

    // RVA: 0x112E | Ordinal: 4399
        void isLuniSolar(void) const;

    // RVA: 0x11BD | Ordinal: 4542
        void isSolar(void) const;

    // RVA: 0x12C7 | Ordinal: 4808
        void localeMonthData(void) const;

    // RVA: 0x12CA | Ordinal: 4811
        void localeMonthIndexData(void) const;

    // RVA: 0x132D | Ordinal: 4910
        void maximumDaysInMonth(void) const;

    // RVA: 0x31F | Ordinal: 800
        void _QHijriCalendar(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QHIJRICALENDAR_HPP
