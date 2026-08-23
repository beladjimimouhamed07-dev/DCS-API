#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStringRef
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStringRef
{
public:

    // RVA: 0x216 | Ordinal: 535
        void QStringRef(class QStringRef &&);

    // RVA: 0x217 | Ordinal: 536
        void QStringRef(class QStringRef const &);

    // RVA: 0x218 | Ordinal: 537
        void QStringRef(class QString const *);

    // RVA: 0x219 | Ordinal: 538
        void QStringRef(class QString const *, int, int);

    // RVA: 0x21A | Ordinal: 539
        void QStringRef(void);

    // RVA: 0x87E | Ordinal: 2175
        void appendTo(class QString *) const;

    // RVA: 0x8B7 | Ordinal: 2232
        void at(int) const;

    // RVA: 0x8E2 | Ordinal: 2275
        void back(void) const;

    // RVA: 0x900 | Ordinal: 2305
        void begin(void) const;

    // RVA: 0x999 | Ordinal: 2458
        void cbegin(void) const;

    // RVA: 0x9A7 | Ordinal: 2472
        void cend(void) const;

    // RVA: 0x9CA | Ordinal: 2507
        void chop(int);

    // RVA: 0x9CD | Ordinal: 2510
        void chopped(int) const;

    // RVA: 0x9EA | Ordinal: 2539
        void clear(void);

    // RVA: 0xA53 | Ordinal: 2644
        void compare(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA54 | Ordinal: 2645
        void compare(class QByteArray const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA55 | Ordinal: 2646
        void compare(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA56 | Ordinal: 2647
        void compare(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xA57 | Ordinal: 2648
        void compare(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xA58 | Ordinal: 2649
        void compare(class QStringRef const &, class QStringRef const &, enum Qt::CaseSensitivity);

    // RVA: 0xA59 | Ordinal: 2650
        void compare(class QStringRef const &, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0xA5A | Ordinal: 2651
        void compare(class QStringRef const &, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xA8A | Ordinal: 2699
        void constBegin(void) const;

    // RVA: 0xA91 | Ordinal: 2706
        void constData(void) const;

    // RVA: 0xA9D | Ordinal: 2718
        void constEnd(void) const;

    // RVA: 0xADB | Ordinal: 2780
        void contains(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xADC | Ordinal: 2781
        void contains(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xADD | Ordinal: 2782
        void contains(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xADE | Ordinal: 2783
        void contains(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xADF | Ordinal: 2784
        void contains(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0xB0B | Ordinal: 2828
        void count(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xB0C | Ordinal: 2829
        void count(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xB0D | Ordinal: 2830
        void count(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xB0E | Ordinal: 2831
        void count(void) const;

    // RVA: 0xB1F | Ordinal: 2848
        void crbegin(void) const;

    // RVA: 0xB4B | Ordinal: 2892
        void crend(void) const;

    // RVA: 0xC0C | Ordinal: 3085
        void data(void) const;

    // RVA: 0xD26 | Ordinal: 3367
        void end(void) const;

    // RVA: 0xD4D | Ordinal: 3406
        void endsWith(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xD4E | Ordinal: 3407
        void endsWith(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xD4F | Ordinal: 3408
        void endsWith(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xD50 | Ordinal: 3409
        void endsWith(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xD51 | Ordinal: 3410
        void endsWith(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0xF11 | Ordinal: 3858
        void front(void) const;

    // RVA: 0xFC8 | Ordinal: 4041
        void indexOf(class QStringRef const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFC9 | Ordinal: 4042
        void indexOf(class QString const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFCA | Ordinal: 4043
        void indexOf(class QChar, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFCB | Ordinal: 4044
        void indexOf(class QLatin1String, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFCC | Ordinal: 4045
        void indexOf(class QStringView, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x10D8 | Ordinal: 4313
        void isEmpty(void) const;

    // RVA: 0x1155 | Ordinal: 4438
        void isNull(void) const;

    // RVA: 0x118E | Ordinal: 4495
        void isRightToLeft(void) const;

    // RVA: 0x127A | Ordinal: 4731
        void lastIndexOf(class QStringRef const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x127B | Ordinal: 4732
        void lastIndexOf(class QString const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x127C | Ordinal: 4733
        void lastIndexOf(class QChar, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x127D | Ordinal: 4734
        void lastIndexOf(class QLatin1String, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x127E | Ordinal: 4735
        void lastIndexOf(class QStringView, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1290 | Ordinal: 4753
        void left(int) const;

    // RVA: 0x129F | Ordinal: 4768
        void length(void) const;

    // RVA: 0x12C0 | Ordinal: 4801
        void localeAwareCompare(class QStringRef const &) const;

    // RVA: 0x12C1 | Ordinal: 4802
        void localeAwareCompare(class QString const &) const;

    // RVA: 0x12C2 | Ordinal: 4803
        void localeAwareCompare(class QStringView) const;

    // RVA: 0x12C3 | Ordinal: 4804
        void localeAwareCompare(class QStringRef const &, class QStringRef const &);

    // RVA: 0x12C4 | Ordinal: 4805
        void localeAwareCompare(class QStringRef const &, class QString const &);

    // RVA: 0x12C5 | Ordinal: 4806
        void localeAwareCompare(class QStringView, class QStringView);

    // RVA: 0x1395 | Ordinal: 5014
        void mid(int, int) const;

    // RVA: 0x658 | Ordinal: 1625
        void operator_(char const *) const;

    // RVA: 0x1500 | Ordinal: 5377
        void position(void) const;

    // RVA: 0x1715 | Ordinal: 5910
        void rbegin(void) const;

    // RVA: 0x181F | Ordinal: 6176
        void rend(void) const;

    // RVA: 0x189A | Ordinal: 6299
        void right(int) const;

    // RVA: 0x1B44 | Ordinal: 6981
        void size(void) const;

    // RVA: 0x1B76 | Ordinal: 7031
        void split(class QString const &, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B77 | Ordinal: 7032
        void split(class QString const &, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B78 | Ordinal: 7033
        void split(class QChar, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B79 | Ordinal: 7034
        void split(class QChar, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD2 | Ordinal: 7123
        void startsWith(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD3 | Ordinal: 7124
        void startsWith(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD4 | Ordinal: 7125
        void startsWith(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD5 | Ordinal: 7126
        void startsWith(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD6 | Ordinal: 7127
        void startsWith(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0x1C47 | Ordinal: 7240
        void string(void) const;

    // RVA: 0x1CEC | Ordinal: 7405
        void toAscii(void) const;

    // RVA: 0x1D32 | Ordinal: 7475
        void toDouble(bool *) const;

    // RVA: 0x1D40 | Ordinal: 7489
        void toFloat(bool *) const;

    // RVA: 0x1D4F | Ordinal: 7504
        void toInt(bool *, int) const;

    // RVA: 0x1D66 | Ordinal: 7527
        void toLatin1(void) const;

    // RVA: 0x1D74 | Ordinal: 7541
        void toLocal8Bit(void) const;

    // RVA: 0x1D7E | Ordinal: 7551
        void toLong(bool *, int) const;

    // RVA: 0x1D84 | Ordinal: 7557
        void toLongLong(bool *, int) const;

    // RVA: 0x1DBC | Ordinal: 7613
        void toShort(bool *, int) const;

    // RVA: 0x1DFA | Ordinal: 7675
        void toString(void) const;

    // RVA: 0x1E18 | Ordinal: 7705
        void toUInt(bool *, int) const;

    // RVA: 0x1E1F | Ordinal: 7712
        void toULong(bool *, int) const;

    // RVA: 0x1E25 | Ordinal: 7718
        void toULongLong(bool *, int) const;

    // RVA: 0x1E2C | Ordinal: 7725
        void toUShort(bool *, int) const;

    // RVA: 0x1E2F | Ordinal: 7728
        void toUcs4(void) const;

    // RVA: 0x1E4C | Ordinal: 7757
        void toUtf8(void) const;

    // RVA: 0x1F16 | Ordinal: 7959
        void trimmed(void) const;

    // RVA: 0x1F21 | Ordinal: 7970
        void truncate(int);

    // RVA: 0x1F55 | Ordinal: 8022
        void unicode(void) const;

    // RVA: 0x365 | Ordinal: 870
        void _QStringRef(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTRINGREF_HPP
