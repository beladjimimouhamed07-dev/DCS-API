#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRomanCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRomanCalendar
{
public:

    // RVA: 0x1D7 | Ordinal: 472
        void QRomanCalendar(class QString const &, enum QCalendar::System);

    // RVA: 0x1D8 | Ordinal: 473
        void QRomanCalendar(class QRomanCalendar &&);

    // RVA: 0x1D9 | Ordinal: 474
        void QRomanCalendar(class QRomanCalendar const &);

    // RVA: 0xC32 | Ordinal: 3123
        void daysInMonth(int, int) const;

    // RVA: 0x112C | Ordinal: 4397
        void isLunar(void) const;

    // RVA: 0x1130 | Ordinal: 4401
        void isLuniSolar(void) const;

    // RVA: 0x11BF | Ordinal: 4544
        void isSolar(void) const;

    // RVA: 0x12C9 | Ordinal: 4810
        void localeMonthData(void) const;

    // RVA: 0x12CC | Ordinal: 4813
        void localeMonthIndexData(void) const;

    // RVA: 0x13AB | Ordinal: 5036
        void minimumDaysInMonth(void) const;

    // RVA: 0x352 | Ordinal: 851
        void _QRomanCalendar(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QROMANCALENDAR_HPP
