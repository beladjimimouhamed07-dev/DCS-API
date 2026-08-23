#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QItemDelegate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QItemDelegate
{
public:

    // RVA: 0xB1 | Ordinal: 178
        void QItemDelegate(class QObject *);

    // RVA: 0x806 | Ordinal: 2055
        void createEditor(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x949 | Ordinal: 2378
        void d_func(void);

    // RVA: 0x94A | Ordinal: 2379
        void d_func(void) const;

    // RVA: 0x9F2 | Ordinal: 2547
        void decoration(class QStyleOptionViewItem const &, class QVariant const &) const;

    // RVA: 0xA2F | Ordinal: 2608
        void doCheck(class QStyleOptionViewItem const &, class QRect const &, class QVariant const &) const;

    // RVA: 0xA35 | Ordinal: 2614
        void doLayout(class QStyleOptionViewItem const &, class QRect *, class QRect *, class QRect *, bool) const;

    // RVA: 0xA99 | Ordinal: 2714
        void drawBackground(class QPainter *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0xA9E | Ordinal: 2719
        void drawCheck(class QPainter *, class QStyleOptionViewItem const &, class QRect const &, enum Qt::CheckState) const;

    // RVA: 0xAAD | Ordinal: 2734
        void drawDecoration(class QPainter *, class QStyleOptionViewItem const &, class QRect const &, class QPixmap const &) const;

    // RVA: 0xAAF | Ordinal: 2736
        void drawDisplay(class QPainter *, class QStyleOptionViewItem const &, class QRect const &, class QString const &) const;

    // RVA: 0xAB0 | Ordinal: 2737
        void drawFocus(class QPainter *, class QStyleOptionViewItem const &, class QRect const &) const;

    // RVA: 0xAF7 | Ordinal: 2808
        void editorEvent(class QEvent *, class QAbstractItemModel *, class QStyleOptionViewItem const &, class QModelIndex const &);

    // RVA: 0xB7F | Ordinal: 2944
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xCE0 | Ordinal: 3297
        void hasClipping(void) const;

    // RVA: 0xFB3 | Ordinal: 4020
        void itemEditorFactory(void) const;

    // RVA: 0x114D | Ordinal: 4430
        void metaObject(void) const;

    // RVA: 0x131A | Ordinal: 4891
        void paint(class QPainter *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x1466 | Ordinal: 5223
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F9 | Ordinal: 5370
        void qt_metacast(char const *);

    // RVA: 0x158F | Ordinal: 5520
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15F6 | Ordinal: 5623
        void rect(class QStyleOptionViewItem const &, class QModelIndex const &, int) const;

    // RVA: 0x17A6 | Ordinal: 6055
        void selected(class QPixmap const &, class QPalette const &, bool) const;

    // RVA: 0x17B8 | Ordinal: 6073
        void selectedPixmap(class QPixmap const &, class QPalette const &, bool);

    // RVA: 0x187D | Ordinal: 6270
        void setClipping(bool);

    // RVA: 0x193F | Ordinal: 6464
        void setEditorData(class QWidget *, class QModelIndex const &) const;

    // RVA: 0x1A3B | Ordinal: 6716
        void setItemEditorFactory(class QItemEditorFactory *);

    // RVA: 0x1AD1 | Ordinal: 6866
        void setModelData(class QWidget *, class QAbstractItemModel *, class QModelIndex const &) const;

    // RVA: 0x1B21 | Ordinal: 6946
        void setOptions(class QModelIndex const &, class QStyleOptionViewItem const &) const;

    // RVA: 0x1DFB | Ordinal: 7676
        void sizeHint(class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x2009 | Ordinal: 8202
        void textRectangle(class QPainter *, class QRect const &, class QFont const &, class QString const &) const;

    // RVA: 0x20B5 | Ordinal: 8374
        void tr(char const *, char const *, int);

    // RVA: 0x2148 | Ordinal: 8521
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2221 | Ordinal: 8738
        void updateEditorGeometry(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x21A | Ordinal: 539
        void _QItemDelegate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QITEMDELEGATE_HPP
