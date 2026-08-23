#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsProxyWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsProxyWidget
{
public:

    // RVA: 0x88 | Ordinal: 137
        void QGraphicsProxyWidget(class QGraphicsItem *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x7CC | Ordinal: 1997
        void contextMenuEvent(class QGraphicsSceneContextMenuEvent *);

    // RVA: 0x812 | Ordinal: 2067
        void createProxyForChildWidget(class QWidget *);

    // RVA: 0x91D | Ordinal: 2334
        void d_func(void);

    // RVA: 0x91E | Ordinal: 2335
        void d_func(void) const;

    // RVA: 0xA68 | Ordinal: 2665
        void dragEnterEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA73 | Ordinal: 2676
        void dragLeaveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA80 | Ordinal: 2689
        void dragMoveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xAD3 | Ordinal: 2772
        void dropEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xB42 | Ordinal: 2883
        void event(class QEvent *);

    // RVA: 0xB7D | Ordinal: 2942
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xC06 | Ordinal: 3079
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC1A | Ordinal: 3099
        void focusNextPrevChild(bool);

    // RVA: 0xC2D | Ordinal: 3118
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCC3 | Ordinal: 3268
        void grabMouseEvent(class QEvent *);

    // RVA: 0xD2B | Ordinal: 3372
        void hideEvent(class QHideEvent *);

    // RVA: 0xD74 | Ordinal: 3445
        void hoverEnterEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD77 | Ordinal: 3448
        void hoverLeaveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD7B | Ordinal: 3452
        void hoverMoveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xE0F | Ordinal: 3600
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE1E | Ordinal: 3615
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xF9C | Ordinal: 3997
        void itemChange(enum QGraphicsItem::GraphicsItemChange, class QVariant const &);

    // RVA: 0xFFD | Ordinal: 4094
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1015 | Ordinal: 4118
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x1140 | Ordinal: 4417
        void metaObject(void) const;

    // RVA: 0x1203 | Ordinal: 4612
        void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1217 | Ordinal: 4632
        void mouseMoveEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x123A | Ordinal: 4667
        void mousePressEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1259 | Ordinal: 4698
        void mouseReleaseEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x12A0 | Ordinal: 4769
        void newProxyWidget(class QWidget const *);

    // RVA: 0x1315 | Ordinal: 4886
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x1459 | Ordinal: 5210
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14EC | Ordinal: 5357
        void qt_metacast(char const *);

    // RVA: 0x1582 | Ordinal: 5507
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x169F | Ordinal: 5792
        void resizeEvent(class QGraphicsSceneResizeEvent *);

    // RVA: 0x19C5 | Ordinal: 6598
        void setGeometry(class QRectF const &);

    // RVA: 0x1D33 | Ordinal: 7476
        void setWidget(class QWidget *);

    // RVA: 0x1D9A | Ordinal: 7579
        void showEvent(class QShowEvent *);

    // RVA: 0x1DF5 | Ordinal: 7670
        void sizeHint(enum Qt::SizeHint, class QSizeF const &) const;

    // RVA: 0x1F5B | Ordinal: 8028
        void subWidgetRect(class QWidget const *) const;

    // RVA: 0x20A8 | Ordinal: 8361
        void tr(char const *, char const *, int);

    // RVA: 0x213B | Ordinal: 8508
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21C2 | Ordinal: 8643
        void type(void) const;

    // RVA: 0x21E3 | Ordinal: 8676
        void ungrabMouseEvent(class QEvent *);

    // RVA: 0x22E5 | Ordinal: 8934
        void wheelEvent(class QGraphicsSceneWheelEvent *);

    // RVA: 0x22F7 | Ordinal: 8952
        void widget(void) const;

    // RVA: 0x200 | Ordinal: 513
        void _QGraphicsProxyWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSPROXYWIDGET_HPP
