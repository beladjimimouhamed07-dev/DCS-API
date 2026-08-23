#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QWindowPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowPrivate
{
public:

    // RVA: 0x3CC | Ordinal: 973
        void QWindowPrivate(void);

    // RVA: 0x939 | Ordinal: 2362
        void _q_clearAlert(void);

    // RVA: 0x9CA | Ordinal: 2507
        void allowClickThrough(class QPoint const &) const;

    // RVA: 0xA12 | Ordinal: 2579
        void applyCursor(void);

    // RVA: 0xBB2 | Ordinal: 2995
        void clearFocusObject(void);

    // RVA: 0xBEE | Ordinal: 3055
        void closestAcceptableGeometry(class QRectF const &) const;

    // RVA: 0xC35 | Ordinal: 3126
        void connectToScreen(class QScreen *);

    // RVA: 0xC9B | Ordinal: 3228
        void create(bool, unsigned __int64);

    // RVA: 0xE1A | Ordinal: 3611
        void destroy(void);

    // RVA: 0xE64 | Ordinal: 3685
        void disconnectFromScreen(void);

    // RVA: 0xF76 | Ordinal: 3959
        void effectiveState(class QFlags<enum Qt::WindowState>);

    // RVA: 0xF94 | Ordinal: 3989
        void emitScreenChangedRecursion(class QScreen *);

    // RVA: 0xFF0 | Ordinal: 4081
        void eventReceiver(void);

    // RVA: 0x1195 | Ordinal: 4502
        void get(class QWindow *);

    // RVA: 0x4DE2 | Ordinal: 19939
        void globalPosition(void) const;

    // RVA: 0x4F0A | Ordinal: 20235
        void init(class QScreen *);

    // RVA: 0x5065 | Ordinal: 20582
        void isPopup(void) const;

    // RVA: 0x5250 | Ordinal: 21073
        void maybeQuitOnLastWindowClosed(void);

    // RVA: 0x54DB | Ordinal: 21724
        void processSafeAreaMarginsChanged(void);

    // RVA: 0x553A | Ordinal: 21819
        void q_func(void);

    // RVA: 0x553B | Ordinal: 21820
        void q_func(void) const;

    // RVA: 0x57D4 | Ordinal: 22485
        void screenForGeometry(class QRect const &) const;

    // RVA: 0x5857 | Ordinal: 22616
        void setAutomaticPositionAndResizeEnabled(bool);

    // RVA: 0x58EB | Ordinal: 22764
        void setCursor(class QCursor const *);

    // RVA: 0x5C12 | Ordinal: 23571
        void setTopLevelScreen(class QScreen *, bool);

    // RVA: 0x5C1F | Ordinal: 23584
        void setTransientParent(class QWindow *);

    // RVA: 0x5CAF | Ordinal: 23728
        void setVisible(bool);

    // RVA: 0x5D02 | Ordinal: 23811
        void shareContext(void) const;

    // RVA: 0x5F8D | Ordinal: 24462
        void topLevelWindow(enum QWindow::AncestorMode) const;

    // RVA: 0x60C8 | Ordinal: 24777
        void updateSiblingPosition(enum QWindowPrivate::SiblingPosition);

    // RVA: 0x60CD | Ordinal: 24782
        void updateVisibility(void);

    // RVA: 0x617C | Ordinal: 24957
        void windowRecreationRequired(class QScreen *) const;

    // RVA: 0x555 | Ordinal: 1366
        void _QWindowPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QWINDOWPRIVATE_HPP
