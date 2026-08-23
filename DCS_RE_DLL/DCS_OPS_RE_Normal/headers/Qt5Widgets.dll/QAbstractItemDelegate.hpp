#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractItemDelegate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractItemDelegate
{
public:

    // RVA: 0x4 | Ordinal: 5
        void QAbstractItemDelegate(class QObjectPrivate &, class QObject *);

    // RVA: 0x5 | Ordinal: 6
        void QAbstractItemDelegate(class QObject *);

    // RVA: 0x74C | Ordinal: 1869
        void closeEditor(class QWidget *, enum QAbstractItemDelegate::EndEditHint);

    // RVA: 0x79F | Ordinal: 1952
        void commitData(class QWidget *);

    // RVA: 0x805 | Ordinal: 2054
        void createEditor(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x8A9 | Ordinal: 2218
        void d_func(void);

    // RVA: 0x8AA | Ordinal: 2219
        void d_func(void) const;

    // RVA: 0xA11 | Ordinal: 2578
        void destroyEditor(class QWidget *, class QModelIndex const &) const;

    // RVA: 0xAF6 | Ordinal: 2807
        void editorEvent(class QEvent *, class QAbstractItemModel *, class QStyleOptionViewItem const &, class QModelIndex const &);

    // RVA: 0xB04 | Ordinal: 2821
        void elidedText(class QFontMetrics const &, int, enum Qt::TextElideMode, class QString const &);

    // RVA: 0xD16 | Ordinal: 3351
        void helpEvent(class QHelpEvent *, class QAbstractItemView *, class QStyleOptionViewItem const &, class QModelIndex const &);

    // RVA: 0x110D | Ordinal: 4366
        void metaObject(void) const;

    // RVA: 0x1351 | Ordinal: 4946
        void paintingRoles(void) const;

    // RVA: 0x1426 | Ordinal: 5159
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14B9 | Ordinal: 5306
        void qt_metacast(char const *);

    // RVA: 0x154F | Ordinal: 5456
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x193E | Ordinal: 6463
        void setEditorData(class QWidget *, class QModelIndex const &) const;

    // RVA: 0x1AD0 | Ordinal: 6865
        void setModelData(class QWidget *, class QAbstractItemModel *, class QModelIndex const &) const;

    // RVA: 0x1E1A | Ordinal: 7707
        void sizeHintChanged(class QModelIndex const &);

    // RVA: 0x2075 | Ordinal: 8310
        void tr(char const *, char const *, int);

    // RVA: 0x2108 | Ordinal: 8457
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2220 | Ordinal: 8737
        void updateEditorGeometry(class QWidget *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0x1B2 | Ordinal: 435
        void _QAbstractItemDelegate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTITEMDELEGATE_HPP
