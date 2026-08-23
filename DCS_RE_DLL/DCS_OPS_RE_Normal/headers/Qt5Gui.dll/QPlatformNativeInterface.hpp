#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformNativeInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformNativeInterface
{
public:

    // RVA: 0x24B | Ordinal: 588
        void QPlatformNativeInterface(void);

    // RVA: 0x528A | Ordinal: 21131
        void metaObject(void) const;

    // RVA: 0x5327 | Ordinal: 21288
        void nativeResourceForBackingStore(class QByteArray const &, class QBackingStore *);

    // RVA: 0x5328 | Ordinal: 21289
        void nativeResourceForContext(class QByteArray const &, class QOpenGLContext *);

    // RVA: 0x5329 | Ordinal: 21290
        void nativeResourceForCursor(class QByteArray const &, class QCursor const &);

    // RVA: 0x532A | Ordinal: 21291
        void nativeResourceForIntegration(class QByteArray const &);

    // RVA: 0x532B | Ordinal: 21292
        void nativeResourceForScreen(class QByteArray const &, class QScreen *);

    // RVA: 0x532C | Ordinal: 21293
        void nativeResourceForWindow(class QByteArray const &, class QWindow *);

    // RVA: 0x532D | Ordinal: 21294
        void nativeResourceFunctionForBackingStore(class QByteArray const &))(class QBackingStore *);

    // RVA: 0x532E | Ordinal: 21295
        void nativeResourceFunctionForContext(class QByteArray const &))(class QOpenGLContext *);

    // RVA: 0x532F | Ordinal: 21296
        void nativeResourceFunctionForIntegration(class QByteArray const &))(void);

    // RVA: 0x5330 | Ordinal: 21297
        void nativeResourceFunctionForScreen(class QByteArray const &))(class QScreen *);

    // RVA: 0x5331 | Ordinal: 21298
        void nativeResourceFunctionForWindow(class QByteArray const &))(class QWindow *);

    // RVA: 0x5467 | Ordinal: 21608
        void platformFunction(class QByteArray const &) const)(void);

    // RVA: 0x55A1 | Ordinal: 21922
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55E5 | Ordinal: 21990
        void qt_metacast(char const *);

    // RVA: 0x563B | Ordinal: 22076
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5CC8 | Ordinal: 23753
        void setWindowProperty(class QPlatformWindow *, class QString const &, class QVariant const &);

    // RVA: 0x5FC8 | Ordinal: 24521
        void tr(char const *, char const *, int);

    // RVA: 0x600F | Ordinal: 24592
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6178 | Ordinal: 24953
        void windowProperties(class QPlatformWindow *) const;

    // RVA: 0x6179 | Ordinal: 24954
        void windowProperty(class QPlatformWindow *, class QString const &) const;

    // RVA: 0x617A | Ordinal: 24955
        void windowProperty(class QPlatformWindow *, class QString const &, class QVariant const &) const;

    // RVA: 0x617B | Ordinal: 24956
        void windowPropertyChanged(class QPlatformWindow *, class QString const &);

    // RVA: 0x4D7 | Ordinal: 1240
        void _QPlatformNativeInterface(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMNATIVEINTERFACE_HPP
