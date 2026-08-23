#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSplitterHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSplitterHandle
{
public:

    // RVA: 0x110 | Ordinal: 273
        void QSplitterHandle(enum Qt::Orientation, class QSplitter *);

    // RVA: 0x75E | Ordinal: 1887
        void closestLegalPosition(int);

    // RVA: 0x99D | Ordinal: 2462
        void d_func(void);

    // RVA: 0x99E | Ordinal: 2463
        void d_func(void) const;

    // RVA: 0xB63 | Ordinal: 2916
        void event(class QEvent *);

    // RVA: 0x117A | Ordinal: 4475
        void metaObject(void) const;

    // RVA: 0x1228 | Ordinal: 4649
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x124A | Ordinal: 4683
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1269 | Ordinal: 4714
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1288 | Ordinal: 4745
        void moveSplitter(int);

    // RVA: 0x12D4 | Ordinal: 4821
        void opaqueResize(void) const;

    // RVA: 0x12F7 | Ordinal: 4856
        void orientation(void) const;

    // RVA: 0x1340 | Ordinal: 4929
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1493 | Ordinal: 5268
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1526 | Ordinal: 5415
        void qt_metacast(char const *);

    // RVA: 0x15BC | Ordinal: 5565
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16AE | Ordinal: 5807
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1B2B | Ordinal: 6956
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1E0E | Ordinal: 7695
        void sizeHint(void) const;

    // RVA: 0x1E5F | Ordinal: 7776
        void splitter(void) const;

    // RVA: 0x20E2 | Ordinal: 8419
        void tr(char const *, char const *, int);

    // RVA: 0x2175 | Ordinal: 8566
        void trUtf8(char const *, char const *, int);

    // RVA: 0x24E | Ordinal: 591
        void _QSplitterHandle(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSPLITTERHANDLE_HPP
