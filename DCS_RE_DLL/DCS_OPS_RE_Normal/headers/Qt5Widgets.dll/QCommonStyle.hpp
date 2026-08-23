#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QCommonStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCommonStyle
{
public:

    // RVA: 0x2A | Ordinal: 43
        void QCommonStyle(class QCommonStylePrivate &);

    // RVA: 0x2B | Ordinal: 44
        void QCommonStyle(void);

    // RVA: 0x8C9 | Ordinal: 2250
        void d_func(void);

    // RVA: 0x8CA | Ordinal: 2251
        void d_func(void) const;

    // RVA: 0xAA1 | Ordinal: 2722
        void drawComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAA8 | Ordinal: 2729
        void drawControl(enum QStyle::ControlElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xABE | Ordinal: 2751
        void drawPrimitive(enum QStyle::PrimitiveElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xC78 | Ordinal: 3193
        void generatedIconPixmap(enum QIcon::Mode, class QPixmap const &, class QStyleOption const *) const;

    // RVA: 0xD4F | Ordinal: 3408
        void hitTestComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPoint const &, class QWidget const *) const;

    // RVA: 0x1049 | Ordinal: 4170
        void layoutSpacing(enum QSizePolicy::ControlType, enum QSizePolicy::ControlType, enum Qt::Orientation, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x111F | Ordinal: 4384
        void metaObject(void) const;

    // RVA: 0x1381 | Ordinal: 4994
        void pixelMetric(enum QStyle::PixelMetric, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1399 | Ordinal: 5018
        void polish(class QPalette &);

    // RVA: 0x139A | Ordinal: 5019
        void polish(class QApplication *);

    // RVA: 0x139B | Ordinal: 5020
        void polish(class QWidget *);

    // RVA: 0x1438 | Ordinal: 5177
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14CB | Ordinal: 5324
        void qt_metacast(char const *);

    // RVA: 0x1561 | Ordinal: 5474
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1DDE | Ordinal: 7647
        void sizeFromContents(enum QStyle::ContentsType, class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1E6C | Ordinal: 7789
        void standardIcon(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1E74 | Ordinal: 7797
        void standardPixmap(enum QStyle::StandardPixmap, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x1F45 | Ordinal: 8006
        void styleHint(enum QStyle::StyleHint, class QStyleOption const *, class QWidget const *, class QStyleHintReturn *) const;

    // RVA: 0x1F4F | Ordinal: 8016
        void subControlRect(enum QStyle::ComplexControl, class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x1F53 | Ordinal: 8020
        void subElementRect(enum QStyle::SubElement, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x2087 | Ordinal: 8328
        void tr(char const *, char const *, int);

    // RVA: 0x211A | Ordinal: 8475
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21E8 | Ordinal: 8681
        void unpolish(class QApplication *);

    // RVA: 0x21E9 | Ordinal: 8682
        void unpolish(class QWidget *);

    // RVA: 0x1C9 | Ordinal: 458
        void _QCommonStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOMMONSTYLE_HPP
