#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDateTimeEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDateTimeEdit
{
public:

    // RVA: 0x33 | Ordinal: 52
        void QDateTimeEdit(class QVariant const &, enum QVariant::Type, class QWidget *);

    // RVA: 0x34 | Ordinal: 53
        void QDateTimeEdit(class QVariant const &, enum QMetaType::Type, class QWidget *);

    // RVA: 0x35 | Ordinal: 54
        void QDateTimeEdit(class QDate const &, class QWidget *);

    // RVA: 0x36 | Ordinal: 55
        void QDateTimeEdit(class QDateTime const &, class QWidget *);

    // RVA: 0x37 | Ordinal: 56
        void QDateTimeEdit(class QTime const &, class QWidget *);

    // RVA: 0x38 | Ordinal: 57
        void QDateTimeEdit(class QWidget *);

    // RVA: 0x67F | Ordinal: 1664
        void calendar(void) const;

    // RVA: 0x680 | Ordinal: 1665
        void calendarPopup(void) const;

    // RVA: 0x681 | Ordinal: 1666
        void calendarWidget(void) const;

    // RVA: 0x70D | Ordinal: 1806
        void clear(void);

    // RVA: 0x729 | Ordinal: 1834
        void clearMaximumDate(void);

    // RVA: 0x72A | Ordinal: 1835
        void clearMaximumDateTime(void);

    // RVA: 0x72B | Ordinal: 1836
        void clearMaximumTime(void);

    // RVA: 0x72E | Ordinal: 1839
        void clearMinimumDate(void);

    // RVA: 0x72F | Ordinal: 1840
        void clearMinimumDateTime(void);

    // RVA: 0x730 | Ordinal: 1841
        void clearMinimumTime(void);

    // RVA: 0x867 | Ordinal: 2152
        void currentSection(void) const;

    // RVA: 0x868 | Ordinal: 2153
        void currentSectionIndex(void) const;

    // RVA: 0x8CF | Ordinal: 2256
        void d_func(void);

    // RVA: 0x8D0 | Ordinal: 2257
        void d_func(void) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void date(void) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void dateChanged(class QDate const &);

    // RVA: 0x9ED | Ordinal: 2542
        void dateTime(void) const;

    // RVA: 0x9EE | Ordinal: 2543
        void dateTimeChanged(class QDateTime const &);

    // RVA: 0x9EF | Ordinal: 2544
        void dateTimeFromText(class QString const &) const;

    // RVA: 0xA26 | Ordinal: 2599
        void displayFormat(void) const;

    // RVA: 0xA2C | Ordinal: 2605
        void displayedSections(void) const;

    // RVA: 0xB39 | Ordinal: 2874
        void event(class QEvent *);

    // RVA: 0xBF1 | Ordinal: 3058
        void fixup(class QString &) const;

    // RVA: 0xC04 | Ordinal: 3077
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC19 | Ordinal: 3098
        void focusNextPrevChild(bool);

    // RVA: 0xDE4 | Ordinal: 3557
        void initStyleOption(class QStyleOptionSpinBox *) const;

    // RVA: 0xFFA | Ordinal: 4091
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x10E6 | Ordinal: 4327
        void maximumDate(void) const;

    // RVA: 0x10E7 | Ordinal: 4328
        void maximumDateTime(void) const;

    // RVA: 0x10F4 | Ordinal: 4341
        void maximumTime(void) const;

    // RVA: 0x1123 | Ordinal: 4388
        void metaObject(void) const;

    // RVA: 0x11B6 | Ordinal: 4535
        void minimumDate(void) const;

    // RVA: 0x11B7 | Ordinal: 4536
        void minimumDateTime(void) const;

    // RVA: 0x11E4 | Ordinal: 4581
        void minimumTime(void) const;

    // RVA: 0x1237 | Ordinal: 4664
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1327 | Ordinal: 4904
        void paintEvent(class QPaintEvent *);

    // RVA: 0x143C | Ordinal: 5181
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14CF | Ordinal: 5328
        void qt_metacast(char const *);

    // RVA: 0x1565 | Ordinal: 5478
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1778 | Ordinal: 6009
        void sectionAt(int) const;

    // RVA: 0x177A | Ordinal: 6011
        void sectionCount(void) const;

    // RVA: 0x1787 | Ordinal: 6024
        void sectionText(enum QDateTimeEdit::Section) const;

    // RVA: 0x185C | Ordinal: 6237
        void setCalendar(class QCalendar);

    // RVA: 0x185D | Ordinal: 6238
        void setCalendarPopup(bool);

    // RVA: 0x185E | Ordinal: 6239
        void setCalendarWidget(class QCalendarWidget *);

    // RVA: 0x18D0 | Ordinal: 6353
        void setCurrentSection(enum QDateTimeEdit::Section);

    // RVA: 0x18D1 | Ordinal: 6354
        void setCurrentSectionIndex(int);

    // RVA: 0x18ED | Ordinal: 6382
        void setDate(class QDate const &);

    // RVA: 0x18F1 | Ordinal: 6386
        void setDateRange(class QDate const &, class QDate const &);

    // RVA: 0x18F3 | Ordinal: 6388
        void setDateTime(class QDateTime const &);

    // RVA: 0x18F4 | Ordinal: 6389
        void setDateTimeRange(class QDateTime const &, class QDateTime const &);

    // RVA: 0x1918 | Ordinal: 6425
        void setDisplayFormat(class QString const &);

    // RVA: 0x1A93 | Ordinal: 6804
        void setMaximumDate(class QDate const &);

    // RVA: 0x1A94 | Ordinal: 6805
        void setMaximumDateTime(class QDateTime const &);

    // RVA: 0x1A9D | Ordinal: 6814
        void setMaximumTime(class QTime const &);

    // RVA: 0x1AB1 | Ordinal: 6834
        void setMinimumDate(class QDate const &);

    // RVA: 0x1AB2 | Ordinal: 6835
        void setMinimumDateTime(class QDateTime const &);

    // RVA: 0x1ABD | Ordinal: 6846
        void setMinimumTime(class QTime const &);

    // RVA: 0x1BDD | Ordinal: 7134
        void setSelectedSection(enum QDateTimeEdit::Section);

    // RVA: 0x1CC4 | Ordinal: 7365
        void setTime(class QTime const &);

    // RVA: 0x1CC6 | Ordinal: 7367
        void setTimeRange(class QTime const &, class QTime const &);

    // RVA: 0x1CC7 | Ordinal: 7368
        void setTimeSpec(enum Qt::TimeSpec);

    // RVA: 0x1DEB | Ordinal: 7660
        void sizeHint(void) const;

    // RVA: 0x1F2B | Ordinal: 7980
        void stepBy(int);

    // RVA: 0x1F2E | Ordinal: 7983
        void stepEnabled(void) const;

    // RVA: 0x1FFD | Ordinal: 8190
        void textFromDateTime(class QDateTime const &) const;

    // RVA: 0x2016 | Ordinal: 8215
        void time(void) const;

    // RVA: 0x2017 | Ordinal: 8216
        void timeChanged(class QTime const &);

    // RVA: 0x2019 | Ordinal: 8218
        void timeSpec(void) const;

    // RVA: 0x208B | Ordinal: 8332
        void tr(char const *, char const *, int);

    // RVA: 0x211E | Ordinal: 8479
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2263 | Ordinal: 8804
        void validate(class QString &, int &) const;

    // RVA: 0x22E3 | Ordinal: 8932
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x1CE | Ordinal: 463
        void _QDateTimeEdit(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDATETIMEEDIT_HPP
