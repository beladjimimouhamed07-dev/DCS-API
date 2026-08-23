#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTime
{
public:

    // RVA: 0x23B | Ordinal: 572
        void QTime(int);

    // RVA: 0x23C | Ordinal: 573
        void QTime(int, int, int, int);

    // RVA: 0x23D | Ordinal: 574
        void QTime(void);

    // RVA: 0x7F7 | Ordinal: 2040
        void addMSecs(int) const;

    // RVA: 0x812 | Ordinal: 2067
        void addSecs(int) const;

    // RVA: 0xB72 | Ordinal: 2931
        void currentTime(void);

    // RVA: 0xCD3 | Ordinal: 3284
        void ds(void) const;

    // RVA: 0xCEF | Ordinal: 3312
        void elapsed(void) const;

    // RVA: 0xEBC | Ordinal: 3773
        void fromMSecsSinceStartOfDay(int);

    // RVA: 0xEDE | Ordinal: 3807
        void fromString(class QString const &, class QString const &);

    // RVA: 0xEDF | Ordinal: 3808
        void fromString(class QString const &, enum Qt::DateFormat);

    // RVA: 0xF98 | Ordinal: 3993
        void hour(void) const;

    // RVA: 0x1156 | Ordinal: 4439
        void isNull(void) const;

    // RVA: 0x1213 | Ordinal: 4628
        void isValid(void) const;

    // RVA: 0x1214 | Ordinal: 4629
        void isValid(int, int, int, int);

    // RVA: 0x13AE | Ordinal: 5039
        void minute(void) const;

    // RVA: 0x13F1 | Ordinal: 5106
        void msec(void) const;

    // RVA: 0x13F3 | Ordinal: 5108
        void msecsSinceStartOfDay(void) const;

    // RVA: 0x13F6 | Ordinal: 5111
        void msecsTo(class QTime const &) const;

    // RVA: 0x659 | Ordinal: 1626
        void operator_(class QTime const &) const;

    // RVA: 0x1878 | Ordinal: 6265
        void restart(void);

    // RVA: 0x18E7 | Ordinal: 6376
        void second(void) const;

    // RVA: 0x18EA | Ordinal: 6379
        void secsTo(class QTime const &) const;

    // RVA: 0x19D4 | Ordinal: 6613
        void setHMS(int, int, int, int);

    // RVA: 0x1BA2 | Ordinal: 7075
        void start(void);

    // RVA: 0x1DFB | Ordinal: 7676
        void toString(class QString const &) const;

    // RVA: 0x1DFC | Ordinal: 7677
        void toString(class QStringView) const;

    // RVA: 0x1DFD | Ordinal: 7678
        void toString(enum Qt::DateFormat) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QTIME_HPP
