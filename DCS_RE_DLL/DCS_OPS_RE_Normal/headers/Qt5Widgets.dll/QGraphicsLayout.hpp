#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsLayout
{
public:

    // RVA: 0x76 | Ordinal: 119
        void QGraphicsLayout(class QGraphicsLayoutPrivate &, class QGraphicsLayoutItem *);

    // RVA: 0x77 | Ordinal: 120
        void QGraphicsLayout(class QGraphicsLayoutItem *);

    // RVA: 0x50B | Ordinal: 1292
        void activate(void);

    // RVA: 0x54A | Ordinal: 1355
        void addChildLayoutItem(class QGraphicsLayoutItem *);

    // RVA: 0x90D | Ordinal: 2318
        void d_func(void);

    // RVA: 0x90E | Ordinal: 2319
        void d_func(void) const;

    // RVA: 0xC8F | Ordinal: 3216
        void getContentsMargins(double *, double *, double *, double *) const;

    // RVA: 0xE72 | Ordinal: 3699
        void instantInvalidatePropagation(void);

    // RVA: 0xE88 | Ordinal: 3721
        void invalidate(void);

    // RVA: 0xEA0 | Ordinal: 3745
        void isActivated(void) const;

    // RVA: 0x18A0 | Ordinal: 6305
        void setContentsMargins(double, double, double, double);

    // RVA: 0x1A24 | Ordinal: 6693
        void setInstantInvalidatePropagation(bool);

    // RVA: 0x222E | Ordinal: 8751
        void updateGeometry(void);

    // RVA: 0x2305 | Ordinal: 8966
        void widgetEvent(class QEvent *);

    // RVA: 0x1F7 | Ordinal: 504
        void _QGraphicsLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSLAYOUT_HPP
