#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformWindow
{
public:

    // RVA: 0x25F | Ordinal: 608
        void QPlatformWindow(class QWindow *);

    // RVA: 0xBE8 | Ordinal: 3049
        void close(void);

    // RVA: 0xBED | Ordinal: 3054
        void closestAcceptableGeometry(class QWindow const *, class QRectF const &);

    // RVA: 0xC3B | Ordinal: 3132
        void constrainWindowSize(class QSize const &);

    // RVA: 0xD70 | Ordinal: 3441
        void d_func(void);

    // RVA: 0xD71 | Ordinal: 3442
        void d_func(void) const;

    // RVA: 0xDE8 | Ordinal: 3561
        void deliverUpdateRequest(void);

    // RVA: 0xE52 | Ordinal: 3667
        void devicePixelRatio(void) const;

    // RVA: 0x10F6 | Ordinal: 4343
        void format(void) const;

    // RVA: 0x110B | Ordinal: 4364
        void formatWindowTitle(class QString const &, class QString const &);

    // RVA: 0x111C | Ordinal: 4381
        void frameMargins(void) const;

    // RVA: 0x1120 | Ordinal: 4385
        void frameStrutEventsEnabled(void) const;

    // RVA: 0x1182 | Ordinal: 4483
        void geometry(void) const;

    // RVA: 0x4E1F | Ordinal: 20000
        void handleContentOrientationChange(enum Qt::ScreenOrientation);

    // RVA: 0x4E76 | Ordinal: 20087
        void hasPendingUpdateRequest(void) const;

    // RVA: 0x4F0F | Ordinal: 20240
        void initialGeometry(class QWindow const *, class QRect const &, int, int, class QScreen const **);

    // RVA: 0x4F15 | Ordinal: 20246
        void initialize(void);

    // RVA: 0x4FAD | Ordinal: 20398
        void invalidateSurface(void);

    // RVA: 0x4FC0 | Ordinal: 20417
        void isActive(void) const;

    // RVA: 0x4FC4 | Ordinal: 20421
        void isAlertState(void) const;

    // RVA: 0x4FC6 | Ordinal: 20423
        void isAncestorOf(class QPlatformWindow const *) const;

    // RVA: 0x500D | Ordinal: 20494
        void isEmbedded(void) const;

    // RVA: 0x501F | Ordinal: 20512
        void isExposed(void) const;

    // RVA: 0x5027 | Ordinal: 20520
        void isForeignWindow(void) const;

    // RVA: 0x51BD | Ordinal: 20926
        void lower(void);

    // RVA: 0x5203 | Ordinal: 20996
        void mapFromGlobal(class QPoint const &) const;

    // RVA: 0x5210 | Ordinal: 21009
        void mapToGlobal(class QPoint const &) const;

    // RVA: 0x535A | Ordinal: 21339
        void normalGeometry(void) const;

    // RVA: 0x5405 | Ordinal: 21510
        void parent(void) const;

    // RVA: 0x54F1 | Ordinal: 21746
        void propagateSizeHints(void);

    // RVA: 0x5664 | Ordinal: 22117
        void raise(void);

    // RVA: 0x5708 | Ordinal: 22281
        void requestActivateWindow(void);

    // RVA: 0x570C | Ordinal: 22285
        void requestUpdate(void);

    // RVA: 0x5790 | Ordinal: 22417
        void safeAreaMargins(void) const;

    // RVA: 0x57CB | Ordinal: 22476
        void screen(void) const;

    // RVA: 0x57D3 | Ordinal: 22484
        void screenForGeometry(class QRect const &) const;

    // RVA: 0x581C | Ordinal: 22557
        void setAlertState(bool);

    // RVA: 0x59C8 | Ordinal: 22985
        void setFrameStrutEventsEnabled(bool);

    // RVA: 0x59D2 | Ordinal: 22995
        void setGeometry(class QRect const &);

    // RVA: 0x5A1B | Ordinal: 23068
        void setKeyboardGrabEnabled(bool);

    // RVA: 0x5A57 | Ordinal: 23128
        void setMask(class QRegion const &);

    // RVA: 0x5A8C | Ordinal: 23181
        void setMouseGrabEnabled(bool);

    // RVA: 0x5AAE | Ordinal: 23215
        void setOpacity(double);

    // RVA: 0x5AE4 | Ordinal: 23269
        void setParent(class QPlatformWindow const *);

    // RVA: 0x5CAC | Ordinal: 23725
        void setVisible(bool);

    // RVA: 0x5CC3 | Ordinal: 23748
        void setWindowFilePath(class QString const &);

    // RVA: 0x5CC4 | Ordinal: 23749
        void setWindowFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x5CC6 | Ordinal: 23751
        void setWindowIcon(class QIcon const &);

    // RVA: 0x5CC7 | Ordinal: 23752
        void setWindowModified(bool);

    // RVA: 0x5CC9 | Ordinal: 23754
        void setWindowState(class QFlags<enum Qt::WindowState>);

    // RVA: 0x5CD0 | Ordinal: 23761
        void setWindowTitle(class QString const &);

    // RVA: 0x5D91 | Ordinal: 23954
        void startSystemMove(void);

    // RVA: 0x5D93 | Ordinal: 23956
        void startSystemResize(class QFlags<enum Qt::Edge>);

    // RVA: 0x6162 | Ordinal: 24931
        void winId(void) const;

    // RVA: 0x616A | Ordinal: 24939
        void window(void) const;

    // RVA: 0x616D | Ordinal: 24942
        void windowBaseSize(void) const;

    // RVA: 0x616E | Ordinal: 24943
        void windowClosestAcceptableGeometry(class QRectF const &) const;

    // RVA: 0x616F | Ordinal: 24944
        void windowEvent(class QEvent *);

    // RVA: 0x6170 | Ordinal: 24945
        void windowFrameGeometry(void) const;

    // RVA: 0x6171 | Ordinal: 24946
        void windowGeometry(void) const;

    // RVA: 0x6173 | Ordinal: 24948
        void windowMaximumSize(void) const;

    // RVA: 0x6174 | Ordinal: 24949
        void windowMinimumSize(void) const;

    // RVA: 0x617D | Ordinal: 24958
        void windowSizeIncrement(void) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void _QPlatformWindow(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMWINDOW_HPP
