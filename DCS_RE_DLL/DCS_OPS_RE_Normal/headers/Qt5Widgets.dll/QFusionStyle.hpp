#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFusionStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFusionStyle
{
public:

    // RVA: 0x5B | Ordinal: 92
        void QFusionStyle(class QFusionStylePrivate &);

    // RVA: 0x5C | Ordinal: 93
        void QFusionStyle(void);

    // RVA: 0x8F3 | Ordinal: 2292
        void d_func(void);

    // RVA: 0x8F4 | Ordinal: 2293
        void d_func(void) const;

    // RVA: 0xAA2 | Ordinal: 2723
        void drawComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAA9 | Ordinal: 2730
        void drawControl(enum QStyle::ControlElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAB4 | Ordinal: 2741
        void drawItemPixmap(class QPainter *, class QRect const &, int, class QPixmap const &) const;

    // RVA: 0xAB7 | Ordinal: 2744
        void drawItemText(class QPainter *, class QRect const &, int, class QPalette const &, bool, class QString const &, enum QPalette::ColorRole) const;

    // RVA: 0xABF | Ordinal: 2752
        void drawPrimitive(enum QStyle::PrimitiveElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xC79 | Ordinal: 3194
        void generatedIconPixmap(enum QIcon::Mode, class QPixmap const &, class QStyleOption const *) const;

    // RVA: 0xD50 | Ordinal: 3409
        void hitTestComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPoint const &, class QWidget const *) const;

    // RVA: 0xFC5 | Ordinal: 4038
        void itemPixmapRect(class QRect const &, int, class QPixmap const &) const;

    // RVA: 0x1135 | Ordinal: 4406
        void metaObject(void) const;

    // RVA: 0x1382 | Ordinal: 4995
        void pixelMetric(enum QStyle::PixelMetric, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x139C | Ordinal: 5021
        void polish(class QPalette &);

    // RVA: 0x139D | Ordinal: 5022
        void polish(class QApplication *);

    // RVA: 0x139E | Ordinal: 5023
        void polish(class QWidget *);

    // RVA: 0x144E | Ordinal: 5199
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14E1 | Ordinal: 5346
        void qt_metacast(char const *);

    // RVA: 0x1577 | Ordinal: 5496
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1DDF | Ordinal: 7648
        void sizeFromContents(enum QStyle::ContentsType, class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1E6D | Ordinal: 7790
        void standardIcon(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1E71 | Ordinal: 7794
        void standardPalette(void) const;

    // RVA: 0x1E75 | Ordinal: 7798
        void standardPixmap(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1F47 | Ordinal: 8008
        void styleHint(enum QStyle::StyleHint, class QStyleOption const *, class QWidget const *, class QStyleHintReturn *) const;

    // RVA: 0x1F50 | Ordinal: 8017
        void subControlRect(enum QStyle::ComplexControl, class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x1F54 | Ordinal: 8021
        void subElementRect(enum QStyle::SubElement, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x209D | Ordinal: 8350
        void tr(char const *, char const *, int);

    // RVA: 0x2130 | Ordinal: 8497
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21EA | Ordinal: 8683
        void unpolish(class QApplication *);

    // RVA: 0x21EB | Ordinal: 8684
        void unpolish(class QWidget *);

    // RVA: 0x1E5 | Ordinal: 486
        void _QFusionStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFUSIONSTYLE_HPP
