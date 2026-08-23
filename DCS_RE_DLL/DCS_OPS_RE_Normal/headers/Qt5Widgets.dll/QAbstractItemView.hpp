#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractItemView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractItemView
{
public:

    // RVA: 0x6 | Ordinal: 7
        void QAbstractItemView(class QAbstractItemViewPrivate &, class QWidget *);

    // RVA: 0x7 | Ordinal: 8
        void QAbstractItemView(class QWidget *);

    // RVA: 0x514 | Ordinal: 1301
        void activated(class QModelIndex const &);

    // RVA: 0x5D0 | Ordinal: 1489
        void alternatingRowColors(void) const;

    // RVA: 0x605 | Ordinal: 1542
        void autoScrollMargin(void) const;

    // RVA: 0x733 | Ordinal: 1844
        void clearSelection(void);

    // RVA: 0x73B | Ordinal: 1852
        void clicked(class QModelIndex const &);

    // RVA: 0x74D | Ordinal: 1870
        void closeEditor(class QWidget *, enum QAbstractItemDelegate::EndEditHint);

    // RVA: 0x756 | Ordinal: 1879
        void closePersistentEditor(class QModelIndex const &);

    // RVA: 0x7A0 | Ordinal: 1953
        void commitData(class QWidget *);

    // RVA: 0x82F | Ordinal: 2096
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x84E | Ordinal: 2127
        void currentIndex(void) const;

    // RVA: 0x8AB | Ordinal: 2220
        void d_func(void);

    // RVA: 0x8AC | Ordinal: 2221
        void d_func(void) const;

    // RVA: 0x9E4 | Ordinal: 2533
        void dataChanged(class QModelIndex const &, class QModelIndex const &, class QVector<int> const &);

    // RVA: 0x9F8 | Ordinal: 2553
        void defaultDropAction(void) const;

    // RVA: 0xA1F | Ordinal: 2592
        void dirtyRegionOffset(void) const;

    // RVA: 0xA2E | Ordinal: 2607
        void doAutoScroll(void);

    // RVA: 0xA30 | Ordinal: 2609
        void doItemsLayout(void);

    // RVA: 0xA55 | Ordinal: 2646
        void doubleClicked(class QModelIndex const &);

    // RVA: 0xA61 | Ordinal: 2658
        void dragDropMode(void) const;

    // RVA: 0xA62 | Ordinal: 2659
        void dragDropOverwriteMode(void) const;

    // RVA: 0xA63 | Ordinal: 2660
        void dragEnabled(void) const;

    // RVA: 0xA65 | Ordinal: 2662
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA70 | Ordinal: 2673
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA7D | Ordinal: 2686
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xAD0 | Ordinal: 2769
        void dropEvent(class QDropEvent *);

    // RVA: 0xADF | Ordinal: 2784
        void dropIndicatorPosition(void) const;

    // RVA: 0xAEA | Ordinal: 2795
        void edit(class QModelIndex const &, enum QAbstractItemView::EditTrigger, class QEvent *);

    // RVA: 0xAEB | Ordinal: 2796
        void edit(class QModelIndex const &);

    // RVA: 0xAF0 | Ordinal: 2801
        void editTriggers(void) const;

    // RVA: 0xAF5 | Ordinal: 2806
        void editorDestroyed(class QObject *);

    // RVA: 0xB2B | Ordinal: 2860
        void entered(class QModelIndex const &);

    // RVA: 0xB2E | Ordinal: 2863
        void event(class QEvent *);

    // RVA: 0xB75 | Ordinal: 2934
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xB93 | Ordinal: 2964
        void executeDelayedItemsLayout(void);

    // RVA: 0xC01 | Ordinal: 3074
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC18 | Ordinal: 3097
        void focusNextPrevChild(bool);

    // RVA: 0xC29 | Ordinal: 3114
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCDD | Ordinal: 3294
        void hasAutoScroll(void) const;

    // RVA: 0xD65 | Ordinal: 3430
        void horizontalScrollMode(void) const;

    // RVA: 0xD66 | Ordinal: 3431
        void horizontalScrollbarAction(int);

    // RVA: 0xD69 | Ordinal: 3434
        void horizontalScrollbarValueChanged(int);

    // RVA: 0xD6F | Ordinal: 3440
        void horizontalStepsPerItem(void) const;

    // RVA: 0xD92 | Ordinal: 3475
        void iconSize(void) const;

    // RVA: 0xD98 | Ordinal: 3481
        void iconSizeChanged(class QSize const &);

    // RVA: 0xDCB | Ordinal: 3532
        void indexWidget(class QModelIndex const &) const;

    // RVA: 0xE0C | Ordinal: 3597
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE19 | Ordinal: 3610
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xF28 | Ordinal: 3881
        void isPersistentEditorOpen(class QModelIndex const &) const;

    // RVA: 0xFA9 | Ordinal: 4010
        void itemDelegate(class QModelIndex const &) const;

    // RVA: 0xFAA | Ordinal: 4011
        void itemDelegate(void) const;

    // RVA: 0xFAE | Ordinal: 4015
        void itemDelegateForColumn(int) const;

    // RVA: 0xFAF | Ordinal: 4016
        void itemDelegateForRow(int) const;

    // RVA: 0xFF4 | Ordinal: 4085
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1024 | Ordinal: 4133
        void keyboardSearch(class QString const &);

    // RVA: 0x110E | Ordinal: 4367
        void metaObject(void) const;

    // RVA: 0x11EE | Ordinal: 4591
        void model(void) const;

    // RVA: 0x1200 | Ordinal: 4609
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x1211 | Ordinal: 4626
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1231 | Ordinal: 4658
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1252 | Ordinal: 4691
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x12E1 | Ordinal: 4834
        void openPersistentEditor(class QModelIndex const &);

    // RVA: 0x13CB | Ordinal: 5068
        void pressed(class QModelIndex const &);

    // RVA: 0x1427 | Ordinal: 5160
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BA | Ordinal: 5307
        void qt_metacast(char const *);

    // RVA: 0x1550 | Ordinal: 5457
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x166A | Ordinal: 5739
        void reset(void);

    // RVA: 0x167C | Ordinal: 5757
        void resetHorizontalScrollMode(void);

    // RVA: 0x1686 | Ordinal: 5767
        void resetVerticalScrollMode(void);

    // RVA: 0x1695 | Ordinal: 5782
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16E1 | Ordinal: 5858
        void rootIndex(void) const;

    // RVA: 0x170C | Ordinal: 5901
        void rowsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x170F | Ordinal: 5904
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x173D | Ordinal: 5950
        void scheduleDelayedItemsLayout(void);

    // RVA: 0x1760 | Ordinal: 5985
        void scrollDirtyRegion(int, int);

    // RVA: 0x176C | Ordinal: 5997
        void scrollToBottom(void);

    // RVA: 0x1770 | Ordinal: 6001
        void scrollToTop(void);

    // RVA: 0x1792 | Ordinal: 6035
        void selectAll(void);

    // RVA: 0x17AC | Ordinal: 6061
        void selectedIndexes(void) const;

    // RVA: 0x17BF | Ordinal: 6080
        void selectionBehavior(void) const;

    // RVA: 0x17C1 | Ordinal: 6082
        void selectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0x17CC | Ordinal: 6093
        void selectionCommand(class QModelIndex const &, class QEvent const *) const;

    // RVA: 0x17D0 | Ordinal: 6097
        void selectionMode(void) const;

    // RVA: 0x17D2 | Ordinal: 6099
        void selectionModel(void) const;

    // RVA: 0x1812 | Ordinal: 6163
        void setAlternatingRowColors(bool);

    // RVA: 0x182A | Ordinal: 6187
        void setAutoScroll(bool);

    // RVA: 0x182B | Ordinal: 6188
        void setAutoScrollMargin(int);

    // RVA: 0x18BB | Ordinal: 6332
        void setCurrentIndex(class QModelIndex const &);

    // RVA: 0x18FE | Ordinal: 6399
        void setDefaultDropAction(enum Qt::DropAction);

    // RVA: 0x1913 | Ordinal: 6420
        void setDirtyRegion(class QRegion const &);

    // RVA: 0x192E | Ordinal: 6447
        void setDragDropMode(enum QAbstractItemView::DragDropMode);

    // RVA: 0x192F | Ordinal: 6448
        void setDragDropOverwriteMode(bool);

    // RVA: 0x1930 | Ordinal: 6449
        void setDragEnabled(bool);

    // RVA: 0x1936 | Ordinal: 6455
        void setDropIndicatorShown(bool);

    // RVA: 0x193C | Ordinal: 6461
        void setEditTriggers(class QFlags<enum QAbstractItemView::EditTrigger>);

    // RVA: 0x19F7 | Ordinal: 6648
        void setHorizontalScrollMode(enum QAbstractItemView::ScrollMode);

    // RVA: 0x19FC | Ordinal: 6653
        void setHorizontalStepsPerItem(int);

    // RVA: 0x1A0F | Ordinal: 6672
        void setIconSize(class QSize const &);

    // RVA: 0x1A1C | Ordinal: 6685
        void setIndexWidget(class QModelIndex const &, class QWidget *);

    // RVA: 0x1A35 | Ordinal: 6710
        void setItemDelegate(class QAbstractItemDelegate *);

    // RVA: 0x1A39 | Ordinal: 6714
        void setItemDelegateForColumn(int, class QAbstractItemDelegate *);

    // RVA: 0x1A3A | Ordinal: 6715
        void setItemDelegateForRow(int, class QAbstractItemDelegate *);

    // RVA: 0x1AC3 | Ordinal: 6852
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B99 | Ordinal: 7066
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1BE9 | Ordinal: 7146
        void setSelectionBehavior(enum QAbstractItemView::SelectionBehavior);

    // RVA: 0x1BEB | Ordinal: 7148
        void setSelectionMode(enum QAbstractItemView::SelectionMode);

    // RVA: 0x1BED | Ordinal: 7150
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1C49 | Ordinal: 7242
        void setState(enum QAbstractItemView::State);

    // RVA: 0x1C7A | Ordinal: 7291
        void setTabKeyNavigation(bool);

    // RVA: 0x1CB0 | Ordinal: 7345
        void setTextElideMode(enum Qt::TextElideMode);

    // RVA: 0x1D05 | Ordinal: 7430
        void setVerticalScrollMode(enum QAbstractItemView::ScrollMode);

    // RVA: 0x1D0A | Ordinal: 7435
        void setVerticalStepsPerItem(int);

    // RVA: 0x1D95 | Ordinal: 7574
        void showDropIndicator(void) const;

    // RVA: 0x1E1B | Ordinal: 7708
        void sizeHintForColumn(int) const;

    // RVA: 0x1E1E | Ordinal: 7711
        void sizeHintForIndex(class QModelIndex const &) const;

    // RVA: 0x1E1F | Ordinal: 7712
        void sizeHintForRow(int) const;

    // RVA: 0x1E7D | Ordinal: 7806
        void startAutoScroll(void);

    // RVA: 0x1E7F | Ordinal: 7808
        void startDrag(class QFlags<enum Qt::DropAction>);

    // RVA: 0x1E87 | Ordinal: 7816
        void state(void) const;

    // RVA: 0x1F35 | Ordinal: 7990
        void stopAutoScroll(void);

    // RVA: 0x1F8E | Ordinal: 8079
        void tabKeyNavigation(void) const;

    // RVA: 0x1FFA | Ordinal: 8187
        void textElideMode(void) const;

    // RVA: 0x201C | Ordinal: 8221
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2076 | Ordinal: 8311
        void tr(char const *, char const *, int);

    // RVA: 0x2109 | Ordinal: 8458
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2200 | Ordinal: 8705
        void update(class QModelIndex const &);

    // RVA: 0x221E | Ordinal: 8735
        void updateEditorData(void);

    // RVA: 0x221F | Ordinal: 8736
        void updateEditorGeometries(void);

    // RVA: 0x2229 | Ordinal: 8746
        void updateGeometries(void);

    // RVA: 0x2289 | Ordinal: 8842
        void verticalScrollMode(void) const;

    // RVA: 0x228A | Ordinal: 8843
        void verticalScrollbarAction(int);

    // RVA: 0x228C | Ordinal: 8845
        void verticalScrollbarValueChanged(int);

    // RVA: 0x2293 | Ordinal: 8852
        void verticalStepsPerItem(void) const;

    // RVA: 0x229E | Ordinal: 8863
        void viewOptions(void) const;

    // RVA: 0x22A2 | Ordinal: 8867
        void viewportEntered(void);

    // RVA: 0x22A3 | Ordinal: 8868
        void viewportEvent(class QEvent *);

    // RVA: 0x22AB | Ordinal: 8876
        void viewportSizeHint(void) const;

    // RVA: 0x1B3 | Ordinal: 436
        void _QAbstractItemView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTITEMVIEW_HPP
