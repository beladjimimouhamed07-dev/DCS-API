#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLWindow
{
public:

    // RVA: 0x1E2 | Ordinal: 483
        void QOpenGLWindow(class QOpenGLContext *, enum QOpenGLWindow::UpdateBehavior, class QWindow *);

    // RVA: 0x1E3 | Ordinal: 484
        void QOpenGLWindow(enum QOpenGLWindow::UpdateBehavior, class QWindow *);

    // RVA: 0xC51 | Ordinal: 3154
        void context(void) const;

    // RVA: 0xD4F | Ordinal: 3408
        void d_func(void);

    // RVA: 0xD50 | Ordinal: 3409
        void d_func(void) const;

    // RVA: 0xDCD | Ordinal: 3534
        void defaultFramebufferObject(void) const;

    // RVA: 0xE8D | Ordinal: 3726
        void doneCurrent(void);

    // RVA: 0x1121 | Ordinal: 4386
        void frameSwapped(void);

    // RVA: 0x4E08 | Ordinal: 19977
        void grabFramebuffer(void);

    // RVA: 0x4F16 | Ordinal: 20247
        void initializeGL(void);

    // RVA: 0x509B | Ordinal: 20636
        void isValid(void) const;

    // RVA: 0x51DF | Ordinal: 20960
        void makeCurrent(void);

    // RVA: 0x527A | Ordinal: 21115
        void metaObject(void) const;

    // RVA: 0x52A4 | Ordinal: 21157
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x53EF | Ordinal: 21488
        void paintEvent(class QPaintEvent *);

    // RVA: 0x53F2 | Ordinal: 21491
        void paintGL(void);

    // RVA: 0x53F3 | Ordinal: 21492
        void paintOverGL(void);

    // RVA: 0x53F8 | Ordinal: 21497
        void paintUnderGL(void);

    // RVA: 0x5591 | Ordinal: 21906
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D5 | Ordinal: 21974
        void qt_metacast(char const *);

    // RVA: 0x562B | Ordinal: 22060
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5695 | Ordinal: 22166
        void redirected(class QPoint *) const;

    // RVA: 0x5726 | Ordinal: 22311
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x5728 | Ordinal: 22313
        void resizeGL(int, int);

    // RVA: 0x5D01 | Ordinal: 23810
        void shareContext(void) const;

    // RVA: 0x5FB8 | Ordinal: 24505
        void tr(char const *, char const *, int);

    // RVA: 0x5FFF | Ordinal: 24576
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60B7 | Ordinal: 24760
        void updateBehavior(void) const;

    // RVA: 0x4A7 | Ordinal: 1192
        void _QOpenGLWindow(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLWINDOW_HPP
