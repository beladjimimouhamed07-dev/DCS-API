#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsTextItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsTextItem
{
public:

    // RVA: 0x9D | Ordinal: 158
        void QGraphicsTextItem(class QString const &, class QGraphicsItem *);

    // RVA: 0x9E | Ordinal: 159
        void QGraphicsTextItem(class QGraphicsItem *);

    // RVA: 0x5AD | Ordinal: 1454
        void adjustSize(void);

    // RVA: 0x64B | Ordinal: 1612
        void boundingRect(void) const;

    // RVA: 0x7BB | Ordinal: 1980
        void contains(class QPointF const &) const;

    // RVA: 0x7CE | Ordinal: 1999
        void contextMenuEvent(class QGraphicsSceneContextMenuEvent *);

    // RVA: 0x9FD | Ordinal: 2558
        void defaultTextColor(void) const;

    // RVA: 0xA3F | Ordinal: 2624
        void document(void) const;

    // RVA: 0xA6A | Ordinal: 2667
        void dragEnterEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA75 | Ordinal: 2678
        void dragLeaveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA82 | Ordinal: 2691
        void dragMoveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xAD5 | Ordinal: 2774
        void dropEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xBAF | Ordinal: 2992
        void extension(class QVariant const &) const;

    // RVA: 0xC08 | Ordinal: 3081
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC2F | Ordinal: 3120
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC4D | Ordinal: 3150
        void font(void) const;

    // RVA: 0xD75 | Ordinal: 3446
        void hoverEnterEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD78 | Ordinal: 3449
        void hoverLeaveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD7C | Ordinal: 3453
        void hoverMoveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xE11 | Ordinal: 3602
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE20 | Ordinal: 3617
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xF23 | Ordinal: 3876
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0xFFF | Ordinal: 4096
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1017 | Ordinal: 4120
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x1062 | Ordinal: 4195
        void linkActivated(class QString const &);

    // RVA: 0x1065 | Ordinal: 4198
        void linkHovered(class QString const &);

    // RVA: 0x1144 | Ordinal: 4421
        void metaObject(void) const;

    // RVA: 0x1205 | Ordinal: 4614
        void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1219 | Ordinal: 4634
        void mouseMoveEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x123C | Ordinal: 4669
        void mousePressEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x125B | Ordinal: 4700
        void mouseReleaseEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x12D2 | Ordinal: 4819
        void opaqueArea(void) const;

    // RVA: 0x12DC | Ordinal: 4829
        void openExternalLinks(void) const;

    // RVA: 0x1318 | Ordinal: 4889
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x145D | Ordinal: 5214
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F0 | Ordinal: 5361
        void qt_metacast(char const *);

    // RVA: 0x1586 | Ordinal: 5511
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x172E | Ordinal: 5935
        void sceneEvent(class QEvent *);

    // RVA: 0x1905 | Ordinal: 6406
        void setDefaultTextColor(class QColor const &);

    // RVA: 0x191C | Ordinal: 6429
        void setDocument(class QTextDocument *);

    // RVA: 0x1962 | Ordinal: 6499
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x199D | Ordinal: 6558
        void setFont(class QFont const &);

    // RVA: 0x19FF | Ordinal: 6656
        void setHtml(class QString const &);

    // RVA: 0x1B0C | Ordinal: 6925
        void setOpenExternalLinks(bool);

    // RVA: 0x1B54 | Ordinal: 6997
        void setPlainText(class QString const &);

    // RVA: 0x1C72 | Ordinal: 7283
        void setTabChangesFocus(bool);

    // RVA: 0x1CAA | Ordinal: 7339
        void setTextCursor(class QTextCursor const &);

    // RVA: 0x1CB3 | Ordinal: 7348
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1CBD | Ordinal: 7358
        void setTextWidth(double);

    // RVA: 0x1D7C | Ordinal: 7549
        void shape(void) const;

    // RVA: 0x1F72 | Ordinal: 8051
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x1F84 | Ordinal: 8069
        void tabChangesFocus(void) const;

    // RVA: 0x1FF2 | Ordinal: 8179
        void textCursor(void) const;

    // RVA: 0x2001 | Ordinal: 8194
        void textInteractionFlags(void) const;

    // RVA: 0x200D | Ordinal: 8206
        void textWidth(void) const;

    // RVA: 0x203A | Ordinal: 8251
        void toHtml(void) const;

    // RVA: 0x2042 | Ordinal: 8259
        void toPlainText(void) const;

    // RVA: 0x20AC | Ordinal: 8365
        void tr(char const *, char const *, int);

    // RVA: 0x213F | Ordinal: 8512
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21C5 | Ordinal: 8646
        void type(void) const;

    // RVA: 0x20F | Ordinal: 528
        void _QGraphicsTextItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSTEXTITEM_HPP
