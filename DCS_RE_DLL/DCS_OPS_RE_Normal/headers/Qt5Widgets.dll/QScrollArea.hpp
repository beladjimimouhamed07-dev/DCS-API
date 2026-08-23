#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QScrollArea
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QScrollArea
{
public:

    // RVA: 0xF7 | Ordinal: 248
        void QScrollArea(class QScrollAreaPrivate &, class QWidget *);

    // RVA: 0xF8 | Ordinal: 249
        void QScrollArea(class QWidget *);

    // RVA: 0x5C3 | Ordinal: 1476
        void alignment(void) const;

    // RVA: 0x98B | Ordinal: 2444
        void d_func(void);

    // RVA: 0x98C | Ordinal: 2445
        void d_func(void) const;

    // RVA: 0xB23 | Ordinal: 2852
        void ensureVisible(int, int, int, int);

    // RVA: 0xB26 | Ordinal: 2855
        void ensureWidgetVisible(class QWidget *, int, int);

    // RVA: 0xB5B | Ordinal: 2908
        void event(class QEvent *);

    // RVA: 0xB84 | Ordinal: 2949
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xC21 | Ordinal: 3106
        void focusNextPrevChild(bool);

    // RVA: 0x1170 | Ordinal: 4465
        void metaObject(void) const;

    // RVA: 0x1489 | Ordinal: 5258
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x151C | Ordinal: 5405
        void qt_metacast(char const *);

    // RVA: 0x15B2 | Ordinal: 5555
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16AC | Ordinal: 5805
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x175C | Ordinal: 5981
        void scrollContentsBy(int, int);

    // RVA: 0x180D | Ordinal: 6158
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1D36 | Ordinal: 7479
        void setWidget(class QWidget *);

    // RVA: 0x1D39 | Ordinal: 7482
        void setWidgetResizable(bool);

    // RVA: 0x1E08 | Ordinal: 7689
        void sizeHint(void) const;

    // RVA: 0x1FC2 | Ordinal: 8131
        void takeWidget(void);

    // RVA: 0x20D8 | Ordinal: 8409
        void tr(char const *, char const *, int);

    // RVA: 0x216B | Ordinal: 8556
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22AE | Ordinal: 8879
        void viewportSizeHint(void) const;

    // RVA: 0x22FB | Ordinal: 8956
        void widget(void) const;

    // RVA: 0x230D | Ordinal: 8974
        void widgetResizable(void) const;

    // RVA: 0x242 | Ordinal: 579
        void _QScrollArea(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSCROLLAREA_HPP
