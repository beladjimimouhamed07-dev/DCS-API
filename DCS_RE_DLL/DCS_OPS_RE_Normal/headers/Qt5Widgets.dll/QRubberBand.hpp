#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QRubberBand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRubberBand
{
public:

    // RVA: 0xF6 | Ordinal: 247
        void QRubberBand(enum QRubberBand::Shape, class QWidget *);

    // RVA: 0x6C5 | Ordinal: 1734
        void changeEvent(class QEvent *);

    // RVA: 0x989 | Ordinal: 2442
        void d_func(void);

    // RVA: 0x98A | Ordinal: 2443
        void d_func(void) const;

    // RVA: 0xB5A | Ordinal: 2907
        void event(class QEvent *);

    // RVA: 0xDF3 | Ordinal: 3572
        void initStyleOption(class QStyleOptionRubberBand *) const;

    // RVA: 0x116F | Ordinal: 4464
        void metaObject(void) const;

    // RVA: 0x1272 | Ordinal: 4723
        void move(class QPoint const &);

    // RVA: 0x1273 | Ordinal: 4724
        void move(int, int);

    // RVA: 0x1282 | Ordinal: 4739
        void moveEvent(class QMoveEvent *);

    // RVA: 0x133C | Ordinal: 4925
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1488 | Ordinal: 5257
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x151B | Ordinal: 5404
        void qt_metacast(char const *);

    // RVA: 0x15B1 | Ordinal: 5554
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x168A | Ordinal: 5771
        void resize(class QSize const &);

    // RVA: 0x168B | Ordinal: 5772
        void resize(int, int);

    // RVA: 0x16AB | Ordinal: 5804
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x19CA | Ordinal: 6603
        void setGeometry(class QRect const &);

    // RVA: 0x19CB | Ordinal: 6604
        void setGeometry(int, int, int, int);

    // RVA: 0x1D7E | Ordinal: 7551
        void shape(void) const;

    // RVA: 0x1DA2 | Ordinal: 7587
        void showEvent(class QShowEvent *);

    // RVA: 0x20D7 | Ordinal: 8408
        void tr(char const *, char const *, int);

    // RVA: 0x216A | Ordinal: 8555
        void trUtf8(char const *, char const *, int);

    // RVA: 0x241 | Ordinal: 578
        void _QRubberBand(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QRUBBERBAND_HPP
