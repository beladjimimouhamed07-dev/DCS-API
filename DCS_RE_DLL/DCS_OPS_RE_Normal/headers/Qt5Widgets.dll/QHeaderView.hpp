#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QHeaderView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QHeaderView
{
public:

    // RVA: 0xAE | Ordinal: 175
        void QHeaderView(class QHeaderViewPrivate &, enum Qt::Orientation, class QWidget *);

    // RVA: 0xAF | Ordinal: 176
        void QHeaderView(enum Qt::Orientation, class QWidget *);

    // RVA: 0x69B | Ordinal: 1692
        void cascadingSectionResizes(void) const;

    // RVA: 0x7F6 | Ordinal: 2039
        void count(void) const;

    // RVA: 0x832 | Ordinal: 2099
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x945 | Ordinal: 2374
        void d_func(void);

    // RVA: 0x946 | Ordinal: 2375
        void d_func(void) const;

    // RVA: 0x9E5 | Ordinal: 2534
        void dataChanged(class QModelIndex const &, class QModelIndex const &, class QVector<int> const &);

    // RVA: 0x9F6 | Ordinal: 2551
        void defaultAlignment(void) const;

    // RVA: 0x9FB | Ordinal: 2556
        void defaultSectionSize(void) const;

    // RVA: 0xA31 | Ordinal: 2610
        void doItemsLayout(void);

    // RVA: 0xB47 | Ordinal: 2888
        void event(class QEvent *);

    // RVA: 0xC7D | Ordinal: 3198
        void geometriesChanged(void);

    // RVA: 0xD02 | Ordinal: 3331
        void headerDataChanged(enum Qt::Orientation, int, int);

    // RVA: 0xD1E | Ordinal: 3359
        void hiddenSectionCount(void) const;

    // RVA: 0xD37 | Ordinal: 3384
        void hideSection(int);

    // RVA: 0xD3D | Ordinal: 3390
        void highlightSections(void) const;

    // RVA: 0xD5C | Ordinal: 3421
        void horizontalOffset(void) const;

    // RVA: 0xDB3 | Ordinal: 3508
        void indexAt(class QPoint const &) const;

    // RVA: 0xDEC | Ordinal: 3565
        void initStyleOption(class QStyleOptionHeader *) const;

    // RVA: 0xDFD | Ordinal: 3582
        void initialize(void);

    // RVA: 0xE05 | Ordinal: 3590
        void initializeSections(int, int);

    // RVA: 0xE06 | Ordinal: 3591
        void initializeSections(void);

    // RVA: 0xEBD | Ordinal: 3774
        void isClickable(void) const;

    // RVA: 0xEE6 | Ordinal: 3815
        void isFirstSectionMovable(void) const;

    // RVA: 0xEF8 | Ordinal: 3833
        void isIndexHidden(class QModelIndex const &) const;

    // RVA: 0xF0E | Ordinal: 3855
        void isMovable(void) const;

    // RVA: 0xF3F | Ordinal: 3904
        void isSectionHidden(int) const;

    // RVA: 0xF4D | Ordinal: 3918
        void isSortIndicatorShown(void) const;

    // RVA: 0x1057 | Ordinal: 4184
        void length(void) const;

    // RVA: 0x1070 | Ordinal: 4209
        void logicalIndex(int) const;

    // RVA: 0x1071 | Ordinal: 4210
        void logicalIndexAt(class QPoint const &) const;

    // RVA: 0x1072 | Ordinal: 4211
        void logicalIndexAt(int) const;

    // RVA: 0x1073 | Ordinal: 4212
        void logicalIndexAt(int, int) const;

    // RVA: 0x10EA | Ordinal: 4331
        void maximumSectionSize(void) const;

    // RVA: 0x114B | Ordinal: 4428
        void metaObject(void) const;

    // RVA: 0x11BF | Ordinal: 4544
        void minimumSectionSize(void) const;

    // RVA: 0x1207 | Ordinal: 4616
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x121C | Ordinal: 4637
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x123F | Ordinal: 4672
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x125E | Ordinal: 4703
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1278 | Ordinal: 4729
        void moveCursor(enum QAbstractItemView::CursorAction, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1286 | Ordinal: 4743
        void moveSection(int, int);

    // RVA: 0x12B9 | Ordinal: 4794
        void offset(void) const;

    // RVA: 0x12F4 | Ordinal: 4853
        void orientation(void) const;

    // RVA: 0x132E | Ordinal: 4911
        void paintEvent(class QPaintEvent *);

    // RVA: 0x134E | Ordinal: 4943
        void paintSection(class QPainter *, class QRect const &, int) const;

    // RVA: 0x1464 | Ordinal: 5221
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F7 | Ordinal: 5368
        void qt_metacast(char const *);

    // RVA: 0x158D | Ordinal: 5518
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x166D | Ordinal: 5742
        void reset(void);

    // RVA: 0x1676 | Ordinal: 5751
        void resetDefaultSectionSize(void);

    // RVA: 0x1693 | Ordinal: 5780
        void resizeContentsPrecision(void) const;

    // RVA: 0x16B7 | Ordinal: 5816
        void resizeMode(int) const;

    // RVA: 0x16BB | Ordinal: 5820
        void resizeSection(int, int);

    // RVA: 0x16BC | Ordinal: 5821
        void resizeSections(void);

    // RVA: 0x16BD | Ordinal: 5822
        void resizeSections(enum QHeaderView::ResizeMode);

    // RVA: 0x16D2 | Ordinal: 5843
        void restoreState(class QByteArray const &);

    // RVA: 0x1711 | Ordinal: 5906
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x171F | Ordinal: 5920
        void saveState(void) const;

    // RVA: 0x1758 | Ordinal: 5977
        void scrollContentsBy(int, int);

    // RVA: 0x1765 | Ordinal: 5990
        void scrollTo(class QModelIndex const &, enum QAbstractItemView::ScrollHint);

    // RVA: 0x1779 | Ordinal: 6010
        void sectionClicked(int);

    // RVA: 0x177B | Ordinal: 6012
        void sectionCountChanged(int, int);

    // RVA: 0x177C | Ordinal: 6013
        void sectionDoubleClicked(int);

    // RVA: 0x177D | Ordinal: 6014
        void sectionEntered(int);

    // RVA: 0x177E | Ordinal: 6015
        void sectionHandleDoubleClicked(int);

    // RVA: 0x177F | Ordinal: 6016
        void sectionMoved(int, int, int);

    // RVA: 0x1780 | Ordinal: 6017
        void sectionPosition(int) const;

    // RVA: 0x1781 | Ordinal: 6018
        void sectionPressed(int);

    // RVA: 0x1782 | Ordinal: 6019
        void sectionResizeMode(int) const;

    // RVA: 0x1783 | Ordinal: 6020
        void sectionResized(int, int, int);

    // RVA: 0x1784 | Ordinal: 6021
        void sectionSize(int) const;

    // RVA: 0x1785 | Ordinal: 6022
        void sectionSizeFromContents(int) const;

    // RVA: 0x1786 | Ordinal: 6023
        void sectionSizeHint(int) const;

    // RVA: 0x1788 | Ordinal: 6025
        void sectionViewportPosition(int) const;

    // RVA: 0x1789 | Ordinal: 6026
        void sectionsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x178A | Ordinal: 6027
        void sectionsClickable(void) const;

    // RVA: 0x178B | Ordinal: 6028
        void sectionsHidden(void) const;

    // RVA: 0x178C | Ordinal: 6029
        void sectionsInserted(class QModelIndex const &, int, int);

    // RVA: 0x178D | Ordinal: 6030
        void sectionsMovable(void) const;

    // RVA: 0x178E | Ordinal: 6031
        void sectionsMoved(void) const;

    // RVA: 0x1863 | Ordinal: 6244
        void setCascadingSectionResizes(bool);

    // RVA: 0x187C | Ordinal: 6269
        void setClickable(bool);

    // RVA: 0x18FB | Ordinal: 6396
        void setDefaultAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1903 | Ordinal: 6404
        void setDefaultSectionSize(int);

    // RVA: 0x1979 | Ordinal: 6522
        void setFirstSectionMovable(bool);

    // RVA: 0x19ED | Ordinal: 6638
        void setHighlightSections(bool);

    // RVA: 0x1A97 | Ordinal: 6808
        void setMaximumSectionSize(int);

    // RVA: 0x1AB7 | Ordinal: 6840
        void setMinimumSectionSize(int);

    // RVA: 0x1AC8 | Ordinal: 6857
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1ADF | Ordinal: 6880
        void setMovable(bool);

    // RVA: 0x1AFE | Ordinal: 6911
        void setOffset(int);

    // RVA: 0x1B02 | Ordinal: 6915
        void setOffsetToLastSection(void);

    // RVA: 0x1B03 | Ordinal: 6916
        void setOffsetToSectionPosition(int);

    // RVA: 0x1B8F | Ordinal: 7056
        void setResizeContentsPrecision(int);

    // RVA: 0x1B91 | Ordinal: 7058
        void setResizeMode(int, enum QHeaderView::ResizeMode);

    // RVA: 0x1B92 | Ordinal: 7059
        void setResizeMode(enum QHeaderView::ResizeMode);

    // RVA: 0x1BD2 | Ordinal: 7123
        void setSectionHidden(int, bool);

    // RVA: 0x1BD3 | Ordinal: 7124
        void setSectionResizeMode(int, enum QHeaderView::ResizeMode);

    // RVA: 0x1BD4 | Ordinal: 7125
        void setSectionResizeMode(enum QHeaderView::ResizeMode);

    // RVA: 0x1BD5 | Ordinal: 7126
        void setSectionsClickable(bool);

    // RVA: 0x1BD6 | Ordinal: 7127
        void setSectionsMovable(bool);

    // RVA: 0x1BDF | Ordinal: 7136
        void setSelection(class QRect const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1C24 | Ordinal: 7205
        void setSortIndicator(int, enum Qt::SortOrder);

    // RVA: 0x1C25 | Ordinal: 7206
        void setSortIndicatorShown(bool);

    // RVA: 0x1C5B | Ordinal: 7260
        void setStretchLastSection(bool);

    // RVA: 0x1D1C | Ordinal: 7453
        void setVisible(bool);

    // RVA: 0x1DBE | Ordinal: 7615
        void showSection(int);

    // RVA: 0x1DF9 | Ordinal: 7674
        void sizeHint(void) const;

    // RVA: 0x1E3C | Ordinal: 7741
        void sortIndicatorChanged(int, enum Qt::SortOrder);

    // RVA: 0x1E3D | Ordinal: 7742
        void sortIndicatorOrder(void) const;

    // RVA: 0x1E3E | Ordinal: 7743
        void sortIndicatorSection(void) const;

    // RVA: 0x1F3E | Ordinal: 7999
        void stretchLastSection(void) const;

    // RVA: 0x1F3F | Ordinal: 8000
        void stretchSectionCount(void) const;

    // RVA: 0x1F75 | Ordinal: 8054
        void swapSections(int, int);

    // RVA: 0x20B3 | Ordinal: 8372
        void tr(char const *, char const *, int);

    // RVA: 0x2146 | Ordinal: 8519
        void trUtf8(char const *, char const *, int);

    // RVA: 0x222A | Ordinal: 8747
        void updateGeometries(void);

    // RVA: 0x2250 | Ordinal: 8785
        void updateSection(int);

    // RVA: 0x2280 | Ordinal: 8833
        void verticalOffset(void) const;

    // RVA: 0x22A7 | Ordinal: 8872
        void viewportEvent(class QEvent *);

    // RVA: 0x22BD | Ordinal: 8894
        void visualIndex(int) const;

    // RVA: 0x22C1 | Ordinal: 8898
        void visualIndexAt(int) const;

    // RVA: 0x22C7 | Ordinal: 8904
        void visualRect(class QModelIndex const &) const;

    // RVA: 0x22CD | Ordinal: 8910
        void visualRegionForSelection(class QItemSelection const &) const;

    // RVA: 0x218 | Ordinal: 537
        void _QHeaderView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QHEADERVIEW_HPP
