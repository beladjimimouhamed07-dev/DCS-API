#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSplashScreen
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSplashScreen
{
public:

    // RVA: 0x10B | Ordinal: 268
        void QSplashScreen(class QPixmap const &, class QFlags<enum Qt::WindowType>);

    // RVA: 0x10C | Ordinal: 269
        void QSplashScreen(class QScreen *, class QPixmap const &, class QFlags<enum Qt::WindowType>);

    // RVA: 0x10D | Ordinal: 270
        void QSplashScreen(class QWidget *, class QPixmap const &, class QFlags<enum Qt::WindowType>);

    // RVA: 0x72C | Ordinal: 1837
        void clearMessage(void);

    // RVA: 0x999 | Ordinal: 2458
        void d_func(void);

    // RVA: 0x99A | Ordinal: 2459
        void d_func(void) const;

    // RVA: 0xAA6 | Ordinal: 2727
        void drawContents(class QPainter *);

    // RVA: 0xB61 | Ordinal: 2914
        void event(class QEvent *);

    // RVA: 0xBE5 | Ordinal: 3046
        void finish(class QWidget *);

    // RVA: 0x1108 | Ordinal: 4361
        void message(void) const;

    // RVA: 0x1109 | Ordinal: 4362
        void messageChanged(class QString const &);

    // RVA: 0x1178 | Ordinal: 4473
        void metaObject(void) const;

    // RVA: 0x1249 | Ordinal: 4682
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x138C | Ordinal: 5005
        void pixmap(void) const;

    // RVA: 0x1491 | Ordinal: 5266
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1524 | Ordinal: 5413
        void qt_metacast(char const *);

    // RVA: 0x15BA | Ordinal: 5563
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x165A | Ordinal: 5723
        void repaint(void);

    // RVA: 0x1B4D | Ordinal: 6990
        void setPixmap(class QPixmap const &);

    // RVA: 0x1DB2 | Ordinal: 7603
        void showMessage(class QString const &, int, class QColor const &);

    // RVA: 0x20E0 | Ordinal: 8417
        void tr(char const *, char const *, int);

    // RVA: 0x2173 | Ordinal: 8564
        void trUtf8(char const *, char const *, int);

    // RVA: 0x24C | Ordinal: 589
        void _QSplashScreen(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSPLASHSCREEN_HPP
