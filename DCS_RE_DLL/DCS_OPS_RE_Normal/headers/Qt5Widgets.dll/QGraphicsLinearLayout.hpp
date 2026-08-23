#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsLinearLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsLinearLayout
{
public:

    // RVA: 0x7D | Ordinal: 126
        void QGraphicsLinearLayout(class QGraphicsLayoutItem *);

    // RVA: 0x7E | Ordinal: 127
        void QGraphicsLinearLayout(enum Qt::Orientation, class QGraphicsLayoutItem *);

    // RVA: 0x55E | Ordinal: 1375
        void addItem(class QGraphicsLayoutItem *);

    // RVA: 0x58F | Ordinal: 1424
        void addStretch(int);

    // RVA: 0x5BC | Ordinal: 1469
        void alignment(class QGraphicsLayoutItem *) const;

    // RVA: 0x7F4 | Ordinal: 2037
        void count(void) const;

    // RVA: 0x913 | Ordinal: 2324
        void d_func(void);

    // RVA: 0x914 | Ordinal: 2325
        void d_func(void) const;

    // RVA: 0xAE5 | Ordinal: 2790
        void dump(int) const;

    // RVA: 0xE3E | Ordinal: 3647
        void insertItem(int, class QGraphicsLayoutItem *);

    // RVA: 0xE5D | Ordinal: 3678
        void insertStretch(int, int);

    // RVA: 0xE89 | Ordinal: 3722
        void invalidate(void);

    // RVA: 0xF89 | Ordinal: 3978
        void itemAt(int) const;

    // RVA: 0xFD1 | Ordinal: 4050
        void itemSpacing(int) const;

    // RVA: 0x12F2 | Ordinal: 4851
        void orientation(void) const;

    // RVA: 0x162A | Ordinal: 5675
        void removeAt(int);

    // RVA: 0x1639 | Ordinal: 5690
        void removeItem(class QGraphicsLayoutItem *);

    // RVA: 0x1804 | Ordinal: 6149
        void setAlignment(class QGraphicsLayoutItem *, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x19C4 | Ordinal: 6597
        void setGeometry(class QRectF const &);

    // RVA: 0x1A48 | Ordinal: 6729
        void setItemSpacing(int, double);

    // RVA: 0x1B27 | Ordinal: 6952
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1C34 | Ordinal: 7221
        void setSpacing(double);

    // RVA: 0x1C59 | Ordinal: 7258
        void setStretchFactor(class QGraphicsLayoutItem *, int);

    // RVA: 0x1DF4 | Ordinal: 7669
        void sizeHint(enum Qt::SizeHint, class QSizeF const &) const;

    // RVA: 0x1E55 | Ordinal: 7766
        void spacing(void) const;

    // RVA: 0x1F3D | Ordinal: 7998
        void stretchFactor(class QGraphicsLayoutItem *) const;

    // RVA: 0x1FA | Ordinal: 507
        void _QGraphicsLinearLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSLINEARLAYOUT_HPP
