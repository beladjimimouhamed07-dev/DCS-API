#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QCalendarWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCalendarWidget
{
public:

    // RVA: 0x1B | Ordinal: 28
        void QCalendarWidget(class QWidget *);

    // RVA: 0x515 | Ordinal: 1302
        void activated(class QDate const &);

    // RVA: 0x67E | Ordinal: 1663
        void calendar(void) const;

    // RVA: 0x73C | Ordinal: 1853
        void clicked(class QDate const &);

    // RVA: 0x862 | Ordinal: 2147
        void currentPageChanged(int, int);

    // RVA: 0x8BD | Ordinal: 2238
        void d_func(void);

    // RVA: 0x8BE | Ordinal: 2239
        void d_func(void) const;

    // RVA: 0x9EA | Ordinal: 2539
        void dateEditAcceptDelay(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void dateTextFormat(void) const;

    // RVA: 0x9EC | Ordinal: 2541
        void dateTextFormat(class QDate const &) const;

    // RVA: 0xB34 | Ordinal: 2869
        void event(class QEvent *);

    // RVA: 0xB77 | Ordinal: 2936
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xBE8 | Ordinal: 3049
        void firstDayOfWeek(void) const;

    // RVA: 0xD04 | Ordinal: 3333
        void headerTextFormat(void) const;

    // RVA: 0xD59 | Ordinal: 3418
        void horizontalHeaderFormat(void) const;

    // RVA: 0xEC7 | Ordinal: 3784
        void isDateEditEnabled(void) const;

    // RVA: 0xEEF | Ordinal: 3824
        void isGridVisible(void) const;

    // RVA: 0xF16 | Ordinal: 3863
        void isNavigationBarVisible(void) const;

    // RVA: 0xFF8 | Ordinal: 4089
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x10E5 | Ordinal: 4326
        void maximumDate(void) const;

    // RVA: 0x1118 | Ordinal: 4377
        void metaObject(void) const;

    // RVA: 0x11B5 | Ordinal: 4534
        void minimumDate(void) const;

    // RVA: 0x11CD | Ordinal: 4558
        void minimumSizeHint(void) const;

    // RVA: 0x11FF | Ordinal: 4608
        void monthShown(void) const;

    // RVA: 0x1234 | Ordinal: 4661
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x131E | Ordinal: 4895
        void paintCell(class QPainter *, class QRect const &, class QDate const &) const;

    // RVA: 0x1431 | Ordinal: 5170
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C4 | Ordinal: 5317
        void qt_metacast(char const *);

    // RVA: 0x155A | Ordinal: 5467
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1698 | Ordinal: 5785
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x17A8 | Ordinal: 6057
        void selectedDate(void) const;

    // RVA: 0x17C2 | Ordinal: 6083
        void selectionChanged(void);

    // RVA: 0x17D1 | Ordinal: 6098
        void selectionMode(void) const;

    // RVA: 0x185B | Ordinal: 6236
        void setCalendar(class QCalendar);

    // RVA: 0x18CC | Ordinal: 6349
        void setCurrentPage(int, int);

    // RVA: 0x18EE | Ordinal: 6383
        void setDateEditAcceptDelay(int);

    // RVA: 0x18EF | Ordinal: 6384
        void setDateEditEnabled(bool);

    // RVA: 0x18F0 | Ordinal: 6385
        void setDateRange(class QDate const &, class QDate const &);

    // RVA: 0x18F2 | Ordinal: 6387
        void setDateTextFormat(class QDate const &, class QTextCharFormat const &);

    // RVA: 0x1977 | Ordinal: 6520
        void setFirstDayOfWeek(enum Qt::DayOfWeek);

    // RVA: 0x19DB | Ordinal: 6620
        void setGridVisible(bool);

    // RVA: 0x19E6 | Ordinal: 6631
        void setHeaderTextFormat(class QTextCharFormat const &);

    // RVA: 0x19F1 | Ordinal: 6642
        void setHorizontalHeaderFormat(enum QCalendarWidget::HorizontalHeaderFormat);

    // RVA: 0x1A92 | Ordinal: 6803
        void setMaximumDate(class QDate const &);

    // RVA: 0x1AB0 | Ordinal: 6833
        void setMinimumDate(class QDate const &);

    // RVA: 0x1AEE | Ordinal: 6895
        void setNavigationBarVisible(bool);

    // RVA: 0x1BDC | Ordinal: 7133
        void setSelectedDate(class QDate const &);

    // RVA: 0x1BEC | Ordinal: 7149
        void setSelectionMode(enum QCalendarWidget::SelectionMode);

    // RVA: 0x1CFF | Ordinal: 7424
        void setVerticalHeaderFormat(enum QCalendarWidget::VerticalHeaderFormat);

    // RVA: 0x1D26 | Ordinal: 7463
        void setWeekdayTextFormat(enum Qt::DayOfWeek, class QTextCharFormat const &);

    // RVA: 0x1DB7 | Ordinal: 7608
        void showNextMonth(void);

    // RVA: 0x1DB8 | Ordinal: 7609
        void showNextYear(void);

    // RVA: 0x1DBB | Ordinal: 7612
        void showPreviousMonth(void);

    // RVA: 0x1DBC | Ordinal: 7613
        void showPreviousYear(void);

    // RVA: 0x1DBF | Ordinal: 7616
        void showSelectedDate(void);

    // RVA: 0x1DCA | Ordinal: 7627
        void showToday(void);

    // RVA: 0x1DE6 | Ordinal: 7655
        void sizeHint(void) const;

    // RVA: 0x2080 | Ordinal: 8321
        void tr(char const *, char const *, int);

    // RVA: 0x2113 | Ordinal: 8468
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2215 | Ordinal: 8726
        void updateCell(class QDate const &);

    // RVA: 0x2216 | Ordinal: 8727
        void updateCells(void);

    // RVA: 0x227D | Ordinal: 8830
        void verticalHeaderFormat(void) const;

    // RVA: 0x22D8 | Ordinal: 8921
        void weekdayTextFormat(enum Qt::DayOfWeek) const;

    // RVA: 0x2352 | Ordinal: 9043
        void yearShown(void) const;

    // RVA: 0x1C1 | Ordinal: 450
        void _QCalendarWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCALENDARWIDGET_HPP
