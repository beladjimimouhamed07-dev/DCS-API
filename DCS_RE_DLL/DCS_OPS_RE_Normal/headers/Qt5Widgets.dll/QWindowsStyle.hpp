#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWindowsStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowsStyle
{
public:

    // RVA: 0x1AB | Ordinal: 428
        void QWindowsStyle(class QWindowsStylePrivate &);

    // RVA: 0x1AC | Ordinal: 429
        void QWindowsStyle(void);

    // RVA: 0x9D7 | Ordinal: 2520
        void d_func(void);

    // RVA: 0x9D8 | Ordinal: 2521
        void d_func(void) const;

    // RVA: 0xAA5 | Ordinal: 2726
        void drawComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAAC | Ordinal: 2733
        void drawControl(enum QStyle::ControlElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC2 | Ordinal: 2755
        void drawPrimitive(enum QStyle::PrimitiveElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xB89 | Ordinal: 2954
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0x119C | Ordinal: 4509
        void metaObject(void) const;

    // RVA: 0x1385 | Ordinal: 4998
        void pixelMetric(enum QStyle::PixelMetric, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x13A8 | Ordinal: 5033
        void polish(class QPalette &);

    // RVA: 0x13A9 | Ordinal: 5034
        void polish(class QApplication *);

    // RVA: 0x13AA | Ordinal: 5035
        void polish(class QWidget *);

    // RVA: 0x14B5 | Ordinal: 5302
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1548 | Ordinal: 5449
        void qt_metacast(char const *);

    // RVA: 0x15DE | Ordinal: 5599
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1DE2 | Ordinal: 7651
        void sizeFromContents(enum QStyle::ContentsType, class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1E70 | Ordinal: 7793
        void standardIcon(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1E77 | Ordinal: 7800
        void standardPixmap(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1F4A | Ordinal: 8011
        void styleHint(enum QStyle::StyleHint, class QStyleOption const *, class QWidget const *, class QStyleHintReturn *) const;

    // RVA: 0x1F57 | Ordinal: 8024
        void subElementRect(enum QStyle::SubElement, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x2104 | Ordinal: 8453
        void tr(char const *, char const *, int);

    // RVA: 0x2197 | Ordinal: 8600
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21F2 | Ordinal: 8691
        void unpolish(class QApplication *);

    // RVA: 0x21F3 | Ordinal: 8692
        void unpolish(class QWidget *);

    // RVA: 0x296 | Ordinal: 663
        void _QWindowsStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWINDOWSSTYLE_HPP
