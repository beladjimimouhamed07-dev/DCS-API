#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStyleHelper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStyleHelper
{
public:

    // RVA: 0x616 | Ordinal: 1559
        void backgroundColor(class QPalette const &, class QWidget const *);

    // RVA: 0xA5D | Ordinal: 2654
        void dpi(class QStyleOption const *);

    // RVA: 0xA5E | Ordinal: 2655
        void dpiScaled(double, double);

    // RVA: 0xA5F | Ordinal: 2656
        void dpiScaled(double, class QPaintDevice const *);

    // RVA: 0xA60 | Ordinal: 2657
        void dpiScaled(double, class QStyleOption const *);

    // RVA: 0xA9B | Ordinal: 2716
        void drawBorderPixmap(class QPixmap const &, class QPainter *, class QRect const &, int, int, int, int);

    // RVA: 0xAAE | Ordinal: 2735
        void drawDial(class QStyleOptionSlider const *, class QPainter *);

    // RVA: 0xCDC | Ordinal: 3293
        void hasAncestor(class QObject *, enum QAccessible::Role);

    // RVA: 0xEFC | Ordinal: 3837
        void isInstanceOf(class QObject *, enum QAccessible::Role);

    // RVA: 0x230E | Ordinal: 8975
        void widgetSizePolicy(class QWidget const *, class QStyleOption const *);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTYLEHELPER_HPP
