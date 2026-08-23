#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDateTime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDateTime
{
public:

    // RVA: 0xC7 | Ordinal: 200
        void QDateTime(class QDateTime &&);

    // RVA: 0xC8 | Ordinal: 201
        void QDateTime(class QDateTime const &);

    // RVA: 0xC9 | Ordinal: 202
        void QDateTime(class QDate const &);

    // RVA: 0xCA | Ordinal: 203
        void QDateTime(class QDate const &, class QTime const &, class QTimeZone const &);

    // RVA: 0xCB | Ordinal: 204
        void QDateTime(class QDate const &, class QTime const &, enum Qt::TimeSpec);

    // RVA: 0xCC | Ordinal: 205
        void QDateTime(class QDate const &, class QTime const &, enum Qt::TimeSpec, int);

    // RVA: 0xCD | Ordinal: 206
        void QDateTime(void);

    // RVA: 0x7EB | Ordinal: 2028
        void addDays(__int64) const;

    // RVA: 0x7F6 | Ordinal: 2039
        void addMSecs(__int64) const;

    // RVA: 0x7FE | Ordinal: 2047
        void addMonths(int) const;

    // RVA: 0x811 | Ordinal: 2066
        void addSecs(__int64) const;

    // RVA: 0x81F | Ordinal: 2080
        void addYears(int) const;

    // RVA: 0xB5E | Ordinal: 2911
        void currentDateTime(void);

    // RVA: 0xB5F | Ordinal: 2912
        void currentDateTimeUtc(void);

    // RVA: 0xB67 | Ordinal: 2920
        void currentMSecsSinceEpoch(void);

    // RVA: 0xB6D | Ordinal: 2926
        void currentSecsSinceEpoch(void);

    // RVA: 0xC17 | Ordinal: 3096
        void date(void) const;

    // RVA: 0xC39 | Ordinal: 3130
        void daysTo(class QDateTime const &) const;

    // RVA: 0xEB9 | Ordinal: 3770
        void fromMSecsSinceEpoch(__int64);

    // RVA: 0xEBA | Ordinal: 3771
        void fromMSecsSinceEpoch(__int64, class QTimeZone const &);

    // RVA: 0xEBB | Ordinal: 3772
        void fromMSecsSinceEpoch(__int64, enum Qt::TimeSpec, int);

    // RVA: 0xEC9 | Ordinal: 3786
        void fromSecsSinceEpoch(__int64, class QTimeZone const &);

    // RVA: 0xECA | Ordinal: 3787
        void fromSecsSinceEpoch(__int64, enum Qt::TimeSpec, int);

    // RVA: 0xED9 | Ordinal: 3802
        void fromString(class QString const &, class QString const &);

    // RVA: 0xEDA | Ordinal: 3803
        void fromString(class QString const &, class QString const &, class QCalendar);

    // RVA: 0xEDB | Ordinal: 3804
        void fromString(class QString const &, enum Qt::DateFormat);

    // RVA: 0xEE8 | Ordinal: 3817
        void fromTime_t(unsigned int);

    // RVA: 0xEE9 | Ordinal: 3818
        void fromTime_t(unsigned int, class QTimeZone const &);

    // RVA: 0xEEA | Ordinal: 3819
        void fromTime_t(unsigned int, enum Qt::TimeSpec, int);

    // RVA: 0x10A2 | Ordinal: 4259
        void isDaylightTime(void) const;

    // RVA: 0x1148 | Ordinal: 4425
        void isNull(void) const;

    // RVA: 0x11FD | Ordinal: 4606
        void isValid(void) const;

    // RVA: 0x13F4 | Ordinal: 5109
        void msecsTo(class QDateTime const &) const;

    // RVA: 0x1471 | Ordinal: 5234
        void offsetFromUtc(void) const;

    // RVA: 0x651 | Ordinal: 1618
        void operator_(class QDateTime const &) const;

    // RVA: 0x18E8 | Ordinal: 6377
        void secsTo(class QDateTime const &) const;

    // RVA: 0x196F | Ordinal: 6512
        void setDate(class QDate const &);

    // RVA: 0x1A06 | Ordinal: 6663
        void setMSecsSinceEpoch(__int64);

    // RVA: 0x1A2B | Ordinal: 6700
        void setOffsetFromUtc(int);

    // RVA: 0x1A83 | Ordinal: 6788
        void setSecsSinceEpoch(__int64);

    // RVA: 0x1ABB | Ordinal: 6844
        void setTime(class QTime const &);

    // RVA: 0x1ABC | Ordinal: 6845
        void setTimeSpec(enum Qt::TimeSpec);

    // RVA: 0x1ABD | Ordinal: 6846
        void setTimeZone(class QTimeZone const &);

    // RVA: 0x1ABE | Ordinal: 6847
        void setTime_t(unsigned int);

    // RVA: 0x1AD3 | Ordinal: 6868
        void setUtcOffset(int);

    // RVA: 0x1C6F | Ordinal: 7280
        void swap(class QDateTime &);

    // RVA: 0x1CD1 | Ordinal: 7378
        void time(void) const;

    // RVA: 0x1CD3 | Ordinal: 7380
        void timeSpec(void) const;

    // RVA: 0x1CD4 | Ordinal: 7381
        void timeZone(void) const;

    // RVA: 0x1CD5 | Ordinal: 7382
        void timeZoneAbbreviation(void) const;

    // RVA: 0x1D77 | Ordinal: 7544
        void toLocalTime(void) const;

    // RVA: 0x1D94 | Ordinal: 7573
        void toMSecsSinceEpoch(void) const;

    // RVA: 0x1DA2 | Ordinal: 7587
        void toOffsetFromUtc(int) const;

    // RVA: 0x1DB5 | Ordinal: 7606
        void toSecsSinceEpoch(void) const;

    // RVA: 0x1DD8 | Ordinal: 7641
        void toString(class QString const &) const;

    // RVA: 0x1DD9 | Ordinal: 7642
        void toString(class QString const &, class QCalendar) const;

    // RVA: 0x1DDA | Ordinal: 7643
        void toString(class QStringView) const;

    // RVA: 0x1DDB | Ordinal: 7644
        void toString(class QStringView, class QCalendar) const;

    // RVA: 0x1DDC | Ordinal: 7645
        void toString(enum Qt::DateFormat) const;

    // RVA: 0x1E0D | Ordinal: 7694
        void toTimeSpec(enum Qt::TimeSpec) const;

    // RVA: 0x1E0E | Ordinal: 7695
        void toTimeZone(class QTimeZone const &) const;

    // RVA: 0x1E0F | Ordinal: 7696
        void toTime_t(void) const;

    // RVA: 0x1E2D | Ordinal: 7726
        void toUTC(void) const;

    // RVA: 0x1FA3 | Ordinal: 8100
        void utcOffset(void) const;

    // RVA: 0x2FF | Ordinal: 768
        void _QDateTime(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDATETIME_HPP
