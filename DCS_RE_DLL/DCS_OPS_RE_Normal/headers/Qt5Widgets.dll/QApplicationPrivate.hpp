#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QApplicationPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QApplicationPrivate
{
public:

    // RVA: 0x17 | Ordinal: 24
        void QApplicationPrivate(int &, char **, int);

    // RVA: 0x50F | Ordinal: 1296
        void activateImplicitTouchGrab(class QWidget *, class QTouchEvent *);

    // RVA: 0x5E9 | Ordinal: 1514
        void applyQIconStyleHelper(enum QIcon::Mode, class QPixmap const &) const;

    // RVA: 0x621 | Ordinal: 1570
        void basePalette(void) const;

    // RVA: 0x707 | Ordinal: 1800
        void cleanupMultitouch(void);

    // RVA: 0x708 | Ordinal: 1801
        void cleanupMultitouch_sys(void);

    // RVA: 0x75A | Ordinal: 1883
        void closePopup(class QWidget *);

    // RVA: 0x809 | Ordinal: 2058
        void createEventDispatcher(void);

    // RVA: 0xA0F | Ordinal: 2576
        void desktopStyleKey(void);

    // RVA: 0xA21 | Ordinal: 2594
        void dispatchEnterLeave(class QWidget *, class QWidget *, class QPointF const &);

    // RVA: 0xBDC | Ordinal: 3037
        void findClosestTouchPointTarget(class QTouchDevice *, class QTouchEvent::TouchPoint const &);

    // RVA: 0xC25 | Ordinal: 3110
        void focusNextPrevChild_helper(class QWidget *, bool, bool *);

    // RVA: 0xC9B | Ordinal: 3228
        void getHWNDForWidget(class QWidget const *);

    // RVA: 0xCB5 | Ordinal: 3254
        void giveFocusAccordingToFocusPolicy(class QWidget *, class QEvent *, class QPoint);

    // RVA: 0xCD4 | Ordinal: 3285
        void handlePaletteChanged(char const *);

    // RVA: 0xDA6 | Ordinal: 3495
        void inPopupMode(void);

    // RVA: 0xDD4 | Ordinal: 3541
        void init(void);

    // RVA: 0xDFB | Ordinal: 3580
        void initialize(void);

    // RVA: 0xE01 | Ordinal: 3586
        void initializeMultitouch(void);

    // RVA: 0xE02 | Ordinal: 3587
        void initializeMultitouch_sys(void);

    // RVA: 0xE08 | Ordinal: 3593
        void initializeWidgetFontHash(void);

    // RVA: 0xE09 | Ordinal: 3594
        void initializeWidgetPalettesFromTheme(void);

    // RVA: 0xE6F | Ordinal: 3696
        void instance(void);

    // RVA: 0xEA8 | Ordinal: 3753
        void isAlien(class QWidget *);

    // RVA: 0xEB1 | Ordinal: 3762
        void isBlockedByModal(class QWidget *);

    // RVA: 0xF76 | Ordinal: 3959
        void isWindowBlocked(class QWindow *, class QWindow **) const;

    // RVA: 0x11EA | Ordinal: 4587
        void modalState(void);

    // RVA: 0x12B0 | Ordinal: 4785
        void notifyActiveWindowChange(class QWindow *);

    // RVA: 0x12B1 | Ordinal: 4786
        void notifyDragStarted(class QDrag const *);

    // RVA: 0x12B2 | Ordinal: 4787
        void notifyLayoutDirectionChange(void);

    // RVA: 0x12B3 | Ordinal: 4788
        void notifyThemeChanged(void);

    // RVA: 0x12B4 | Ordinal: 4789
        void notifyWindowIconChanged(void);

    // RVA: 0x12B5 | Ordinal: 4790
        void notify_helper(class QObject *, class QEvent *);

    // RVA: 0x12E5 | Ordinal: 4838
        void openPopup(class QWidget *);

    // RVA: 0x137D | Ordinal: 4990
        void pickMouseReceiver(class QWidget *, class QPoint const &, class QPoint *, enum QEvent::Type, class QFlags<enum Qt::MouseButton>, class QWidget *, class QWidget *);

    // RVA: 0x13B0 | Ordinal: 5041
        void popupActive(void);

    // RVA: 0x13DC | Ordinal: 5085
        void process_cmdline(void);

    // RVA: 0x1403 | Ordinal: 5124
        void q_func(void);

    // RVA: 0x1404 | Ordinal: 5125
        void q_func(void) const;

    // RVA: 0x17DC | Ordinal: 6109
        void sendMouseEvent(class QWidget *, class QMouseEvent *, class QWidget *, class QWidget *, class QWidget **, class QPointer<class QWidget> &, bool, bool);

    // RVA: 0x17E0 | Ordinal: 6113
        void sendSyntheticEnterLeave(class QWidget *);

    // RVA: 0x1997 | Ordinal: 6552
        void setFocusWidget(class QWidget *, enum Qt::FocusReason);

    // RVA: 0x1C6D | Ordinal: 7278
        void setSystemFont(class QFont const &);

    // RVA: 0x1D8D | Ordinal: 7566
        void shouldQuit(void);

    // RVA: 0x1D8E | Ordinal: 7567
        void shouldSetFocus(class QWidget *, enum Qt::FocusPolicy);

    // RVA: 0x21A6 | Ordinal: 8615
        void translateRawTouchEvent(class QWidget *, class QTouchDevice *, class QList<class QTouchEvent::TouchPoint> const &, unsigned long);

    // RVA: 0x21A7 | Ordinal: 8616
        void translateTouchCancel(class QTouchDevice *, unsigned long);

    // RVA: 0x21B6 | Ordinal: 8631
        void tryCloseAllWidgetWindows(class QList<class QWindow *> *);

    // RVA: 0x21B7 | Ordinal: 8632
        void tryCloseAllWindows(void);

    // RVA: 0x21B8 | Ordinal: 8633
        void tryModalHelper(class QWidget *, class QWidget **);

    // RVA: 0x2255 | Ordinal: 8790
        void updateTouchPointsForWidget(class QWidget *, class QTouchEvent *);

    // RVA: 0x231C | Ordinal: 8989
        void windowForWidget(class QWidget const *);

    // RVA: 0x1BD | Ordinal: 446
        void _QApplicationPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QAPPLICATIONPRIVATE_HPP
