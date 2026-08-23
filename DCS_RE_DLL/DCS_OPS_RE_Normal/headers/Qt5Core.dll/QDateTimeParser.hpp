#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDateTimeParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDateTimeParser
{
public:

    // RVA: 0xCE | Ordinal: 207
        void QDateTimeParser(class QDateTimeParser const &);

    // RVA: 0xCF | Ordinal: 208
        void QDateTimeParser(enum QMetaType::Type, enum QDateTimeParser::Context, class QCalendar const &);

    // RVA: 0x7BD | Ordinal: 1982
        void absoluteMax(int, class QDateTime const &) const;

    // RVA: 0x7BE | Ordinal: 1983
        void absoluteMin(int) const;

    // RVA: 0xB79 | Ordinal: 2938
        void cursorPosition(void) const;

    // RVA: 0xCBD | Ordinal: 3262
        void displayText(void) const;

    // RVA: 0xDF7 | Ordinal: 3576
        void fieldInfo(int) const;

    // RVA: 0xE3D | Ordinal: 3646
        void findAmPm(class QString &, int, int *) const;

    // RVA: 0xE3E | Ordinal: 3647
        void findDay(class QString const &, int, int, class QString *, int *) const;

    // RVA: 0xE43 | Ordinal: 3652
        void findMonth(class QString const &, int, int, int, class QString *, int *) const;

    // RVA: 0xE48 | Ordinal: 3657
        void findTimeZone(class QStringRef, class QDateTime const &, int, int) const;

    // RVA: 0xE49 | Ordinal: 3658
        void findTimeZoneName(class QStringRef, class QDateTime const &) const;

    // RVA: 0xE4A | Ordinal: 3659
        void findUtcOffset(class QStringRef) const;

    // RVA: 0xEDC | Ordinal: 3805
        void fromString(class QString const &, class QDate *, class QTime *) const;

    // RVA: 0xEDD | Ordinal: 3806
        void fromString(class QString const &, class QDateTime *) const;

    // RVA: 0xF1F | Ordinal: 3872
        void getAmPmText(enum QDateTimeParser::AmPm, enum QDateTimeParser::Case) const;

    // RVA: 0xF26 | Ordinal: 3879
        void getDigit(class QDateTime const &, int) const;

    // RVA: 0xF2A | Ordinal: 3883
        void getMaximum(void) const;

    // RVA: 0xF2B | Ordinal: 3884
        void getMinimum(void) const;

    // RVA: 0x12B9 | Ordinal: 4794
        void locale(void) const;

    // RVA: 0x14B9 | Ordinal: 5306
        void parse(class QString, int, class QDateTime const &, bool) const;

    // RVA: 0x14BA | Ordinal: 5307
        void parseFormat(class QString const &);

    // RVA: 0x14BD | Ordinal: 5310
        void parseSection(class QDateTime const &, int, int, class QString *) const;

    // RVA: 0x150C | Ordinal: 5389
        void potentialValue(class QString const &, int, int, int, class QDateTime const &, int) const;

    // RVA: 0x150D | Ordinal: 5390
        void potentialValue(class QStringRef const &, int, int, int, class QDateTime const &, int) const;

    // RVA: 0x18D7 | Ordinal: 6360
        void scanString(class QDateTime const &, bool, class QString *) const;

    // RVA: 0x18EF | Ordinal: 6384
        void sectionMaxSize(enum QDateTimeParser::Section, int) const;

    // RVA: 0x18F0 | Ordinal: 6385
        void sectionMaxSize(int) const;

    // RVA: 0x18F1 | Ordinal: 6386
        void sectionNode(int) const;

    // RVA: 0x18F2 | Ordinal: 6387
        void sectionPos(struct QDateTimeParser::SectionNode const &) const;

    // RVA: 0x18F3 | Ordinal: 6388
        void sectionPos(int) const;

    // RVA: 0x18F4 | Ordinal: 6389
        void sectionSize(int) const;

    // RVA: 0x18F5 | Ordinal: 6390
        void sectionText(class QString const &, int, int) const;

    // RVA: 0x18F6 | Ordinal: 6391
        void sectionText(int) const;

    // RVA: 0x18F7 | Ordinal: 6392
        void sectionType(int) const;

    // RVA: 0x1946 | Ordinal: 6471
        void setCalendar(class QCalendar const &);

    // RVA: 0x1974 | Ordinal: 6517
        void setDefaultLocale(class QLocale const &);

    // RVA: 0x1981 | Ordinal: 6530
        void setDigit(class QDateTime &, int, int) const;

    // RVA: 0x1B4E | Ordinal: 6991
        void skipToNextSection(int, class QDateTime const &, class QString const &) const;

    // RVA: 0x1B4F | Ordinal: 6992
        void skipToNextSection(int, class QDateTime const &, class QStringRef const &) const;

    // RVA: 0x1BDB | Ordinal: 7132
        void startsWithLocalTimeZone(class QStringRef);

    // RVA: 0x1BE7 | Ordinal: 7144
        void stateName(enum QDateTimeParser::State) const;

    // RVA: 0x1E7F | Ordinal: 7808
        void tr(char const *, char const *, int);

    // RVA: 0x1EBF | Ordinal: 7872
        void trUtf8(char const *, char const *, int);

    // RVA: 0x300 | Ordinal: 769
        void _QDateTimeParser(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDATETIMEPARSER_HPP
