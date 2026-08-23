#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTimeZone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTimeZone
{
public:

    // RVA: 0x23F | Ordinal: 576
        void QTimeZone(class QTimeZonePrivate &);

    // RVA: 0x240 | Ordinal: 577
        void QTimeZone(class QTimeZone const &);

    // RVA: 0x241 | Ordinal: 578
        void QTimeZone(class QByteArray const &);

    // RVA: 0x242 | Ordinal: 579
        void QTimeZone(class QByteArray const &, int, class QString const &, class QString const &, enum QLocale::Country, class QString const &);

    // RVA: 0x243 | Ordinal: 580
        void QTimeZone(int);

    // RVA: 0x244 | Ordinal: 581
        void QTimeZone(void);

    // RVA: 0x7B4 | Ordinal: 1973
        void abbreviation(class QDateTime const &) const;

    // RVA: 0x8D2 | Ordinal: 2259
        void availableTimeZoneIds(int);

    // RVA: 0x8D3 | Ordinal: 2260
        void availableTimeZoneIds(enum QLocale::Country);

    // RVA: 0x8D4 | Ordinal: 2261
        void availableTimeZoneIds(void);

    // RVA: 0xA36 | Ordinal: 2615
        void comment(void) const;

    // RVA: 0xB14 | Ordinal: 2837
        void country(void) const;

    // RVA: 0xC2C | Ordinal: 3117
        void daylightTimeOffset(class QDateTime const &) const;

    // RVA: 0xCBB | Ordinal: 3260
        void displayName(class QDateTime const &, enum QTimeZone::NameType, class QLocale const &) const;

    // RVA: 0xCBC | Ordinal: 3261
        void displayName(enum QTimeZone::TimeType, enum QTimeZone::NameType, class QLocale const &) const;

    // RVA: 0xF51 | Ordinal: 3922
        void hasDaylightTime(void) const;

    // RVA: 0xF79 | Ordinal: 3962
        void hasTransitions(void) const;

    // RVA: 0xF9A | Ordinal: 3995
        void ianaIdToWindowsId(class QByteArray const &);

    // RVA: 0xFA0 | Ordinal: 4001
        void id(void) const;

    // RVA: 0x10A3 | Ordinal: 4260
        void isDaylightTime(class QDateTime const &) const;

    // RVA: 0x11DE | Ordinal: 4575
        void isTimeZoneIdAvailable(class QByteArray const &);

    // RVA: 0x1215 | Ordinal: 4630
        void isValid(void) const;

    // RVA: 0x142C | Ordinal: 5165
        void nextTransition(class QDateTime const &) const;

    // RVA: 0x1470 | Ordinal: 5233
        void offsetData(class QDateTime const &) const;

    // RVA: 0x1472 | Ordinal: 5235
        void offsetFromUtc(class QDateTime const &) const;

    // RVA: 0x1530 | Ordinal: 5425
        void previousTransition(class QDateTime const &) const;

    // RVA: 0x1B95 | Ordinal: 7062
        void standardTimeOffset(class QDateTime const &) const;

    // RVA: 0x1C84 | Ordinal: 7301
        void swap(class QTimeZone &);

    // RVA: 0x1C9C | Ordinal: 7325
        void systemTimeZone(void);

    // RVA: 0x1C9D | Ordinal: 7326
        void systemTimeZoneId(void);

    // RVA: 0x1EF3 | Ordinal: 7924
        void transitions(class QDateTime const &, class QDateTime const &) const;

    // RVA: 0x1FA2 | Ordinal: 8099
        void utc(void);

    // RVA: 0x200E | Ordinal: 8207
        void windowsIdToDefaultIanaId(class QByteArray const &);

    // RVA: 0x200F | Ordinal: 8208
        void windowsIdToDefaultIanaId(class QByteArray const &, enum QLocale::Country);

    // RVA: 0x2010 | Ordinal: 8209
        void windowsIdToIanaIds(class QByteArray const &);

    // RVA: 0x2011 | Ordinal: 8210
        void windowsIdToIanaIds(class QByteArray const &, enum QLocale::Country);

    // RVA: 0x374 | Ordinal: 885
        void _QTimeZone(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTIMEZONE_HPP
