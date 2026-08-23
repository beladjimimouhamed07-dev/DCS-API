#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QProxyStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QProxyStyle
{
public:

    // RVA: 0xEE | Ordinal: 239
        void QProxyStyle(class QString const &);

    // RVA: 0xEF | Ordinal: 240
        void QProxyStyle(class QStyle *);

    // RVA: 0x623 | Ordinal: 1572
        void baseStyle(void) const;

    // RVA: 0x983 | Ordinal: 2436
        void d_func(void);

    // RVA: 0x984 | Ordinal: 2437
        void d_func(void) const;

    // RVA: 0xAA4 | Ordinal: 2725
        void drawComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAAB | Ordinal: 2732
        void drawControl(enum QStyle::ControlElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAB5 | Ordinal: 2742
        void drawItemPixmap(class QPainter *, class QRect const &, int, class QPixmap const &) const;

    // RVA: 0xAB8 | Ordinal: 2745
        void drawItemText(class QPainter *, class QRect const &, int, class QPalette const &, bool, class QString const &, enum QPalette::ColorRole) const;

    // RVA: 0xAC1 | Ordinal: 2754
        void drawPrimitive(enum QStyle::PrimitiveElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xB57 | Ordinal: 2904
        void event(class QEvent *);

    // RVA: 0xC7A | Ordinal: 3195
        void generatedIconPixmap(enum QIcon::Mode, class QPixmap const &, class QStyleOption const *) const;

    // RVA: 0xD52 | Ordinal: 3411
        void hitTestComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPoint const &, class QWidget const *) const;

    // RVA: 0xFC6 | Ordinal: 4039
        void itemPixmapRect(class QRect const &, int, class QPixmap const &) const;

    // RVA: 0xFD4 | Ordinal: 4053
        void itemTextRect(class QFontMetrics const &, class QRect const &, int, bool, class QString const &) const;

    // RVA: 0x104A | Ordinal: 4171
        void layoutSpacing(enum QSizePolicy::ControlType, enum QSizePolicy::ControlType, enum Qt::Orientation, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x116C | Ordinal: 4461
        void metaObject(void) const;

    // RVA: 0x1384 | Ordinal: 4997
        void pixelMetric(enum QStyle::PixelMetric, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x13A2 | Ordinal: 5027
        void polish(class QPalette &);

    // RVA: 0x13A3 | Ordinal: 5028
        void polish(class QApplication *);

    // RVA: 0x13A4 | Ordinal: 5029
        void polish(class QWidget *);

    // RVA: 0x1485 | Ordinal: 5254
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1518 | Ordinal: 5401
        void qt_metacast(char const *);

    // RVA: 0x15AE | Ordinal: 5551
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x183E | Ordinal: 6207
        void setBaseStyle(class QStyle *);

    // RVA: 0x1DE1 | Ordinal: 7650
        void sizeFromContents(enum QStyle::ContentsType, class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1E6F | Ordinal: 7792
        void standardIcon(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1E72 | Ordinal: 7795
        void standardPalette(void) const;

    // RVA: 0x1E76 | Ordinal: 7799
        void standardPixmap(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1F49 | Ordinal: 8010
        void styleHint(enum QStyle::StyleHint, class QStyleOption const *, class QWidget const *, class QStyleHintReturn *) const;

    // RVA: 0x1F52 | Ordinal: 8019
        void subControlRect(enum QStyle::ComplexControl, class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x1F56 | Ordinal: 8023
        void subElementRect(enum QStyle::SubElement, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x20D4 | Ordinal: 8405
        void tr(char const *, char const *, int);

    // RVA: 0x2167 | Ordinal: 8552
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21EE | Ordinal: 8687
        void unpolish(class QApplication *);

    // RVA: 0x21EF | Ordinal: 8688
        void unpolish(class QWidget *);

    // RVA: 0x23E | Ordinal: 575
        void _QProxyStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPROXYSTYLE_HPP
