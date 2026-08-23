#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPaintDeviceWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPaintDeviceWindow
{
public:

    // RVA: 0x1F4 | Ordinal: 501
        void QPaintDeviceWindow(class QPaintDeviceWindowPrivate &, class QWindow *);

    // RVA: 0xD51 | Ordinal: 3410
        void d_func(void);

    // RVA: 0xD52 | Ordinal: 3411
        void d_func(void) const;

    // RVA: 0xFEA | Ordinal: 4075
        void event(class QEvent *);

    // RVA: 0x1003 | Ordinal: 4100
        void exposeEvent(class QExposeEvent *);

    // RVA: 0x527B | Ordinal: 21116
        void metaObject(void) const;

    // RVA: 0x52A6 | Ordinal: 21159
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x53E8 | Ordinal: 21481
        void paintEngine(void) const;

    // RVA: 0x53F0 | Ordinal: 21489
        void paintEvent(class QPaintEvent *);

    // RVA: 0x5592 | Ordinal: 21907
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D6 | Ordinal: 21975
        void qt_metacast(char const *);

    // RVA: 0x562C | Ordinal: 22061
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5FB9 | Ordinal: 24506
        void tr(char const *, char const *, int);

    // RVA: 0x6000 | Ordinal: 24577
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60B0 | Ordinal: 24753
        void update(class QRect const &);

    // RVA: 0x60B1 | Ordinal: 24754
        void update(class QRegion const &);

    // RVA: 0x60B2 | Ordinal: 24755
        void update(void);

    // RVA: 0x4AD | Ordinal: 1198
        void _QPaintDeviceWindow(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTDEVICEWINDOW_HPP
