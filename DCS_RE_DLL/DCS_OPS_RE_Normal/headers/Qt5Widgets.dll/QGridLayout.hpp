#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGridLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGridLayout
{
public:

    // RVA: 0xA8 | Ordinal: 169
        void QGridLayout(class QWidget *);

    // RVA: 0xA9 | Ordinal: 170
        void QGridLayout(void);

    // RVA: 0x560 | Ordinal: 1377
        void addItem(class QLayoutItem *);

    // RVA: 0x561 | Ordinal: 1378
        void addItem(class QLayoutItem *, int, int, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x56A | Ordinal: 1387
        void addLayout(class QLayout *, int, int, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x56B | Ordinal: 1388
        void addLayout(class QLayout *, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5A1 | Ordinal: 1442
        void addWidget(class QWidget *);

    // RVA: 0x5A2 | Ordinal: 1443
        void addWidget(class QWidget *, int, int, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5A3 | Ordinal: 1444
        void addWidget(class QWidget *, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x6A3 | Ordinal: 1700
        void cellRect(int, int) const;

    // RVA: 0x77B | Ordinal: 1916
        void columnCount(void) const;

    // RVA: 0x785 | Ordinal: 1926
        void columnMinimumWidth(int) const;

    // RVA: 0x78E | Ordinal: 1935
        void columnStretch(int) const;

    // RVA: 0x7F5 | Ordinal: 2038
        void count(void) const;

    // RVA: 0x941 | Ordinal: 2370
        void d_func(void);

    // RVA: 0x942 | Ordinal: 2371
        void d_func(void) const;

    // RVA: 0xBA0 | Ordinal: 2977
        void expandingDirections(void) const;

    // RVA: 0xCA0 | Ordinal: 3233
        void getItemPosition(int, int *, int *, int *, int *) const;

    // RVA: 0xCEA | Ordinal: 3307
        void hasHeightForWidth(void) const;

    // RVA: 0xD0D | Ordinal: 3342
        void heightForWidth(int) const;

    // RVA: 0xD6E | Ordinal: 3439
        void horizontalSpacing(void) const;

    // RVA: 0xE8C | Ordinal: 3725
        void invalidate(void);

    // RVA: 0xF90 | Ordinal: 3985
        void itemAt(int) const;

    // RVA: 0xF99 | Ordinal: 3994
        void itemAtPosition(int, int) const;

    // RVA: 0x10EE | Ordinal: 4335
        void maximumSize(void) const;

    // RVA: 0x1148 | Ordinal: 4425
        void metaObject(void) const;

    // RVA: 0x11BC | Ordinal: 4541
        void minimumHeightForWidth(int) const;

    // RVA: 0x11C4 | Ordinal: 4549
        void minimumSize(void) const;

    // RVA: 0x12FE | Ordinal: 4863
        void originCorner(void) const;

    // RVA: 0x1461 | Ordinal: 5218
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F4 | Ordinal: 5365
        void qt_metacast(char const *);

    // RVA: 0x158A | Ordinal: 5515
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16F9 | Ordinal: 5882
        void rowCount(void) const;

    // RVA: 0x1701 | Ordinal: 5890
        void rowMinimumHeight(int) const;

    // RVA: 0x1707 | Ordinal: 5896
        void rowStretch(int) const;

    // RVA: 0x188C | Ordinal: 6285
        void setColumnMinimumWidth(int, int);

    // RVA: 0x188F | Ordinal: 6288
        void setColumnStretch(int, int);

    // RVA: 0x1900 | Ordinal: 6401
        void setDefaultPositioning(int, enum Qt::Orientation);

    // RVA: 0x19C8 | Ordinal: 6601
        void setGeometry(class QRect const &);

    // RVA: 0x19FB | Ordinal: 6652
        void setHorizontalSpacing(int);

    // RVA: 0x1B2F | Ordinal: 6960
        void setOriginCorner(enum Qt::Corner);

    // RVA: 0x1BAF | Ordinal: 7088
        void setRowMinimumHeight(int, int);

    // RVA: 0x1BB2 | Ordinal: 7091
        void setRowStretch(int, int);

    // RVA: 0x1C35 | Ordinal: 7222
        void setSpacing(int);

    // RVA: 0x1D09 | Ordinal: 7434
        void setVerticalSpacing(int);

    // RVA: 0x1DF8 | Ordinal: 7673
        void sizeHint(void) const;

    // RVA: 0x1E56 | Ordinal: 7767
        void spacing(void) const;

    // RVA: 0x1FB4 | Ordinal: 8117
        void takeAt(int);

    // RVA: 0x20B0 | Ordinal: 8369
        void tr(char const *, char const *, int);

    // RVA: 0x2143 | Ordinal: 8516
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2292 | Ordinal: 8851
        void verticalSpacing(void) const;

    // RVA: 0x215 | Ordinal: 534
        void _QGridLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRIDLAYOUT_HPP
