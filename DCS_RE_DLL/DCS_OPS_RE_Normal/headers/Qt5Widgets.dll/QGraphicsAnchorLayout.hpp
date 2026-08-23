#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsAnchorLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsAnchorLayout
{
public:

    // RVA: 0x64 | Ordinal: 101
        void QGraphicsAnchorLayout(class QGraphicsLayoutItem *);

    // RVA: 0x53E | Ordinal: 1343
        void addAnchor(class QGraphicsLayoutItem *, enum Qt::AnchorPoint, class QGraphicsLayoutItem *, enum Qt::AnchorPoint);

    // RVA: 0x53F | Ordinal: 1344
        void addAnchors(class QGraphicsLayoutItem *, class QGraphicsLayoutItem *, class QFlags<enum Qt::Orientation>);

    // RVA: 0x54F | Ordinal: 1360
        void addCornerAnchors(class QGraphicsLayoutItem *, enum Qt::Corner, class QGraphicsLayoutItem *, enum Qt::Corner);

    // RVA: 0x5D1 | Ordinal: 1490
        void anchor(class QGraphicsLayoutItem *, enum Qt::AnchorPoint, class QGraphicsLayoutItem *, enum Qt::AnchorPoint);

    // RVA: 0x7F2 | Ordinal: 2035
        void count(void) const;

    // RVA: 0x8F9 | Ordinal: 2298
        void d_func(void);

    // RVA: 0x8FA | Ordinal: 2299
        void d_func(void) const;

    // RVA: 0xD6C | Ordinal: 3437
        void horizontalSpacing(void) const;

    // RVA: 0xE86 | Ordinal: 3719
        void invalidate(void);

    // RVA: 0xF86 | Ordinal: 3975
        void itemAt(int) const;

    // RVA: 0x1628 | Ordinal: 5673
        void removeAt(int);

    // RVA: 0x19C1 | Ordinal: 6594
        void setGeometry(class QRectF const &);

    // RVA: 0x19F9 | Ordinal: 6650
        void setHorizontalSpacing(double);

    // RVA: 0x1C32 | Ordinal: 7219
        void setSpacing(double);

    // RVA: 0x1D07 | Ordinal: 7432
        void setVerticalSpacing(double);

    // RVA: 0x1DF2 | Ordinal: 7667
        void sizeHint(enum Qt::SizeHint, class QSizeF const &) const;

    // RVA: 0x2290 | Ordinal: 8849
        void verticalSpacing(void) const;

    // RVA: 0x1EA | Ordinal: 491
        void _QGraphicsAnchorLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSANCHORLAYOUT_HPP
