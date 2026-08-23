#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGuiApplication
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGuiApplication
{
public:

    // RVA: 0x11E | Ordinal: 287
        void QGuiApplication(class QGuiApplicationPrivate &);

    // RVA: 0x11F | Ordinal: 288
        void QGuiApplication(int &, char **, int);

    // RVA: 0x9C5 | Ordinal: 2502
        void allWindows(void);

    // RVA: 0xA07 | Ordinal: 2568
        void applicationDisplayName(void);

    // RVA: 0xA08 | Ordinal: 2569
        void applicationDisplayNameChanged(void);

    // RVA: 0xA0B | Ordinal: 2572
        void applicationState(void);

    // RVA: 0xA0D | Ordinal: 2574
        void applicationStateChanged(enum Qt::ApplicationState);

    // RVA: 0xB78 | Ordinal: 2937
        void changeOverrideCursor(class QCursor const &);

    // RVA: 0xBDE | Ordinal: 3039
        void clipboard(void);

    // RVA: 0xC1C | Ordinal: 3101
        void commitDataRequest(class QSessionManager &);

    // RVA: 0xC2B | Ordinal: 3116
        void compressEvent(class QEvent *, class QObject *, class QPostEventList *);

    // RVA: 0xD1F | Ordinal: 3360
        void d_func(void);

    // RVA: 0xD20 | Ordinal: 3361
        void d_func(void) const;

    // RVA: 0xE09 | Ordinal: 3594
        void desktopFileName(void);

    // RVA: 0xE0B | Ordinal: 3596
        void desktopSettingsAware(void);

    // RVA: 0xE4D | Ordinal: 3662
        void devicePixelRatio(void) const;

    // RVA: 0xFE9 | Ordinal: 4074
        void event(class QEvent *);

    // RVA: 0xFF7 | Ordinal: 4088
        void exec(void);

    // RVA: 0x10AC | Ordinal: 4269
        void focusObject(void);

    // RVA: 0x10AE | Ordinal: 4271
        void focusObjectChanged(class QObject *);

    // RVA: 0x10B1 | Ordinal: 4274
        void focusWindow(void);

    // RVA: 0x10B2 | Ordinal: 4275
        void focusWindowChanged(class QWindow *);

    // RVA: 0x10B5 | Ordinal: 4278
        void font(void);

    // RVA: 0x10C0 | Ordinal: 4289
        void fontChanged(class QFont const &);

    // RVA: 0x10C2 | Ordinal: 4291
        void fontDatabaseChanged(void);

    // RVA: 0x4EA7 | Ordinal: 20136
        void highDpiScaleFactorRoundingPolicy(void);

    // RVA: 0x4F45 | Ordinal: 20294
        void inputMethod(void);

    // RVA: 0x5022 | Ordinal: 20515
        void isFallbackSessionManagementEnabled(void);

    // RVA: 0x503F | Ordinal: 20544
        void isLeftToRight(void);

    // RVA: 0x5073 | Ordinal: 20596
        void isRightToLeft(void);

    // RVA: 0x5077 | Ordinal: 20600
        void isSavingSession(void) const;

    // RVA: 0x507B | Ordinal: 20604
        void isSessionRestored(void) const;

    // RVA: 0x50FB | Ordinal: 20732
        void keyboardModifiers(void);

    // RVA: 0x511A | Ordinal: 20763
        void lastWindowClosed(void);

    // RVA: 0x5123 | Ordinal: 20772
        void layoutDirection(void);

    // RVA: 0x5126 | Ordinal: 20775
        void layoutDirectionChanged(enum Qt::LayoutDirection);

    // RVA: 0x5266 | Ordinal: 21095
        void metaObject(void) const;

    // RVA: 0x52E1 | Ordinal: 21218
        void modalWindow(void);

    // RVA: 0x52EF | Ordinal: 21232
        void mouseButtons(void);

    // RVA: 0x536A | Ordinal: 21355
        void notify(class QObject *, class QEvent *);

    // RVA: 0x53C7 | Ordinal: 21448
        void overrideCursor(void);

    // RVA: 0x53FC | Ordinal: 21501
        void palette(void);

    // RVA: 0x53FE | Ordinal: 21503
        void paletteChanged(class QPalette const &);

    // RVA: 0x5466 | Ordinal: 21607
        void platformFunction(class QByteArray const &))(void);

    // RVA: 0x5469 | Ordinal: 21610
        void platformName(void);

    // RVA: 0x546A | Ordinal: 21611
        void platformNativeInterface(void);

    // RVA: 0x54C3 | Ordinal: 21700
        void primaryScreen(void);

    // RVA: 0x54C4 | Ordinal: 21701
        void primaryScreenChanged(class QScreen *);

    // RVA: 0x557D | Ordinal: 21886
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55C1 | Ordinal: 21954
        void qt_metacast(char const *);

    // RVA: 0x5617 | Ordinal: 22040
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5660 | Ordinal: 22113
        void queryKeyboardModifiers(void);

    // RVA: 0x5662 | Ordinal: 22115
        void quitOnLastWindowClosed(void);

    // RVA: 0x5754 | Ordinal: 22357
        void restoreOverrideCursor(void);

    // RVA: 0x57A6 | Ordinal: 22439
        void saveStateRequest(class QSessionManager &);

    // RVA: 0x57CE | Ordinal: 22479
        void screenAdded(class QScreen *);

    // RVA: 0x57CF | Ordinal: 22480
        void screenAt(class QPoint const &);

    // RVA: 0x57DB | Ordinal: 22492
        void screenRemoved(class QScreen *);

    // RVA: 0x57DE | Ordinal: 22495
        void screens(void);

    // RVA: 0x5809 | Ordinal: 22538
        void sessionId(void) const;

    // RVA: 0x580C | Ordinal: 22541
        void sessionKey(void) const;

    // RVA: 0x582D | Ordinal: 22574
        void setApplicationDisplayName(class QString const &);

    // RVA: 0x5931 | Ordinal: 22834
        void setDesktopFileName(class QString const &);

    // RVA: 0x5932 | Ordinal: 22835
        void setDesktopSettingsAware(bool);

    // RVA: 0x5966 | Ordinal: 22887
        void setFallbackSessionManagementEnabled(bool);

    // RVA: 0x5991 | Ordinal: 22930
        void setFont(class QFont const &);

    // RVA: 0x59E8 | Ordinal: 23017
        void setHighDpiScaleFactorRoundingPolicy(enum Qt::HighDpiScaleFactorRoundingPolicy);

    // RVA: 0x5A2D | Ordinal: 23086
        void setLayoutDirection(enum Qt::LayoutDirection);

    // RVA: 0x5AC6 | Ordinal: 23239
        void setOverrideCursor(class QCursor const &);

    // RVA: 0x5AE0 | Ordinal: 23265
        void setPalette(class QPalette const &);

    // RVA: 0x5B22 | Ordinal: 23331
        void setQuitOnLastWindowClosed(bool);

    // RVA: 0x5CC5 | Ordinal: 23750
        void setWindowIcon(class QIcon const &);

    // RVA: 0x5E35 | Ordinal: 24118
        void styleHints(void);

    // RVA: 0x5E9B | Ordinal: 24220
        void sync(void);

    // RVA: 0x5F8B | Ordinal: 24460
        void topLevelAt(class QPoint const &);

    // RVA: 0x5F8E | Ordinal: 24463
        void topLevelWindows(void);

    // RVA: 0x5FA2 | Ordinal: 24483
        void tr(char const *, char const *, int);

    // RVA: 0x5FE9 | Ordinal: 24554
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6172 | Ordinal: 24947
        void windowIcon(void);

    // RVA: 0x446 | Ordinal: 1095
        void _QGuiApplication(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGUIAPPLICATION_HPP
