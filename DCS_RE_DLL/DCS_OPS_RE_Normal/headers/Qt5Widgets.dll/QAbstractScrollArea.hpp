#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractScrollArea
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractScrollArea
{
public:

    // RVA: 0x8 | Ordinal: 9
        void QAbstractScrollArea(class QAbstractScrollAreaPrivate &, class QWidget *);

    // RVA: 0x9 | Ordinal: 10
        void QAbstractScrollArea(class QWidget *);

    // RVA: 0x584 | Ordinal: 1413
        void addScrollBarWidget(class QWidget *, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x7C7 | Ordinal: 1992
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7EA | Ordinal: 2027
        void cornerWidget(void) const;

    // RVA: 0x8AD | Ordinal: 2222
        void d_func(void);

    // RVA: 0x8AE | Ordinal: 2223
        void d_func(void) const;

    // RVA: 0xA66 | Ordinal: 2663
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA71 | Ordinal: 2674
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA7E | Ordinal: 2687
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xAD1 | Ordinal: 2770
        void dropEvent(class QDropEvent *);

    // RVA: 0xB2F | Ordinal: 2864
        void event(class QEvent *);

    // RVA: 0xB76 | Ordinal: 2935
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xD63 | Ordinal: 3428
        void horizontalScrollBar(void) const;

    // RVA: 0xD64 | Ordinal: 3429
        void horizontalScrollBarPolicy(void) const;

    // RVA: 0xFF5 | Ordinal: 4086
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x10F5 | Ordinal: 4342
        void maximumViewportSize(void) const;

    // RVA: 0x110F | Ordinal: 4368
        void metaObject(void) const;

    // RVA: 0x11CB | Ordinal: 4556
        void minimumSizeHint(void) const;

    // RVA: 0x1201 | Ordinal: 4610
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x1212 | Ordinal: 4627
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1232 | Ordinal: 4659
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1253 | Ordinal: 4692
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1321 | Ordinal: 4898
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1428 | Ordinal: 5161
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BB | Ordinal: 5308
        void qt_metacast(char const *);

    // RVA: 0x1551 | Ordinal: 5458
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1696 | Ordinal: 5783
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1753 | Ordinal: 5972
        void scrollBarWidgets(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1755 | Ordinal: 5974
        void scrollContentsBy(int, int);

    // RVA: 0x18AE | Ordinal: 6319
        void setCornerWidget(class QWidget *);

    // RVA: 0x19F5 | Ordinal: 6646
        void setHorizontalScrollBar(class QScrollBar *);

    // RVA: 0x19F6 | Ordinal: 6647
        void setHorizontalScrollBarPolicy(enum Qt::ScrollBarPolicy);

    // RVA: 0x1C0B | Ordinal: 7180
        void setSizeAdjustPolicy(enum QAbstractScrollArea::SizeAdjustPolicy);

    // RVA: 0x1D03 | Ordinal: 7428
        void setVerticalScrollBar(class QScrollBar *);

    // RVA: 0x1D04 | Ordinal: 7429
        void setVerticalScrollBarPolicy(enum Qt::ScrollBarPolicy);

    // RVA: 0x1D11 | Ordinal: 7442
        void setViewport(class QWidget *);

    // RVA: 0x1D12 | Ordinal: 7443
        void setViewportMargins(class QMargins const &);

    // RVA: 0x1D13 | Ordinal: 7444
        void setViewportMargins(int, int, int, int);

    // RVA: 0x1D71 | Ordinal: 7538
        void setupViewport(class QWidget *);

    // RVA: 0x1DDA | Ordinal: 7643
        void sizeAdjustPolicy(void) const;

    // RVA: 0x1DE3 | Ordinal: 7652
        void sizeHint(void) const;

    // RVA: 0x2077 | Ordinal: 8312
        void tr(char const *, char const *, int);

    // RVA: 0x210A | Ordinal: 8459
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2287 | Ordinal: 8840
        void verticalScrollBar(void) const;

    // RVA: 0x2288 | Ordinal: 8841
        void verticalScrollBarPolicy(void) const;

    // RVA: 0x22A1 | Ordinal: 8866
        void viewport(void) const;

    // RVA: 0x22A4 | Ordinal: 8869
        void viewportEvent(class QEvent *);

    // RVA: 0x22AA | Ordinal: 8875
        void viewportMargins(void) const;

    // RVA: 0x22AC | Ordinal: 8877
        void viewportSizeHint(void) const;

    // RVA: 0x22DF | Ordinal: 8928
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x1B4 | Ordinal: 437
        void _QAbstractScrollArea(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTSCROLLAREA_HPP
