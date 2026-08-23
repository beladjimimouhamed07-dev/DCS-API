#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGuiApplicationPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGuiApplicationPrivate
{
public:

    // RVA: 0x120 | Ordinal: 289
        void QGuiApplicationPrivate(int &, char **, int);

    // RVA: 0x93E | Ordinal: 2367
        void _q_updateFocusObject(class QObject *);

    // RVA: 0x98E | Ordinal: 2447
        void addQtOptions(class QList<class QCommandLineOption> *);

    // RVA: 0xA17 | Ordinal: 2584
        void applyQIconStyleHelper(enum QIcon::Mode, class QPixmap const &) const;

    // RVA: 0xA18 | Ordinal: 2585
        void applyWindowGeometrySpecificationTo(class QWindow *);

    // RVA: 0xA5E | Ordinal: 2655
        void basePalette(void) const;

    // RVA: 0xB57 | Ordinal: 2904
        void captureGlobalModifierState(class QEvent *);

    // RVA: 0xBBC | Ordinal: 3005
        void clearPalette(void);

    // RVA: 0xBFD | Ordinal: 3070
        void colorProfileForA32Text(void);

    // RVA: 0xBFE | Ordinal: 3071
        void colorProfileForA8Text(void);

    // RVA: 0xC1B | Ordinal: 3100
        void commitData(void);

    // RVA: 0xCA2 | Ordinal: 3235
        void createEventDispatcher(void);

    // RVA: 0xCB8 | Ordinal: 3257
        void createPlatformIntegration(void);

    // RVA: 0xF8C | Ordinal: 3981
        void emitLastWindowClosed(void);

    // RVA: 0xFED | Ordinal: 4078
        void eventDispatcherReady(void);

    // RVA: 0x11A9 | Ordinal: 4522
        void getPixmapCursor(enum Qt::CursorShape);

    // RVA: 0x4E34 | Ordinal: 20021
        void handlePaletteChanged(char const *);

    // RVA: 0x4EA5 | Ordinal: 20134
        void hideModalWindow(class QWindow *);

    // RVA: 0x4F01 | Ordinal: 20226
        void init(void);

    // RVA: 0x4F3A | Ordinal: 20283
        void inputDeviceManager(void);

    // RVA: 0x4F86 | Ordinal: 20359
        void instance(void);

    // RVA: 0x50BE | Ordinal: 20671
        void isWindowBlocked(class QWindow *, class QWindow **) const;

    // RVA: 0x52F4 | Ordinal: 21237
        void mouseEventCaps(class QMouseEvent *);

    // RVA: 0x52F5 | Ordinal: 21238
        void mouseEventFlags(class QMouseEvent const *);

    // RVA: 0x52F6 | Ordinal: 21239
        void mouseEventSource(class QMouseEvent const *);

    // RVA: 0x52F7 | Ordinal: 21240
        void mouseEventVelocity(class QMouseEvent *);

    // RVA: 0x536C | Ordinal: 21357
        void notifyActiveWindowChange(class QWindow *);

    // RVA: 0x536D | Ordinal: 21358
        void notifyDragStarted(class QDrag const *);

    // RVA: 0x536E | Ordinal: 21359
        void notifyLayoutDirectionChange(void);

    // RVA: 0x536F | Ordinal: 21360
        void notifyThemeChanged(void);

    // RVA: 0x5370 | Ordinal: 21361
        void notifyWindowIconChanged(void);

    // RVA: 0x5468 | Ordinal: 21609
        void platformIntegration(void);

    // RVA: 0x546D | Ordinal: 21614
        void platformTheme(void);

    // RVA: 0x5485 | Ordinal: 21638
        void popupActive(void);

    // RVA: 0x54C9 | Ordinal: 21706
        void processActivatedEvent(class QWindowSystemInterfacePrivate::ActivatedWindowEvent *);

    // RVA: 0x54CA | Ordinal: 21707
        void processApplicationTermination(class QWindowSystemInterfacePrivate::WindowSystemEvent *);

    // RVA: 0x54CB | Ordinal: 21708
        void processCloseEvent(class QWindowSystemInterfacePrivate::CloseEvent *);

    // RVA: 0x54CC | Ordinal: 21709
        void processContextMenuEvent(class QWindowSystemInterfacePrivate::ContextMenuEvent *);

    // RVA: 0x54CF | Ordinal: 21712
        void processDrag(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x54D0 | Ordinal: 21713
        void processDrop(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x54D1 | Ordinal: 21714
        void processEnterEvent(class QWindowSystemInterfacePrivate::EnterEvent *);

    // RVA: 0x54D2 | Ordinal: 21715
        void processExposeEvent(class QWindowSystemInterfacePrivate::ExposeEvent *);

    // RVA: 0x54D3 | Ordinal: 21716
        void processFileOpenEvent(class QWindowSystemInterfacePrivate::FileOpenEvent *);

    // RVA: 0x54D4 | Ordinal: 21717
        void processGeometryChangeEvent(class QWindowSystemInterfacePrivate::GeometryChangeEvent *);

    // RVA: 0x54D5 | Ordinal: 21718
        void processGestureEvent(class QWindowSystemInterfacePrivate::GestureEvent *);

    // RVA: 0x54D6 | Ordinal: 21719
        void processKeyEvent(class QWindowSystemInterfacePrivate::KeyEvent *);

    // RVA: 0x54D7 | Ordinal: 21720
        void processLeaveEvent(class QWindowSystemInterfacePrivate::LeaveEvent *);

    // RVA: 0x54D8 | Ordinal: 21721
        void processMouseEvent(class QWindowSystemInterfacePrivate::MouseEvent *);

    // RVA: 0x54D9 | Ordinal: 21722
        void processNativeEvent(class QWindow *, class QByteArray const &, void *, long *);

    // RVA: 0x54DA | Ordinal: 21723
        void processPlatformPanelEvent(class QWindowSystemInterfacePrivate::PlatformPanelEvent *);

    // RVA: 0x54DC | Ordinal: 21725
        void processSafeAreaMarginsChangedEvent(class QWindowSystemInterfacePrivate::SafeAreaMarginsChangedEvent *);

    // RVA: 0x54DD | Ordinal: 21726
        void processScreenGeometryChange(class QWindowSystemInterfacePrivate::ScreenGeometryEvent *);

    // RVA: 0x54DE | Ordinal: 21727
        void processScreenLogicalDotsPerInchChange(class QWindowSystemInterfacePrivate::ScreenLogicalDotsPerInchEvent *);

    // RVA: 0x54DF | Ordinal: 21728
        void processScreenOrientationChange(class QWindowSystemInterfacePrivate::ScreenOrientationEvent *);

    // RVA: 0x54E0 | Ordinal: 21729
        void processScreenRefreshRateChange(class QWindowSystemInterfacePrivate::ScreenRefreshRateEvent *);

    // RVA: 0x54E1 | Ordinal: 21730
        void processTabletEnterProximityEvent(class QWindowSystemInterfacePrivate::TabletEnterProximityEvent *);

    // RVA: 0x54E2 | Ordinal: 21731
        void processTabletEvent(class QWindowSystemInterfacePrivate::TabletEvent *);

    // RVA: 0x54E3 | Ordinal: 21732
        void processTabletLeaveProximityEvent(class QWindowSystemInterfacePrivate::TabletLeaveProximityEvent *);

    // RVA: 0x54E4 | Ordinal: 21733
        void processThemeChanged(class QWindowSystemInterfacePrivate::ThemeChangeEvent *);

    // RVA: 0x54E5 | Ordinal: 21734
        void processTouchEvent(class QWindowSystemInterfacePrivate::TouchEvent *);

    // RVA: 0x54E6 | Ordinal: 21735
        void processWheelEvent(class QWindowSystemInterfacePrivate::WheelEvent *);

    // RVA: 0x54E7 | Ordinal: 21736
        void processWindowScreenChangedEvent(class QWindowSystemInterfacePrivate::WindowScreenChangedEvent *);

    // RVA: 0x54E8 | Ordinal: 21737
        void processWindowStateChangedEvent(class QWindowSystemInterfacePrivate::WindowStateChangedEvent *);

    // RVA: 0x54E9 | Ordinal: 21738
        void processWindowSystemEvent(class QWindowSystemInterfacePrivate::WindowSystemEvent *);

    // RVA: 0x5526 | Ordinal: 21799
        void q_func(void);

    // RVA: 0x5527 | Ordinal: 21800
        void q_func(void) const;

    // RVA: 0x5605 | Ordinal: 22022
        void qt_qpa_core_dispatcher(void);

    // RVA: 0x5706 | Ordinal: 22279
        void reportScreenOrientationChange(class QScreen *);

    // RVA: 0x571A | Ordinal: 22299
        void resetCachedDevicePixelRatio(void);

    // RVA: 0x57A5 | Ordinal: 22438
        void saveState(void);

    // RVA: 0x57FC | Ordinal: 22525
        void sendQWindowEventToQPlatformWindow(class QWindow *, class QEvent *);

    // RVA: 0x582F | Ordinal: 22576
        void setApplicationState(enum Qt::ApplicationState, bool);

    // RVA: 0x5A89 | Ordinal: 23178
        void setMouseEventCapsAndVelocity(class QMouseEvent *, int, class QVector2D const &);

    // RVA: 0x5A8A | Ordinal: 23179
        void setMouseEventFlags(class QMouseEvent *, class QFlags<enum Qt::MouseEventFlag>);

    // RVA: 0x5A8B | Ordinal: 23180
        void setMouseEventSource(class QMouseEvent *, enum Qt::MouseEventSource);

    // RVA: 0x5AE1 | Ordinal: 23266
        void setPalette(class QPalette const &);

    // RVA: 0x5D13 | Ordinal: 23828
        void shouldQuit(void);

    // RVA: 0x5D14 | Ordinal: 23829
        void shouldQuitInternal(class QList<class QWindow *> const &);

    // RVA: 0x5D1F | Ordinal: 23840
        void showModalWindow(class QWindow *);

    // RVA: 0x5EB6 | Ordinal: 24247
        void tabletDevicePoint(__int64);

    // RVA: 0x605F | Ordinal: 24672
        void tryCloseAllWindows(void);

    // RVA: 0x6060 | Ordinal: 24673
        void tryCloseRemainingWindows(class QList<class QWindow *>);

    // RVA: 0x60B9 | Ordinal: 24762
        void updateBlockedStatus(class QWindow *);

    // RVA: 0x60BE | Ordinal: 24767
        void updateFilteredScreenOrientation(class QScreen *);

    // RVA: 0x60C5 | Ordinal: 24774
        void updatePalette(void);

    // RVA: 0x6137 | Ordinal: 24888
        void visualAlignment(enum Qt::LayoutDirection, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x447 | Ordinal: 1096
        void _QGuiApplicationPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGUIAPPLICATIONPRIVATE_HPP
