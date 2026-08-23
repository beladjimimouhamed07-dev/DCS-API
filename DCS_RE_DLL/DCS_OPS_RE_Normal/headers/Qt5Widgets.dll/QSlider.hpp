#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSlider
{
public:

    // RVA: 0x106 | Ordinal: 263
        void QSlider(class QWidget *);

    // RVA: 0x107 | Ordinal: 264
        void QSlider(enum Qt::Orientation, class QWidget *);

    // RVA: 0x995 | Ordinal: 2454
        void d_func(void);

    // RVA: 0x996 | Ordinal: 2455
        void d_func(void) const;

    // RVA: 0xB5F | Ordinal: 2912
        void event(class QEvent *);

    // RVA: 0xDF5 | Ordinal: 3574
        void initStyleOption(class QStyleOptionSlider *) const;

    // RVA: 0x1176 | Ordinal: 4471
        void metaObject(void) const;

    // RVA: 0x11DD | Ordinal: 4574
        void minimumSizeHint(void) const;

    // RVA: 0x1227 | Ordinal: 4648
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1248 | Ordinal: 4681
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1268 | Ordinal: 4713
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x133F | Ordinal: 4928
        void paintEvent(class QPaintEvent *);

    // RVA: 0x148F | Ordinal: 5264
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1522 | Ordinal: 5411
        void qt_metacast(char const *);

    // RVA: 0x15B8 | Ordinal: 5561
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1CC2 | Ordinal: 7363
        void setTickInterval(int);

    // RVA: 0x1CC3 | Ordinal: 7364
        void setTickPosition(enum QSlider::TickPosition);

    // RVA: 0x1E0B | Ordinal: 7692
        void sizeHint(void) const;

    // RVA: 0x2013 | Ordinal: 8212
        void tickInterval(void) const;

    // RVA: 0x2014 | Ordinal: 8213
        void tickPosition(void) const;

    // RVA: 0x20DE | Ordinal: 8415
        void tr(char const *, char const *, int);

    // RVA: 0x2171 | Ordinal: 8562
        void trUtf8(char const *, char const *, int);

    // RVA: 0x249 | Ordinal: 586
        void _QSlider(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSLIDER_HPP
