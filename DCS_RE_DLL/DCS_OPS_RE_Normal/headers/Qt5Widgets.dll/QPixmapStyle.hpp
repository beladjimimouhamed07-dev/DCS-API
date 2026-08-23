#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QPixmapStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPixmapStyle
{
public:

    // RVA: 0xE4 | Ordinal: 229
        void QPixmapStyle(class QPixmapStylePrivate &);

    // RVA: 0xE5 | Ordinal: 230
        void QPixmapStyle(void);

    // RVA: 0x552 | Ordinal: 1363
        void addDescriptor(enum QPixmapStyle::ControlDescriptor, class QString const &, class QMargins, struct QTileRules);

    // RVA: 0x57A | Ordinal: 1403
        void addPixmap(enum QPixmapStyle::ControlPixmap, class QString const &, class QMargins);

    // RVA: 0x79B | Ordinal: 1948
        void comboBoxSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x79C | Ordinal: 1949
        void comboBoxSubControlRect(class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x7E7 | Ordinal: 2024
        void copyDescriptor(enum QPixmapStyle::ControlDescriptor, enum QPixmapStyle::ControlDescriptor);

    // RVA: 0x7E8 | Ordinal: 2025
        void copyPixmap(enum QPixmapStyle::ControlPixmap, enum QPixmapStyle::ControlPixmap);

    // RVA: 0x979 | Ordinal: 2426
        void d_func(void);

    // RVA: 0x97A | Ordinal: 2427
        void d_func(void) const;

    // RVA: 0xA9D | Ordinal: 2718
        void drawCachedPixmap(enum QPixmapStyle::ControlDescriptor, class QRect const &, class QPainter *) const;

    // RVA: 0xA9F | Ordinal: 2720
        void drawCheckBox(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAA0 | Ordinal: 2721
        void drawComboBox(class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAA3 | Ordinal: 2724
        void drawComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAAA | Ordinal: 2731
        void drawControl(enum QStyle::ControlElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xABC | Ordinal: 2749
        void drawLineEdit(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xABD | Ordinal: 2750
        void drawPanelItemViewItem(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC0 | Ordinal: 2753
        void drawPrimitive(enum QStyle::PrimitiveElement, class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC3 | Ordinal: 2756
        void drawProgressBarBackground(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC4 | Ordinal: 2757
        void drawProgressBarFill(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC5 | Ordinal: 2758
        void drawProgressBarLabel(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC6 | Ordinal: 2759
        void drawPushButton(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC7 | Ordinal: 2760
        void drawRadioButton(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xAC9 | Ordinal: 2762
        void drawScrollBar(class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xACA | Ordinal: 2763
        void drawSlider(class QStyleOptionComplex const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xACC | Ordinal: 2765
        void drawTextEdit(class QStyleOption const *, class QPainter *, class QWidget const *) const;

    // RVA: 0xB83 | Ordinal: 2948
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xD51 | Ordinal: 3410
        void hitTestComplexControl(enum QStyle::ComplexControl, class QStyleOptionComplex const *, class QPoint const &, class QWidget const *) const;

    // RVA: 0xFDA | Ordinal: 4059
        void itemViewSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x105D | Ordinal: 4190
        void lineEditSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1166 | Ordinal: 4455
        void metaObject(void) const;

    // RVA: 0x1383 | Ordinal: 4996
        void pixelMetric(enum QStyle::PixelMetric, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x139F | Ordinal: 5024
        void polish(class QPalette &);

    // RVA: 0x13A0 | Ordinal: 5025
        void polish(class QApplication *);

    // RVA: 0x13A1 | Ordinal: 5026
        void polish(class QWidget *);

    // RVA: 0x13DD | Ordinal: 5086
        void progressBarSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x13E5 | Ordinal: 5094
        void pushButtonSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x147F | Ordinal: 5248
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1512 | Ordinal: 5395
        void qt_metacast(char const *);

    // RVA: 0x15A8 | Ordinal: 5545
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1752 | Ordinal: 5971
        void scrollBarSubControlRect(class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x1DE0 | Ordinal: 7649
        void sizeFromContents(enum QStyle::ContentsType, class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1E30 | Ordinal: 7729
        void sliderSizeFromContents(class QStyleOption const *, class QSize const &, class QWidget const *) const;

    // RVA: 0x1F48 | Ordinal: 8009
        void styleHint(enum QStyle::StyleHint, class QStyleOption const *, class QWidget const *, class QStyleHintReturn *) const;

    // RVA: 0x1F51 | Ordinal: 8018
        void subControlRect(enum QStyle::ComplexControl, class QStyleOptionComplex const *, enum QStyle::SubControl, class QWidget const *) const;

    // RVA: 0x1F55 | Ordinal: 8022
        void subElementRect(enum QStyle::SubElement, class QStyleOption const *, class QWidget const *) const;

    // RVA: 0x20CE | Ordinal: 8399
        void tr(char const *, char const *, int);

    // RVA: 0x2161 | Ordinal: 8546
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21EC | Ordinal: 8685
        void unpolish(class QApplication *);

    // RVA: 0x21ED | Ordinal: 8686
        void unpolish(class QWidget *);

    // RVA: 0x238 | Ordinal: 569
        void _QPixmapStyle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPIXMAPSTYLE_HPP
