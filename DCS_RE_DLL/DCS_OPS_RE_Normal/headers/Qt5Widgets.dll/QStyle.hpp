#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStyle
{
public:

    // RVA: 0x116 | Ordinal: 279
        void QStyle(class QStylePrivate &);

    // RVA: 0x117 | Ordinal: 280
        void QStyle(void);

    // RVA: 0x5B9 | Ordinal: 1466
        void alignedRect(enum Qt::LayoutDirection, class QFlags<enum Qt::AlignmentFlag>, class QSize const &, class QRect const &);

    // RVA: 0x799 | Ordinal: 1946
        void combinedLayoutSpacing(class QFlags<enum QSizePolicy::ControlType>, class QFlags<enum QSizePolicy::ControlType>, enum Qt::Orientation, class QStyleOption *, class QWidget *) const;

    // RVA: 0x9A5 | Ordinal: 2470
        void d_func(void);

    // RVA: 0x9A6 | Ordinal: 2471
        void d_func(void) const;

    // RVA: 0xAB6 | Ordinal: 2743
        void drawItemPixmap(class QPainter *, class QRect const &, int, class QPixmap const &) const;

    // RVA: 0xAB9 | Ordinal: 2746
        void drawItemText(class QPainter *, class QRect const &, int, class QPalette const &, bool, class QString const &, enum QPalette::ColorRole) const;

    // RVA: 0xFC7 | Ordinal: 4040
        void itemPixmapRect(class QRect const &, int, class QPixmap const &) const;

    // RVA: 0xFD5 | Ordinal: 4054
        void itemTextRect(class QFontMetrics const &, class QRect const &, int, bool, class QString const &) const;

    // RVA: 0x117E | Ordinal: 4479
        void metaObject(void) const;

    // RVA: 0x13A5 | Ordinal: 5030
        void polish(class QPalette &);

    // RVA: 0x13A6 | Ordinal: 5031
        void polish(class QApplication *);

    // RVA: 0x13A7 | Ordinal: 5032
        void polish(class QWidget *);

    // RVA: 0x13E2 | Ordinal: 5091
        void proxy(void) const;

    // RVA: 0x1497 | Ordinal: 5272
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x152A | Ordinal: 5419
        void qt_metacast(char const *);

    // RVA: 0x15C0 | Ordinal: 5569
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1B73 | Ordinal: 7028
        void setProxy(class QStyle *);

    // RVA: 0x1E2D | Ordinal: 7726
        void sliderPositionFromValue(int, int, int, int, bool);

    // RVA: 0x1E31 | Ordinal: 7730
        void sliderValueFromPosition(int, int, int, int, bool);

    // RVA: 0x1E73 | Ordinal: 7796
        void standardPalette(void) const;

    // RVA: 0x20E6 | Ordinal: 8423
        void tr(char const *, char const *, int);

    // RVA: 0x2179 | Ordinal: 8570
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21F0 | Ordinal: 8689
        void unpolish(class QApplication *);

    // RVA: 0x21F1 | Ordinal: 8690
        void unpolish(class QWidget *);

    // RVA: 0x22BB | Ordinal: 8892
        void visualAlignment(enum Qt::LayoutDirection, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x22C5 | Ordinal: 8902
        void visualPos(enum Qt::LayoutDirection, class QRect const &, class QPoint const &);

    // RVA: 0x22C9 | Ordinal: 8906
        void visualRect(enum Qt::LayoutDirection, class QRect const &, class QRect const &);

    // RVA: 0x252 | Ordinal: 595
        void _QStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTYLE_HPP
