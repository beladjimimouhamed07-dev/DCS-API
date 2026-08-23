#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStyledItemDelegate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStyledItemDelegate
{
public:

    // RVA: 0x168 | Ordinal: 361
        void QStyledItemDelegate(class QObject *);

    // RVA: 0x808 | Ordinal: 2057
        void createEditor(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x9A7 | Ordinal: 2472
        void d_func(void);

    // RVA: 0x9A8 | Ordinal: 2473
        void d_func(void) const;

    // RVA: 0xA29 | Ordinal: 2602
        void displayText(class QVariant const &, class QLocale const &) const;

    // RVA: 0xAF8 | Ordinal: 2809
        void editorEvent(class QEvent *, class QAbstractItemModel *, class QStyleOptionViewItem const &, class QModelIndex const &);

    // RVA: 0xB86 | Ordinal: 2951
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xDF6 | Ordinal: 3575
        void initStyleOption(class QStyleOptionViewItem *, class QModelIndex const &) const;

    // RVA: 0xFB4 | Ordinal: 4021
        void itemEditorFactory(void) const;

    // RVA: 0x1181 | Ordinal: 4482
        void metaObject(void) const;

    // RVA: 0x131B | Ordinal: 4892
        void paint(class QPainter *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x149A | Ordinal: 5275
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x152D | Ordinal: 5422
        void qt_metacast(char const *);

    // RVA: 0x15C3 | Ordinal: 5572
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1940 | Ordinal: 6465
        void setEditorData(class QWidget *, class QModelIndex const &) const;

    // RVA: 0x1A3C | Ordinal: 6717
        void setItemEditorFactory(class QItemEditorFactory *);

    // RVA: 0x1AD2 | Ordinal: 6867
        void setModelData(class QWidget *, class QAbstractItemModel *, class QModelIndex const &) const;

    // RVA: 0x1E10 | Ordinal: 7697
        void sizeHint(class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x20E9 | Ordinal: 8426
        void tr(char const *, char const *, int);

    // RVA: 0x217C | Ordinal: 8573
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2222 | Ordinal: 8739
        void updateEditorGeometry(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x271 | Ordinal: 626
        void _QStyledItemDelegate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTYLEDITEMDELEGATE_HPP
