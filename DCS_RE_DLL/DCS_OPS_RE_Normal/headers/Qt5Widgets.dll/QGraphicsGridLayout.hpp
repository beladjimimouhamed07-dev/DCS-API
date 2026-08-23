#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsGridLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsGridLayout
{
public:

    // RVA: 0x6F | Ordinal: 112
        void QGraphicsGridLayout(class QGraphicsLayoutItem *);

    // RVA: 0x55C | Ordinal: 1373
        void addItem(class QGraphicsLayoutItem *, int, int, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x55D | Ordinal: 1374
        void addItem(class QGraphicsLayoutItem *, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5BB | Ordinal: 1468
        void alignment(class QGraphicsLayoutItem *) const;

    // RVA: 0x774 | Ordinal: 1909
        void columnAlignment(int) const;

    // RVA: 0x77A | Ordinal: 1915
        void columnCount(void) const;

    // RVA: 0x783 | Ordinal: 1924
        void columnMaximumWidth(int) const;

    // RVA: 0x784 | Ordinal: 1925
        void columnMinimumWidth(int) const;

    // RVA: 0x788 | Ordinal: 1929
        void columnPreferredWidth(int) const;

    // RVA: 0x78C | Ordinal: 1933
        void columnSpacing(int) const;

    // RVA: 0x78F | Ordinal: 1936
        void columnStretchFactor(int) const;

    // RVA: 0x7F3 | Ordinal: 2036
        void count(void) const;

    // RVA: 0x907 | Ordinal: 2312
        void d_func(void);

    // RVA: 0x908 | Ordinal: 2313
        void d_func(void) const;

    // RVA: 0xD6D | Ordinal: 3438
        void horizontalSpacing(void) const;

    // RVA: 0xE87 | Ordinal: 3720
        void invalidate(void);

    // RVA: 0xF87 | Ordinal: 3976
        void itemAt(int, int) const;

    // RVA: 0xF88 | Ordinal: 3977
        void itemAt(int) const;

    // RVA: 0x1629 | Ordinal: 5674
        void removeAt(int);

    // RVA: 0x1638 | Ordinal: 5689
        void removeItem(class QGraphicsLayoutItem *);

    // RVA: 0x16F3 | Ordinal: 5876
        void rowAlignment(int) const;

    // RVA: 0x16F8 | Ordinal: 5881
        void rowCount(void) const;

    // RVA: 0x16FF | Ordinal: 5888
        void rowMaximumHeight(int) const;

    // RVA: 0x1700 | Ordinal: 5889
        void rowMinimumHeight(int) const;

    // RVA: 0x1703 | Ordinal: 5892
        void rowPreferredHeight(int) const;

    // RVA: 0x1705 | Ordinal: 5894
        void rowSpacing(int) const;

    // RVA: 0x1708 | Ordinal: 5897
        void rowStretchFactor(int) const;

    // RVA: 0x1803 | Ordinal: 6148
        void setAlignment(class QGraphicsLayoutItem *, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1884 | Ordinal: 6277
        void setColumnAlignment(int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1887 | Ordinal: 6280
        void setColumnFixedWidth(int, double);

    // RVA: 0x188A | Ordinal: 6283
        void setColumnMaximumWidth(int, double);

    // RVA: 0x188B | Ordinal: 6284
        void setColumnMinimumWidth(int, double);

    // RVA: 0x188D | Ordinal: 6286
        void setColumnPreferredWidth(int, double);

    // RVA: 0x188E | Ordinal: 6287
        void setColumnSpacing(int, double);

    // RVA: 0x1890 | Ordinal: 6289
        void setColumnStretchFactor(int, int);

    // RVA: 0x19C2 | Ordinal: 6595
        void setGeometry(class QRectF const &);

    // RVA: 0x19FA | Ordinal: 6651
        void setHorizontalSpacing(double);

    // RVA: 0x1BA6 | Ordinal: 7079
        void setRowAlignment(int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1BA8 | Ordinal: 7081
        void setRowFixedHeight(int, double);

    // RVA: 0x1BAD | Ordinal: 7086
        void setRowMaximumHeight(int, double);

    // RVA: 0x1BAE | Ordinal: 7087
        void setRowMinimumHeight(int, double);

    // RVA: 0x1BB0 | Ordinal: 7089
        void setRowPreferredHeight(int, double);

    // RVA: 0x1BB1 | Ordinal: 7090
        void setRowSpacing(int, double);

    // RVA: 0x1BB3 | Ordinal: 7092
        void setRowStretchFactor(int, int);

    // RVA: 0x1C33 | Ordinal: 7220
        void setSpacing(double);

    // RVA: 0x1D08 | Ordinal: 7433
        void setVerticalSpacing(double);

    // RVA: 0x1DF3 | Ordinal: 7668
        void sizeHint(enum Qt::SizeHint, class QSizeF const &) const;

    // RVA: 0x2291 | Ordinal: 8850
        void verticalSpacing(void) const;

    // RVA: 0x1F2 | Ordinal: 499
        void _QGraphicsGridLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSGRIDLAYOUT_HPP
