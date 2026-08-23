#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSplitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSplitter
{
public:

    // RVA: 0x10E | Ordinal: 271
        void QSplitter(class QWidget *);

    // RVA: 0x10F | Ordinal: 272
        void QSplitter(enum Qt::Orientation, class QWidget *);

    // RVA: 0x5A5 | Ordinal: 1446
        void addWidget(class QWidget *);

    // RVA: 0x6C6 | Ordinal: 1735
        void changeEvent(class QEvent *);

    // RVA: 0x6EE | Ordinal: 1775
        void childEvent(class QChildEvent *);

    // RVA: 0x6F7 | Ordinal: 1784
        void childrenCollapsible(void) const;

    // RVA: 0x75D | Ordinal: 1886
        void closestLegalPosition(int, int);

    // RVA: 0x7F8 | Ordinal: 2041
        void count(void) const;

    // RVA: 0x80B | Ordinal: 2060
        void createHandle(void);

    // RVA: 0x99B | Ordinal: 2460
        void d_func(void);

    // RVA: 0x99C | Ordinal: 2461
        void d_func(void) const;

    // RVA: 0xB62 | Ordinal: 2915
        void event(class QEvent *);

    // RVA: 0xCAD | Ordinal: 3246
        void getRange(int, int *, int *) const;

    // RVA: 0xCD2 | Ordinal: 3283
        void handle(int) const;

    // RVA: 0xCD6 | Ordinal: 3287
        void handleWidth(void) const;

    // RVA: 0xDC3 | Ordinal: 3524
        void indexOf(class QWidget *) const;

    // RVA: 0xE68 | Ordinal: 3689
        void insertWidget(int, class QWidget *);

    // RVA: 0xEBF | Ordinal: 3776
        void isCollapsible(int) const;

    // RVA: 0x1179 | Ordinal: 4474
        void metaObject(void) const;

    // RVA: 0x11DE | Ordinal: 4575
        void minimumSizeHint(void) const;

    // RVA: 0x1287 | Ordinal: 4744
        void moveSplitter(int, int);

    // RVA: 0x12D3 | Ordinal: 4820
        void opaqueResize(void) const;

    // RVA: 0x12F6 | Ordinal: 4855
        void orientation(void) const;

    // RVA: 0x1492 | Ordinal: 5267
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1525 | Ordinal: 5414
        void qt_metacast(char const *);

    // RVA: 0x15BB | Ordinal: 5564
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1612 | Ordinal: 5651
        void refresh(void);

    // RVA: 0x1665 | Ordinal: 5734
        void replaceWidget(int, class QWidget *);

    // RVA: 0x16AD | Ordinal: 5806
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16D4 | Ordinal: 5845
        void restoreState(class QByteArray const &);

    // RVA: 0x1721 | Ordinal: 5922
        void saveState(void) const;

    // RVA: 0x1878 | Ordinal: 6265
        void setChildrenCollapsible(bool);

    // RVA: 0x187E | Ordinal: 6271
        void setCollapsible(int, bool);

    // RVA: 0x19DF | Ordinal: 6624
        void setHandleWidth(int);

    // RVA: 0x1B0B | Ordinal: 6924
        void setOpaqueResize(bool);

    // RVA: 0x1B2A | Ordinal: 6955
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1BB5 | Ordinal: 7094
        void setRubberBand(int);

    // RVA: 0x1C1B | Ordinal: 7196
        void setSizes(class QList<int> const &);

    // RVA: 0x1C5A | Ordinal: 7259
        void setStretchFactor(int, int);

    // RVA: 0x1E0D | Ordinal: 7694
        void sizeHint(void) const;

    // RVA: 0x1E26 | Ordinal: 7719
        void sizes(void) const;

    // RVA: 0x1E60 | Ordinal: 7777
        void splitterMoved(int, int);

    // RVA: 0x20E1 | Ordinal: 8418
        void tr(char const *, char const *, int);

    // RVA: 0x2174 | Ordinal: 8565
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22FC | Ordinal: 8957
        void widget(int) const;

    // RVA: 0x24D | Ordinal: 590
        void _QSplitter(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSPLITTER_HPP
